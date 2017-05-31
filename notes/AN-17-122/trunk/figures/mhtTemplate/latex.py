import os

base = "figures/mhtTemplate/exclusive"
samples = [("Mu","\\mj"),
           ("MuMu","\\mmj"),]
njet_bins = [("eq1j","\\njet = 1"),
             ("ge2j","\\njet \\geq 2 \textrm{(asymmetric)}"),
             ("eq2j","\\njet = 2"),
             ("eq3j","\\njet = 3"),
             ("eq4j","\\njet = 4"),
             ("eq5j","\\njet = 5"),
             ("ge6j","\\njet \\geq 6"),]
bjet_bins = [("eq0b","\\nb = 0"),
             ("eq1b","\\nb = 1"),
             ("eq2b","\\nb = 2"),
             ("eq3b","\\nb = 3"),
             ("ge4b","\\nb \\geq 4"),]
ht_bins = [(("200","400"),"200 < \\scalht < 400\\GeV"),
           (("400","600"),"400 < \\scalht < 600\\GeV"),
           (("600","900"),"600 < \\scalht < 900\\GeV"),
           (("900","1200"),"900 < \\scalht < 1200\\GeV"),
           (("1200","Inf"),"\\scalht > 1200\\GeV"),
           (("900","Inf"),"\\scalht > 900\\GeV"),]
used_bins = [("eq1j","eq0b"),("eq1j","eq1b"),
             ("ge2j","eq0b"),("ge2j","eq1b"),("ge2j","eq2b"),("ge2j","eq3b"),
             ("eq2j","eq0b"),("eq2j","eq1b"),("eq2j","eq2b"),
             ("eq3j","eq0b"),("eq3j","eq1b"),("eq3j","eq2b"),("eq3j","eq3b"),
             ("eq4j","eq0b"),("eq4j","eq1b"),("eq4j","eq2b"),("eq4j","eq3b"),
             ("eq5j","eq0b"),("eq5j","eq1b"),("eq5j","eq2b"),("eq5j","eq3b"),("eq5j","ge4b"),
             ("ge6j","eq0b"),("ge6j","eq1b"),("ge6j","eq2b"),("ge6j","eq3b"),("ge6j","ge4b"),]

full_string = ""
for (sample,sample_str) in samples :
    for (njet,njet_str) in njet_bins : 
        for (bjet,bjet_str) in bjet_bins : 
            if (njet,bjet) not in used_bins : continue 
            cntr = 0
            string = ""
            string += "\n" 
            string += "\\begin{figure}[h!]\n"
            string += "  \\begin{center}\n"
            for iht,(ht,ht_str) in enumerate(ht_bins) : 
                # latex path for "file" is not same as path needed by os.isfile, so concatenate "pwd" and "file" strings before checking 
                file = base+"fits/{:s}/ht{:s}_{:s}_control_{:s}_{:s}_{:s}.pdf".format(sample,ht[0],ht[1],bjet,njet,sample)
                pwd = os.getcwd()
                path = list(pwd.split("/") + file.split("/")) 
                path = "/".join(list(sorted(set(path),key=lambda x: path.index(x))))
                if os.path.isfile(path) == False : continue # this checks if file exists 
                cntr += 1
                histo = "    \\subfigure[${:s}$]".format(ht_str)
                histo += "{\\includegraphics[width=0.32\\textwidth]{"
                histo += file
                histo += "}}"
                if cntr%3 == 0 : histo += "\\\\" 
                histo += "\n"
                string += histo
            caption = "    \\caption{The ratio of event yields obtained from data and simulation "
            caption += "as a function of \mht [GeV] based on a sample of {:s} events ".format(sample_str)
            caption += "that satisfy ${:s}$ and ${:s}$, as well as the requirements on \scalht ".format(njet_str,bjet_str)
            caption += "indicated by each sub-figure caption. Also shown are fits "
            caption += "to the ratios using first-order orthogonal polynomials.}\n"
            string += caption
            string += "    \\label{"+"fig:mhtval_{:s}_{:s}_{:s}".format(sample,njet,bjet)+"}\n"
            string += "  \\end{center}\n"
            string += "\\end{figure}\n"
            print cntr
            if cntr > 0 : full_string += string # only create table if at least one file found 

print full_string
f = open("tables.tex","w")
f.write(full_string)
f.close()
