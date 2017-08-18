from collections import OrderedDict as odict
import math
from histogram import histogram
import numpy as np

################################################################################

option = ["raw","formatted"][1]

fit = ["pre","CR-only","full","CR"][3]

################################################################################

file = {
    "pre":"data_no-fit.txt",
    "CR-only":"data_prefit.txt",
    "full":"data_fit_b.txt",
    "CR":"data_no-fit-CR.txt",
    }

for vals in file.values() :

    f = open(file[fit],'r') 
    lines = f.readlines()
    print file[fit],len(lines)

#for line in lines :
#    print line.split()[:7]
#quit()

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

if fit == "CR" : 
    dct = odict()
    for line in lines[1:] :
        line = line.split()
        old = (str(line[0]),str(line[1]),str(line[2]),float(line[3]),float(line[4]))
        new = (str(line[0]),str(line[1]),"ge1b",float(line[3]),float(line[4]))
        line = [float(line[5]),float(line[6]),float(line[7]),float(line[8]),float(line[9]),float(line[10])]
        if old[0] == "Mu" or old[2] == "eq0b" : 
            dct[old] = line 
        else :
            if new not in dct.keys() : 
                dct[new] = line
            else :
                bin,bkgd,err,data,errh,errl = dct[new]
                dct[new] = [bin,
                            bkgd+line[1],
                            math.sqrt(err**2+line[2]**2),
                            data+line[3],
                            math.sqrt(errh**2+line[4]**2),
                            math.sqrt(errl**2+line[5]**2),
                            ]

    lst = []
    for key,val in dct.items() :
        lst.append(" ".join([str(x) for x in list(key)]+[str(x) for x in val]))

    for entry in lst :
        print entry
#        print "{0:4s}, {1:4s}, {2:4s}, {3:4.0f}, {4:4.0f}, {6:7.1f}+/-{7:5.1f}, {8:5.0f}".format(*entry)

    lines = lst

################################################################################

header = lines[0].split()
#print header 

################################################################################

if option == "raw" : 
    for line in lines[1:] :
        temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]
        print temp

################################################################################

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
        if fit == "pre" or fit == "CR" : header += "    contributions only. \n"
        else : header += "    as well as systematic contributions. \n"
        header += "  }\n"
        header += "  \\label{tab:result-"+"{:s}".format(key)+"}\n"
        header += "  \\tiny\n"
        header += "  \\centering\n"
        if fit == "CR" : header += "  \\begin{tabular}{lrrlrrcl}\n"
        else : header += "  \\begin{tabular}{rrllrrcl}\n"
        header += "    \\hline\n"
        if fit == "CR" : header += "    Region\\T\\B & \\njet & \\nb & \\scalht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
        else : header += "    \\njet\\T\\B & \\nb & \\scalht [GeV] & \\mht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
        header += "    \\hline"
        print header 
        for line in lines[1:] :

            # extract and format file content, line by line  
            temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]

            # check njet
            if temp[0] not in key : continue 

            # HT and MHT equivalence for eq1j cat
            if temp[0] == "eq1j" and "200" not in temp[4] : continue 

            # format table entry 
            tmp = []

            if fit == "CR" : tmp.append( "{:s}".format( {"Mu":"\\mj","MuMu":"\\mmj"}[line.split()[0]] ) ) 
            tmp.append( "{:s}".format(nj_string[temp[0]]) ) 
            tmp.append( "{:s}".format(nb_string[temp[1]]) ) 
            tmp.append( "${:s}-{:s}$".format(str(temp[2]),str(temp[3]).replace("inf","\\infty")) )
            if fit != "CR" : tmp.append( "${:s}-{:s}$".format(str(temp[4]),str(temp[5]).replace("inf","\\infty")) )
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
