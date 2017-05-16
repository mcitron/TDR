import pickle 
from collections import OrderedDict as odict

file = open("MhtBinning_final_v2.pkl","rb")
input = pickle.load(file)

# format of input dict:
# ('ge6j', 'ge4b', (400, inf)) [200.0, 300.0, 400.0]
# ('njet', 'nb', (ht_low, ht_high)) [mht_1, mht_2, mht_3, ...]

njet_bins = ["eq1j","ge2a","eq2j","eq3j","eq4j","eq5j","ge6j"]
nb_bins = ["eq0b","eq1b","eq2b","eq3b","ge4b"]
ht_bins = [200,250,300,350,400,500,600,750,900,1050,1200]
mht_bins = [200,400,600,900]

# print input dict
for key,val in input.items() :
    print key,val

# count number of (Njet,Nb,HT) bins (Njet,Nb,HT,MHT) bins  
print 
print "Njet,Nb,HT:",len(input.keys())
print "Njet,Nb,HT,MHT:",sum([ len(x) for x in input.values() ])

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

if 0 :

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
        print njet
        print "     &"," & ".join([ "{:5.0f}".format(ht) for ht in ht_bins ]),"&"
        for mht in mht_bins :
            print "{:4.0f} & ".format(mht),
            for ht in ht_bins :
                # select subset of dict based on keys wtih correct njet and ht
                ht_dict = odict([ (key[1],val) for key,val in input.items() if njet in key[0] and ht == key[2][0] ]) 
                # print ht_dict
                nb_val = ""
                for nb,val in ht_dict.items() : # reverse nb direction 
                    if len(val) and mht in val : nb_val = nb
                print "{:4s} & ".format(nb_val),
            print 




# format original dict to create latex for full tables 

#        caption = "test"
##        caption = "Summary of the lower bound of the final \HTmiss bin [GeV] as a function of \njet and \scalht (signal region, aggregated scheme). The lower bound of the first \scalht bin is summarised in Table~\ref{tab:sr-ht-binning}. The dashes (--) signify (\njet, \nb) bins that are not possible or used." 
#
#        string = "\\begin{table}[!h]\n"
#        string += "  \\topcaption{"+caption+"}\n"
#        string += "  \\label{tab:"+"cr_binning_{:s}_{:s}".format(njet,nb)+"}\n"


