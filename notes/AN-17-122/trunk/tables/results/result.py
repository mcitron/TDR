from collections import OrderedDict as odict
import math

################################################################################

option = ["raw","formatted"][1]

################################################################################

f = open('data_fit_b.txt','r') 
lines = f.readlines()

################################################################################

index = [
    (0, float,"{:3.0f}"), # entry
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
             }

topologies = odict([
        ("mono",("monojet-like",["eq1j","ge2a"])),
        ("nlow",("low \\njet",["eq2j","eq3j"])),
        ("nmed",("medium \\njet",["eq4j","eq5j"])),
        ("nhigh",("high \\njet",["ge6j"])),
        ])

################################################################################

header = lines[0].split()
print header 

################################################################################

if option == "raw" : 
    for line in lines[1:] :
        temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]
        print temp

################################################################################

elif option == "formatted" : 

    for key,val in nj_string.items() :
        print 
        header = "\n"
        header += "\\begin{table}[!t]\n"
        header += "  \\topcaption{\n"
        header += "    Observed data counts and ``pre-fit'' background expectations in\n"
        header += "    the signal region for the \\texttt{"+"{:s}".format(key)+"} topology. The\n"
        header += "    uncertainties in the background expectations include statistical\n"
        header += "    as well as systematic contributions. \n"
        header += "  }\n"
        header += "  \\label{tab:result-"+"{:s}".format(key)+"}\n"
        header += "  \\tiny\n"
        header += "  \\centering\n"
        header += "  \\begin{tabular}{rrllrrcl}\n"
        header += "    \\hline\n"
        header += "    \\njet\\T\\B & \\nb & \\scalht [GeV] & \\mht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
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
            tmp.append( "{:s}".format(nj_string[temp[0]]) ) 
            tmp.append( "{:s}".format(nb_string[temp[1]]) ) 
            tmp.append( "${:s}-{:s}$".format(str(temp[2]),str(temp[3]).replace("inf","\\infty")) )
            tmp.append( "${:s}-{:s}$".format(str(temp[4]),str(temp[5]).replace("inf","\\infty")) )
            tmp.append( "{:s}".format(temp[6]) )
            #tmp.append( "${:s}".format(temp[6]) + "^{+" + "{:s}".format(temp[7]) + "}_{-" + "{:s}".format(temp[8]) + "}$" )
            tmp.append( "{:s}".format(temp[9]) + " &$\pm$& " + "{:s}".format(temp[10]) )
            print " & ".join(tmp),"\\\\"
        header = ""
        header += "    \\hline\n"
        header += "  \\end{tabular}\n"
        header += "\\end{table}\n"
        print header

################################################################################

else :
    print "unknown"

