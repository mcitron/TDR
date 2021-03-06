void Stacked_AlphaT_2_btag_one_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_one_200_275/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:30 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_one_200_275/AlphaT_2 = new TCanvas("canvasbtag_one_200_275/AlphaT_2", "cannameAlphaT_2",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_one_200_275/AlphaT_2->SetHighLightColor(2);
   canvasbtag_one_200_275/AlphaT_2->Range(0,0,1,1);
   canvasbtag_one_200_275/AlphaT_2->SetFillColor(0);
   canvasbtag_one_200_275/AlphaT_2->SetBorderMode(0);
   canvasbtag_one_200_275/AlphaT_2->SetBorderSize(2);
   canvasbtag_one_200_275/AlphaT_2->SetTickx(1);
   canvasbtag_one_200_275/AlphaT_2->SetTicky(1);
   canvasbtag_one_200_275/AlphaT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.54407,3.4875,4.310557);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1927[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1811 = new TH1D("plot__1811","",24, xAxis1927);
   plot__1811->SetBinContent(10,364);
   plot__1811->SetBinContent(11,378);
   plot__1811->SetBinContent(12,531);
   plot__1811->SetBinContent(13,353);
   plot__1811->SetBinContent(14,269);
   plot__1811->SetBinContent(15,180);
   plot__1811->SetBinContent(16,126.5);
   plot__1811->SetBinContent(17,85.4);
   plot__1811->SetBinContent(18,39);
   plot__1811->SetBinContent(19,21.4);
   plot__1811->SetBinContent(20,13.8);
   plot__1811->SetBinContent(21,11.6);
   plot__1811->SetBinContent(22,6.2);
   plot__1811->SetBinContent(23,49);
   plot__1811->SetBinContent(24,0.6304348);
   plot__1811->SetBinError(10,19.07878);
   plot__1811->SetBinError(11,19.44222);
   plot__1811->SetBinError(12,23.04344);
   plot__1811->SetBinError(13,18.78829);
   plot__1811->SetBinError(14,16.40122);
   plot__1811->SetBinError(15,9.486833);
   plot__1811->SetBinError(16,7.952987);
   plot__1811->SetBinError(17,4.132796);
   plot__1811->SetBinError(18,2.792848);
   plot__1811->SetBinError(19,2.068816);
   plot__1811->SetBinError(20,1.661325);
   plot__1811->SetBinError(21,1.077033);
   plot__1811->SetBinError(22,2.68);
   plot__1811->SetBinError(23,4.949747);
   plot__1811->SetBinError(24,0.0675897);
   plot__1811->SetMinimum(0.11);
   plot__1811->SetMaximum(5310);
   plot__1811->SetEntries(3607);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1811->SetLineColor(ci);
   plot__1811->SetLineWidth(2);
   plot__1811->SetMarkerStyle(20);
   plot__1811->SetMarkerSize(1.5);
   plot__1811->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1811->GetXaxis()->SetRange(1,23);
   plot__1811->GetXaxis()->SetLabelFont(42);
   plot__1811->GetXaxis()->SetLabelSize(0.035);
   plot__1811->GetXaxis()->SetTitleSize(0.035);
   plot__1811->GetXaxis()->SetTitleFont(42);
   plot__1811->GetYaxis()->SetTitle("Events");
   plot__1811->GetYaxis()->SetLabelFont(42);
   plot__1811->GetYaxis()->SetLabelSize(0.035);
   plot__1811->GetYaxis()->SetTitleSize(0.035);
   plot__1811->GetYaxis()->SetTitleOffset(1.3);
   plot__1811->GetYaxis()->SetTitleFont(42);
   plot__1811->GetZaxis()->SetLabelFont(42);
   plot__1811->GetZaxis()->SetLabelSize(0.035);
   plot__1811->GetZaxis()->SetTitleSize(0.035);
   plot__1811->GetZaxis()->SetTitleFont(42);
   plot__1811->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1928[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_117 = new TH1F("_stack_117","",24, xAxis1928);
   _stack_117->SetMinimum(0.2068613);
   _stack_117->SetMaximum(827.4454);
   _stack_117->SetDirectory(0);
   _stack_117->SetStats(0);
   _stack_117->GetXaxis()->SetLabelFont(42);
   _stack_117->GetXaxis()->SetLabelOffset(0.007);
   _stack_117->GetXaxis()->SetLabelSize(0.05);
   _stack_117->GetXaxis()->SetTitleSize(0.05);
   _stack_117->GetYaxis()->SetLabelFont(42);
   _stack_117->GetYaxis()->SetLabelOffset(0.007);
   _stack_117->GetYaxis()->SetLabelSize(0.05);
   _stack_117->GetZaxis()->SetLabelFont(42);
   _stack_117->GetZaxis()->SetLabelOffset(0.007);
   _stack_117->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_117);
   
   Double_t xAxis1929[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1812 = new TH1D("plot__1812","",24, xAxis1929);
   plot__1812->SetBinContent(20,0.9096022);
   plot__1812->SetBinError(20,0.9096022);
   plot__1812->SetEntries(26);
   plot__1812->SetFillColor(7);
   plot__1812->SetLineColor(7);
   plot__1812->SetLineStyle(10);
   plot__1812->SetLineWidth(3);
   plot__1812->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1812->GetXaxis()->SetRange(1,23);
   plot__1812->GetXaxis()->SetLabelFont(42);
   plot__1812->GetXaxis()->SetLabelSize(0.035);
   plot__1812->GetXaxis()->SetTitleSize(0.035);
   plot__1812->GetXaxis()->SetTitleFont(42);
   plot__1812->GetYaxis()->SetTitle("Events/0.025");
   plot__1812->GetYaxis()->SetLabelFont(42);
   plot__1812->GetYaxis()->SetLabelSize(0.035);
   plot__1812->GetYaxis()->SetTitleSize(0.035);
   plot__1812->GetYaxis()->SetTitleFont(42);
   plot__1812->GetZaxis()->SetLabelFont(42);
   plot__1812->GetZaxis()->SetLabelSize(0.035);
   plot__1812->GetZaxis()->SetTitleSize(0.035);
   plot__1812->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1930[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1813 = new TH1D("plot__1813","",24, xAxis1930);
   plot__1813->SetBinContent(10,1.012326);
   plot__1813->SetBinContent(11,0.6429105);
   plot__1813->SetBinContent(12,1.140876);
   plot__1813->SetBinContent(13,0.506868);
   plot__1813->SetBinContent(14,0.4223862);
   plot__1813->SetBinContent(15,0.2536714);
   plot__1813->SetBinContent(16,1.387902);
   plot__1813->SetBinContent(17,0.05632851);
   plot__1813->SetBinContent(18,0.04155054);
   plot__1813->SetBinContent(19,0.02713445);
   plot__1813->SetBinContent(20,0.03935582);
   plot__1813->SetBinContent(21,0.008151886);
   plot__1813->SetBinContent(22,0.005581362);
   plot__1813->SetBinContent(23,0.02572511);
   plot__1813->SetBinContent(24,0.0003728277);
   plot__1813->SetBinError(10,0.2397901);
   plot__1813->SetBinError(11,0.2121087);
   plot__1813->SetBinError(12,0.2533618);
   plot__1813->SetBinError(13,0.1581132);
   plot__1813->SetBinError(14,0.1508133);
   plot__1813->SetBinError(15,0.08682212);
   plot__1813->SetBinError(16,1.183083);
   plot__1813->SetBinError(17,0.0251301);
   plot__1813->SetBinError(18,0.01902262);
   plot__1813->SetBinError(19,0.01918697);
   plot__1813->SetBinError(20,0.02030468);
   plot__1813->SetBinError(21,0.006443122);
   plot__1813->SetBinError(22,0.005581362);
   plot__1813->SetBinError(23,0.1134132);
   plot__1813->SetBinError(24,0.0002644168);
   plot__1813->SetEntries(151);
   plot__1813->SetFillColor(6);
   plot__1813->SetLineColor(6);
   plot__1813->SetLineWidth(3);
   plot__1813->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1813->GetXaxis()->SetRange(1,23);
   plot__1813->GetXaxis()->SetLabelFont(42);
   plot__1813->GetXaxis()->SetLabelSize(0.035);
   plot__1813->GetXaxis()->SetTitleSize(0.035);
   plot__1813->GetXaxis()->SetTitleFont(42);
   plot__1813->GetYaxis()->SetTitle("Events/0.025");
   plot__1813->GetYaxis()->SetLabelFont(42);
   plot__1813->GetYaxis()->SetLabelSize(0.035);
   plot__1813->GetYaxis()->SetTitleSize(0.035);
   plot__1813->GetYaxis()->SetTitleFont(42);
   plot__1813->GetZaxis()->SetLabelFont(42);
   plot__1813->GetZaxis()->SetLabelSize(0.035);
   plot__1813->GetZaxis()->SetTitleSize(0.035);
   plot__1813->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1931[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1814 = new TH1D("plot__1814","",24, xAxis1931);
   plot__1814->SetBinContent(10,4.946015);
   plot__1814->SetBinContent(11,5.564963);
   plot__1814->SetBinContent(12,6.921466);
   plot__1814->SetBinContent(13,4.500424);
   plot__1814->SetBinContent(14,4.721835);
   plot__1814->SetBinContent(15,3.850244);
   plot__1814->SetBinContent(16,3.539277);
   plot__1814->SetBinContent(17,2.822305);
   plot__1814->SetBinContent(18,1.737957);
   plot__1814->SetBinContent(19,1.039268);
   plot__1814->SetBinContent(20,0.8971029);
   plot__1814->SetBinContent(21,0.4814501);
   plot__1814->SetBinContent(22,0.3274491);
   plot__1814->SetBinContent(23,2.247185);
   plot__1814->SetBinContent(24,0.03090244);
   plot__1814->SetBinError(10,0.650532);
   plot__1814->SetBinError(11,0.6056142);
   plot__1814->SetBinError(12,0.6438437);
   plot__1814->SetBinError(13,0.4977196);
   plot__1814->SetBinError(14,0.5797399);
   plot__1814->SetBinError(15,0.332043);
   plot__1814->SetBinError(16,0.3076883);
   plot__1814->SetBinError(17,0.1697116);
   plot__1814->SetBinError(18,0.1306366);
   plot__1814->SetBinError(19,0.1069067);
   plot__1814->SetBinError(20,0.103949);
   plot__1814->SetBinError(21,0.05219096);
   plot__1814->SetBinError(22,0.0458892);
   plot__1814->SetBinError(23,1.059997);
   plot__1814->SetBinError(24,0.003433971);
   plot__1814->SetEntries(3266);
   plot__1814->SetFillColor(44);
   plot__1814->SetLineColor(44);
   plot__1814->SetLineWidth(3);
   plot__1814->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1814->GetXaxis()->SetRange(1,23);
   plot__1814->GetXaxis()->SetLabelFont(42);
   plot__1814->GetXaxis()->SetLabelSize(0.035);
   plot__1814->GetXaxis()->SetTitleSize(0.035);
   plot__1814->GetXaxis()->SetTitleFont(42);
   plot__1814->GetYaxis()->SetTitle("Events/0.025");
   plot__1814->GetYaxis()->SetLabelFont(42);
   plot__1814->GetYaxis()->SetLabelSize(0.035);
   plot__1814->GetYaxis()->SetTitleSize(0.035);
   plot__1814->GetYaxis()->SetTitleFont(42);
   plot__1814->GetZaxis()->SetLabelFont(42);
   plot__1814->GetZaxis()->SetLabelSize(0.035);
   plot__1814->GetZaxis()->SetTitleSize(0.035);
   plot__1814->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1932[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1815 = new TH1D("plot__1815","",24, xAxis1932);
   plot__1815->SetBinContent(10,19.39098);
   plot__1815->SetBinContent(11,15.60118);
   plot__1815->SetBinContent(12,26.3554);
   plot__1815->SetBinContent(13,13.14367);
   plot__1815->SetBinContent(14,12.78282);
   plot__1815->SetBinContent(15,8.921646);
   plot__1815->SetBinContent(16,6.066165);
   plot__1815->SetBinContent(17,3.566948);
   plot__1815->SetBinContent(18,0.9471244);
   plot__1815->SetBinContent(19,1.205772);
   plot__1815->SetBinContent(20,0.5075087);
   plot__1815->SetBinContent(21,0.3782026);
   plot__1815->SetBinContent(22,0.2764984);
   plot__1815->SetBinContent(23,1.127575);
   plot__1815->SetBinContent(24,0.01485242);
   plot__1815->SetBinError(10,2.969271);
   plot__1815->SetBinError(11,2.772148);
   plot__1815->SetBinError(12,3.354221);
   plot__1815->SetBinError(13,2.353136);
   plot__1815->SetBinError(14,2.312093);
   plot__1815->SetBinError(15,1.415741);
   plot__1815->SetBinError(16,1.146491);
   plot__1815->SetBinError(17,0.5713426);
   plot__1815->SetBinError(18,0.291335);
   plot__1815->SetBinError(19,0.3076797);
   plot__1815->SetBinError(20,0.2175978);
   plot__1815->SetBinError(21,0.1359103);
   plot__1815->SetBinError(22,0.1116121);
   plot__1815->SetBinError(23,0.7508578);
   plot__1815->SetBinError(24,0.00619182);
   plot__1815->SetEntries(434);
   plot__1815->SetFillColor(40);
   plot__1815->SetLineColor(40);
   plot__1815->SetLineWidth(3);
   plot__1815->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1815->GetXaxis()->SetRange(1,23);
   plot__1815->GetXaxis()->SetLabelFont(42);
   plot__1815->GetXaxis()->SetLabelSize(0.035);
   plot__1815->GetXaxis()->SetTitleSize(0.035);
   plot__1815->GetXaxis()->SetTitleFont(42);
   plot__1815->GetYaxis()->SetTitle("Events/0.025");
   plot__1815->GetYaxis()->SetLabelFont(42);
   plot__1815->GetYaxis()->SetLabelSize(0.035);
   plot__1815->GetYaxis()->SetTitleSize(0.035);
   plot__1815->GetYaxis()->SetTitleFont(42);
   plot__1815->GetZaxis()->SetLabelFont(42);
   plot__1815->GetZaxis()->SetLabelSize(0.035);
   plot__1815->GetZaxis()->SetTitleSize(0.035);
   plot__1815->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1933[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1816 = new TH1D("plot__1816","",24, xAxis1933);
   plot__1816->SetBinContent(10,97.20008);
   plot__1816->SetBinContent(11,87.40045);
   plot__1816->SetBinContent(12,105.6485);
   plot__1816->SetBinContent(13,66.93703);
   plot__1816->SetBinContent(14,47.5253);
   plot__1816->SetBinContent(15,31.97814);
   plot__1816->SetBinContent(16,21.31447);
   plot__1816->SetBinContent(17,14.044);
   plot__1816->SetBinContent(18,8.026502);
   plot__1816->SetBinContent(19,4.058853);
   plot__1816->SetBinContent(20,3.484542);
   plot__1816->SetBinContent(21,1.960964);
   plot__1816->SetBinContent(22,1.125578);
   plot__1816->SetBinContent(23,9.362592);
   plot__1816->SetBinContent(24,0.1238497);
   plot__1816->SetBinError(10,4.020844);
   plot__1816->SetBinError(11,4.071847);
   plot__1816->SetBinError(12,4.475918);
   plot__1816->SetBinError(13,3.533888);
   plot__1816->SetBinError(14,3.009992);
   plot__1816->SetBinError(15,1.732714);
   plot__1816->SetBinError(16,1.433243);
   plot__1816->SetBinError(17,0.7262199);
   plot__1816->SetBinError(18,0.5484813);
   plot__1816->SetBinError(19,0.3923651);
   plot__1816->SetBinError(20,0.3762917);
   plot__1816->SetBinError(21,0.1927285);
   plot__1816->SetBinError(22,0.1473469);
   plot__1816->SetBinError(23,2.16363);
   plot__1816->SetBinError(24,0.01322946);
   plot__1816->SetEntries(4438);
   plot__1816->SetFillColor(4);
   plot__1816->SetLineColor(4);
   plot__1816->SetLineWidth(3);
   plot__1816->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1816->GetXaxis()->SetRange(1,23);
   plot__1816->GetXaxis()->SetLabelFont(42);
   plot__1816->GetXaxis()->SetLabelSize(0.035);
   plot__1816->GetXaxis()->SetTitleSize(0.035);
   plot__1816->GetXaxis()->SetTitleFont(42);
   plot__1816->GetYaxis()->SetTitle("Events/0.025");
   plot__1816->GetYaxis()->SetLabelFont(42);
   plot__1816->GetYaxis()->SetLabelSize(0.035);
   plot__1816->GetYaxis()->SetTitleSize(0.035);
   plot__1816->GetYaxis()->SetTitleFont(42);
   plot__1816->GetZaxis()->SetLabelFont(42);
   plot__1816->GetZaxis()->SetLabelSize(0.035);
   plot__1816->GetZaxis()->SetTitleSize(0.035);
   plot__1816->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1934[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1817 = new TH1D("plot__1817","",24, xAxis1934);
   plot__1817->SetBinContent(10,140.9225);
   plot__1817->SetBinContent(11,132.8287);
   plot__1817->SetBinContent(12,167.4524);
   plot__1817->SetBinContent(13,122.1623);
   plot__1817->SetBinContent(14,86.42986);
   plot__1817->SetBinContent(15,62.53457);
   plot__1817->SetBinContent(16,41.10208);
   plot__1817->SetBinContent(17,27.48153);
   plot__1817->SetBinContent(18,14.89702);
   plot__1817->SetBinContent(19,9.605987);
   plot__1817->SetBinContent(20,6.762594);
   plot__1817->SetBinContent(21,3.979785);
   plot__1817->SetBinContent(22,2.463404);
   plot__1817->SetBinContent(23,22.13883);
   plot__1817->SetBinContent(24,0.2992495);
   plot__1817->SetBinContent(25,0.1027713);
   plot__1817->SetBinError(10,2.848795);
   plot__1817->SetBinError(11,3.129647);
   plot__1817->SetBinError(12,3.933982);
   plot__1817->SetBinError(13,3.530347);
   plot__1817->SetBinError(14,2.778684);
   plot__1817->SetBinError(15,1.689117);
   plot__1817->SetBinError(16,1.382225);
   plot__1817->SetBinError(17,0.7198615);
   plot__1817->SetBinError(18,0.5271621);
   plot__1817->SetBinError(19,0.4364659);
   plot__1817->SetBinError(20,0.3435395);
   plot__1817->SetBinError(21,0.1851106);
   plot__1817->SetBinError(22,0.1510137);
   plot__1817->SetBinError(23,3.327073);
   plot__1817->SetBinError(24,0.01499406);
   plot__1817->SetBinError(25,0.1027713);
   plot__1817->SetEntries(23104);
   plot__1817->SetFillColor(5);
   plot__1817->SetLineColor(5);
   plot__1817->SetLineWidth(3);
   plot__1817->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1817->GetXaxis()->SetRange(1,23);
   plot__1817->GetXaxis()->SetLabelFont(42);
   plot__1817->GetXaxis()->SetLabelSize(0.035);
   plot__1817->GetXaxis()->SetTitleSize(0.035);
   plot__1817->GetXaxis()->SetTitleFont(42);
   plot__1817->GetYaxis()->SetTitle("Events/0.025");
   plot__1817->GetYaxis()->SetLabelFont(42);
   plot__1817->GetYaxis()->SetLabelSize(0.035);
   plot__1817->GetYaxis()->SetTitleSize(0.035);
   plot__1817->GetYaxis()->SetTitleFont(42);
   plot__1817->GetZaxis()->SetLabelFont(42);
   plot__1817->GetZaxis()->SetLabelSize(0.035);
   plot__1817->GetZaxis()->SetTitleSize(0.035);
   plot__1817->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1935[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1818 = new TH1D("plot__1818","",24, xAxis1935);
   plot__1818->SetBinContent(10,139.9589);
   plot__1818->SetBinContent(11,147.8118);
   plot__1818->SetBinContent(12,209.6347);
   plot__1818->SetBinContent(13,155.1045);
   plot__1818->SetBinContent(14,113.9934);
   plot__1818->SetBinContent(15,76.94821);
   plot__1818->SetBinContent(16,49.86058);
   plot__1818->SetBinContent(17,26.198);
   plot__1818->SetBinContent(18,12.28233);
   plot__1818->SetBinContent(19,6.397326);
   plot__1818->SetBinContent(20,3.988437);
   plot__1818->SetBinContent(21,2.482701);
   plot__1818->SetBinContent(22,1.185351);
   plot__1818->SetBinContent(23,6.97567);
   plot__1818->SetBinContent(24,0.09124174);
   plot__1818->SetBinError(10,5.498224);
   plot__1818->SetBinError(11,5.575215);
   plot__1818->SetBinError(12,6.283846);
   plot__1818->SetBinError(13,5.346751);
   plot__1818->SetBinError(14,4.582104);
   plot__1818->SetBinError(15,2.66822);
   plot__1818->SetBinError(16,2.151774);
   plot__1818->SetBinError(17,0.9865055);
   plot__1818->SetBinError(18,0.6841291);
   plot__1818->SetBinError(19,0.4899731);
   plot__1818->SetBinError(20,0.3866768);
   plot__1818->SetBinError(21,0.2115141);
   plot__1818->SetBinError(22,0.14586);
   plot__1818->SetBinError(23,1.867575);
   plot__1818->SetBinError(24,0.01082085);
   plot__1818->SetEntries(7730);
   plot__1818->SetFillColor(2);
   plot__1818->SetLineColor(2);
   plot__1818->SetLineWidth(3);
   plot__1818->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1818->GetXaxis()->SetRange(1,23);
   plot__1818->GetXaxis()->SetLabelFont(42);
   plot__1818->GetXaxis()->SetLabelSize(0.035);
   plot__1818->GetXaxis()->SetTitleSize(0.035);
   plot__1818->GetXaxis()->SetTitleFont(42);
   plot__1818->GetYaxis()->SetTitle("Events/0.025");
   plot__1818->GetYaxis()->SetLabelFont(42);
   plot__1818->GetYaxis()->SetLabelSize(0.035);
   plot__1818->GetYaxis()->SetTitleSize(0.035);
   plot__1818->GetYaxis()->SetTitleFont(42);
   plot__1818->GetZaxis()->SetLabelFont(42);
   plot__1818->GetZaxis()->SetLabelSize(0.035);
   plot__1818->GetZaxis()->SetTitleSize(0.035);
   plot__1818->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   ->Draw("histsame");
   
   TLegend *leg = new TLegend(0.72,0.54,0.9,0.76,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("AlphaT_2","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   Double_t xAxis1936[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1819 = new TH1D("plot__1819","",24, xAxis1936);
   plot__1819->SetBinContent(10,364);
   plot__1819->SetBinContent(11,378);
   plot__1819->SetBinContent(12,531);
   plot__1819->SetBinContent(13,353);
   plot__1819->SetBinContent(14,269);
   plot__1819->SetBinContent(15,180);
   plot__1819->SetBinContent(16,126.5);
   plot__1819->SetBinContent(17,85.4);
   plot__1819->SetBinContent(18,39);
   plot__1819->SetBinContent(19,21.4);
   plot__1819->SetBinContent(20,13.8);
   plot__1819->SetBinContent(21,11.6);
   plot__1819->SetBinContent(22,6.2);
   plot__1819->SetBinContent(23,49);
   plot__1819->SetBinContent(24,0.6304348);
   plot__1819->SetBinError(10,19.07878);
   plot__1819->SetBinError(11,19.44222);
   plot__1819->SetBinError(12,23.04344);
   plot__1819->SetBinError(13,18.78829);
   plot__1819->SetBinError(14,16.40122);
   plot__1819->SetBinError(15,9.486833);
   plot__1819->SetBinError(16,7.952987);
   plot__1819->SetBinError(17,4.132796);
   plot__1819->SetBinError(18,2.792848);
   plot__1819->SetBinError(19,2.068816);
   plot__1819->SetBinError(20,1.661325);
   plot__1819->SetBinError(21,1.077033);
   plot__1819->SetBinError(22,2.68);
   plot__1819->SetBinError(23,4.949747);
   plot__1819->SetBinError(24,0.0675897);
   plot__1819->SetMinimum(0.11);
   plot__1819->SetMaximum(5310);
   plot__1819->SetEntries(3607);

   ci = TColor::GetColor("#000099");
   plot__1819->SetLineColor(ci);
   plot__1819->SetLineWidth(2);
   plot__1819->SetMarkerStyle(20);
   plot__1819->SetMarkerSize(1.5);
   plot__1819->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1819->GetXaxis()->SetRange(1,23);
   plot__1819->GetXaxis()->SetLabelFont(42);
   plot__1819->GetXaxis()->SetLabelSize(0.035);
   plot__1819->GetXaxis()->SetTitleSize(0.035);
   plot__1819->GetXaxis()->SetTitleFont(42);
   plot__1819->GetYaxis()->SetTitle("Events");
   plot__1819->GetYaxis()->SetLabelFont(42);
   plot__1819->GetYaxis()->SetLabelSize(0.035);
   plot__1819->GetYaxis()->SetTitleSize(0.035);
   plot__1819->GetYaxis()->SetTitleOffset(1.3);
   plot__1819->GetYaxis()->SetTitleFont(42);
   plot__1819->GetZaxis()->SetLabelFont(42);
   plot__1819->GetZaxis()->SetLabelSize(0.035);
   plot__1819->GetZaxis()->SetTitleSize(0.035);
   plot__1819->GetZaxis()->SetTitleFont(42);
   plot__1819->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_one_200_2    Jet Multiplicity=2,3");
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
   u->Modified();
   canvasbtag_one_200_275/AlphaT_2->cd();
  
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
   Double_t xAxis1937[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1820 = new TH1D("plot__1820","",24, xAxis1937);
   plot__1820->SetBinContent(10,0.9022611);
   plot__1820->SetBinContent(11,0.9696038);
   plot__1820->SetBinContent(12,1.026775);
   plot__1820->SetBinContent(13,0.9741834);
   plot__1820->SetBinContent(14,1.011751);
   plot__1820->SetBinContent(15,0.9756813);
   plot__1820->SetBinContent(16,1.026199);
   plot__1820->SetBinContent(17,1.151423);
   plot__1820->SetBinContent(18,1.028143);
   plot__1820->SetBinContent(19,0.9581658);
   plot__1820->SetBinContent(20,0.8318694);
   plot__1820->SetBinContent(21,1.248486);
   plot__1820->SetBinContent(22,1.15159);
   plot__1820->SetBinContent(23,1.170077);
   plot__1820->SetBinContent(24,1.124835);
   plot__1820->SetBinError(10,0.04729133);
   plot__1820->SetBinError(11,0.04987104);
   plot__1820->SetBinError(12,0.04455823);
   plot__1820->SetBinError(13,0.05185055);
   plot__1820->SetBinError(14,0.06168756);
   plot__1820->SetBinError(15,0.05142292);
   plot__1820->SetBinError(16,0.06451656);
   plot__1820->SetBinError(17,0.05572125);
   plot__1820->SetBinError(18,0.07362683);
   plot__1820->SetBinError(19,0.09262938);
   plot__1820->SetBinError(20,0.1001453);
   plot__1820->SetBinError(21,0.115919);
   plot__1820->SetBinError(22,0.4977839);
   plot__1820->SetBinError(23,0.1181956);
   plot__1820->SetBinError(24,0.120595);
   plot__1820->SetMinimum(0);
   plot__1820->SetMaximum(2);
   plot__1820->SetEntries(587.6843);

   ci = TColor::GetColor("#000099");
   plot__1820->SetLineColor(ci);
   plot__1820->SetLineWidth(2);
   plot__1820->SetMarkerStyle(20);
   plot__1820->SetMarkerSize(1.5);
   plot__1820->GetXaxis()->SetRange(1,23);
   plot__1820->GetXaxis()->SetLabelFont(42);
   plot__1820->GetXaxis()->SetLabelSize(0.12);
   plot__1820->GetXaxis()->SetTitleSize(0.035);
   plot__1820->GetXaxis()->SetTitleFont(42);
   plot__1820->GetYaxis()->SetTitle("Data/MC");
   plot__1820->GetYaxis()->SetNdivisions(505);
   plot__1820->GetYaxis()->SetLabelFont(42);
   plot__1820->GetYaxis()->SetLabelSize(0.11);
   plot__1820->GetYaxis()->SetTitleSize(0.1);
   plot__1820->GetYaxis()->SetTitleOffset(0.5);
   plot__1820->GetYaxis()->SetTitleFont(42);
   plot__1820->GetZaxis()->SetLabelFont(42);
   plot__1820->GetZaxis()->SetLabelSize(0.035);
   plot__1820->GetZaxis()->SetTitleSize(0.035);
   plot__1820->GetZaxis()->SetTitleFont(42);
   plot__1820->Draw("p");
   
   Double_t Graph_from_plot_fx1468[24] = {
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
   Double_t Graph_from_plot_fy1468[24] = {
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
   Double_t Graph_from_plot_fex1468[24] = {
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
   Double_t Graph_from_plot_fey1468[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01980054,
   0.02076839,
   0.01800761,
   0.02126054,
   0.02480124,
   0.02106103,
   0.02739448,
   0.02077673,
   0.02825932,
   0.03721885,
   0.06859995,
   0.03989294,
   0.05266174,
   0.1092683,
   0.0424904};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1468,Graph_from_plot_fy1468,Graph_from_plot_fex1468,Graph_from_plot_fey1468);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1468 = new TH1F("Graph_Graph_from_plot1468","",100,0,11);
   Graph_Graph_from_plot1468->SetMinimum(0.8630723);
   Graph_Graph_from_plot1468->SetMaximum(1.194985);
   Graph_Graph_from_plot1468->SetDirectory(0);
   Graph_Graph_from_plot1468->SetStats(0);
   Graph_Graph_from_plot1468->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1468->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1468->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1468->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1468->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1468->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1468->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1468->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1468->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1468->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1468);
   
   gre->Draw("2");
   Double_t xAxis1938[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1821 = new TH1D("plot__1821","",24, xAxis1938);
   plot__1821->SetBinContent(10,0.9022611);
   plot__1821->SetBinContent(11,0.9696038);
   plot__1821->SetBinContent(12,1.026775);
   plot__1821->SetBinContent(13,0.9741834);
   plot__1821->SetBinContent(14,1.011751);
   plot__1821->SetBinContent(15,0.9756813);
   plot__1821->SetBinContent(16,1.026199);
   plot__1821->SetBinContent(17,1.151423);
   plot__1821->SetBinContent(18,1.028143);
   plot__1821->SetBinContent(19,0.9581658);
   plot__1821->SetBinContent(20,0.8318694);
   plot__1821->SetBinContent(21,1.248486);
   plot__1821->SetBinContent(22,1.15159);
   plot__1821->SetBinContent(23,1.170077);
   plot__1821->SetBinContent(24,1.124835);
   plot__1821->SetBinError(10,0.04729133);
   plot__1821->SetBinError(11,0.04987104);
   plot__1821->SetBinError(12,0.04455823);
   plot__1821->SetBinError(13,0.05185055);
   plot__1821->SetBinError(14,0.06168756);
   plot__1821->SetBinError(15,0.05142292);
   plot__1821->SetBinError(16,0.06451656);
   plot__1821->SetBinError(17,0.05572125);
   plot__1821->SetBinError(18,0.07362683);
   plot__1821->SetBinError(19,0.09262938);
   plot__1821->SetBinError(20,0.1001453);
   plot__1821->SetBinError(21,0.115919);
   plot__1821->SetBinError(22,0.4977839);
   plot__1821->SetBinError(23,0.1181956);
   plot__1821->SetBinError(24,0.120595);
   plot__1821->SetMinimum(0);
   plot__1821->SetMaximum(2);
   plot__1821->SetEntries(587.6843);

   ci = TColor::GetColor("#000099");
   plot__1821->SetLineColor(ci);
   plot__1821->SetLineWidth(2);
   plot__1821->SetMarkerStyle(20);
   plot__1821->SetMarkerSize(1.5);
   plot__1821->GetXaxis()->SetRange(1,23);
   plot__1821->GetXaxis()->SetLabelFont(42);
   plot__1821->GetXaxis()->SetLabelSize(0.12);
   plot__1821->GetXaxis()->SetTitleSize(0.035);
   plot__1821->GetXaxis()->SetTitleFont(42);
   plot__1821->GetYaxis()->SetTitle("Data/MC");
   plot__1821->GetYaxis()->SetNdivisions(505);
   plot__1821->GetYaxis()->SetLabelFont(42);
   plot__1821->GetYaxis()->SetLabelSize(0.11);
   plot__1821->GetYaxis()->SetTitleSize(0.1);
   plot__1821->GetYaxis()->SetTitleOffset(0.5);
   plot__1821->GetYaxis()->SetTitleFont(42);
   plot__1821->GetZaxis()->SetLabelFont(42);
   plot__1821->GetZaxis()->SetLabelSize(0.035);
   plot__1821->GetZaxis()->SetTitleSize(0.035);
   plot__1821->GetZaxis()->SetTitleFont(42);
   plot__1821->Draw("PSAME");
   d->Modified();
   canvasbtag_one_200_275/AlphaT_2->cd();
   canvasbtag_one_200_275/AlphaT_2->Modified();
   canvasbtag_one_200_275/AlphaT_2->cd();
   canvasbtag_one_200_275/AlphaT_2->SetSelected(canvasbtag_one_200_275/AlphaT_2);
}
