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
    "files:setup-dvc-hooks" = {
      exec = "dvc install";
      status = "test -f .git/hooks/post-checkout";
    };
    "devenv:enterShell".after = [ "files:setup-dvc-hooks" ];
    "files:pull".exec = "dvc checkout";
    "files:update".exec = ''
      python update_dvc.py install
      python update_dvc.py updates
    '';
    "files:generate-manifest" = {
        exec = "dvc repro";
        after = [ "files:update" ];
    };
    "files:push".exec = ''
      dvc push
    '';
  };

  # https://devenv.sh/tests/
  enterTest = '''';
}
