from subprocess import Popen, PIPE, STDOUT
from setTDRStyle import setTDRStyle
from datetime import datetime
import pickle
import pprint
import os
from ROOT import *
import numpy as np
import math
np.set_printoptions(precision=3)
from collections import OrderedDict
import sys, getopt
from uncertainties import ufloat

################################################################################
# LISTS AND DICTS ##############################################################
################################################################################

master_titles_dict = {
    "all":("All closure tests","all"),
    "Btag_mu_to_mu_with_without_alphaT_all.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu+jets)","alphat_muon_all"),
    "Btag_mu_to_mu_with_without_alphaT_1.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu+jets)","alphat_muon_1"),
    "Btag_mu_to_mu_with_without_alphaT_2.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu+jets)","alphat_muon_2"),
    "Btag_mu_to_mu_with_without_alphaT_3.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu+jets)","alphat_muon_3"),
    "Btag_dimuon_to_dimuon_with_without_alphaT_all.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu#mu+jets)","alphat_mumu_all"),
    "Btag_dimuon_to_dimuon_with_without_alphaT_1.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu#mu+jets)","alphat_mumu_1"),
    "Btag_dimuon_to_dimuon_with_without_alphaT_2.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu#mu + 2-3 jets)","alphat_mumu_2"),
    "Btag_dimuon_to_dimuon_with_without_alphaT_3.C":("#alpha_{T} < 0.55 #rightarrow #alpha_{T} > 0.55 (#mu#mu + #geq 4 jets)","alphat_mumu_3"),
    "Btag_mu_zero_mu_one_no_alphaT_Cut_all.C":("0 b-tags #rightarrow 1 b-tag (#mu+jets)","eq0b_eq1b_muon_all"),
    "Btag_mu_zero_mu_one_no_alphaT_Cut_1.C":("0 b-tags #rightarrow 1 b-tag (#mu+jets)","eq0b_eq1b_muon_1"),
    "Btag_mu_zero_mu_one_no_alphaT_Cut_2.C":("0 b-tags #rightarrow 1 b-tag (#mu+jets)","eq0b_eq1b_muon_2"),
    "Btag_mu_zero_mu_one_no_alphaT_Cut_3.C":("0 b-tags #rightarrow 1 b-tag (#mu+jets)","eq0b_eq1b_muon_3"),
    "Btag_mu_one_mu_greater_one_no_alphaT_Cut_all.C":("1 b-tag #rightarrow #geq 2 b-tags (#mu+jets)","eq0b_ge1b_muon_all"),
    "Btag_mu_one_mu_greater_one_no_alphaT_Cut_all.C":("1 b-tag #rightarrow #geq 2 b-tags (#mu+jets)","eq0b_ge1b_muon_all"),
    "Btag_mu_one_mu_greater_one_no_alphaT_Cut_all.C":("1 b-tag #rightarrow #geq 2 b-tags (#mu+jets)","eq0b_ge1b_muon_all"),
    "Btag_mu_one_mu_greater_one_no_alphaT_Cut_all.C":("1 b-tag #rightarrow #geq 2 b-tags (#mu+jets)","eq0b_ge1b_muon_all"),
    "Btag_mu_one_mu_two_no_alphaT_Cut_all.C":("1 b-tag #rightarrow 2 b-tags (#mu+jets)","eq1b_eq2b_muon_all"),
    "Btag_mu_one_mu_two_no_alphaT_Cut_1.C":("1 b-tag #rightarrow 2 b-tags (#mu+jets)","eq1b_eq2b_muon_1"),
    "Btag_mu_one_mu_two_no_alphaT_Cut_2.C":("1 b-tag #rightarrow 2 b-tags (#mu+jets)","eq1b_eq2b_muon_2"),
    "Btag_mu_one_mu_two_no_alphaT_Cut_3.C":("1 b-tag #rightarrow 2 b-tags (#mu+jets)","eq1b_eq2b_muon_3"),
    "Btag_mu_to_dimuon_no_alphaT_Cut_all.C":("#mu+jets #rightarrow #mu#mu+jets","muon_mumu_all"),
    "Btag_mu_to_dimuon_no_alphaT_Cut_1.C":("#mu+jets #rightarrow #mu#mu+jets","muon_mumu_1"),
    "Btag_mu_to_dimuon_no_alphaT_Cut_2.C":("#mu+jets #rightarrow #mu#mu+jets","muon_mumu_2"),
    "Btag_mu_to_dimuon_no_alphaT_Cut_3.C":("#mu+jets #rightarrow #mu#mu+jets","muon_mumu_3"),
    "Btag_gamma_to_dimuon_no_alphaT_Cut_all.C":("#gamma+jets #rightarrow #mu#mu+jets","phot_mumu_all"), 
    "Btag_gamma_to_dimuon_no_alphaT_Cut_1.C":("#gamma+jets #rightarrow #mu#mu+jets","phot_mumu_1"), 
    "Btag_gamma_to_dimuon_no_alphaT_Cut_2.C":("#gamma+jets #rightarrow #mu#mu+jets","phot_mumu_2"), 
    "Btag_gamma_to_dimuon_no_alphaT_Cut_3.C":("#gamma+jets #rightarrow #mu#mu+jets","phot_mumu_3"), 
    "Btag_gamma_to_dimuon_all.C":("#gamma+jets #rightarrow #mu#mu+jets","phot_mumu_all"),
    "JetCat_dimuon_to_dimuon.C":("2 #leq N_{jet} #leq 3 #rightarrow N_{jet} #geq 4 (#mu#mu+jets)","njet_mumu"),
    "JetCat_gamma_to_gamma.C":("2 #leq N_{jet} #leq 3 #rightarrow N_{jet} #geq 4 (#gamma+jets)","njet_phot"),
    "JetCat_muon_to_muon.C":("2 #leq N_{jet} #leq 3 #rightarrow N_{jet} #geq 4 (#mu+jets)","njet_muon"),
    "JetCat_eq2_ge4_dimuon_to_dimuon.C":("N_{jet} = 2 #rightarrow N_{jet} #geq 4 (#mu#mu+jets)","njet_mumu_2to4"),
    "JetCat_eq2_ge4_gamma_to_gamma.C":("N_{jet} = 2 #rightarrow N_{jet} #geq 4 (#gamma+jets)","njet_phot_2to4"),
    "JetCat_eq2_ge4_muon_to_muon.C":("N_{jet} = 2 #rightarrow N_{jet} #geq 4 (#mu+jets)","njet_muon_2to4"),
    "JetCat_eq2_eq3_dimuon_to_dimuon.C":("N_{jet} = 2 #rightarrow N_{jet} = 3 (#mu#mu+jets)","njet_mumu_2to3"),
    "JetCat_eq2_eq3_gamma_to_gamma.C":("N_{jet} = 2 #rightarrow N_{jet} = 3 (#gamma+jets)","njet_phot_2to3"),
    "JetCat_eq2_eq3_muon_to_muon.C":("N_{jet} = 2 #rightarrow N_{jet} = 3 (#mu+jets)","njet_muon_2to3"),
    "JetCat_eq3_ge4_dimuon_to_dimuon.C":("N_{jet} = 3 #rightarrow N_{jet} #geq 4 (#mu#mu+jets)","njet_mumu_3to4"),
    "JetCat_eq3_ge4_gamma_to_gamma.C":("N_{jet} = 3 #rightarrow N_{jet} #geq 4 (#gamma+jets)","njet_phot_3to4"),
    "JetCat_eq3_ge4_muon_to_muon.C":("N_{jet} = 3 #rightarrow N_{jet} #geq 4 (#mu+jets)","njet_muon_3to4"),
    # "Other"
    "Btag_gamma_zero_to_dimuon_zero_no_alphaT_Cut_all.C":("#gamma+jets #rightarrow #mu#mu+jets (0 b-tags)","phot_mumu_0b_all"),
    "Btag_gamma_zero_to_dimuon_zero_no_alphaT_Cut_1.C":("#gamma+jets #rightarrow #mu#mu+jets (0 b-tags)","phot_mumu_0b_1"),
    "Btag_gamma_zero_to_dimuon_zero_no_alphaT_Cut_2.C":("#gamma+jets #rightarrow #mu#mu+jets (0 b-tags)","phot_mumu_0b_2"),
    "Btag_gamma_zero_to_dimuon_zero_no_alphaT_Cut_3.C":("#gamma+jets #rightarrow #mu#mu+jets (0 b-tags)","phot_mumu_0b_3"),
    "Btag_greater_zero_mu_to_dimuon_zero_no_alphaT_Cut_all.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_all"),
    "Btag_greater_zero_mu_to_dimuon_zero_no_alphaT_Cut_1.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_1"),
    "Btag_greater_zero_mu_to_dimuon_zero_no_alphaT_Cut_2.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_2"),
    "Btag_greater_zero_mu_to_dimuon_zero_no_alphaT_Cut_3.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_3"),
    "Btag_mu_zero_mu_greater_one_no_alphaT_Cut_all.C":("0 b-tags #rightarrow #geq 1 b-tags (#mu+jets)","eq0b_ge1b_muon_all"),
    "Btag_mu_zero_mu_greater_one_no_alphaT_Cut_1.C":("0 b-tags #rightarrow #geq 1 b-tags (#mu+jets)","eq0b_ge1b_muon_1"),
    "Btag_mu_zero_mu_greater_one_no_alphaT_Cut_2.C":("0 b-tags #rightarrow #geq 1 b-tags (#mu+jets)","eq0b_ge1b_muon_2"),
    "Btag_mu_zero_mu_greater_one_no_alphaT_Cut_3.C":("0 b-tags #rightarrow #geq 1 b-tags (#mu+jets)","eq0b_ge1b_muon_3"),
    "Btag_mu_zero_mu_two_no_alphaT_Cut_all.C":("0 b-tags #rightarrow 2 b-tags (#mu+jets)","eq0b_eq2b_muon_all"),
    "Btag_mu_zero_mu_two_no_alphaT_Cut_1.C":("0 b-tags #rightarrow 2 b-tags (#mu+jets)","eq0b_eq2b_muon_1"),
    "Btag_mu_zero_mu_two_no_alphaT_Cut_2.C":("0 b-tags #rightarrow 2 b-tags (#mu+jets)","eq0b_eq2b_muon_2"),
    "Btag_mu_zero_mu_two_no_alphaT_Cut_3.C":("0 b-tags #rightarrow 2 b-tags (#mu+jets)","eq0b_eq2b_muon_3"),
    "Btag_mu_zero_to_dimuon_zero_no_alphaT_Cut_all.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_all"),
    "Btag_mu_zero_to_dimuon_zero_no_alphaT_Cut_1.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_1"),
    "Btag_mu_zero_to_dimuon_zero_no_alphaT_Cut_2.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_2"),
    "Btag_mu_zero_to_dimuon_zero_no_alphaT_Cut_3.C":("#mu+jets #rightarrow #mu#mu+jets (0 b-tags)","muon_mumu_0b_3"),
    }

