from collections import OrderedDict as odict
from tabulate import tabulate
from os import path

#_______________________________________________________________________________

models_dict = odict([
        ("light_flavour",["T1qqqq (1300, 100)",
                          "T1qqqq (900, 700)",
                          "T2qq_8fold (1050, 100)",
                          "T2qq_8fold (650, 550)",
                          "T2qq_1fold (600, 50)",
                          "T2qq_1fold (400, 250)",
                          ]),
        ("gluinos_3G",["T1bbbb (1500, 100)",
                       "T1bbbb (1000, 800)",
                       "T1tttt (1300, 100)",
                       "T1tttt (800, 400)",
                       "T1ttbb (1300, 100)",
                       "T1ttbb (1000, 700)",
                       ]),
        ("natural",["T5tttt_DM175 (800, 100)",
                    "T5tttt_DM175 (700, 400)",
                    "T5ttcc (1200, 200)",
                    "T5ttcc (750, 600)",
                    ]),
        ("squarks_3G",["T2bb (800, 50)",
                       "T2bb (375, 300)",
                       "T2tb (600, 50)",
                       "T2tb (350, 225)",
                       "T2tt (700, 50)",
                       "T2tt (350, 100)",
                       ]),
        ("compressed",["T2cc (325, 305)",
                       "T2_degen (300, 290)",
                       "T2_mixed (300, 250)",
                       ]),
        ])

#_______________________________________________________________________________

#row_headers = [
#    "-"
##    "Trigger selection"
#    "$n_jet >= 2 (pT^j > 40 GeV)$", 
#    "$pT^j1 > 100 GeV$",
#    "$|eta^j1| < 2.5$",
#    "$CHF^j1$",
##    "$pT^j2 > 100 GeV$",
#    "$HT^miss > 130 GeV (pT^j > 40 GeV)$",
#    "$bDPhi > 0.5$",
#    "$Alpha_T H_T-dependent cuts$",
#    "$HT^miss / E_T^miss < 1.25$",
#    "$Forward jet veto$",
#    "$Photon veto$",
#    "$Lepton vetoes$",
#    "$Isolated track veto$",
##    "$n_jet >= 5$",
##    "$HT > 800 GeV (pT^j > 40 GeV)$",
##    "$HT^miss > 800 GeV (pT^j > 40 GeV)$",
##    "$n_b-jet >= 1 (pT^j > 40 GeV)$",
##    "$n_b-jet >= 2 (pT^j > 40 GeV)$",
#    ]
row_headers = ["Cut"]*13

#_______________________________________________________________________________

str = ""
str += "\\documentclass{article}\n"
str += "\\usepackage[utf8]{inputenc}\n"
str += "\\begin{document}\n"

for category,models in models_dict.items() :

    # create list for column headers 
    column_headers = ["Event selection"]

    # create nested list for this category, add row headers 
    table_list = []
    for row in row_headers :
        table_list.append([row])

    # iterate through models for this category
    for model in models : 

        # open file 
        name = "input/"+model+"/tbl_cutflow.txt"
        if not path.exists(name) : continue 
        file = open(name,"r")

        # add model 
        column_headers.append(model)

        # extract effs
        effs = []
        denom = -1.
        for iline,line in enumerate(file.readlines()) :
            if iline not in [3,5,6,7,8,9,10,11,32,33,34,36,37,38] : continue # relevant counts on these lines 
            entries = line.split()
            if denom < 0. : 
                denom = float(entries[-2]) # pre-cut-flow count
                effs.append(1.00) # no cut flow 
                effs.append(1.00) # trigger eff (hack)
            else :
                eff = float(entries[-2]) / denom 
                effs.append(eff)
        file.close()
        
        # populate nested list 
        for row,eff in zip(table_list,effs) : row.append(eff)
    
    # print table contents

    str += "\n\n"
    str += tabulate( table_list, column_headers, numalign="decimal", floatfmt=".2f", tablefmt="latex" )

str += "\n\n"
str += "\end{document}"

file = open("tables.tex","w")
file.write(str)
file.close()


print str 

#_______________________________________________________________________________
