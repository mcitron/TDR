# CMS AN-15-004
an Analysis Note for PHYS14

This repo contains the content of the directory `notes/AN-15-004/trunk` in the SVN repository for the CMS documents.

### How to check out

First, you need to check out some utility files from the SVN rpository for the CMS documents.

    svn co -N svn+ssh://svn.cern.ch/reps/tdr2 myDir
    cd myDir
    svn update utils
    svn update -N notes

Then, you can check out this repo in `myDir`.

    git clone git@github.com:CMSRA1/AN-15-004.git notes/AN-15-004/trunk


### How to compile

You need to execute this command in `myDir` to set enviromental variables everytime you start a new shell.

    eval `notes/tdr runtime -sh` # for bash. use -csh for tcsh.

Then, go down to the directory with latex source files.

    cd notes/AN-15-004/trunk


Compile with the `tdr` command:

    tdr --draft --style=an b AN-15-004

### More information about TDR

* https://twiki.cern.ch/twiki/bin/view/CMS/Internal/TdrProcessing

### How to contribute

If you would like to contribute, please make a pull request to the branch `master`. 
