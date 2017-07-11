import ROOT as r
from array import *
        
class Histo :

    def __init__( self, 
                  name = "",
                  title = "",
                  min = None,
                  max = None,
                  entries = None,
                  fill_colour = None,
                  ) :
        
        self.binning_ = array( 'd', [0., 0.1, 0.15, 0.25, 0.3, 
                                     0.35, 0.4, 0.45, 0.5, 0.55, 
                                     0.6, 0.65, 0.7, 0.75, 0.8, 
                                     0.9, 1., 1.25, 1.5, 1.75, 
                                     2., 2.5, 3., 3.1, 10.] )

        self.h_ = r.TH1D(name,title,len(self.binning_)-1,self.binning_)
        #
        if min is not None : self.h_.SetMinimum(min)
        if max is not None : self.h_.SetMaximum(max)
        if entries is not None : self.h_.SetEntries(entries)
        if fill_colour is not None : 
            self.h_.SetMarkerStyle(20)
            self.h_.SetMarkerSize(0.)
            self.h_.SetMarkerColor(fill_colour)
            self.h_.SetFillColor(fill_colour)
            self.h_.SetLineColor(fill_colour)#r.kBlack)
            self.h_.SetLineWidth(2)
        else :
            self.h_.SetMarkerStyle(20)
            self.h_.SetMarkerSize(1.5)
            self.h_.SetLineColor(r.kBlack)
            self.h_.SetLineWidth(3)
        #
        self.h_.GetXaxis().SetRangeUser(0.55,3.1)
        self.h_.GetXaxis().SetTitle("#alpha_{T}")
        self.h_.GetYaxis().SetTitle("Events / 0.05")
        self.h_.Sumw2()

    def rebin( self ) : 

        binning = array( 'd', [0.55,0.6,0.65,0.7,0.75,
                               0.8,0.9,1.,
                               1.5,2.0,2.5,3.] )
        binning.append( self.binning_[-1] )

        for bin in range( self.h_.GetXaxis().GetNbins() ) :
            factor = self.h_.GetBinWidth(bin+1) / 0.05
            self.h_.SetBinContent( bin+1, self.h_.GetBinContent( bin+1 )*factor )
            self.h_.SetBinError( bin+1, self.h_.GetBinError( bin+1 )*factor )

        self.h_ = self.h_.Rebin(len(binning)-1,
                                str(self.h_.GetTitle()+"_rebinned"),
                                binning)

        for bin in range( self.h_.GetXaxis().GetNbins()-1 ) :
            factor = self.h_.GetBinWidth(bin+1) / 0.05
            self.h_.SetBinContent( bin+1, self.h_.GetBinContent( bin+1 )/factor )
            self.h_.SetBinError( bin+1, self.h_.GetBinError( bin+1 )/factor )

        bin = self.h_.GetXaxis().GetNbins()
        val = self.h_.GetBinContent( bin )
        err = self.h_.GetBinError( bin )

        binning3 = binning[-3] 
        binning2 = binning[-2] 
        width = binning2 - binning3
        binning[-1] = binning2 + width

        self.h_ = self.h_.Rebin(len(binning)-1,
                                str(self.h_.GetTitle()+"_rebinned"),
                                binning)

        self.h_.SetBinContent( bin, val )
        self.h_.SetBinError( bin, err )

    def draw( self, string = "" ) :
        self.h_.Draw(string)