################################################################################
# CLASS ########################################################################
################################################################################

class data :

    def __init__(self,
                 paths=[],
                 filenames=[],
                 label="",
                 file=False,
                 energy="8",
                 lumi="18.5",
                 prelim=False,
                 batch=False,
                 regions=[],
                 syst=[],
                 bins=[],
                 cat=None,
                 draw_fits="",
                 ) :
        
        # Data
        if len(paths) < len(filenames) :
            paths.extend( paths[-1:]*(len(filenames)- len(paths)) )
        self.paths_ = [ x.append("/")  if x[-1] != "/" else x for x in paths ]
        self.names_ = filenames
        self.files_ = [ x[0]+x[1] for x in zip(paths,filenames) ]
        self.timestamp_ = datetime.utcnow().strftime('%Y_%m_%d_%H_%M_%S')
        self.titles_ = master_titles_dict
        if len(label) > 0 : self.label_ = label
        else : self.label_ = "download"
        self.file_ = file
        self.stream_ = None
        self.batch_ = batch
        self.draw_ = draw_fits
        self.cat_ = cat

        # Histogram
        if len(bins) > 0 : self.bins_ = bins
        else : self.bins_ = [200.,275.,325.,375.,475.,575.,675.,775.,875.,975.,1075.,1175.]
        self.nbins_ = len(self.bins_) - 1
        if len(regions) > 0 : self.regions_ = regions
        else : self.regions_ = [ i for i in range(self.nbins_) ]
        self.markers_ = [24,5,25,26,28,30,32,27,31]
        self.size_ = [ 1.7 if x != 20 else 1.3 for x in self.markers_ ]
        self.offset_ = [ 3.+5.5*(x-(len(self.files_)/2)) for x in range(len(self.files_)) ]
        print self.offset_
        self.colours_ = [kRed+1,kBlue+1,kGreen+1,kYellow+1,kCyan+1,kMagenta,kOrange+1,kOrange-6]
        self.energy_ = energy
        self.lumi_ = lumi
        self.prelim_ = prelim
        self.syst_ = syst
        self.cl_ = (0.682689,0.9,0.9545,0.9973)

    def init(self) :
        
        if not os.path.exists(self.label_) :
            os.makedirs(self.label_)
        else : # create backup directory called 'label_timestamp'
            timestamp = self.timestamp_
            if os.path.isfile(self.label_+"/closure_tests.log") :
                f = open(self.label_+"/closure_tests.log","r")
                timestamp = f.readline().rstrip('\n').split()[1]
                f.close()
            os.renames(self.label_,"%s_%s"%(self.label_,timestamp))
            os.makedirs(self.label_)

        self.stream_ = open(self.label_+"/closure_tests.log","w")
        f = self.stream_
        print >>f, "Timestamp: %s"%(self.timestamp_)

        if self.file_ is True :
            self.data_ = self.read_from_file(self.label_+"/closure_tests.pkl")
        else :
            self.wget(self.files_)
            self.data_ = self.parse_files(self.names_)
            self.data_ = self.patch(self.data_)
            self.write_to_file(self.label_+"/closure_tests.pkl")

    def print_pretty(self,dict) :
        f = self.stream_
        for key,value in dict.iteritems() :
            print >>f, key
            for idx,tuple in enumerate(value) :
                print >>f, " ",tuple 
                
    def verbose(self) :
        f = self.stream_
        print >>f, "Read from file?",self.file_
        print >>f, "Label: '%s'"%(self.label_)
        print >>f, "Paths:"
        for i in self.paths_ : print >>f, "  ",i 
        print >>f,"Names:"
        for i in self.names_ : print >>f, "  ",i 
        print >>f, "Files:"
        for i in self.files_ : print >>f, "  ",i 
        print >>f, "Nbins:", self.nbins_
        print >>f, "Binning:", self.bins_
        print >>f, "Regions", self.regions_
        print >>f, "Contents:"
        self.print_pretty(self.data_)

    def write_to_file(self,file) :
        f = self.stream_
        print >>f, "Writing to file %s"%(file)
        output = open(file,'w')
        pickle.dump(self.data_,output)
            
    def read_from_file(self,file) :
        f = self.stream_
        print >>f, "Reading from file '%s'"%(file)
        output = open(file,'r')
        return pickle.load(output)

    def wget(self,files) :
        f = self.stream_
        if os.path.exists(self.label_) :
            for i in files :
                if i.startswith("http") : 
                    process = Popen(['wget','-P',self.label_,i], stdout=PIPE,stderr=PIPE)
                    stdout,stderr = process.communicate()
                    print >>f, stdout, stderr
                else : 
                    process = Popen(['cp',i,self.label_], stdout=PIPE,stderr=PIPE)
                    stdout,stderr = process.communicate()
                    print >>f, stdout, stderr
        else :
            print >>f, "Directory '%s' does not exist!"%(self.label_)
            quit()

    def parse_files(self,filenames) :
        dict = OrderedDict()
        gROOT.SetBatch(self.batch_)
        list_all = []
        for file in filenames :
            gROOT.ProcessLine('.x '+self.label_+"/"+file)
            list = []
            for point in range(grae.GetN()) : 
                if point == 0 : continue # GetPoint(0) is always empty!
                x = Double(0.)
                xeh = Double(0.)
                xel = Double(0.)
                y = Double(0.)
                yeh = Double(0.)
                yel = Double(0.)
