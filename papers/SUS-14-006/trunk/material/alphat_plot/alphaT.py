import ROOT as r
from setTDRStyle import setTDRStyle
from array import *
from histos import *
from collections import OrderedDict as odict 

################################################################################
# Params

setTDRStyle()
r.gStyle.SetOptFit(0)
r.gStyle.SetOptStat(0)

################################################################################
# Canvas

c = r.TCanvas("","")
c.Range(0.,0.,1.,1.)
c.SetFillColor(0)
c.SetBorderMode(0)
c.SetBorderSize(0)
c.SetTickx(1)
c.SetTicky(1)
c.SetFrameBorderMode(0)
#c.SetLogy()
c.Draw()

################################################################################
# Upper pad

c.cd()
u = r.TPad("","",0.,0.25,1.,1.)
u.Range(0.,0.,1.,1.)
u.SetFillColor(0)
u.SetBorderMode(0)
u.SetBorderSize(0)
u.SetFrameBorderMode(0)
u.SetTickx(1) 
u.SetTicky(1)
u.SetLogy()
u.Draw()
u.cd()

################################################################################
# Add blank histo

upper = Histo(name="",title="",min=0.5,max=5000.)
upper.h_.SetNdivisions(508,"XY")
upper.h_.SetTickLength(0.03,"XY")
upper.h_.SetTitleSize(0.06,"X")
upper.h_.SetTitleSize(0.06,"Y")
upper.h_.SetLabelSize(0.045,"X")
upper.h_.SetLabelSize(0.045,"Y")
upper.rebin()
upper.h_.GetXaxis().SetRangeUser(0.55,3.5)
upper.draw()

str1 = "CMS"
txt1 = r.TLatex(0.12,0.935,str1)
txt1.SetNDC()
txt1.SetTextFont(62)
txt1.SetTextSize(0.06)
txt1.Draw("same")

str2 = "Supplementary"
txt2 = r.TLatex(0.22,0.935,str2)
txt2.SetNDC()
txt2.SetTextFont(52)
txt2.SetTextSize(0.055)
txt2.Draw("same")

str3 = "%s fb^{-1} (%s TeV)" % ( 18.5, 8 )
txt3 = r.TLatex(0.69,0.935,str3)
txt3.SetNDC()
txt3.SetTextFont(42)
txt3.SetTextSize(0.06)
txt3.Draw("same")

total.draw("samehist")

sm.h_.SetMarkerSize(0.)
sm.h_.SetLineStyle(1)
sm.h_.SetLineColor(r.kGray+1)
sm.h_.SetLineWidth(3)
sm.h_.SetFillStyle(3004)
sm.draw("sameE1")

lostlepton.draw("samehist")
residual.draw("samehist")
qcd.draw("samehist")
sm.draw("samehist")
#r.gStyle.SetErrorX(0.)
data.draw("same")

r.gPad.RedrawAxis()

leg = r.TLegend(0.45,0.5,0.7,0.9,"","brNDC");
leg.SetTextFont(42)
leg.SetTextSize(0.045)
leg.SetBorderSize(0)
leg.SetLineColor(0)
leg.SetFillColor(0)
for sample,title,opts in [(data.h_,"Data","p"),
                          (sm.h_,"SM total","lf"),
                          (total.h_,"Z#rightarrow#nu#bar{#nu}+jets","f"),
                          (lostlepton.h_,"W#rightarrowl#nu+jets, t#bar{t}+jets","f"),
                          (residual.h_,"Residual SM","f"),
                          (qcd.h_,"QCD multijet","f"),
                          ] :
    print sample,title
    entry = leg.AddEntry(sample,title,opts)
#    entry->SetLineColor(4)
#    entry->SetLineStyle(1)
#    entry->SetLineWidth(3)
#    entry->SetMarkerColor(1)
#    entry->SetMarkerStyle(21)
#    entry->SetMarkerSize(1)
#    entry->SetTextFont(62)
    
leg.Draw("same")


################################################################################
# Lower pad

c.cd()
d = r.TPad("","",0.,0.01,1.,0.26)
d.Range(0.,0.,1.,1.)
d.SetFillColor(0)
d.SetBorderMode(0)
d.SetBorderSize(0)
d.SetFrameBorderMode(0)
d.SetTickx(1)
d.SetTicky(1)
#d.SetLogy()
d.Draw()
d.cd()

################################################################################
# Add blank histo

lower = Histo(name="",title="",min=0.5,max=1.5,)
lower.h_.SetLineWidth(2)
lower.h_.SetNdivisions(508,"X")
lower.h_.SetNdivisions(502,"Y")
lower.h_.SetTickLength(0.09,"X")
lower.h_.SetTickLength(0.03,"Y")
lower.h_.SetLabelSize(0.135,"X")
lower.h_.SetLabelSize(0.135,"Y")
lower.h_.SetTitle(";;Data / MC")
lower.h_.SetTitleSize(0.18,"Y")
lower.h_.SetTitleOffset(0.3,"Y")
lower.rebin()
lower.h_.GetXaxis().SetRangeUser(0.55,3.5)
lower.draw()

line = r.TLine(0.55,1.,3.5,1.)
line.SetLineWidth(1)
line.SetLineStyle(2)

mcstat.draw("sameE2")
line.Draw("same")
ratio.draw("same")

################################################################################
# Update canvas and save 

c.Modified()
c.Update()
c.SaveAs("temp.pdf")
#raw_input("")
