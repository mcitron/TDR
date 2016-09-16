import ROOT as r
from array import *
from histo import *

################################################################################
# histos

data = Histo(name="data",title="data")
zinv = Histo(name="zinv",title="zinv",fill_colour=r.kYellow-1)
wjets = Histo(name="wjets",title="wjets",fill_colour=r.kBlue-1)
ttbar = Histo(name="ttbar",title="ttbar",fill_colour=r.kRed-1)
top = Histo(name="top",title="top",)
vv = Histo(name="vv",title="vv",)
dy = Histo(name="dy",title="dy",)
qcd = Histo(name="qcd",title="qcd",fill_colour=r.kGreen+1)

for his in [data,zinv,wjets,ttbar,top,vv,qcd,dy] :
    for bin in range(1,25) :
        his.h_.SetBinContent(bin,0.)
        his.h_.SetBinError(bin,0.)

################################################################################
# data

data.h_.SetBinContent(10,1992)
data.h_.SetBinContent(11,891)
data.h_.SetBinContent(12,489)
data.h_.SetBinContent(13,282)
data.h_.SetBinContent(14,196)
data.h_.SetBinContent(15,134)
data.h_.SetBinContent(16,81.5)
data.h_.SetBinContent(17,63.8)
data.h_.SetBinContent(18,25)
data.h_.SetBinContent(19,17.8)
data.h_.SetBinContent(20,11.4)
data.h_.SetBinContent(21,7.7)
data.h_.SetBinContent(22,5)
data.h_.SetBinContent(23,37)
data.h_.SetBinContent(24,0.4927536)
data.h_.SetBinContent(25,3)
#
data.h_.SetBinError(10,44.63183)
data.h_.SetBinError(11,29.84962)
data.h_.SetBinError(12,22.11334)
data.h_.SetBinError(13,16.79286)
data.h_.SetBinError(14,14)
data.h_.SetBinError(15,8.185353)
data.h_.SetBinError(16,6.383573)
data.h_.SetBinError(17,3.572114)
data.h_.SetBinError(18,2.236068)
data.h_.SetBinError(19,1.886796)
data.h_.SetBinError(20,1.509967)
data.h_.SetBinError(21,2.86)
data.h_.SetBinError(22,2.49)
data.h_.SetBinError(23,4.301163)
data.h_.SetBinError(24,0.05975515)
data.h_.SetBinError(25,1.732051)

################################################################################
# zinv

zinv.h_.SetBinContent(10,1152.625)
zinv.h_.SetBinContent(11,540.7049)
zinv.h_.SetBinContent(12,314.9733)
zinv.h_.SetBinContent(13,208.6266)
zinv.h_.SetBinContent(14,152.5478)
zinv.h_.SetBinContent(15,99.16189)
zinv.h_.SetBinContent(16,67.19905)
zinv.h_.SetBinContent(17,41.05439)
zinv.h_.SetBinContent(18,23.27321)
zinv.h_.SetBinContent(19,14.19416)
zinv.h_.SetBinContent(20,9.166636)
zinv.h_.SetBinContent(21,6.078778)
zinv.h_.SetBinContent(22,3.525501)
zinv.h_.SetBinContent(23,29.8942)
zinv.h_.SetBinContent(24,0.3910986)
zinv.h_.SetBinContent(25,0.04289528)
#
zinv.h_.SetBinError(10,6.445137)
zinv.h_.SetBinError(11,4.442034)
zinv.h_.SetBinError(12,3.396145)
zinv.h_.SetBinError(13,2.731718)
zinv.h_.SetBinError(14,2.39556)
zinv.h_.SetBinError(15,1.33815)
zinv.h_.SetBinError(16,1.12969)
zinv.h_.SetBinError(17,0.5492571)
zinv.h_.SetBinError(18,0.4172388)
zinv.h_.SetBinError(19,0.3260169)
zinv.h_.SetBinError(20,0.2606007)
zinv.h_.SetBinError(21,0.1538561)
zinv.h_.SetBinError(22,0.1138722)
zinv.h_.SetBinError(23,3.866148)
zinv.h_.SetBinError(24,0.01065667)
zinv.h_.SetBinError(25,0.03150106)

################################################################################
# wjets

wjets.h_.SetBinContent(10,726.5083)
wjets.h_.SetBinContent(11,291.5661)
wjets.h_.SetBinContent(12,151.8848)
wjets.h_.SetBinContent(13,92.65054)
wjets.h_.SetBinContent(14,62.79167)
wjets.h_.SetBinContent(15,44.27159)
wjets.h_.SetBinContent(16,27.48831)
wjets.h_.SetBinContent(17,16.53622)
wjets.h_.SetBinContent(18,8.78931)
wjets.h_.SetBinContent(19,5.214575)
wjets.h_.SetBinContent(20,3.791569)
wjets.h_.SetBinContent(21,2.194399)
wjets.h_.SetBinContent(22,1.075883)
wjets.h_.SetBinContent(23,10.93732)
wjets.h_.SetBinContent(24,0.1432702)
#
wjets.h_.SetBinError(10,9.716561)
wjets.h_.SetBinError(11,6.151474)
wjets.h_.SetBinError(12,4.466375)
wjets.h_.SetBinError(13,3.457505)
wjets.h_.SetBinError(14,2.846228)
wjets.h_.SetBinError(15,1.69201)
wjets.h_.SetBinError(16,1.320649)
wjets.h_.SetBinError(17,0.6533589)
wjets.h_.SetBinError(18,0.4757117)
wjets.h_.SetBinError(19,0.3626218)
wjets.h_.SetBinError(20,0.3204718)
wjets.h_.SetBinError(21,0.1662452)
wjets.h_.SetBinError(22,0.1164917)
wjets.h_.SetBinError(23,2.338517)
wjets.h_.SetBinError(24,0.01159208)

