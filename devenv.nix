{
  pkgs,
  lib,
  config,
  inputs,
  ...
}: let
  post-checkout = pkgs.writeShellApplication {
    name = "dvc-post-checkout";
    runtimeEnv = {
      DVC_SITE_CACHE_DIR = "${config.devenv.dotfile}/state/dvc";
    };
    runtimeInputs = [pkgs.dvc-with-remotes];
    text = ''exec dvc git-hook post-checkout "$@"'';
  };
  pre-commit = pkgs.writeShellApplication {
    name = "dvc-pre-commit";
    runtimeEnv = {
      DVC_SITE_CACHE_DIR = "${config.devenv.dotfile}/state/dvc";
    };
    runtimeInputs = [pkgs.dvc-with-remotes];
    text = ''exec dvc git-hook pre-commit "$@"'';
  };
  pre-push = pkgs.writeShellApplication {
    name = "dvc-pre-push";
    runtimeEnv = {
      DVC_SITE_CACHE_DIR = "${config.devenv.dotfile}/state/dvc";
    };
    runtimeInputs = [pkgs.dvc-with-remotes];
    text = ''exec dvc git-hook pre-push "$@"'';
  };
in {
  env.DVC_SITE_CACHE_DIR = ".devenv/state/dvc/";

  # https://devenv.sh/packages/
  packages = [
    pkgs.git
    pkgs.dvc-with-remotes
  ];

  # https://devenv.sh/languages/
  languages.python.enable = true;

  # https://devenv.sh/tasks/
  tasks = {
    "files:setup-dvc-hooks" = {
      exec = ''
        ln -sf ${lib.getExe post-checkout} "${config.devenv.root}/.git/hooks/post-checkout"
        ln -sf ${lib.getExe pre-commit} "${config.devenv.root}/.git/hooks/pre-commit"
        ln -sf ${lib.getExe pre-push} "${config.devenv.root}/.git/hooks/pre-push"
      '';
      before = ["devenv:enterShell"];
    };
    "files:update".exec = ''
      python update_dvc.py install
      python update_dvc.py updates
    '';
    "files:generate-manifest" = {
      exec = "dvc repro";
      after = ["files:update"];
    };
  };

  # https://devenv.sh/tests/
  enterTest = '''';
}