#                if ( "gamma" in file and point > 3 ) or "gamma" not in file : 
                grae.GetPoint(point,x,y)
                xel = grae.GetErrorXlow(point)
                xeh = grae.GetErrorXhigh(point)
                yel = grae.GetErrorYlow(point)
                yeh = grae.GetErrorYhigh(point)
                tuple = (point-1,float(x),float(y),float(xel),float(xeh),float(yel),float(yeh))
                print "bin= %2.0f, coords= "%point,tuple
                list.append( tuple )
                list_all.append( (len(list_all),float(x),float(y),float(xel),float(xeh),float(yel),float(yeh)) )
                dict[file] = list
#        dict["all"] = list_all
        gROOT.SetBatch(kFALSE)
        return dict

    def patch(self,data) :
        for key,value in data.iteritems() :
            if data[key][0][1] == 225. :
                data[key][0] = (data[key][0][0],
                                237.5,
                                data[key][0][2],
                                data[key][0][3],
                                data[key][0][4],
                                data[key][0][5],
                                data[key][0][6])
            if data[key][2][1] == 375. :
                data[key][2] = (data[key][0][0],
                                350.,
                                data[key][0][2],
                                data[key][0][3],
                                data[key][0][4],
                                data[key][0][5],
                                data[key][0][6])
        return data

    def fill(self,input,index=None,pull=False) : 
        data = map(list,zip(*input)) # transpose to list of tuples to list of lists
        x = np.array( data[1] )
        xeh = np.array( data[3] )
        xel = np.array( data[4] )
        if not pull :
            try :
                if index is not None : x = x + self.offset_[index] # marker offsets
            except IndexError :
                pass 
            y = np.array( data[2] )
            yeh = np.array( data[5] )
            yel = np.array( data[6] )
        else :
            vals = [] 
            for val,errh,errl in zip(data[2],data[5],data[6]) :
                if   val > 0. : vals.append(val/errl if errl != 0. else -10.)
                elif val < 0. : vals.append(val/errh if errh != 0. else -10.)
                else          : vals.append(0.)
            y = np.array( vals )
            yeh = np.zeros_like(y)#np.ones_like(y)
            yel = np.zeros_like(y)#np.ones_like(y)
        plot = TGraphAsymmErrors(len(x),x,y,xel,xeh,yel,yeh)
        return plot

    def fit(self,plot,title="",width=1) :
        first = 0 if not title.count("phot") else self.bins_.index(375.)
        fit0 = TF1("fit0","pol0",self.bins_[first]-0.1,self.bins_[-1]+0.1)
        fit1 = TF1("fit1","pol1",self.bins_[first]-0.1,self.bins_[-1]+0.1)
        fit0.SetLineColor(kBlue)
        fit0.SetLineWidth(width)
        fit1.SetLineColor(kRed)
        fit1.SetLineWidth(width)
        plot.Fit(fit0,"RQ+" if self.draw_.count("pol0") else "RQN")
        plot.Fit(fit1,"RQ+" if self.draw_.count("pol1") else "RQN")
        f0 = ( fit0.GetParameter(0),
               fit0.GetParError(0),
               fit0.GetChisquare(), 
               fit0.GetNDF(),
               fit0.GetProb() )
        f1 = ( fit1.GetParameter(0),
               fit1.GetParError(0),
               fit1.GetParameter(1),
               fit1.GetParError(1),
               fit1.GetChisquare(), 
               fit1.GetNDF(), 
               fit1.GetProb() ) 
        return f0,f1

    def pulls(self) :
        his = TH1F("pulls","",100,-5.,5.)
        for key,val in self.data_.iteritems() :
            for idx,bin in enumerate(val) :
                val = bin[2]
                errh = bin[5]
                errl = bin[6]
                err = errl if val >= 0. else errh
                if val != 0. : 
                    his.Fill(val/err if err != 0. else -10.,1.)
        canvas = TCanvas("pulls","")
        his.Draw()
        canvas.SaveAs(self.label_+"/pulls.pdf")
        #input("")

    def pvalues( self, pvalues, name = "" ) :
        canvas = TCanvas(name,"")
        hist = TH1F(name+"_hist","",200,0.,1.)
        for i in pvalues : hist.Fill(i,1.)
        hist.Draw()
        canvas.SaveAs(self.label_+"/"+name.replace(" ","_")+".pdf")
       
    def plot(self,pulls=False) :
        if len(self.data_) == 0 :
            print "No data!"
            return

        setTDRStyle()
        
