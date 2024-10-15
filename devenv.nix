{ pkgs, lib, config, inputs, ... }:

{
  env.DVC_SITE_CACHE_DIR = ".devenv/state/dvc/";
  
  # https://devenv.sh/packages/
  packages = [ 
    pkgs.git
    pkgs.dvc
  ];
  
  # https://devenv.sh/languages/
  languages.python.enable = true;

  # https://devenv.sh/tasks/
  # tasks = {
  #   "myproj:setup".exec = "mytool build";
  #   "devenv:enterShell".after = [ "myproj:setup" ];
  # };

  # https://devenv.sh/tests/
  enterTest = '''';

  # https://devenv.sh/pre-commit-hooks/
  # pre-commit.hooks.shellcheck.enable = true;
}
