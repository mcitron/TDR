from collections import OrderedDict as odict
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

def caption(models) :
    sms = list(set([ x.split()[0].replace("_","\\_") for x in models ]))
    acc = "$\\mathcal{A}\,\\varepsilon$"
    caption = "A summary of the cumulative signal acceptance times efficiency "+acc+" [\\%] "
    caption += "for various benchmark models"# ("+ ", ".join(sms[:-1])+", and "+sms[-1]+")"
    caption += ", with both compressed and uncompressed mass spectra, following "
    caption += "the application the event selection criteria that define the signal region. "
    caption += "Values for "+acc+" are also shown following the application of additional "
    caption += "requirements that define the four most sensitive event categories, "
    caption += "as defined in Table 5. "
    return caption 

#_______________________________________________________________________________

#row_headers = ["Cut"]*13
row_headers = [
    "Before selection",
    "Photon veto",
    "Lepton vetoes",
    "Single isolated track veto",
    "Trigger selection",
    "$E_{\\mathrm{T}}^{\\mathrm{miss}}$ filters",
    #"$\\mathrm{CHF}(\\mathrm{j_1}) < 0.95$",
    "$n_{\\mathrm{jet}} \\geq 2$", 
    "$p_{\\mathrm{T}}^{\\mathrm{j_1}} > 100\\,\mathrm{GeV}$",
    "$|\\eta^{\\mathrm{j_1}}| < 2.5$",
    "$H_{\\mathrm{T}} > 200\,\\mathrm{GeV}$",
    "$H_{\\mathrm{T}}^{\\mathrm{miss}} > 130\,\\mathrm{GeV}$",
    "$\\Delta\phi^{*}_{\\mathrm{min}} > 0.5$",
    "$H_{\\mathrm{T}}$-dependent $\\alpha_{\\mathrm{T}}$ cuts",
    "$H_{\\mathrm{T}}^{\\mathrm{miss}} / E_{\\mathrm{T}}^{\\mathrm{miss}} < 1.25$",
    "Forward jet veto",
    "Four most sensitive categories",
    "$H_{\\mathrm{T}} > 800\,\\mathrm{GeV}$",
    "$H_{\\mathrm{T}}^{\\mathrm{miss}} > 800\,\\mathrm{GeV}$",
    ]

#_______________________________________________________________________________

string = ""
string += "\\documentclass{article}\n"
string += "\\usepackage[utf8]{inputenc}\n"
string += "\\begin{document}\n"

for category,models in models_dict.items() :

    if len(models) == 0 : continue 

    string += "\\clearpage"+"\n"
    string += "\\begin{table}"+"\n"
#    string += "\\centering"+"\n"
    string += "\\caption{"+caption(models)+"}"+"\n"
    string += "\\begin{tabular}{l"+"c"*(len(models)/2)+"}"+"\n"
    string += "  \\hline"+"\n"

    # create list for column headers 
    column_headers_1 = ["  Event selection","\multicolumn{"+str(len(models)/2)+"}{c}{Benchmark model}"]
    column_headers_2 = ["  "]
    column_headers_3 = ["  "]

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

        # add headers
        sms = model.split()[0].replace("_","\_")
        msusy = model.split()[1].strip("(").strip(",")
        mlsp = model.split()[2].strip(")")
        #print sms,msusy,mlsp
        column_headers_2.append(sms)
        column_headers_3.append("({:s},\,{:s})".format(msusy,mlsp))
        
        # extract effs
        effs = []
        denom = -1.
        for iline,line in enumerate(file.readlines()) :
            if iline not in [3,5,6,7,8,9,10,11,32,33,34,36,37,38] : continue # relevant counts on these lines 
            entries = line.split()
            if denom < 0. : 
                denom = float(entries[-2]) # pre-cut-flow count
                effs.append(1.00) # hack 
                effs.append(1.00) # hack 
                effs.append(1.00) # hack 
                effs.append(1.00) # no cut flow 
                effs.append(1.00) # trigger eff (hack)
            else :
                eff = float(entries[-2]) / denom 
                effs.append(eff)
        file.close()
        
        # populate nested list 
        for row,eff in zip(table_list,effs) : row.append(eff)
    
    string += " & ".join(column_headers_1)+" \\\\"+"\n"
    string += "  \\cline{2-"+str(1+len(models)/2)+"}"+"\n"
    string += " & ".join(column_headers_2)+" \\\\"+"\n"
    string += " & ".join(column_headers_3)+" \\\\"+"\n"
    string += "  \\hline"+"\n"
    for row in table_list :
        if len(row) < 2 : continue 
        string += "  "+row[0]+" & "+" & ".join(["\\phantom{1}"+"{:2.0f}".format(x*100.) 
                                                if x < 0.995 
                                                else "100" 
                                                for x in row[1:] ] )+" \\\\"+"\n"

    string += "  \\hline"+"\n"
    string += "\\end{tabular}"+"\n"
    string += "\\end{table}"+"\n"
    string += "\n"

string += "\end{document}"

file = open("tables.tex","w")
file.write(string)
file.close()

print string

#_______________________________________________________________________________