#        leg1 = TLegend( 0.15, 0.90-(0.055*len(self.data_), 0.35, 0.90 )
        leg1 = TLegend( 0.15, 0.89-(0.055*4), 0.35, 0.89 )
        leg1.SetFillColor(0)
        leg1.SetLineColor(0) 
        leg1.SetShadowColor(0) 
        leg1.SetTextFont(42)
        leg1.SetTextSize(0.04)

#        leg2 = TLegend( 0.55, 0.88-(0.055*4), 0.75, 0.88 )
        leg2 = TLegend( 0.15, 0.44-(0.055*5), 0.35, 0.44 )
        leg2.SetFillColor(0)
        leg2.SetLineColor(0) 
        leg2.SetShadowColor(0) 
        leg2.SetTextFont(42)
        leg2.SetTextSize(0.04)
        
        mg = TMultiGraph()

        if not pulls :
            plot = self.fill(self.systematics())
            plot.SetLineColor(kGray)
            plot.SetFillColor(kGray)
            mg.Add(plot,"2")
            leg1.AddEntry(plot,"Systematic uncertainty","f")

        fit0 = []
        fit1 = []

        for idx,key in enumerate(self.data_.keys()) :
            if key is "all" : continue
            plot = self.fill(self.data_[key],index=idx,pull=pulls)
            plot.SetTitle("")
            plot.SetMarkerStyle(self.markers_[idx])
            plot.SetMarkerSize(self.size_[idx])
            plot.SetMarkerColor(self.colours_[idx])
            plot.SetLineColor(self.colours_[idx])
