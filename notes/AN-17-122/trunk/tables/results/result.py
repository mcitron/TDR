from collections import OrderedDict as odict
import math
from histogram import histogram
import numpy as np

# pull definition:
# https://github.com/CMSRA1/AlphaStats/blob/v1.6.x/dataframes/mountainRangePlot.py#L584-L600

################################################################################

option = ["raw","ordered","formatted"][2]

fit = ["pre","CR","CR-only","full"][1]

################################################################################

file = {
    "pre":"data_no-fit.txt",
    "CR":"data_no-fit-CR.txt",
    "CR-only":"data_cr-only.txt",
    "full":"data_full-fit-bg.txt",
    }

for filename in file.values() :
    f = open(filename,'r') 
    lines = f.readlines()
    print "filename:",filename,"lines:",len(lines)

print 
f = open(file["pre"],'r') 
lines = f.readlines()
print "filename:",file["pre"],"lines:",len(lines)
print "  njet:",len(list(set([ (line.split()[1]) for line in lines[1:] ])))
print "  nb:",len(list(set([ (line.split()[2]) for line in lines[1:] ])))
print "  ht:",len(list(set([ (line.split()[3]) for line in lines[1:] ])))
print "  mht:",len(list(set([ (line.split()[6]) for line in lines[1:] ])))
print "  njet,nb:",len(list(set([ (line.split()[1],line.split()[2]) for line in lines[1:] ])))
print "  njet,ht:",len(list(set([ (line.split()[1],line.split()[3]) for line in lines[1:] ])))
print "  njet,nb,ht:",len(list(set([ (line.split()[1],line.split()[2],line.split()[3]) for line in lines[1:] ])))
print "  njet,nb,ht,mht:",len(list(set([ (line.split()[1],line.split()[2],line.split()[3],line.split()[6]) for line in lines[1:] ])))
f.close()

print 
f = open(file["CR"],'r') 
lines = f.readlines()
print "filename:",file["pre"],"Mu","lines:",len(lines)
print "  njet:",len(list(set([ (line.split()[1]) for line in lines[1:] if line.split()[0] == "Mu" ])))
print "  nb:",len(list(set([ (line.split()[2]) for line in lines[1:] if line.split()[0] == "Mu" ])))
print "  ht:",len(list(set([ (line.split()[3]) for line in lines[1:] if line.split()[0] == "Mu" ])))
print "  njet,nb:",len(list(set([ (line.split()[1],line.split()[2]) for line in lines[1:] if line.split()[0] == "Mu" ])))
print "  njet,ht:",len(list(set([ (line.split()[1],line.split()[3]) for line in lines[1:] if line.split()[0] == "Mu" ])))
print "  njet,nb,ht:",len(list(set([ (line.split()[1],line.split()[2],line.split()[3]) for line in lines[1:] if line.split()[0] == "Mu" ])))
f.close()

print 
f = open(file["CR"],'r') 
lines = f.readlines()
print "filename:",file["pre"],"MuMu","lines:",len(lines)
print "  njet:",len(list(set([ (line.split()[1]) for line in lines[1:] if line.split()[0] == "MuMu" ])))
print "  nb:",len(list(set([ (line.split()[2]) for line in lines[1:] if line.split()[0] == "MuMu" \
                                 and line.split()[2] == "eq0b" ])))*2
print "  ht:",len(list(set([ (line.split()[3]) for line in lines[1:] if line.split()[0] == "MuMu" ])))
print "  njet,nb:",len(list(set([ (line.split()[1],line.split()[2]) for line in lines[1:] if line.split()[0] == "MuMu" \
                                      and line.split()[2] == "eq0b" ])))*2
print "  njet,ht:",len(list(set([ (line.split()[1],line.split()[3]) for line in lines[1:] if line.split()[0] == "MuMu" ])))
print "  njet,nb,ht:",len(list(set([ (line.split()[1],line.split()[2],line.split()[3]) for line in lines[1:] if line.split()[0] == "MuMu" \
                                         and line.split()[2] == "eq0b" ])))*2
f.close()

#quit()
print

f = open(file[fit],'r') 
lines = f.readlines()

################################################################################
# hack to deal with change in data format, extra integer (0-3) in column #5
entries = []
entries.append(" ".join(lines[0].split()))
for line in lines[1:] :
    if fit == "CR" : entries.append(line)
    else : entries.append(" ".join(line.split()[0:5]+line.split()[6:]))

################################################################################

