import hashlib
import subprocess
import sys
from pathlib import Path
from typing import Generator

import yaml


def calculate_md5(file_path):
    with open(file_path, "rb") as file:
        file_hash = hashlib.md5()
        while chunk := file.read(8192):
            file_hash.update(chunk)
    return file_hash.hexdigest()


def generate_file_hashes(root: Path, directory: Path) -> Generator[dict, None, None]:
    for entry in directory.iterdir():
        if entry.is_dir():
            yield from generate_file_hashes(root, entry)
            continue

        if entry.name in ["manifest.json", ".gitignore"]:
            continue

        result = {
            "path": str(entry.relative_to(root)),
            "size": entry.stat().st_size,
            "md5": calculate_md5(entry),
            "hash": "md5",
        }

        if entry.suffix in [".cfg", ".ini", ".vsh", ".inc", ".fx", ".fxh", ".md"]:
            result["cache"] = False

        if entry.name == "LICENSE":
            result["cache"] = False

        yield result


def git_rm(file_path):
    try:
        # Run the git rm command
        subprocess.run(
            ["git", "rm", "--cached", file_path],
            check=True,
            text=False,
            capture_output=False,
        )
    except subprocess.CalledProcessError as e:
        print(f"Error: {e.stderr}")


if __name__ == "__main__":
    target = Path(sys.argv[1])
    assert target.is_dir()

    entries = list(generate_file_hashes(Path("."), target))

    to_ignore = [
        str(Path(e["path"]).relative_to(target)) for e in entries if "cache" not in e
    ]
    with (target / ".gitignore").open("w") as f:
        f.write("\n".join(to_ignore))
        for ignore in to_ignore:
            git_rm(ignore)

    with Path(target.name + ".dvc").open("w") as f:
        yaml.dump({"outs": entries}, f, indent=2)
