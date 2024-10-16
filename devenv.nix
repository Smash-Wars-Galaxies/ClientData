{ pkgs, lib, config, inputs, ... }:

{
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
    # "devenv:enterShell".after = [ "files:checkout" ];
    "files:checkout".exec = "dvc checkout";
    "files:update".exec = ''
      python update_dvc.py install
      python update_dvc.py updates
    '';
  };

  # https://devenv.sh/tests/
  enterTest = '''';

  # https://devenv.sh/pre-commit-hooks/
  # pre-commit.hooks.shellcheck.enable = true;
}