index = []
if fit != "CR" :
    index = [
        (0,   str,"{:4s}"),   # row number 
        (1,   str,"{:4s}"),   # njet
        (2,   str,"{:4s}"),   # nb
        (3, float,"{:4.0f}"), # ht_low
        (4, float,"{:4.0f}"), # ht_high
        (5, float,"{:3.0f}"), # mht_low
        (6, float,"{:3.0f}"), # mht_high
        (15,float,"{:6.0f}"), # data
        (16,float,"{:5.1f}"), # errh
        (17,float,"{:5.1f}"), # errl
        (7, float,"{:8.1f}"), # SM
        (8, float,"{:6.1f}"), # err
        (9, float,"{:8.1f}"), # ttW 
        (10,float,"{:6.1f}"), # err
        (11,float,"{:8.1f}"), # zinv 
        (12,float,"{:6.1f}"), # err 
        (13,float,"{:6.1f}"), # qcd 
        (14,float,"{:5.1f}"), # err
        ]
else :
    index = [
        (0,   str,"{:4s}"),   # CR label 
        (1,   str,"{:4s}"),   # njet
        (2,   str,"{:4s}"),   # nb
        (3, float,"{:4.0f}"), # ht_low
        (4, float,"{:4.0f}"), # ht_high
        (5, float,"{:3.0f}"), # mht_low (n/a, use column 5)
        (5, float,"{:3.0f}"), # mht_high (n/a, use column 5)
        (8,float,"{:6.0f}"), # data
        (9,float,"{:5.1f}"), # errh
        (10,float,"{:5.1f}"), # errl
        (6, float,"{:8.1f}"), # SM
        (7, float,"{:6.1f}"), # err
        (5, float,"{:8.1f}"), # ttW (n/a, use column 5) 
        (5,float,"{:6.1f}"), # err (n/a, use column 5)
        (5,float,"{:8.1f}"), # zinv (n/a, use column 5) 
        (5,float,"{:6.1f}"), # err (n/a, use column 5) 
        (5,float,"{:6.1f}"), # qcd (n/a, use column 5)
        (5,float,"{:5.1f}"), # err (n/a, use column 5)
        ]

index = index[1:12] # just data and SM total 

################################################################################

nj_string = odict([
        ("eq1j","1"),
        ("ge2a","$\\geq 2${\\it a}"),
        ("eq2j","2"),
        ("eq3j","3"),
        ("eq4j","4"),
        ("eq5j","5"),
        ("ge6j","$\\geq 6$"),
        ])

nb_string = {"eq0b":"0",
             "eq1b":"1",
             "eq2b":"2",
             "eq3b":"3",
             "ge4b":"$\\geq 4$",
             "ge1b":"$\\geq 1$",
             }

topologies = odict([
        ("mono",("monojet-like",["eq1j","ge2a"])),
        ("nlow",("low \\njet",["eq2j","eq3j"])),
        ("nmed",("medium \\njet",["eq4j","eq5j"])),
        ("nhigh",("high \\njet",["ge6j"])),
        ])

################################################################################

header = entries[0].split()
#print header 

################################################################################

if option == "raw" : 
    for line in lines[1:] :
        #print line.split()
        if str(line.split()[0]) == "MuMu" and \
                str(line.split()[2]) != "eq0b" and \
                str(line.split()[2]) != "eq1b" : continue 
        print "{0:4s}, {1:4s}, {2:4s}, {3:4.0f}, {4:4.0f}, {6:7.1f}+/-{7:5.1f}, {8:5.0f}".format(str(line.split()[0]),
                                                                                                 str(line.split()[1]),
                                                                                                 str(line.split()[2]),
                                                                                                 float(line.split()[3]),
                                                                                                 float(line.split()[4]),
                                                                                                 float(line.split()[5]),
                                                                                                 float(line.split()[6]),
                                                                                                 float(line.split()[7]),
                                                                                                 float(line.split()[8]),
                                                                                                 float(line.split()[9]),
                                                                                                 )
        
################################################################################

if fit == "CR" : 
    dct = odict()
    for line in entries[1:] :
        line = line.split()
        old = (str(line[0]),str(line[1]),str(line[2]),float(line[3]),float(line[4]))
        new = (str(line[0]),str(line[1]),"ge1b",float(line[3]),float(line[4]))
        line = [float(line[5]),float(line[6]),float(line[7]),float(line[8]),float(line[9]),float(line[10])]
        if old[0] == "Mu" or old[1] == "eq1j" or old[2] == "eq0b" : dct[old] = line 
        elif old[0] == "MuMu" and old[2] == "eq1b" and new not in dct.keys() : dct[new] = line
        
    lst = []
    for key,val in dct.items() :
        lst.append(" ".join([str(x) for x in list(key)]+[str(x) for x in val]))

#    for entry in lst :
#        print [ type(e) for e in entry ]
#        #print "{0:4s}, {1:4s}, {2:4s}, {3:4.0f}, {4:4.0f}, {6:7.1f}+/-{7:5.1f}, {8:5.0f}".format(*entry)

    entries = lst

################################################################################