#            plot.SetLineColor(1)
            plot.SetLineWidth(2)
            mg.Add(plot,"pZ")
            if idx < 3 : #(len(self.data_.keys())+2)/2
                leg1.AddEntry(plot,self.titles_[key][0],"p")
            else :
                leg2.AddEntry(plot,self.titles_[key][0],"p")
            if not pulls :
                f0,f1 = self.fit(plot,self.titles_[key][1],width = 3 if key is "all" else 1)
                fit0.append(f0)
                fit1.append(f1)

        key = "all"
        if key in self.data_.keys() :
            idx = len(self.data_.keys())
            plot = self.fill(self.data_[key],index=idx,pull=pulls)
            plot.SetTitle("")
            plot.SetMarkerStyle(1)
            plot.SetMarkerSize(10)
            plot.SetMarkerColor(1)
            plot.SetLineColor(0)
            plot.SetLineWidth(0)
            mg.Add(plot,"pZ")
            #leg.AddEntry(plot,self.titles_[key][0],"p")
            if not pulls :
                f0,f1 = self.fit(plot,self.titles_[key][1],width = 3 if key is "all" else 1)
                fit0.append(f0)
                fit1.append(f1)

        if not pulls :
            self.pvalues([i[4] for i in fit0],"p-values from constant fits")
            self.pvalues([i[6] for i in fit1],"p-values from linear fits")
            print "Constant fits:"
            for idx,key in enumerate(self.data_.keys()) :
                print " "+self.titles_[key][1].ljust(20)+", p0 = %6.3f+/-%.3f, chi2/dof = %5.2f/%i, p-value = %.2f"\
                    %(fit0[idx][0],fit0[idx][1],fit0[idx][2],fit0[idx][3],fit0[idx][4])
            print "Linear fits:"
            for idx,key in enumerate(self.data_.keys()) :