################################################################################
# ttbar

ttbar.h_.SetBinContent(10,425.2993)
ttbar.h_.SetBinContent(11,142.8058)
ttbar.h_.SetBinContent(12,66.65722)
ttbar.h_.SetBinContent(13,31.5637)
ttbar.h_.SetBinContent(14,14.15671)
ttbar.h_.SetBinContent(15,10.0772)
ttbar.h_.SetBinContent(16,5.841492)
ttbar.h_.SetBinContent(17,4.511365)
ttbar.h_.SetBinContent(18,3.352351)
ttbar.h_.SetBinContent(19,2.177744)
ttbar.h_.SetBinContent(20,0.6345291)
ttbar.h_.SetBinContent(21,0.2756837)
ttbar.h_.SetBinContent(22,0.17314)
ttbar.h_.SetBinContent(23,1.407604)
ttbar.h_.SetBinContent(24,0.01850558)
#
ttbar.h_.SetBinError(10,9.64109)
ttbar.h_.SetBinError(11,5.6046)
ttbar.h_.SetBinError(12,3.834852)
ttbar.h_.SetBinError(13,2.65132)
ttbar.h_.SetBinError(14,1.741593)
ttbar.h_.SetBinError(15,1.044945)
ttbar.h_.SetBinError(16,0.7865596)
ttbar.h_.SetBinError(17,0.4471666)
ttbar.h_.SetBinError(18,0.380144)
ttbar.h_.SetBinError(19,0.3108884)
ttbar.h_.SetBinError(20,0.1703943)
ttbar.h_.SetBinError(21,0.07491844)
ttbar.h_.SetBinError(22,0.06054502)
ttbar.h_.SetBinError(23,0.8389292)
ttbar.h_.SetBinError(24,0.005467781)

################################################################################
# single top

top.h_.SetBinContent(10,34.74446)
top.h_.SetBinContent(11,9.424167)
top.h_.SetBinContent(12,4.808138)
top.h_.SetBinContent(13,3.053311)
top.h_.SetBinContent(14,0.9654441)
top.h_.SetBinContent(15,1.025198)
top.h_.SetBinContent(16,0.6901071)
top.h_.SetBinContent(17,0.205021)
top.h_.SetBinContent(18,0.1148209)
top.h_.SetBinContent(19,0.1188806)
top.h_.SetBinContent(20,0.1250022)
top.h_.SetBinContent(21,0.1149339)
top.h_.SetBinContent(22,0.06160481)
top.h_.SetBinContent(23,0.07343113)
top.h_.SetBinContent(24,0.001064219)
#
top.h_.SetBinError(10,4.165412)
top.h_.SetBinError(11,2.195914)
top.h_.SetBinError(12,1.502392)
top.h_.SetBinError(13,1.272964)
top.h_.SetBinError(14,0.7206369)
top.h_.SetBinError(15,0.5141824)
top.h_.SetBinError(16,0.40033)
top.h_.SetBinError(17,0.1449769)
top.h_.SetBinError(18,0.1148209)
top.h_.SetBinError(19,0.08969889)
top.h_.SetBinError(20,0.1250022)
top.h_.SetBinError(21,0.08145432)
top.h_.SetBinError(22,0.06160481)
top.h_.SetBinError(23,0.1916131)
top.h_.SetBinError(24,0.001064219)

################################################################################
# diboson

vv.h_.SetBinContent(10,19.42469)
vv.h_.SetBinContent(11,9.498996)
vv.h_.SetBinContent(12,6.410034)
vv.h_.SetBinContent(13,3.862521)
vv.h_.SetBinContent(14,1.96157)
vv.h_.SetBinContent(15,2.321725)
vv.h_.SetBinContent(16,1.311248)
vv.h_.SetBinContent(17,0.9146535)
vv.h_.SetBinContent(18,0.6041027)
vv.h_.SetBinContent(19,0.3158509)
vv.h_.SetBinContent(20,0.2450055)
vv.h_.SetBinContent(21,0.1697639)
vv.h_.SetBinContent(22,0.03920198)
vv.h_.SetBinContent(23,0.5268657)
vv.h_.SetBinContent(24,0.007504478)
vv.h_.SetBinContent(25,0.02151559)
#
vv.h_.SetBinError(10,1.090861)
vv.h_.SetBinError(11,0.6992941)
vv.h_.SetBinError(12,0.6266587)
vv.h_.SetBinError(13,0.4546417)
vv.h_.SetBinError(14,0.2947484)
vv.h_.SetBinError(15,0.2518715)
vv.h_.SetBinError(16,0.1556821)
vv.h_.SetBinError(17,0.08975497)
vv.h_.SetBinError(18,0.07661839)
vv.h_.SetBinError(19,0.04173984)
vv.h_.SetBinError(20,0.03498326)
vv.h_.SetBinError(21,0.03159897)
vv.h_.SetBinError(22,0.01006092)
vv.h_.SetBinError(23,0.5132571)
vv.h_.SetBinError(24,0.001546903)
vv.h_.SetBinError(25,0.02151559)

