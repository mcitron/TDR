from collections import OrderedDict as odict
import math
import numpy as np

# pull definition:
# https://github.com/CMSRA1/AlphaStats/blob/v1.6.x/dataframes/mountainRangePlot.py#L584-L600

################################################################################

f = open("data_cr-only.txt",'r') 
lines = f.readlines()

index = [
    (1,str,"{:s}"),     # njet
    (2,str,"{:s}"),     # nb
    (6,float,"{:.0f}"), # mht_low
    (7,float,"{:.0f}"), # mht_high
    (16,float,"{:.0f}"), # data
    (8,float,"{:.1f}"), # SM
    (9,float,"{:.1f}"), # err
    ]

nj_string = odict([
        ("ge1j2a","=1, ${\\geq}2a$"),
        ("eq23j","=2, =3"),
        ("eq45j","=4, =5"),
        ("ge6j","${\\geq}6$"),
        ])

nb_string = {"eq0b":"0",
             "eq01b":"=0, =1",
             "ge1b":"${\\geq}1$",
             "ge2b":"${\\geq}2$",
             }

cats = [
    ("ge1j2a","eq0b"),
    ("ge1j2a","ge1b"),
    ("eq23j","eq01b"),
    ("eq23j","ge2b"),
    ("eq45j","eq01b"),
    ("eq45j","ge2b"),
    ("ge6j","eq01b"),
    ("ge6j","ge2b"),
    ]

for line in lines[1:] :
    temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]
    print temp

dct = odict()
for line in lines[1:] :
    temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]
    key = (temp[0],temp[1])
    mht = temp[2]
    val = (temp[4],temp[5],temp[6])
    if key not in dct.keys() : dct[key] = odict()
    if mht in dct[key].keys() : print "Error! Key exists",key,mht
    else : dct[key][mht] = val

latex = True
mht_values = sorted(list(set([ y for x in dct.keys() for y in dct[x].keys()  ])))
if latex : 
    print " \\njet & \\nb & & \\multicolumn{8}{c}{\\mht [GeV]} \\\\"
    print "\\cline{4-11}"
    print " & & & "," & ".join([ "{:s}&".format(mht) for mht in mht_values ])+" \\\\"
    print "\\hline"
else :
    print " "*17, 
    for mht in mht_values : print " {:20s}".format(mht), 
    print 
for cat in cats :
    if latex :
        print "{:s} & {:s} & Data & ".format(nj_string[cat[0]],nb_string[cat[1]])," & ".join([ "{:s}&".format(x[0]) for x in dct[cat].values() ])+" \\\\"
        print " & & SM & "," & ".join([ "${:s}$&$ \\pm {:s}$".format(x[1],x[2]) for x in dct[cat].values() ])+" \\\\"
    else : 
        print "({:6s},{:6s}): ".format(cat[0],cat[1]),
        for val in dct[cat].values() : print " {:20s}".format(val[0]),
        print 
        print " "*17,
        for val in dct[cat].values() : print " {:8s} +/- {:7s}".format(val[1],val[2]),
        print ""
        print " "*17,
        for val in dct[cat].values() : print " {:8s} +/- {:7s}".format(val[1],val[2]),
        print ""
if latex : 
    print "\\hline"

#
#for key,val in nj_string.items() :
#    header = "\n"
#    header += "\\begin{table}[!h]\n"
#    header += "  \\topcaption{\n"
#    if fit == "CR" : header += "    Observed data counts and pre-fit background expectations in\n"
#    else : header += "    Observed data counts and "+fit+"-fit background expectations in\n"
#    if fit == "CR" : header += "    the \\mj and \\mmj control regions for the \\texttt{"+"{:s}".format(key)+"} topology. The\n"
#    else : header += "    the signal region for the \\texttt{"+"{:s}".format(key)+"} topology. The\n"
#    header += "    uncertainties in the background expectations include statistical\n"
#    if fit == "pre" or fit == "CR" : header += "    contributions from the finite-sized simulation samples {\\it only}. \n"
#    else : header += "    as well as systematic contributions. \n"
#    header += "  }\n"
#    header += "  \\label{tab:result-"+"{:s}".format(key)+"}\n"
#    header += "  \\scriptsize\n"
#    header += "  \\centering\n"
#    if fit == "CR" : header += "  \\begin{tabular}{lrrlrrcl}\n"
#    else : 
#        if key == "eq1j" : header += "  \\begin{tabular}{rrlrrcl}\n"
#        else : header += "  \\begin{tabular}{rrllrrcl}\n"
#    header += "    \\hline\n"
#    if fit == "CR" : header += "    Region\\T\\B & \\njet & \\nb & \\scalht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
#    else : 
#        if key == "eq1j" : header += "    \\njet\\T\\B & \\nb & \\scalht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
#        else : header += "    \\njet\\T\\B & \\nb & \\scalht [GeV] & \\mht [GeV] & Data & \\multicolumn{3}{c}{SM} \\\\ \n"
#    header += "    \\hline"
#    print header 
#    previous = ""
#    previousCR = ""
#    for line in entries[1:] :
#
#        # extract and format file content, line by line  
#        temp = [ k.format(j(line.split()[i])) for (i,j,k) in index ]
#
#        # check njet
#        if temp[0] not in key : continue 
#
#        # HT and MHT equivalence for eq1j cat
#        if fit != "CR" and temp[0] == "eq1j" and float(temp[2]) != float(temp[4]) : continue
#
#        # format table entry 
#        tmp = []
#
#        if fit == "CR" : tmp.append( "{:s}".format( {"Mu":"\\mj","MuMu":"\\mmj"}[line.split()[0]] ) ) 
#        if fit == "CR" : 
#            (njet,bjet,ht) = ( "{:s}".format(nj_string[temp[0]]),
#                               "{:s}".format(nb_string[temp[1]]),
#                               "{:s}".format(str(temp[2])) )
#        else :
#            (njet,bjet,ht) = ( "{:s}".format(nj_string[temp[0]]),
#                               "{:s}".format(nb_string[temp[1]]),
#                               "${:s}-{:s}$".format(str(temp[2]),str(temp[3]).replace("inf","\\infty")) )
#        padding = "" 
#        if fit != "CR" and str(njet+bjet+ht) != previous : padding = "\\T"
#        previous = str(njet+bjet+ht)
#        previousCR = str(njet+bjet)
#        tmp.append(njet+padding) 
#        tmp.append(bjet) 
#        tmp.append(ht)
#        if fit != "CR" and key != "eq1j" : tmp.append( "${:s}-{:s}$".format(str(temp[4]),str(temp[5]).replace("inf","\\infty")) )
#        tmp.append( "{:s}".format(temp[6]) )
#        #tmp.append( "${:s}".format(temp[6]) + "^{+" + "{:s}".format(temp[7]) + "}_{-" + "{:s}".format(temp[8]) + "}$" )
#        tmp.append( "{:s}".format(temp[9]) + " &$\pm$& " + "{:s}".format(temp[10]) )
#        print " & ".join(tmp),"\\\\"
#    header = ""
#    header += "    \\hline\n"
#    header += "  \\end{tabular}\n"
#    header += "\\end{table}"
#    print header
