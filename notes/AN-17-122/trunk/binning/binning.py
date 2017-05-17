import pickle 
from collections import OrderedDict as odict

def rreplace(s, old, new, occurrence):
    li = s.rsplit(old, occurrence)
    return new.join(li)

# summary table or detailed? 
summary = 1

# SR or CR? 
region_str = "SR"
region = {"CR":0,"SR":1}[region_str]

file = open(["MhtBinning_final_CR.pkl","MhtBinning_final_SR.pkl"][region],"rb")
input = pickle.load(file)

# format of input dict:
# ('ge6j', 'ge4b', (400, inf)) [200.0, 300.0, 400.0]
# ('njet', 'nb', (ht_low, ht_high)) [mht_1, mht_2, mht_3, ...]

njet_bins = ["eq1j","ge2a","eq2j","eq3j","eq4j","eq5j","ge6j"]
nb_bins = ["eq0b","eq1b","eq2b","eq3b","ge4b"]
ht_bins = [[200,250,300,350,400,500,600,750,900,1050,1200],[200,400,600,900,1200]][region]
mht_bins = [200,400,600,900]

njet_string = {"eq1j":" = 1",
               "ge2a":" \\geq 2 \\textrm{(asymmetric topology)}",
               "eq2j":" = 2",
               "eq3j":" = 3",
               "eq4j":" = 4",
               "eq5j":" = 5",
               "ge6j":" \\geq 6",
               }

nb_string = {"eq0b":"0",
             "eq1b":"1",
             "eq2b":"2",
             "eq3b":"3",
             "ge4b":"$\\geq 4$",
             }

# print input dict
for key,val in input.items() :
    print key,val

# overrides input dict by keeping only 200,400,600,900 boundaries for MHT binning (probably now obsolete? fixed by Lucien?)
input = odict([ (key,list(filter(lambda x: x == 200 or x == 400 or x == 600 or x == 900, val))) for key,val in input.items()  ])

# nested set of new dicts:
new_dicts = odict()
new_dicts["ht_0"] = odict()
new_dicts["ht_0_mht_0"] = odict()
new_dicts["ht_0_mht_N"] = odict()
new_dicts["ht_N"] = odict()
new_dicts["ht_N_mht_0"] = odict()
new_dicts["ht_N_mht_N"] = odict()
#new_dicts["ht_N_mht_N-1"] = odict()

# format input dict so to create latex for summary table 
for njet in njet_bins :
    new_dicts["ht_0"][njet] = odict()
    new_dicts["ht_0_mht_0"][njet] = odict()
    new_dicts["ht_0_mht_N"][njet] = odict()
    new_dicts["ht_N"][njet] = odict()
    new_dicts["ht_N_mht_0"][njet] = odict()
    new_dicts["ht_N_mht_N"][njet] = odict()
#    new_dicts["ht_N_mht_N-1"][njet] = odict()
    for nb in nb_bins :
        # select subset of dict based on keys compatible with (njet,nb), ie dict of entries for each HT bin 
        nb_dict = odict([ (key,val) for key,val in input.items() if njet in key[0] and nb in key[1] ]) 
        new_dicts["ht_0"][njet][nb] = "--"
        new_dicts["ht_0_mht_0"][njet][nb] = "--"
        new_dicts["ht_0_mht_N"][njet][nb] = "--"
        new_dicts["ht_N"][njet][nb] = "--"
        new_dicts["ht_N_mht_0"][njet][nb] = "--"
        new_dicts["ht_N_mht_N"][njet][nb] = "--"
#        new_dicts["ht_N_mht_N-1"][njet][nb] = "--"
        if len(nb_dict.keys()) > 0 and len(nb_dict.values()) > 0 :
            new_dicts["ht_0"][njet][nb] = str(int(nb_dict.keys()[0][2][0]))
            new_dicts["ht_0_mht_0"][njet][nb] = str(int(nb_dict.values()[0][0]))
            new_dicts["ht_0_mht_N"][njet][nb] = str(int(nb_dict.values()[0][-1]))
            new_dicts["ht_N"][njet][nb] = str(int(nb_dict.keys()[-1][2][0]))
            new_dicts["ht_N_mht_0"][njet][nb] = str(int(nb_dict.values()[-1][0]))
            new_dicts["ht_N_mht_N"][njet][nb] = str(int(nb_dict.values()[-1][-1]))