#                print " "+self.titles_[key][1].ljust(20)+", p0 = %6.3f+/-%.3f, p1 = %8.5f+/-%.5f, chi2/dof = %5.2f/%i, p-value = %.2f"\
#                    %(fit1[idx][0],fit1[idx][1],fit1[idx][2],fit1[idx][3],fit1[idx][4],fit1[idx][5],fit1[idx][6])
                print " " + self.titles_[key][1].ljust(20) + \
                    ", p0 = {:+5.3f}, p1 = {:+7.5f}, offset = {:+5.3f}, chi2/dof = {:5.2f}/{:2.0f}, p-value = {:4.2f}".format( \
                    ufloat(fit1[idx][0],fit1[idx][1]),
                    ufloat(fit1[idx][2],fit1[idx][3]),
                    ufloat(fit1[idx][0],fit1[idx][1])+self.bins_[0]*ufloat(fit1[idx][2],fit1[idx][3]), # assume uncorrelated
                    fit1[idx][4],
                    fit1[idx][5],
                    fit1[idx][6])
                
        canvas = TCanvas("Closure tests","",900,600)
        mg.Draw("ap")
        mg.GetXaxis().SetTitle("H_{T} (GeV)")
        mg.GetXaxis().SetTitleFont(42)
        if not pulls :
            mg.GetYaxis().SetTitle("( N_{obs} - N_{pred} ) / N_{pred}")
            #mg.GetYaxis().SetRangeUser(-0.3,0.7)
