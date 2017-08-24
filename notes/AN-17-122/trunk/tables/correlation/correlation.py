import ROOT as r

f = r.TFile().Open("/Users/bainbrid/Downloads/plots.root")

njet_bins = ["all","eq1j","eq2j","eq3j","eq4j","eq5j","ge6j","ge2a",]
ht_bins = ["all","200","400","600","900","1200",]
temp = "Signal_MC__qcdPlotsAnalyzer__QCD_HT__Signal_MC_2d_HTBIN_all_NJBIN"
string = ""

string = " "*5
string += " ".join( ["{:5s}".format(ht).rjust(5) for ht in ht_bins] )
string += "\n"

for njet in njet_bins :
    vals = []
    for ht in ht_bins :
        name = temp.replace("HTBIN",ht).replace("NJBIN",njet)
        histo = f.Get(name)
        vals.append(histo.GetCorrelationFactor())
    string += "{:4s}".format(njet)
    string += " ".join( ["{:5.2f}".format(x) for x in vals] )
    string += "\n"

f.Close()

newf = open("correlation.txt","w")
newf.write(string)
newf.close()
