import glob
import shutil
import os

texFiles = glob.glob("sec*tex")

for file in texFiles: 
    oldFileName = file.split("/")[-1]
    newFileName = "_".join(file.split("/")[-1].split("_")[1:])
    print "{0} -> {1}".format(oldFileName,newFileName)
    shutil.copy2(oldFileName,newFileName)