################################################################################
# dy

dy.h_.SetBinContent(10,4.870033)
dy.h_.SetBinContent(11,1.888692)
dy.h_.SetBinContent(12,0.7797303)
dy.h_.SetBinContent(13,0.3640969)
dy.h_.SetBinContent(14,0.1774983)
dy.h_.SetBinContent(15,0.2177473)
dy.h_.SetBinContent(16,0.05374718)
dy.h_.SetBinContent(17,0.06688104)
dy.h_.SetBinContent(18,0.04195466)
dy.h_.SetBinContent(19,0.01818669)
dy.h_.SetBinContent(20,0.03974799)
dy.h_.SetBinContent(21,0.004387412)
dy.h_.SetBinContent(22,0.006627694)
dy.h_.SetBinContent(23,0.02451327)
dy.h_.SetBinContent(24,0.0003552648)
#
dy.h_.SetBinError(10,0.4284431)
dy.h_.SetBinError(11,0.2646773)
dy.h_.SetBinError(12,0.167484)
dy.h_.SetBinError(13,0.1110763)
dy.h_.SetBinError(14,0.0663095)
dy.h_.SetBinError(15,0.06540102)
dy.h_.SetBinError(16,0.03534168)
dy.h_.SetBinError(17,0.0245953)
dy.h_.SetBinError(18,0.01906329)
dy.h_.SetBinError(19,0.009210275)
dy.h_.SetBinError(20,0.02326867)
dy.h_.SetBinError(21,0.003109939)
dy.h_.SetBinError(22,0.006627694)
dy.h_.SetBinError(23,0.1107097)
dy.h_.SetBinError(24,0.0002536321)

################################################################################
# qcd

qcd.h_.SetBinContent(10,7.220288)
qcd.h_.SetBinContent(11,7.30815)
qcd.h_.SetBinError(10,7.220288)
qcd.h_.SetBinError(11,7.30815)

################################################################################
# sums

residual = Histo(name="residual",fill_colour=r.kOrange-1)
residual.h_.Add(qcd.h_,1.) # previous
residual.h_.Add(dy.h_,1.)
residual.h_.Add(vv.h_,1.)
residual.h_.Add(top.h_,1.)

tot_ttbar = Histo(name="tot_ttbar",fill_colour=r.kRed)
tot_ttbar.h_.Add(residual.h_,1.) # previous
tot_ttbar.h_.Add(ttbar.h_,1.)

tot_wjets = Histo(name="tot_wjets",fill_colour=r.kBlue)
tot_wjets.h_.Add(tot_ttbar.h_,1.) # previous
tot_wjets.h_.Add(wjets.h_,1.)

total = Histo(name="total",fill_colour=r.kYellow)
total.h_.Add(tot_wjets.h_,1.) # previous
total.h_.Add(zinv.h_,1.) 

sm = Histo(name="sm")
sm.h_.Add(total.h_,1.) # previous

mcstat = Histo(name="mcstat",fill_colour=r.kBlack)
mcstat.h_.SetLineWidth(2)
mcstat.h_.SetFillStyle(3004)
mcstat.h_.Add(total.h_,1.) # previous
for bin in range( mcstat.h_.GetXaxis().GetNbins() ) :
    val = mcstat.h_.GetBinContent(bin+1)
    err = mcstat.h_.GetBinError(bin+1)
    #print bin,val,err,err/val if val > 0. else 0. 
    mcstat.h_.SetBinContent(bin+1,1.)
    mcstat.h_.SetBinError(bin+1, err/val if val > 0. else 0. )
    
nd = data.h_.Integral(1,25)
nt = total.h_.Integral(1,25)
nr = data.h_.Integral(1,25)/total.h_.Integral(1,25)
print "Data/MC scale factor:",nr

data.rebin()

for his in [total,tot_wjets,tot_ttbar,residual,zinv,wjets,ttbar,top,vv,qcd,dy,mcstat,sm] :
    his.rebin()

for his in [total,tot_wjets,tot_ttbar,residual,zinv,wjets,ttbar,top,vv,qcd,dy,sm] :
    his.h_.Scale(nr)

ratio = Histo(name="ratio")
ratio.rebin()
ratio.h_.Add(data.h_,1.)
ratio.h_.Divide(total.h_)
