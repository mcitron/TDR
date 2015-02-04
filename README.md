# CMS AN-15-004
an Analysis Note for PHYS14

This repo contains the content of the directory `notes/AN-15-004/trunk` in the SVN repository for the CMS documents.

Brief instructions are given below.

The first few sections explain how to check out flies, compile files and produce a PDF file of the AN. Then the other sections explain how to edit the note and contribute your edits to this repo.

---

#### Check out latex source files

First, you need to check out some utility files from the SVN repository for the CMS documents.

    svn co -N svn+ssh://<cern_user_name>@svn.cern.ch/reps/tdr2 myDir
    cd myDir
    svn update utils
    svn update -N notes

Then, you can check out this repo in `myDir`.

    git clone -o ra1 git@github.com:CMSRA1/AN-15-004.git notes/AN-15-004/trunk

This command will clone this repo from `CMSRA1/AN-15-004`. For the cloned repo, `CMSRA1/AN-15-004` is a remote and called `ra1`.

**Note:** Please don't push to `ra1`. Instead make a pull request from a forked repo on your account as explained below.


#### Set environmental variables for TDR

You need to execute this command in `myDir` to set environmental variables every time you start a new shell.

    eval `notes/tdr runtime -sh` # for bash. use -csh for tcsh.

You need to be in `myDir` when you execute the above command.

#### Compile latex files

Then, go down to the directory with latex source files.

    cd notes/AN-15-004/trunk

This directory is where you cloned this repo.

Compile with the `tdr` command:

    tdr --draft --style=an b AN-15-004

This command will produce a PDF file of the AN draft. The path to the PDF file will be shown at the end of the command.

More information about TDR can be found at

* https://twiki.cern.ch/twiki/bin/view/CMS/Internal/TdrProcessing

Now, you know how to produce the PDF file. The following sections explain how to contribute to the draft.

#### Fork the repo to your github account

This and following sections how to contribute to the draft.

If you haven't done so, please fork this repo to your github account. If you are reading this online at github, you can do so by clicking `Fork`  around the top right corner of this page.

The forked repo will be private on your account.

#### Add remote

The following instructions assume that you are in the directory `myDir/notes/AN-15-004/trunk`

Originally, you cloned this repo from `CMSRA1/AN-15-004`, which is the only remote at the moment and named `ra1`. You need to add your forked repo as another remote.

    git remote add myrepo git@github.com:YourAccount/AN-15-004.git

This command will add your forked repo as a remote and name it `myrepo`.

#### Create a new branch 

You are now on the branch `master`. It is often more convenient to create a new branch for new edits.

    git checkout -b myedit-20150127-01

This command will create a new branch `myedit-20150127-01` and check out the branch. You can give any name to the new branch.

#### Make changes

This is where you make your changes. 

I will write a bit more detail later. In short after editing, you need add 

    git add (files your modified)

then commit

    git commit -m "(your commit message)"

Please, write good concise commit messages. Also, it is often a good practice to make many small commits than to make one giant commit.

#### Push to your forked repo

Now, you can push your commits to your forked repo on your github account.

    git push myrepo myedit-20150127-01

#### Make a pull request

Now the branch your pushed is in a forked repo on your github account. You can make a pull request from there. 

I will write a bit more about the pull request later.  In short, with a web browser, you need to go to your branch that your pushed and click `Pull request`, then follow the instructions on the web.

#### Push to your forked repo

Now, you can push your commits to your forked repo on your github account.

    git push myrepo myedit-20150127-01

#### SVN repo of parked analysis Analysis Note

Can be found here:
https://svnweb.cern.ch/cern/wsvn/tdr2/notes/AN-13-366/trunk/

Instructions to check out and build:

    svn co -N svn+ssh://username@svn.cern.ch/reps/tdr2
    kinit -l 1d username@CERN.CH
    cd tdr2
    svn update utils
    svn update -N notes
    svn update -N papers
    svn update notes/AN-13-366
    cd notes/AN-13-366/trunk/
    eval `../../tdr runtime -sh` 
    tdr --style an b AN-13-366


---