#            mg.GetYaxis().SetRangeUser(-1.1,2.1) # was 2.6
            mg.GetYaxis().SetRangeUser(-1.5,1.5) # was 2.6
            #mg.GetYaxis().SetRangeUser(-2.,4.)
        else :
            mg.GetYaxis().SetTitle("Pull")
            mg.GetYaxis().SetRangeUser(-5.,12.)
        mg.GetXaxis().SetRangeUser(200.,self.bins_[self.nbins_])#self.bins_[0],
        mg.GetXaxis().SetNdivisions(510)
        leg1.Draw("same")
        leg2.Draw("same")

        str1 = "CMS Preliminary" if self.prelim_ else "CMS"
        txt1 = TLatex(0.12,0.935,str1)
        txt1.SetNDC()
        #txt1.SetTextFont(42)
        txt1.SetTextSize(0.06)
        txt1.Draw("same")

        str3 = "%s fb^{-1} (%s TeV)" % ( self.lumi_, self.energy_ )
        txt3 = TLatex(0.76,0.935,str3)
        txt3.SetNDC()
        txt3.SetTextFont(42)
        txt3.SetTextSize(0.05)
        txt3.Draw("same")

        str2 = ""
        if self.cat_ is not None :
            if   self.cat_ == "eq2j" : str2 = "N_{jet} = 2"
            elif self.cat_ == "eq3j" : str2 = "N_{jet} = 3"
            elif self.cat_ == "le3j" : str2 = "2 #leq N_{jet} #leq 3"
            elif self.cat_ == "ge4j" : str2 = "      N_{jet} #geq 4"
            elif self.cat_ == "ge2j" : str2 = "N_{jet} #geq 2"
#            else : str2 = "n_{jet} ERROR!"
#        else :
#            temp = self.data_.keys()[0]
#            if  temp.count("_all") > 0 : str2 = "n_{jet} #geq 2"
#            elif temp.count("_2") > 0 : str2 = "2 #leq n_{jet} #leq 3"
#            elif temp.count("_3") > 0 : str2 = "n_{jet} #geq 4"
#            else : str2 = "n_{jet} ERROR!"

        txt2 = TLatex(0.6,0.8,str2)
        txt2.SetNDC()
        txt2.SetTextFont(42)
        txt2.SetTextSize(0.045)
        txt2.Draw()

        canvas.Update()