#            if len(nb_dict.keys()) > 1 and len(nb_dict.values()) > 1 :
#                new_dicts["ht_N_mht_N-1"][njet][nb] = str(int(nb_dict.values()[-2][-1]))

if summary :

    # format new dicts to create latex for summary tables 
    for key1,val1 in new_dicts.items() :
        print 
        print key1
        print " "*14,"".join(["{:s}".format(nb).ljust(15) for nb in nb_bins]) # column headers 
        for njet,val2 in val1.items() :
            print njet,"&", 
            for nb,val3 in val2.items() :
                print "{:s} & ".format(val3).rjust(14), # print "final HT"
            print # new line 
    print 

else :

    for njet in njet_bins :
        print 
        if njet == "eq1j" :
            caption  = "Summary of the highest value of \\nb used to categorise events "
            caption += "as a function of \\scalht [GeV] and \\HTmiss [GeV] for events "
            caption += "that satisfy $\\njet{:s}$. ".format(njet_string[njet])
            caption += "An identical \\HTmiss binning is used for each \\nb category, "
            caption += "from $\\nb = 0$ up to the \\nb value indicated. "
            if region == 0 :
                caption += "The \\scalht binning scheme corresponds to that used by "
                caption += "the control regions. (Event yields and predictions are "
                caption += "subsequently aggregated according to the binning scheme "
                caption += "for the signal region.) "
            else :
                caption += "The \\scalht binning scheme corresponds to the "
                caption += "aggregated scheme used by the signal region. "
            caption += "The first entry per columnn signifies the lower bound of "
            caption += "the first \\HTmiss bin. The final entry per columnn signifies "
            caption += "the lower bound of the final open \\HTmiss bin. " 
            caption += "Gaps between entries within a column signify merged \\HTmiss bins. "
            caption += "An empty column signifies that the (\\njet, \\scalht) "
            caption += "category is not used in the analysis. "
        else :
            caption  = "As for Table~\\ref{tab:"+"{:s}_binning_eq1j".format(region_str)+"} with events that satisfy "
            caption += "$\\njet{:s}$. ".format(njet_string[njet])
        string = "\\begin{table}[!h]\n"
        string += "  \\topcaption{"+caption+"}\n"
        string += "  \\label{tab:"+"{:s}_binning_{:s}".format(region_str,njet)+"}\n"
        string += "  \\centering\n"
        string += "  \\begin{tabular}{l"+"c"*len(ht_bins)+"}\n"
        string += "  \\hline\n"
        string += "  \\scalht [GeV] & \\multicolumn{"+str(len(ht_bins))+"}{c}{\\HTmiss [GeV]} \\\\ \n"
        string += "  \\cline{2-"+str(len(ht_bins)+1)+"}"
        print string
        print "      &"," & ".join([ "{:8.0f}".format(ht) for ht in ht_bins ]),"\\\\"
        print "  \\hline"
        for mht in mht_bins :
            temp = " {:4.0f} & ".format(mht)
            for ht in ht_bins :
                # select subset of dict based on keys wtih correct njet and ht
                ht_dict = odict([ (key,val) for key,val in input.items() if njet in key[0] and ht == key[2][0] ]) 
                # print ht_dict
                nb_val = ""
                for nb,val in ht_dict.items() : 
                    #print nb,val
                    if len(val) and mht in val : nb_val = nb_string[nb[1]]
                temp += "{:8s} & ".format(nb_val)
            temp = rreplace(temp,"&","\\\\",1)
            print temp
        print "  \\end{tabular}"
        print "\\end{table}"

# count number of bins
print 
print "Njet,HT:       ",len(list(set([ (key[0],key[2][0]) for key,val in input.items() ]))) 
print "Njet,Nb,HT:    ",len(input.keys())
print "Njet,Nb,HT,MHT:",sum([ len(x) for x in input.values() ])



#for key,val in odict([ (key,val) for key,val in input.items() if "ge6j" in key[0] ]).items() : print key,val
#print odict([ (key,val) for key,val in input.items() if "ge6j" in key[0] and 1200 == key[2][0] ]) 