if option == "ordered" : 
    for line in entries[1:] :
        temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]
        print line
#        print "{0:4s}, {1:4s}, {2:4s}, {3:4.0f}, {4:4.0f}, {6:7.1f}+/-{7:5.1f}, {8:5.0f}".format(str(line.split()[0]),
#                                                                                                 str(line.split()[1]),
#                                                                                                 str(line.split()[2]),
#                                                                                                 float(line.split()[3]),
#                                                                                                 float(line.split()[4]),
#                                                                                                 float(line.split()[]),
#                                                                                                 float(line.split()[6]),
#                                                                                                 float(line.split()[7]),
#                                                                                                 float(line.split()[8]),
#                                                                                                 float(line.split()[9]),
#                                                                                                 )

elif option == "formatted" : 

#    temp = np.array([float(x[8]) for x in lst])
#    #print temp
#    h = histogram.Histogram(temp,bins=10)
#    #print h.vertical(15)
#    print h.horizontal(20)

#    quit()

    for key,val in nj_string.items() :
        header = "\n"
        header += "\\begin{table}[!h]\n"
        header += "  \\topcaption{\n"
        if fit == "CR" : header += "    Observed data counts and pre-fit background expectations in\n"
        else : header += "    Observed data counts and "+fit+"-fit background expectations in\n"
        if fit == "CR" : header += "    the \\mj and \\mmj control regions for the \\texttt{"+"{:s}".format(key)+"} topology. The\n"
        else : header += "    the signal region for the \\texttt{"+"{:s}".format(key)+"} topology. The\n"
        header += "    uncertainties in the background expectations include statistical\n"
        if fit == "pre" or fit == "CR" : header += "    contributions from the finite-sized simulation samples {\\it only}. \n"
        else : header += "    as well as systematic contributions. \n"
        header += "  }\n"
        header += "  \\label{tab:result-"+"{:s}".format(key)+"}\n"
        header += "  \\scriptsize\n"
        header += "  \\centering\n"
        if fit == "CR" : header += "  \\begin{tabular}{lrrlrrcl}\n"
        else : 
            if key == "eq1j" : header += "  \\begin{tabular}{rrlrrcl}\n"
            else : header += "  \\begin{tabular}{rrllrrcl}\n"
        header += "    \\hline\n"
        if fit == "CR" : header += "    Region\\T\\B & \\njet & \\nb & \\scalht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
        else : 
            if key == "eq1j" : header += "    \\njet\\T\\B & \\nb & \\scalht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
            else : header += "    \\njet\\T\\B & \\nb & \\scalht [GeV] & \\mht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
        header += "    \\hline"
        print header 
        previous = ""
        previousCR = ""
        for line in entries[1:] :

            # extract and format file content, line by line  
            temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]

            # check njet
            if temp[0] not in key : continue 

            # HT and MHT equivalence for eq1j cat
            if fit != "CR" and temp[0] == "eq1j" and float(temp[2]) != float(temp[4]) : continue

            # format table entry 
            tmp = []

            if fit == "CR" : tmp.append( "{:s}".format( {"Mu":"\\mj","MuMu":"\\mmj"}[line.split()[0]] ) ) 
            if fit == "CR" : 
                (njet,bjet,ht) = ( "{:s}".format(nj_string[temp[0]]),
                                   "{:s}".format(nb_string[temp[1]]),
                                   "{:s}".format(str(temp[2])) )
            else :
                (njet,bjet,ht) = ( "{:s}".format(nj_string[temp[0]]),
                                   "{:s}".format(nb_string[temp[1]]),
                                   "${:s}-{:s}$".format(str(temp[2]),str(temp[3]).replace("inf","\\infty")) )
            padding = "" 
            if fit != "CR" and str(njet+bjet+ht) != previous : padding = "\\T"
#            if fit == "CR" and str(njet+bjet) != previousCR : padding = "\\T"
            previous = str(njet+bjet+ht)
            previousCR = str(njet+bjet)
            tmp.append(njet+padding) 
            tmp.append(bjet) 
            tmp.append(ht)
            if fit != "CR" and key != "eq1j" : tmp.append( "${:s}-{:s}$".format(str(temp[4]),str(temp[5]).replace("inf","\\infty")) )
            tmp.append( "{:s}".format(temp[6]) )
            #tmp.append( "${:s}".format(temp[6]) + "^{+" + "{:s}".format(temp[7]) + "}_{-" + "{:s}".format(temp[8]) + "}$" )
            tmp.append( "{:s}".format(temp[9]) + " &$\pm$& " + "{:s}".format(temp[10]) )
            print " & ".join(tmp),"\\\\"
        header = ""
        header += "    \\hline\n"
        header += "  \\end{tabular}\n"
        header += "\\end{table}"
        print header

################################################################################

else :
    print "unknown"