#        raw_input("")
        if not pulls :
            canvas.SaveAs(self.label_+"/summary_plot.pdf")
        else :
            canvas.SaveAs(self.label_+"/pulls_plot.pdf")
        #if not self.batch_ : input("Press any key to continue...")

    def systematic_old(self,values,errors,use_variance=True) :
        # as written in btag2012.C
        if use_variance :
            wei = [1./(x*x) for x in errors]
            tmp = sum(wei)
            wei = [x/tmp for x in wei]
            num = sum(wei)
            mean = sum([x*y for x,y in zip(values,wei)])
            var = sum([((x-mean)*(x-mean)*y) for x,y in zip(values,wei)])
            mean = mean/num
            var = var/num
            return (mean,math.sqrt(var))
        else : 
            confidence_level = 0.682689
            ordered = sorted(zip([abs(x) for x in values],errors))
            index = len(ordered)-1
            temp = int( confidence_level * len(ordered) )
            if temp < len(ordered) : 
                index = temp
                tmp3 = confidence_level * len(ordered) - float(index)
                if tmp3 > 0.5 : index += 1
                index -= 1
            return (0.,ordered[index][0])

    def systematic(self,values,errors,option=0,cl=1) :
        if option == 0 : # weighted mean and variance
            wei = [1./(x*x) if x != 0. else np.nan for x in errors]
            average = np.average(values, weights=wei)
            #variance = np.average((values-average)**2, weights=wei)
            variance = np.average([x**2 for x in errors],weights=wei)
            return (average,math.sqrt(average*average+variance))
        elif option == 1 : # weighted mean of abs(value)
            vals = [ abs(x) for x in values ]
            wei = [1./(x*x) if x != 0. else np.nan for x in errors]
            average = np.average(vals, weights=wei)
            variance = np.average((vals-average)**2, weights=wei)
            return (average,math.sqrt(average*average+variance))
        elif option == 2 : # coverage of central values
            ordered = sorted(zip([abs(x) for x in values],errors))
            index = int( self.cl_[cl] * len(ordered) )
            if index == len(ordered) : index -= index
            return (0.,ordered[index][0])
        else : # 
            print "ERROR: UNKNOWN CHOICE FOR SYST!"
            return (0.,0.)

    def systematics(self) :
        syst = []
        for idx in range(len(self.regions_)) :
            curr = self.regions_[idx]
            if idx == len(self.regions_) - 1 : next = len(self.bins_) - 1
            else : next = self.regions_[idx+1]
            val = []
            err = []
            for bin in range(curr,next) :
                for key in self.data_.keys() :
                    assert bin < len(self.data_[key]), "Problem with HT bins: bin={:.0f}, len={:.0f}".format(bin,len(self.data_[key]))
                    if self.data_[key][bin][1] > 0. :
                        val.append(self.data_[key][bin][2])
                        err.append(self.data_[key][bin][-1])
            (mean,error) = self.systematic(val,err)
            (meanabs,errorabs) = self.systematic(val,err,1)
            (m68,e68) = self.systematic(val,err,2,0)
            (m90,e90) = self.systematic(val,err,2,1)
            print "region: %2i, bin: %2i, ht: %4i, mean: %4.1f%%, stddev: %4.1f%%, sqrt(mean^2+var): %4.1f%%" \
                %(idx,self.regions_[idx],self.bins_[self.regions_[idx]],mean*100.,error*100.,sqrt(mean*mean+error*error)*100.) 
#            print "region: %i, mean: %.1f%%, stddev: %.1f%%, sqrt(mean^2+var): %.1f%%, '%.1f%% coverage': %.1f%%, '%.1f%% coverage': %.1f%%" \
#                %(idx,mean*100.,error*100.,sqrt(mean*mean+error*error)*100.,self.cl_[0]*100.,e68*100.,self.cl_[1]*100.,e90*100.)
            xe = (self.bins_[next]-self.bins_[curr]) / 2.
            x = self.bins_[curr] + xe
            if idx < len(self.syst_) : error = self.syst_[idx]
            syst.append( (idx,x,0.,xe-2.,xe-2.,error,error) )
        return syst
        
################################################################################
# CONFIGS ######################################################################
################################################################################

le3j = [
    "Btag_mu_to_mu_with_without_alphaT_2.C",
    "Btag_mu_zero_mu_one_no_alphaT_Cut_2.C",
    "Btag_mu_one_mu_two_no_alphaT_Cut_2.C",
    "Btag_mu_to_dimuon_no_alphaT_Cut_2.C",
    "Btag_gamma_to_dimuon_no_alphaT_Cut_2.C",
    ]

ge4j = [ x.replace("_2","_3") for x in le3j ]

njet = [
    "JetCat_muon_to_muon.C",
    "JetCat_gamma_to_gamma.C",
    "JetCat_dimuon_to_dimuon.C",
    ]

for index in [0,1] : # 0=le3j, 1=ge4j

    conf_8tev_20fb_test = data(
        paths=["./input/"],
        cat=["le3j","ge4j"][index],
        filenames=[le3j+njet,ge4j+njet][index],
        regions=[0,1,2,3,5,7,9],
        syst=[[0.04,0.06,0.06,0.08,0.12,0.17,0.19]*2,[0.06,0.06,0.11,0.11,0.18,0.20,0.26]*2][index],
        #draw_fits="pol0",
        label = "download_"+["le3j","ge4j"][index],
        )

    conf_8tev_20fb_test.init()
    conf_8tev_20fb_test.verbose()
    # conf_8tev_20fb_test.pulls()
    # conf_8tev_20fb_test.plot(pulls=True)
    conf_8tev_20fb_test.plot()

