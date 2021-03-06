void AlphaT_all_btag_one_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_one_200_275/AlphaT_all/cannameAlphaT_all
//=========  (Wed Aug 24 11:54:29 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_one_200_275/AlphaT_all = new TCanvas("canvasbtag_one_200_275/AlphaT_all", "cannameAlphaT_all",0,0,1200,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_one_200_275/AlphaT_all->SetHighLightColor(2);
   canvasbtag_one_200_275/AlphaT_all->Range(0,0,1,1);
   canvasbtag_one_200_275/AlphaT_all->SetFillColor(0);
   canvasbtag_one_200_275/AlphaT_all->SetBorderMode(0);
   canvasbtag_one_200_275/AlphaT_all->SetBorderSize(2);
   canvasbtag_one_200_275/AlphaT_all->SetTickx(1);
   canvasbtag_one_200_275/AlphaT_all->SetTicky(1);
   canvasbtag_one_200_275/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.563311,3.4875,4.483727);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1882[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1768 = new TH1D("plot__1768","",24, xAxis1882);
   plot__1768->SetBinContent(10,650);
   plot__1768->SetBinContent(11,584);
   plot__1768->SetBinContent(12,641);
   plot__1768->SetBinContent(13,402);
   plot__1768->SetBinContent(14,304);
   plot__1768->SetBinContent(15,192.5);
   plot__1768->SetBinContent(16,131);
   plot__1768->SetBinContent(17,88.2);
   plot__1768->SetBinContent(18,40);
   plot__1768->SetBinContent(19,21.6);
   plot__1768->SetBinContent(20,14);
   plot__1768->SetBinContent(21,11.6);
   plot__1768->SetBinContent(22,6.2);
   plot__1768->SetBinContent(23,49);
   plot__1768->SetBinContent(24,0.6304348);
   plot__1768->SetBinError(10,25.4951);
   plot__1768->SetBinError(11,24.16609);
   plot__1768->SetBinError(12,25.31798);
   plot__1768->SetBinError(13,20.04994);
   plot__1768->SetBinError(14,17.4356);
   plot__1768->SetBinError(15,9.810708);
   plot__1768->SetBinError(16,8.093207);
   plot__1768->SetBinError(17,4.2);
   plot__1768->SetBinError(18,2.828427);
   plot__1768->SetBinError(19,2.078461);
   plot__1768->SetBinError(20,1.67332);
   plot__1768->SetBinError(21,1.077033);
   plot__1768->SetBinError(22,2.68);
   plot__1768->SetBinError(23,4.949747);
   plot__1768->SetBinError(24,0.0675897);
   plot__1768->SetMinimum(0.11);
   plot__1768->SetMaximum(7568.738);
   plot__1768->SetEntries(4348);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1768->SetLineColor(ci);
   plot__1768->SetLineWidth(2);
   plot__1768->SetMarkerStyle(20);
   plot__1768->SetMarkerSize(1.5);
   plot__1768->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1768->GetXaxis()->SetRange(1,23);
   plot__1768->GetXaxis()->SetLabelFont(42);
   plot__1768->GetXaxis()->SetLabelSize(0.035);
   plot__1768->GetXaxis()->SetTitleSize(0.035);
   plot__1768->GetXaxis()->SetTitleFont(42);
   plot__1768->GetYaxis()->SetTitle("Events");
   plot__1768->GetYaxis()->SetLabelFont(42);
   plot__1768->GetYaxis()->SetLabelSize(0.035);
   plot__1768->GetYaxis()->SetTitleSize(0.035);
   plot__1768->GetYaxis()->SetTitleOffset(1.3);
   plot__1768->GetYaxis()->SetTitleFont(42);
   plot__1768->GetZaxis()->SetLabelFont(42);
   plot__1768->GetZaxis()->SetLabelSize(0.035);
   plot__1768->GetZaxis()->SetTitleSize(0.035);
   plot__1768->GetZaxis()->SetTitleFont(42);
   plot__1768->Draw("PE0");
   Double_t xAxis1883[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1769 = new TH1D("plot__1769","",24, xAxis1883);
   plot__1769->SetBinContent(10,139.5202);
   plot__1769->SetBinContent(11,114.493);
   plot__1769->SetBinContent(12,121.1046);
   plot__1769->SetBinContent(13,74.3367);
   plot__1769->SetBinContent(14,51.42894);
   plot__1769->SetBinContent(15,34.02508);
   plot__1769->SetBinContent(16,22.90933);
   plot__1769->SetBinContent(17,14.49529);
   plot__1769->SetBinContent(18,8.351799);
   plot__1769->SetBinContent(19,4.093263);
   plot__1769->SetBinContent(20,3.516287);
   plot__1769->SetBinContent(21,1.979756);
   plot__1769->SetBinContent(22,1.125578);
   plot__1769->SetBinContent(23,9.362592);
   plot__1769->SetBinContent(24,0.1238497);
   plot__1769->SetBinError(10,4.798662);
   plot__1769->SetBinError(11,4.645456);
   plot__1769->SetBinError(12,4.786347);
   plot__1769->SetBinError(13,3.714763);
   plot__1769->SetBinError(14,3.123774);
   plot__1769->SetBinError(15,1.786024);
   plot__1769->SetBinError(16,1.488044);
   plot__1769->SetBinError(17,0.7365512);
   plot__1769->SetBinError(18,0.5593947);
   plot__1769->SetBinError(19,0.3938711);
   plot__1769->SetBinError(20,0.3776283);
   plot__1769->SetBinError(21,0.1936425);
   plot__1769->SetBinError(22,0.1473469);
   plot__1769->SetBinError(23,2.16363);
   plot__1769->SetBinError(24,0.01322946);
   plot__1769->SetEntries(5161);
   plot__1769->SetLineColor(4);
   plot__1769->SetLineWidth(3);
   plot__1769->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1769->GetXaxis()->SetRange(1,23);
   plot__1769->GetXaxis()->SetLabelFont(42);
   plot__1769->GetXaxis()->SetLabelSize(0.035);
   plot__1769->GetXaxis()->SetTitleSize(0.035);
   plot__1769->GetXaxis()->SetTitleFont(42);
   plot__1769->GetYaxis()->SetTitle("Events/0.025");
   plot__1769->GetYaxis()->SetLabelFont(42);
   plot__1769->GetYaxis()->SetLabelSize(0.035);
   plot__1769->GetYaxis()->SetTitleSize(0.035);
   plot__1769->GetYaxis()->SetTitleFont(42);
   plot__1769->GetZaxis()->SetLabelFont(42);
   plot__1769->GetZaxis()->SetLabelSize(0.035);
   plot__1769->GetZaxis()->SetTitleSize(0.035);
   plot__1769->GetZaxis()->SetTitleFont(42);
   plot__1769->Draw("HISTSAME");
   Double_t xAxis1884[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1770 = new TH1D("plot__1770","",24, xAxis1884);
   plot__1770->SetBinContent(10,385.2341);
   plot__1770->SetBinContent(11,318.6447);
   plot__1770->SetBinContent(12,291.8794);
   plot__1770->SetBinContent(13,191.2657);
   plot__1770->SetBinContent(14,131.7809);
   plot__1770->SetBinContent(15,86.64513);
   plot__1770->SetBinContent(16,53.83023);
   plot__1770->SetBinContent(17,27.49915);
   plot__1770->SetBinContent(18,12.60758);
   plot__1770->SetBinContent(19,6.463481);
   plot__1770->SetBinContent(20,3.988437);
   plot__1770->SetBinContent(21,2.482701);
   plot__1770->SetBinContent(22,1.185351);
   plot__1770->SetBinContent(23,6.97567);
   plot__1770->SetBinContent(24,0.09124174);
   plot__1770->SetBinError(10,9.126794);
   plot__1770->SetBinError(11,8.210864);
   plot__1770->SetBinError(12,7.487846);
   plot__1770->SetBinError(13,5.989414);
   plot__1770->SetBinError(14,4.964036);
   plot__1770->SetBinError(15,2.850082);
   plot__1770->SetBinError(16,2.246037);
   plot__1770->SetBinError(17,1.013099);
   plot__1770->SetBinError(18,0.694094);
   plot__1770->SetBinError(19,0.4926932);
   plot__1770->SetBinError(20,0.3866768);
   plot__1770->SetBinError(21,0.2115141);
   plot__1770->SetBinError(22,0.14586);
   plot__1770->SetBinError(23,1.867575);
   plot__1770->SetBinError(24,0.01082085);
   plot__1770->SetEntries(10832);
   plot__1770->SetLineColor(2);
   plot__1770->SetLineWidth(3);
   plot__1770->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1770->GetXaxis()->SetRange(1,23);
   plot__1770->GetXaxis()->SetLabelFont(42);
   plot__1770->GetXaxis()->SetLabelSize(0.035);
   plot__1770->GetXaxis()->SetTitleSize(0.035);
   plot__1770->GetXaxis()->SetTitleFont(42);
   plot__1770->GetYaxis()->SetTitle("Events/0.025");
   plot__1770->GetYaxis()->SetLabelFont(42);
   plot__1770->GetYaxis()->SetLabelSize(0.035);
   plot__1770->GetYaxis()->SetTitleSize(0.035);
   plot__1770->GetYaxis()->SetTitleFont(42);
   plot__1770->GetZaxis()->SetLabelFont(42);
   plot__1770->GetZaxis()->SetLabelSize(0.035);
   plot__1770->GetZaxis()->SetTitleSize(0.035);
   plot__1770->GetZaxis()->SetTitleFont(42);
   plot__1770->Draw("HISTSAME");
   Double_t xAxis1885[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1771 = new TH1D("plot__1771","",24, xAxis1885);
   plot__1771->SetBinContent(10,191.5954);
   plot__1771->SetBinContent(11,169.6623);
   plot__1771->SetBinContent(12,189.5769);
   plot__1771->SetBinContent(13,133.8126);
   plot__1771->SetBinContent(14,93.56182);
   plot__1771->SetBinContent(15,66.39007);
   plot__1771->SetBinContent(16,43.00769);
   plot__1771->SetBinContent(17,28.08417);
   plot__1771->SetBinContent(18,15.26376);
   plot__1771->SetBinContent(19,9.74735);
   plot__1771->SetBinContent(20,6.800162);
   plot__1771->SetBinContent(21,3.99808);
   plot__1771->SetBinContent(22,2.475209);
   plot__1771->SetBinContent(23,22.13883);
   plot__1771->SetBinContent(24,0.2992495);
   plot__1771->SetBinContent(25,0.1027713);
   plot__1771->SetBinError(10,3.290414);
   plot__1771->SetBinError(11,3.518804);
   plot__1771->SetBinError(12,4.130947);
   plot__1771->SetBinError(13,3.658163);
   plot__1771->SetBinError(14,2.866547);
   plot__1771->SetBinError(15,1.728591);
   plot__1771->SetBinError(16,1.407886);
   plot__1771->SetBinError(17,0.7255219);
   plot__1771->SetBinError(18,0.5327433);
   plot__1771->SetBinError(19,0.4388571);
   plot__1771->SetBinError(20,0.3445673);
   plot__1771->SetBinError(21,0.1854042);
   plot__1771->SetBinError(22,0.1512198);
   plot__1771->SetBinError(23,3.327073);
   plot__1771->SetBinError(24,0.01499406);
   plot__1771->SetBinError(25,0.1027713);
   plot__1771->SetEntries(26854);
   plot__1771->SetLineColor(5);
   plot__1771->SetLineWidth(3);
   plot__1771->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1771->GetXaxis()->SetRange(1,23);
   plot__1771->GetXaxis()->SetLabelFont(42);
   plot__1771->GetXaxis()->SetLabelSize(0.035);
   plot__1771->GetXaxis()->SetTitleSize(0.035);
   plot__1771->GetXaxis()->SetTitleFont(42);
   plot__1771->GetYaxis()->SetTitle("Events/0.025");
   plot__1771->GetYaxis()->SetLabelFont(42);
   plot__1771->GetYaxis()->SetLabelSize(0.035);
   plot__1771->GetYaxis()->SetTitleSize(0.035);
   plot__1771->GetYaxis()->SetTitleFont(42);
   plot__1771->GetZaxis()->SetLabelFont(42);
   plot__1771->GetZaxis()->SetLabelSize(0.035);
   plot__1771->GetZaxis()->SetTitleSize(0.035);
   plot__1771->GetZaxis()->SetTitleFont(42);
   plot__1771->Draw("HISTSAME");
   Double_t xAxis1886[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1772 = new TH1D("plot__1772","",24, xAxis1886);
   plot__1772->SetBinContent(10,1.35851);
   plot__1772->SetBinContent(11,0.8297759);
   plot__1772->SetBinContent(12,1.154389);
   plot__1772->SetBinContent(13,0.506868);
   plot__1772->SetBinContent(14,0.4743373);
   plot__1772->SetBinContent(15,0.2536714);
   plot__1772->SetBinContent(16,1.387902);
   plot__1772->SetBinContent(17,0.05632851);
   plot__1772->SetBinContent(18,0.04155054);
   plot__1772->SetBinContent(19,0.03066365);
   plot__1772->SetBinContent(20,0.03935582);
   plot__1772->SetBinContent(21,0.008151886);
   plot__1772->SetBinContent(22,0.005581362);
   plot__1772->SetBinContent(23,0.02572511);
   plot__1772->SetBinContent(24,0.0003728277);
   plot__1772->SetBinError(10,0.280287);
   plot__1772->SetBinError(11,0.2300038);
   plot__1772->SetBinError(12,0.2537219);
   plot__1772->SetBinError(13,0.1581132);
   plot__1772->SetBinError(14,0.1595104);
   plot__1772->SetBinError(15,0.08682212);
   plot__1772->SetBinError(16,1.183083);
   plot__1772->SetBinError(17,0.0251301);
   plot__1772->SetBinError(18,0.01902262);
   plot__1772->SetBinError(19,0.01950885);
   plot__1772->SetBinError(20,0.02030468);
   plot__1772->SetBinError(21,0.006443122);
   plot__1772->SetBinError(22,0.005581362);
   plot__1772->SetBinError(23,0.1134132);
   plot__1772->SetBinError(24,0.0002644168);
   plot__1772->SetEntries(166);
   plot__1772->SetLineColor(6);
   plot__1772->SetLineWidth(3);
   plot__1772->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1772->GetXaxis()->SetRange(1,23);
   plot__1772->GetXaxis()->SetLabelFont(42);
   plot__1772->GetXaxis()->SetLabelSize(0.035);
   plot__1772->GetXaxis()->SetTitleSize(0.035);
   plot__1772->GetXaxis()->SetTitleFont(42);
   plot__1772->GetYaxis()->SetTitle("Events/0.025");
   plot__1772->GetYaxis()->SetLabelFont(42);
   plot__1772->GetYaxis()->SetLabelSize(0.035);
   plot__1772->GetYaxis()->SetTitleSize(0.035);
   plot__1772->GetYaxis()->SetTitleFont(42);
   plot__1772->GetZaxis()->SetLabelFont(42);
   plot__1772->GetZaxis()->SetLabelSize(0.035);
   plot__1772->GetZaxis()->SetTitleSize(0.035);
   plot__1772->GetZaxis()->SetTitleFont(42);
   plot__1772->Draw("HISTSAME");
   Double_t xAxis1887[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1773 = new TH1D("plot__1773","",24, xAxis1887);
   plot__1773->SetBinContent(10,32.54278);
   plot__1773->SetBinContent(11,26.51563);
   plot__1773->SetBinContent(12,31.89387);
   plot__1773->SetBinContent(13,16.63375);
   plot__1773->SetBinContent(14,13.63641);
   plot__1773->SetBinContent(15,10.24859);
   plot__1773->SetBinContent(16,6.066165);
   plot__1773->SetBinContent(17,3.652633);
   plot__1773->SetBinContent(18,0.9471244);
   plot__1773->SetBinContent(19,1.205772);
   plot__1773->SetBinContent(20,0.5075087);
   plot__1773->SetBinContent(21,0.3782026);
   plot__1773->SetBinContent(22,0.2764984);
   plot__1773->SetBinContent(23,1.127575);
   plot__1773->SetBinContent(24,0.01485242);
   plot__1773->SetBinError(10,3.915619);
   plot__1773->SetBinError(11,3.647758);
   plot__1773->SetBinError(12,3.694914);
   plot__1773->SetBinError(13,2.67121);
   plot__1773->SetBinError(14,2.389611);
   plot__1773->SetBinError(15,1.537048);
   plot__1773->SetBinError(16,1.146491);
   plot__1773->SetBinError(17,0.5758242);
   plot__1773->SetBinError(18,0.291335);
   plot__1773->SetBinError(19,0.3076797);
   plot__1773->SetBinError(20,0.2175978);
   plot__1773->SetBinError(21,0.1359103);
   plot__1773->SetBinError(22,0.1116121);
   plot__1773->SetBinError(23,0.7508578);
   plot__1773->SetBinError(24,0.00619182);
   plot__1773->SetEntries(517);
   plot__1773->SetLineColor(40);
   plot__1773->SetLineWidth(3);
   plot__1773->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1773->GetXaxis()->SetRange(1,23);
   plot__1773->GetXaxis()->SetLabelFont(42);
   plot__1773->GetXaxis()->SetLabelSize(0.035);
   plot__1773->GetXaxis()->SetTitleSize(0.035);
   plot__1773->GetXaxis()->SetTitleFont(42);
   plot__1773->GetYaxis()->SetTitle("Events/0.025");
   plot__1773->GetYaxis()->SetLabelFont(42);
   plot__1773->GetYaxis()->SetLabelSize(0.035);
   plot__1773->GetYaxis()->SetTitleSize(0.035);
   plot__1773->GetYaxis()->SetTitleFont(42);
   plot__1773->GetZaxis()->SetLabelFont(42);
   plot__1773->GetZaxis()->SetLabelSize(0.035);
   plot__1773->GetZaxis()->SetTitleSize(0.035);
   plot__1773->GetZaxis()->SetTitleFont(42);
   plot__1773->Draw("HISTSAME");
   Double_t xAxis1888[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1774 = new TH1D("plot__1774","",24, xAxis1888);
   plot__1774->SetBinContent(10,6.622799);
   plot__1774->SetBinContent(11,7.715619);
   plot__1774->SetBinContent(12,7.866119);
   plot__1774->SetBinContent(13,4.942143);
   plot__1774->SetBinContent(14,5.258852);
   plot__1774->SetBinContent(15,4.003209);
   plot__1774->SetBinContent(16,3.655198);
   plot__1774->SetBinContent(17,2.8398);
   plot__1774->SetBinContent(18,1.744906);
   plot__1774->SetBinContent(19,1.055303);
   plot__1774->SetBinContent(20,0.8971029);
   plot__1774->SetBinContent(21,0.4814501);
   plot__1774->SetBinContent(22,0.3274491);
   plot__1774->SetBinContent(23,2.247185);
   plot__1774->SetBinContent(24,0.03090244);
   plot__1774->SetBinError(10,0.7236013);
   plot__1774->SetBinError(11,0.7378499);
   plot__1774->SetBinError(12,0.691256);
   plot__1774->SetBinError(13,0.5090556);
   plot__1774->SetBinError(14,0.6102368);
   plot__1774->SetBinError(15,0.3352269);
   plot__1774->SetBinError(16,0.3170296);
   plot__1774->SetBinError(17,0.1699701);
   plot__1774->SetBinError(18,0.1307437);
   plot__1774->SetBinError(19,0.1073077);
   plot__1774->SetBinError(20,0.103949);
   plot__1774->SetBinError(21,0.05219096);
   plot__1774->SetBinError(22,0.0458892);
   plot__1774->SetBinError(23,1.059997);
   plot__1774->SetBinError(24,0.003433971);
   plot__1774->SetEntries(3486);
   plot__1774->SetLineColor(44);
   plot__1774->SetLineWidth(3);
   plot__1774->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1774->GetXaxis()->SetRange(1,23);
   plot__1774->GetXaxis()->SetLabelFont(42);
   plot__1774->GetXaxis()->SetLabelSize(0.035);
   plot__1774->GetXaxis()->SetTitleSize(0.035);
   plot__1774->GetXaxis()->SetTitleFont(42);
   plot__1774->GetYaxis()->SetTitle("Events/0.025");
   plot__1774->GetYaxis()->SetLabelFont(42);
   plot__1774->GetYaxis()->SetLabelSize(0.035);
   plot__1774->GetYaxis()->SetTitleSize(0.035);
   plot__1774->GetYaxis()->SetTitleFont(42);
   plot__1774->GetZaxis()->SetLabelFont(42);
   plot__1774->GetZaxis()->SetLabelSize(0.035);
   plot__1774->GetZaxis()->SetTitleSize(0.035);
   plot__1774->GetZaxis()->SetTitleFont(42);
   plot__1774->Draw("HISTSAME");
   Double_t xAxis1889[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1775 = new TH1D("plot__1775","",24, xAxis1889);
   plot__1775->SetBinContent(20,0.9096022);
   plot__1775->SetBinError(20,0.9096022);
   plot__1775->SetEntries(26);
   plot__1775->SetLineColor(7);
   plot__1775->SetLineStyle(10);
   plot__1775->SetLineWidth(3);
   plot__1775->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1775->GetXaxis()->SetRange(1,23);
   plot__1775->GetXaxis()->SetLabelFont(42);
   plot__1775->GetXaxis()->SetLabelSize(0.035);
   plot__1775->GetXaxis()->SetTitleSize(0.035);
   plot__1775->GetXaxis()->SetTitleFont(42);
   plot__1775->GetYaxis()->SetTitle("Events/0.025");
   plot__1775->GetYaxis()->SetLabelFont(42);
   plot__1775->GetYaxis()->SetLabelSize(0.035);
   plot__1775->GetYaxis()->SetTitleSize(0.035);
   plot__1775->GetYaxis()->SetTitleFont(42);
   plot__1775->GetZaxis()->SetLabelFont(42);
   plot__1775->GetZaxis()->SetLabelSize(0.035);
   plot__1775->GetZaxis()->SetTitleSize(0.035);
   plot__1775->GetZaxis()->SetTitleFont(42);
   plot__1775->Draw("HISTSAME");
   Double_t xAxis1890[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1776 = new TH1D("plot__1776","",24, xAxis1890);
   plot__1776->SetBinContent(10,756.8738);
   plot__1776->SetBinContent(11,637.8611);
   plot__1776->SetBinContent(12,643.4752);
   plot__1776->SetBinContent(13,421.4978);
   plot__1776->SetBinContent(14,296.1413);
   plot__1776->SetBinContent(15,201.5657);
   plot__1776->SetBinContent(16,130.8565);
   plot__1776->SetBinContent(17,76.62737);
   plot__1776->SetBinContent(18,38.95673);
   plot__1776->SetBinContent(19,22.59583);
   plot__1776->SetBinContent(20,16.65845);
   plot__1776->SetBinContent(21,9.328342);
   plot__1776->SetBinContent(22,5.395667);
   plot__1776->SetBinContent(23,41.87758);
   plot__1776->SetBinContent(24,0.5604686);
   plot__1776->SetBinContent(25,0.1027713);
   plot__1776->SetBinError(10,11.53632);
   plot__1776->SetBinError(11,10.73704);
   plot__1776->SetBinError(12,10.49935);
   plot__1776->SetBinError(13,8.394891);
   plot__1776->SetBinError(14,6.980314);
   plot__1776->SetBinError(15,4.096743);
   plot__1776->SetBinError(16,3.472137);
   plot__1776->SetBinError(17,1.567276);
   plot__1776->SetBinError(18,1.086663);
   plot__1776->SetBinError(19,0.8348886);
   plot__1776->SetBinError(20,1.138767);
   plot__1776->SetBinError(21,0.371278);
   plot__1776->SetBinError(22,0.2836334);
   plot__1776->SetBinError(23,4.575892);
   plot__1776->SetBinError(24,0.02381453);
   plot__1776->SetBinError(25,0.1027713);
   plot__1776->SetEntries(47042);
   plot__1776->SetLineColor(3);
   plot__1776->SetLineWidth(3);
   plot__1776->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1776->GetXaxis()->SetRange(1,23);
   plot__1776->GetXaxis()->SetLabelFont(42);
   plot__1776->GetXaxis()->SetLabelSize(0.035);
   plot__1776->GetXaxis()->SetTitleSize(0.035);
   plot__1776->GetXaxis()->SetTitleFont(42);
   plot__1776->GetYaxis()->SetTitle("Events/0.025");
   plot__1776->GetYaxis()->SetLabelFont(42);
   plot__1776->GetYaxis()->SetLabelSize(0.035);
   plot__1776->GetYaxis()->SetTitleSize(0.035);
   plot__1776->GetYaxis()->SetTitleFont(42);
   plot__1776->GetZaxis()->SetLabelFont(42);
   plot__1776->GetZaxis()->SetLabelSize(0.035);
   plot__1776->GetZaxis()->SetTitleSize(0.035);
   plot__1776->GetZaxis()->SetTitleFont(42);
   plot__1776->Draw("HISTSAME");
   
   Double_t Graph_from_plot_fx1457[24] = {
   0.05,
   0.125,
   0.2,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.85,
   0.95,
   1.125,
   1.375,
   1.625,
   1.875,
   2.25,
   2.75,
   3.05,
   6.55};
   Double_t Graph_from_plot_fy1457[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.9096022,
   0,
   0,
   0,
   0};
   Double_t Graph_from_plot_fex1457[24] = {
   0.05,
   0.025,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.05,
   0.05,
   0.125,
   0.125,
   0.125,
   0.125,
   0.25,
   0.25,
   0.05,
   3.45};
   Double_t Graph_from_plot_fey1457[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.9096022,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1457,Graph_from_plot_fy1457,Graph_from_plot_fex1457,Graph_from_plot_fey1457);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1457 = new TH1F("Graph_Graph_from_plot1457","",100,0,11);
   Graph_Graph_from_plot1457->SetMinimum(0.002001125);
   Graph_Graph_from_plot1457->SetMaximum(2.001125);
   Graph_Graph_from_plot1457->SetDirectory(0);
   Graph_Graph_from_plot1457->SetStats(0);
   Graph_Graph_from_plot1457->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1457->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1457->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1457->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1457->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1457->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1457->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1457->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1457->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1457->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1457);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1458[24] = {
   0.05,
   0.125,
   0.2,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.85,
   0.95,
   1.125,
   1.375,
   1.625,
   1.875,
   2.25,
   2.75,
   3.05,
   6.55};
   Double_t Graph_from_plot_fy1458[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   756.8738,
   637.8611,
   643.4752,
   421.4978,
   296.1413,
   201.5657,
   130.8565,
   76.62737,
   38.95673,
   22.59583,
   16.65845,
   9.328342,
   5.395667,
   41.87758,
   0.5604686};
   Double_t Graph_from_plot_fex1458[24] = {
   0.05,
   0.025,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.05,
   0.05,
   0.125,
   0.125,
   0.125,
   0.125,
   0.25,
   0.25,
   0.05,
   3.45};
   Double_t Graph_from_plot_fey1458[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   11.53632,
   10.73704,
   10.49935,
   8.394891,
   6.980314,
   4.096743,
   3.472137,
   1.567276,
   1.086663,
   0.8348886,
   1.138767,
   0.371278,
   0.2836334,
   4.575892,
   0.02381453};
   gre = new TGraphErrors(24,Graph_from_plot_fx1458,Graph_from_plot_fy1458,Graph_from_plot_fex1458,Graph_from_plot_fey1458);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1458 = new TH1F("Graph_Graph_from_plot1458","",100,0,11);
   Graph_Graph_from_plot1458->SetMinimum(0.8452512);
   Graph_Graph_from_plot1458->SetMaximum(845.2512);
   Graph_Graph_from_plot1458->SetDirectory(0);
   Graph_Graph_from_plot1458->SetStats(0);
   Graph_Graph_from_plot1458->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1458->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1458->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1458->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1458->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1458->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1458->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1458->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1458->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1458->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1458);
   
   gre->Draw("2");
   
   TLegend *leg = new TLegend(0.72,0.54,0.9,0.76,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AlphaT_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("plot","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_one_200_2    Jet Multiplicity=all");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7,0.85,"CMS 2012, 8TeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.7,0.79,"\\int L dt = 18.493 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis1891[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1777 = new TH1D("plot__1777","",24, xAxis1891);
   plot__1777->SetBinContent(10,650);
   plot__1777->SetBinContent(11,584);
   plot__1777->SetBinContent(12,641);
   plot__1777->SetBinContent(13,402);
   plot__1777->SetBinContent(14,304);
   plot__1777->SetBinContent(15,192.5);
   plot__1777->SetBinContent(16,131);
   plot__1777->SetBinContent(17,88.2);
   plot__1777->SetBinContent(18,40);
   plot__1777->SetBinContent(19,21.6);
   plot__1777->SetBinContent(20,14);
   plot__1777->SetBinContent(21,11.6);
   plot__1777->SetBinContent(22,6.2);
   plot__1777->SetBinContent(23,49);
   plot__1777->SetBinContent(24,0.6304348);
   plot__1777->SetBinError(10,25.4951);
   plot__1777->SetBinError(11,24.16609);
   plot__1777->SetBinError(12,25.31798);
   plot__1777->SetBinError(13,20.04994);
   plot__1777->SetBinError(14,17.4356);
   plot__1777->SetBinError(15,9.810708);
   plot__1777->SetBinError(16,8.093207);
   plot__1777->SetBinError(17,4.2);
   plot__1777->SetBinError(18,2.828427);
   plot__1777->SetBinError(19,2.078461);
   plot__1777->SetBinError(20,1.67332);
   plot__1777->SetBinError(21,1.077033);
   plot__1777->SetBinError(22,2.68);
   plot__1777->SetBinError(23,4.949747);
   plot__1777->SetBinError(24,0.0675897);
   plot__1777->SetMinimum(0.11);
   plot__1777->SetMaximum(7568.738);
   plot__1777->SetEntries(4348);

   ci = TColor::GetColor("#000099");
   plot__1777->SetLineColor(ci);
   plot__1777->SetLineWidth(2);
   plot__1777->SetMarkerStyle(20);
   plot__1777->SetMarkerSize(1.5);
   plot__1777->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1777->GetXaxis()->SetRange(1,23);
   plot__1777->GetXaxis()->SetLabelFont(42);
   plot__1777->GetXaxis()->SetLabelSize(0.035);
   plot__1777->GetXaxis()->SetTitleSize(0.035);
   plot__1777->GetXaxis()->SetTitleFont(42);
   plot__1777->GetYaxis()->SetTitle("Events");
   plot__1777->GetYaxis()->SetLabelFont(42);
   plot__1777->GetYaxis()->SetLabelSize(0.035);
   plot__1777->GetYaxis()->SetTitleSize(0.035);
   plot__1777->GetYaxis()->SetTitleOffset(1.3);
   plot__1777->GetYaxis()->SetTitleFont(42);
   plot__1777->GetZaxis()->SetLabelFont(42);
   plot__1777->GetZaxis()->SetLabelSize(0.035);
   plot__1777->GetZaxis()->SetTitleSize(0.035);
   plot__1777->GetZaxis()->SetTitleFont(42);
   plot__1777->Draw("PSAME");
   u->Modified();
   canvasbtag_one_200_275/AlphaT_all->cd();
  
// ------------>Primitives in pad: d
   TPad *d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.3875,-0.25,3.4875,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis1892[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1778 = new TH1D("plot__1778","",24, xAxis1892);
   plot__1778->SetBinContent(10,0.8587957);
   plot__1778->SetBinContent(11,0.9155598);
   plot__1778->SetBinContent(12,0.9961534);
   plot__1778->SetBinContent(13,0.9537417);
   plot__1778->SetBinContent(14,1.026537);
   plot__1778->SetBinContent(15,0.9550234);
   plot__1778->SetBinContent(16,1.001096);
   plot__1778->SetBinContent(17,1.151025);
   plot__1778->SetBinContent(18,1.02678);
   plot__1778->SetBinContent(19,0.9559285);
   plot__1778->SetBinContent(20,0.8404141);
   plot__1778->SetBinContent(21,1.243522);
   plot__1778->SetBinContent(22,1.14907);
   plot__1778->SetBinContent(23,1.170077);
   plot__1778->SetBinContent(24,1.124835);
   plot__1778->SetBinError(10,0.03368474);
   plot__1778->SetBinError(11,0.03788613);
   plot__1778->SetBinError(12,0.03934569);
   plot__1778->SetBinError(13,0.04756831);
   plot__1778->SetBinError(14,0.05887593);
   plot__1778->SetBinError(15,0.0486725);
   plot__1778->SetBinError(16,0.06184795);
   plot__1778->SetBinError(17,0.0548107);
   plot__1778->SetBinError(18,0.07260433);
   plot__1778->SetBinError(19,0.09198426);
   plot__1778->SetBinError(20,0.1004487);
   plot__1778->SetBinError(21,0.1154581);
   plot__1778->SetBinError(22,0.4966948);
   plot__1778->SetBinError(23,0.1181956);
   plot__1778->SetBinError(24,0.120595);
   plot__1778->SetMinimum(0);
   plot__1778->SetMaximum(2);
   plot__1778->SetEntries(583.0941);

   ci = TColor::GetColor("#000099");
   plot__1778->SetLineColor(ci);
   plot__1778->SetLineWidth(2);
   plot__1778->SetMarkerStyle(20);
   plot__1778->SetMarkerSize(1.5);
   plot__1778->GetXaxis()->SetRange(1,23);
   plot__1778->GetXaxis()->SetLabelFont(42);
   plot__1778->GetXaxis()->SetLabelSize(0.12);
   plot__1778->GetXaxis()->SetTitleSize(0.035);
   plot__1778->GetXaxis()->SetTitleFont(42);
   plot__1778->GetYaxis()->SetTitle("Data/MC");
   plot__1778->GetYaxis()->SetNdivisions(505);
   plot__1778->GetYaxis()->SetLabelFont(42);
   plot__1778->GetYaxis()->SetLabelSize(0.11);
   plot__1778->GetYaxis()->SetTitleSize(0.1);
   plot__1778->GetYaxis()->SetTitleOffset(0.5);
   plot__1778->GetYaxis()->SetTitleFont(42);
   plot__1778->GetZaxis()->SetLabelFont(42);
   plot__1778->GetZaxis()->SetLabelSize(0.035);
   plot__1778->GetZaxis()->SetTitleSize(0.035);
   plot__1778->GetZaxis()->SetTitleFont(42);
   plot__1778->Draw("p");
   
   Double_t Graph_from_plot_fx1459[24] = {
   0.05,
   0.125,
   0.2,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.85,
   0.95,
   1.125,
   1.375,
   1.625,
   1.875,
   2.25,
   2.75,
   3.05,
   6.55};
   Double_t Graph_from_plot_fy1459[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1.124835};
   Double_t Graph_from_plot_fex1459[24] = {
   0.05,
   0.025,
   0.05,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.05,
   0.05,
   0.125,
   0.125,
   0.125,
   0.125,
   0.25,
   0.25,
   0.05,
   3.45};
   Double_t Graph_from_plot_fey1459[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01524206,
   0.01683288,
   0.01631663,
   0.01991681,
   0.02357089,
   0.0203246,
   0.02653393,
   0.02045322,
   0.0278941,
   0.03694879,
   0.06835973,
   0.03980107,
   0.05256688,
   0.1092683,
   0.0424904};
   gre = new TGraphErrors(24,Graph_from_plot_fx1459,Graph_from_plot_fy1459,Graph_from_plot_fex1459,Graph_from_plot_fey1459);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1459 = new TH1F("Graph_Graph_from_plot1459","",100,0,11);
   Graph_Graph_from_plot1459->SetMinimum(0.8630723);
   Graph_Graph_from_plot1459->SetMaximum(1.194985);
   Graph_Graph_from_plot1459->SetDirectory(0);
   Graph_Graph_from_plot1459->SetStats(0);
   Graph_Graph_from_plot1459->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1459->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1459->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1459->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1459->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1459->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1459->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1459->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1459->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1459->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1459);
   
   gre->Draw("2");
   Double_t xAxis1893[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1779 = new TH1D("plot__1779","",24, xAxis1893);
   plot__1779->SetBinContent(10,0.8587957);
   plot__1779->SetBinContent(11,0.9155598);
   plot__1779->SetBinContent(12,0.9961534);
   plot__1779->SetBinContent(13,0.9537417);
   plot__1779->SetBinContent(14,1.026537);
   plot__1779->SetBinContent(15,0.9550234);
   plot__1779->SetBinContent(16,1.001096);
   plot__1779->SetBinContent(17,1.151025);
   plot__1779->SetBinContent(18,1.02678);
   plot__1779->SetBinContent(19,0.9559285);
   plot__1779->SetBinContent(20,0.8404141);
   plot__1779->SetBinContent(21,1.243522);
   plot__1779->SetBinContent(22,1.14907);
   plot__1779->SetBinContent(23,1.170077);
   plot__1779->SetBinContent(24,1.124835);
   plot__1779->SetBinError(10,0.03368474);
   plot__1779->SetBinError(11,0.03788613);
   plot__1779->SetBinError(12,0.03934569);
   plot__1779->SetBinError(13,0.04756831);
   plot__1779->SetBinError(14,0.05887593);
   plot__1779->SetBinError(15,0.0486725);
   plot__1779->SetBinError(16,0.06184795);
   plot__1779->SetBinError(17,0.0548107);
   plot__1779->SetBinError(18,0.07260433);
   plot__1779->SetBinError(19,0.09198426);
   plot__1779->SetBinError(20,0.1004487);
   plot__1779->SetBinError(21,0.1154581);
   plot__1779->SetBinError(22,0.4966948);
   plot__1779->SetBinError(23,0.1181956);
   plot__1779->SetBinError(24,0.120595);
   plot__1779->SetMinimum(0);
   plot__1779->SetMaximum(2);
   plot__1779->SetEntries(583.0941);

   ci = TColor::GetColor("#000099");
   plot__1779->SetLineColor(ci);
   plot__1779->SetLineWidth(2);
   plot__1779->SetMarkerStyle(20);
   plot__1779->SetMarkerSize(1.5);
   plot__1779->GetXaxis()->SetRange(1,23);
   plot__1779->GetXaxis()->SetLabelFont(42);
   plot__1779->GetXaxis()->SetLabelSize(0.12);
   plot__1779->GetXaxis()->SetTitleSize(0.035);
   plot__1779->GetXaxis()->SetTitleFont(42);
   plot__1779->GetYaxis()->SetTitle("Data/MC");
   plot__1779->GetYaxis()->SetNdivisions(505);
   plot__1779->GetYaxis()->SetLabelFont(42);
   plot__1779->GetYaxis()->SetLabelSize(0.11);
   plot__1779->GetYaxis()->SetTitleSize(0.1);
   plot__1779->GetYaxis()->SetTitleOffset(0.5);
   plot__1779->GetYaxis()->SetTitleFont(42);
   plot__1779->GetZaxis()->SetLabelFont(42);
   plot__1779->GetZaxis()->SetLabelSize(0.035);
   plot__1779->GetZaxis()->SetTitleSize(0.035);
   plot__1779->GetZaxis()->SetTitleFont(42);
   plot__1779->Draw("PSAME");
   d->Modified();
   canvasbtag_one_200_275/AlphaT_all->cd();
   canvasbtag_one_200_275/AlphaT_all->Modified();
   canvasbtag_one_200_275/AlphaT_all->cd();
   canvasbtag_one_200_275/AlphaT_all->SetSelected(canvasbtag_one_200_275/AlphaT_all);
}
