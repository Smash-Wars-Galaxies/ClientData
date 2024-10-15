import hashlib
import json
import sys
from dataclasses import dataclass
from pathlib import Path
from typing import Any, Generator


@dataclass
class Entry:
    name: Path
    size: int
    md5: str
    url: str

    def to_dict(self) -> dict[str, Any]:
        return {
            "name": str(self.name),
            "size": self.size,
            "md5": self.md5,
            "url": self.url,
        }


def calculate_md5(file_path):
    with open(file_path, "rb") as file:
        file_hash = hashlib.md5()
        while chunk := file.read(8192):
            file_hash.update(chunk)
    return file_hash.hexdigest()


def generate_file_hashes(root: Path, directory: Path) -> Generator[Entry, None, None]:
    for entry in directory.iterdir():
        if entry.is_dir():
            yield from generate_file_hashes(root, entry)
            continue

        if entry.name == "manifest.json":
            continue

        yield Entry(
            name=entry.relative_to(root),
            size=entry.stat().st_size,
            md5=calculate_md5(entry),
            url=f"https://swg.hellafast.io/{root.name}/{str(entry.relative_to(root))}",
        )


def update_manifest(directory: Path):
    manifest: dict[str, list[dict]] = {
        "required": sorted(
            list([e.to_dict() for e in generate_file_hashes(directory, directory)]),
            key=lambda e: e["name"],
        )
    }

    with (directory / "manifest.json").open("w") as f:
        json.dump(manifest, f, indent=4)


if __name__ == "__main__":
    target = Path(sys.argv[1])
    assert not target.is_dir()

    directories = [Path(d) for d in sys.argv[2 : len(sys.argv)]]
    assert all([d.is_dir() for d in directories])

    entries = []
    for d in directories:
        [entries.append(e.to_dict()) for e in generate_file_hashes(d, d)]

    entries.sort(key=lambda e: e["name"])

    with target.open("w") as f:
        json.dump({"required": entries}, f, indent=4)
