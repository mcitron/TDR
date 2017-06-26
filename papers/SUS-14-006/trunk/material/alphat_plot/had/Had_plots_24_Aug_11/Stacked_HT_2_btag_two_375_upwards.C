void Stacked_HT_2_btag_two_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_375_475/HT_2/cannameHT_2
//=========  (Wed Aug 24 11:54:06 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_375_475/HT_2 = new TCanvas("canvasbtag_two_375_475/HT_2", "cannameHT_2",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_375_475/HT_2->SetHighLightColor(2);
   canvasbtag_two_375_475/HT_2->Range(0,0,1,1);
   canvasbtag_two_375_475/HT_2->SetFillColor(0);
   canvasbtag_two_375_475/HT_2->SetBorderMode(0);
   canvasbtag_two_375_475/HT_2->SetBorderSize(2);
   canvasbtag_two_375_475/HT_2->SetTickx(1);
   canvasbtag_two_375_475/HT_2->SetTicky(1);
   canvasbtag_two_375_475/HT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-190.625,-1.381087,1715.625,2.84371);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis838[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__788 = new TH1D("HT_2__788","",60, xAxis838);
   HT_2__788->SetBinContent(16,22);
   HT_2__788->SetBinContent(17,9);
   HT_2__788->SetBinContent(18,15);
   HT_2__788->SetBinContent(19,9);
   HT_2__788->SetBinContent(20,5);
   HT_2__788->SetBinContent(21,7);
   HT_2__788->SetBinContent(22,2);
   HT_2__788->SetBinContent(23,2);
   HT_2__788->SetBinContent(24,4);
   HT_2__788->SetBinContent(25,5);
   HT_2__788->SetBinError(16,4.690416);
   HT_2__788->SetBinError(17,3.19);
   HT_2__788->SetBinError(18,3.872983);
   HT_2__788->SetBinError(19,3.19);
   HT_2__788->SetBinError(20,2.49);
   HT_2__788->SetBinError(21,2.86);
   HT_2__788->SetBinError(22,2);
   HT_2__788->SetBinError(23,2);
   HT_2__788->SetBinError(24,2.3);
   HT_2__788->SetBinError(25,2.49);
   HT_2__788->SetMinimum(0.11);
   HT_2__788->SetMaximum(263.7732);
   HT_2__788->SetEntries(81);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   HT_2__788->SetLineColor(ci);
   HT_2__788->SetLineWidth(2);
   HT_2__788->SetMarkerStyle(20);
   HT_2__788->SetMarkerSize(1.5);
   HT_2__788->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__788->GetXaxis()->SetRange(1,61);
   HT_2__788->GetXaxis()->SetLabelFont(42);
   HT_2__788->GetXaxis()->SetLabelSize(0.035);
   HT_2__788->GetXaxis()->SetTitleSize(0.035);
   HT_2__788->GetXaxis()->SetTitleFont(42);
   HT_2__788->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_2__788->GetYaxis()->SetLabelFont(42);
   HT_2__788->GetYaxis()->SetLabelSize(0.035);
   HT_2__788->GetYaxis()->SetTitleSize(0.035);
   HT_2__788->GetYaxis()->SetTitleOffset(1.3);
   HT_2__788->GetYaxis()->SetTitleFont(42);
   HT_2__788->GetZaxis()->SetLabelFont(42);
   HT_2__788->GetZaxis()->SetLabelSize(0.035);
   HT_2__788->GetZaxis()->SetTitleSize(0.035);
   HT_2__788->GetZaxis()->SetTitleFont(42);
   HT_2__788->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis839[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1F *_stack_51 = new TH1F("_stack_51","",60, xAxis839);
   _stack_51->SetMinimum(0.01055093);
   _stack_51->SetMaximum(42.20371);
   _stack_51->SetDirectory(0);
   _stack_51->SetStats(0);
   _stack_51->GetXaxis()->SetLabelFont(42);
   _stack_51->GetXaxis()->SetLabelOffset(0.007);
   _stack_51->GetXaxis()->SetLabelSize(0.05);
   _stack_51->GetXaxis()->SetTitleSize(0.05);
   _stack_51->GetYaxis()->SetLabelFont(42);
   _stack_51->GetYaxis()->SetLabelOffset(0.007);
   _stack_51->GetYaxis()->SetLabelSize(0.05);
   _stack_51->GetZaxis()->SetLabelFont(42);
   _stack_51->GetZaxis()->SetLabelOffset(0.007);
   _stack_51->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_51);
   
   Double_t xAxis840[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__789 = new TH1D("HT_2__789","",60, xAxis840);
   HT_2__789->SetEntries(1);
   HT_2__789->SetFillColor(7);
   HT_2__789->SetLineColor(7);
   HT_2__789->SetLineStyle(10);
   HT_2__789->SetLineWidth(3);
   HT_2__789->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__789->GetXaxis()->SetRange(1,61);
   HT_2__789->GetXaxis()->SetLabelFont(42);
   HT_2__789->GetXaxis()->SetLabelSize(0.035);
   HT_2__789->GetXaxis()->SetTitleSize(0.035);
   HT_2__789->GetXaxis()->SetTitleFont(42);
   HT_2__789->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__789->GetYaxis()->SetLabelFont(42);
   HT_2__789->GetYaxis()->SetLabelSize(0.035);
   HT_2__789->GetYaxis()->SetTitleSize(0.035);
   HT_2__789->GetYaxis()->SetTitleFont(42);
   HT_2__789->GetZaxis()->SetLabelFont(42);
   HT_2__789->GetZaxis()->SetLabelSize(0.035);
   HT_2__789->GetZaxis()->SetTitleSize(0.035);
   HT_2__789->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
   Double_t xAxis841[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__790 = new TH1D("HT_2__790","",60, xAxis841);
   HT_2__790->SetBinContent(16,0.0769526);
   HT_2__790->SetBinError(16,0.0769526);
   HT_2__790->SetEntries(2);
   HT_2__790->SetFillColor(6);
   HT_2__790->SetLineColor(6);
   HT_2__790->SetLineWidth(3);
   HT_2__790->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__790->GetXaxis()->SetRange(1,61);
   HT_2__790->GetXaxis()->SetLabelFont(42);
   HT_2__790->GetXaxis()->SetLabelSize(0.035);
   HT_2__790->GetXaxis()->SetTitleSize(0.035);
   HT_2__790->GetXaxis()->SetTitleFont(42);
   HT_2__790->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__790->GetYaxis()->SetLabelFont(42);
   HT_2__790->GetYaxis()->SetLabelSize(0.035);
   HT_2__790->GetYaxis()->SetTitleSize(0.035);
   HT_2__790->GetYaxis()->SetTitleFont(42);
   HT_2__790->GetZaxis()->SetLabelFont(42);
   HT_2__790->GetZaxis()->SetLabelSize(0.035);
   HT_2__790->GetZaxis()->SetTitleSize(0.035);
   HT_2__790->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
   Double_t xAxis842[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__791 = new TH1D("HT_2__791","",60, xAxis842);
   HT_2__791->SetBinContent(16,0.344331);
   HT_2__791->SetBinContent(17,0.2853856);
   HT_2__791->SetBinContent(18,0.2313895);
   HT_2__791->SetBinContent(19,0.1729124);
   HT_2__791->SetBinContent(20,0.06330728);
   HT_2__791->SetBinContent(21,0.04537352);
   HT_2__791->SetBinContent(23,0.0194448);
   HT_2__791->SetBinContent(25,0.0716185);
   HT_2__791->SetBinContent(26,0.01670358);
   HT_2__791->SetBinContent(27,0.02347488);
   HT_2__791->SetBinContent(28,0.1230815);
   HT_2__791->SetBinError(16,0.08708004);
   HT_2__791->SetBinError(17,0.07422743);
   HT_2__791->SetBinError(18,0.06919919);
   HT_2__791->SetBinError(19,0.06772442);
   HT_2__791->SetBinError(20,0.03745677);
   HT_2__791->SetBinError(21,0.0257182);
   HT_2__791->SetBinError(23,0.0194448);
   HT_2__791->SetBinError(25,0.03711705);
   HT_2__791->SetBinError(26,0.01670358);
   HT_2__791->SetBinError(27,0.02347488);
   HT_2__791->SetBinError(28,0.1230815);
   HT_2__791->SetEntries(70);
   HT_2__791->SetFillColor(44);
   HT_2__791->SetLineColor(44);
   HT_2__791->SetLineWidth(3);
   HT_2__791->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__791->GetXaxis()->SetRange(1,61);
   HT_2__791->GetXaxis()->SetLabelFont(42);
   HT_2__791->GetXaxis()->SetLabelSize(0.035);
   HT_2__791->GetXaxis()->SetTitleSize(0.035);
   HT_2__791->GetXaxis()->SetTitleFont(42);
   HT_2__791->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__791->GetYaxis()->SetLabelFont(42);
   HT_2__791->GetYaxis()->SetLabelSize(0.035);
   HT_2__791->GetYaxis()->SetTitleSize(0.035);
   HT_2__791->GetYaxis()->SetTitleFont(42);
   HT_2__791->GetZaxis()->SetLabelFont(42);
   HT_2__791->GetZaxis()->SetLabelSize(0.035);
   HT_2__791->GetZaxis()->SetTitleSize(0.035);
   HT_2__791->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
   Double_t xAxis843[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__792 = new TH1D("HT_2__792","",60, xAxis843);
   HT_2__792->SetBinContent(16,2.137857);
   HT_2__792->SetBinContent(17,0.7109165);
   HT_2__792->SetBinContent(18,0.08840997);
   HT_2__792->SetBinContent(19,0.4047517);
   HT_2__792->SetBinContent(20,0.4983307);
   HT_2__792->SetBinContent(22,0.004797571);
   HT_2__792->SetBinError(16,0.9343469);
   HT_2__792->SetBinError(17,0.5049616);
   HT_2__792->SetBinError(18,0.08840997);
   HT_2__792->SetBinError(19,0.4047517);
   HT_2__792->SetBinError(20,0.4983307);
   HT_2__792->SetBinError(22,0.004797571);
   HT_2__792->SetEntries(13);
   HT_2__792->SetFillColor(40);
   HT_2__792->SetLineColor(40);
   HT_2__792->SetLineWidth(3);
   HT_2__792->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__792->GetXaxis()->SetRange(1,61);
   HT_2__792->GetXaxis()->SetLabelFont(42);
   HT_2__792->GetXaxis()->SetLabelSize(0.035);
   HT_2__792->GetXaxis()->SetTitleSize(0.035);
   HT_2__792->GetXaxis()->SetTitleFont(42);
   HT_2__792->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__792->GetYaxis()->SetLabelFont(42);
   HT_2__792->GetYaxis()->SetLabelSize(0.035);
   HT_2__792->GetYaxis()->SetTitleSize(0.035);
   HT_2__792->GetYaxis()->SetTitleFont(42);
   HT_2__792->GetZaxis()->SetLabelFont(42);
   HT_2__792->GetZaxis()->SetLabelSize(0.035);
   HT_2__792->GetZaxis()->SetTitleSize(0.035);
   HT_2__792->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
   Double_t xAxis844[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__793 = new TH1D("HT_2__793","",60, xAxis844);
   HT_2__793->SetBinContent(16,1.527721);
   HT_2__793->SetBinContent(17,1.95152);
   HT_2__793->SetBinContent(18,1.723656);
   HT_2__793->SetBinContent(19,0.6555221);
   HT_2__793->SetBinContent(20,0.5792732);
   HT_2__793->SetBinContent(21,0.2869248);
   HT_2__793->SetBinContent(22,0.1116725);
   HT_2__793->SetBinContent(24,0.1089817);
   HT_2__793->SetBinContent(27,0.2151938);
   HT_2__793->SetBinContent(28,0.02852791);
   HT_2__793->SetBinContent(29,0.06781343);
   HT_2__793->SetBinContent(30,0.04029057);
   HT_2__793->SetBinError(16,0.4739892);
   HT_2__793->SetBinError(17,0.5954632);
   HT_2__793->SetBinError(18,0.4917825);
   HT_2__793->SetBinError(19,0.2694394);
   HT_2__793->SetBinError(20,0.241772);
   HT_2__793->SetBinError(21,0.2052176);
   HT_2__793->SetBinError(22,0.1116725);
   HT_2__793->SetBinError(24,0.1089817);
   HT_2__793->SetBinError(27,0.1533705);
   HT_2__793->SetBinError(28,0.02852791);
   HT_2__793->SetBinError(29,0.06781343);
   HT_2__793->SetBinError(30,0.04029057);
   HT_2__793->SetEntries(65);
   HT_2__793->SetFillColor(4);
   HT_2__793->SetLineColor(4);
   HT_2__793->SetLineWidth(3);
   HT_2__793->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__793->GetXaxis()->SetRange(1,61);
   HT_2__793->GetXaxis()->SetLabelFont(42);
   HT_2__793->GetXaxis()->SetLabelSize(0.035);
   HT_2__793->GetXaxis()->SetTitleSize(0.035);
   HT_2__793->GetXaxis()->SetTitleFont(42);
   HT_2__793->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__793->GetYaxis()->SetLabelFont(42);
   HT_2__793->GetYaxis()->SetLabelSize(0.035);
   HT_2__793->GetYaxis()->SetTitleSize(0.035);
   HT_2__793->GetYaxis()->SetTitleFont(42);
   HT_2__793->GetZaxis()->SetLabelFont(42);
   HT_2__793->GetZaxis()->SetLabelSize(0.035);
   HT_2__793->GetZaxis()->SetTitleSize(0.035);
   HT_2__793->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
   Double_t xAxis845[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__794 = new TH1D("HT_2__794","",60, xAxis845);
   HT_2__794->SetBinContent(16,5.243704);
   HT_2__794->SetBinContent(17,3.814988);
   HT_2__794->SetBinContent(18,3.010099);
   HT_2__794->SetBinContent(19,2.3989);
   HT_2__794->SetBinContent(20,1.726001);
   HT_2__794->SetBinContent(21,1.360354);
   HT_2__794->SetBinContent(22,0.8793864);
   HT_2__794->SetBinContent(23,0.8053886);
   HT_2__794->SetBinContent(24,0.3869978);
   HT_2__794->SetBinContent(25,0.3265435);
   HT_2__794->SetBinContent(26,0.3476731);
   HT_2__794->SetBinContent(27,0.1548118);
   HT_2__794->SetBinContent(28,0.09874157);
   HT_2__794->SetBinContent(29,0.1266738);
   HT_2__794->SetBinContent(30,0.1341522);
   HT_2__794->SetBinContent(31,0.07322206);
   HT_2__794->SetBinContent(32,0.02707496);
   HT_2__794->SetBinContent(33,0.05640036);
   HT_2__794->SetBinContent(34,0.02430361);
   HT_2__794->SetBinContent(36,0.01410717);
   HT_2__794->SetBinContent(38,0.06995786);
   HT_2__794->SetBinContent(40,0.04309271);
   HT_2__794->SetBinContent(42,0.02400404);
   HT_2__794->SetBinContent(46,0.001277744);
   HT_2__794->SetBinError(16,0.5431535);
   HT_2__794->SetBinError(17,0.3896386);
   HT_2__794->SetBinError(18,0.326047);
   HT_2__794->SetBinError(19,0.2372146);
   HT_2__794->SetBinError(20,0.206384);
   HT_2__794->SetBinError(21,0.182329);
   HT_2__794->SetBinError(22,0.1500132);
   HT_2__794->SetBinError(23,0.1388257);
   HT_2__794->SetBinError(24,0.1000267);
   HT_2__794->SetBinError(25,0.08520893);
   HT_2__794->SetBinError(26,0.1025227);
   HT_2__794->SetBinError(27,0.06483195);
   HT_2__794->SetBinError(28,0.04708184);
   HT_2__794->SetBinError(29,0.05946493);
   HT_2__794->SetBinError(30,0.07228128);
   HT_2__794->SetBinError(31,0.04198861);
   HT_2__794->SetBinError(32,0.02707496);
   HT_2__794->SetBinError(33,0.0326721);
   HT_2__794->SetBinError(34,0.02430361);
   HT_2__794->SetBinError(36,0.01410717);
   HT_2__794->SetBinError(38,0.04056318);
   HT_2__794->SetBinError(40,0.04309271);
   HT_2__794->SetBinError(42,0.02180286);
   HT_2__794->SetBinError(46,0.001277744);
   HT_2__794->SetEntries(864);
   HT_2__794->SetFillColor(5);
   HT_2__794->SetLineColor(5);
   HT_2__794->SetLineWidth(3);
   HT_2__794->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__794->GetXaxis()->SetRange(1,61);
   HT_2__794->GetXaxis()->SetLabelFont(42);
   HT_2__794->GetXaxis()->SetLabelSize(0.035);
   HT_2__794->GetXaxis()->SetTitleSize(0.035);
   HT_2__794->GetXaxis()->SetTitleFont(42);
   HT_2__794->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__794->GetYaxis()->SetLabelFont(42);
   HT_2__794->GetYaxis()->SetLabelSize(0.035);
   HT_2__794->GetYaxis()->SetTitleSize(0.035);
   HT_2__794->GetYaxis()->SetTitleFont(42);
   HT_2__794->GetZaxis()->SetLabelFont(42);
   HT_2__794->GetZaxis()->SetLabelSize(0.035);
   HT_2__794->GetZaxis()->SetTitleSize(0.035);
   HT_2__794->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
   Double_t xAxis846[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__795 = new TH1D("HT_2__795","",60, xAxis846);
   HT_2__795->SetBinContent(16,17.04675);
   HT_2__795->SetBinContent(17,13.62027);
   HT_2__795->SetBinContent(18,9.527705);
   HT_2__795->SetBinContent(19,6.10342);
   HT_2__795->SetBinContent(20,5.43622);
   HT_2__795->SetBinContent(21,1.411674);
   HT_2__795->SetBinContent(22,1.930607);
   HT_2__795->SetBinContent(23,1.223223);
   HT_2__795->SetBinContent(24,1.073423);
   HT_2__795->SetBinContent(25,1.001805);
   HT_2__795->SetBinContent(26,0.2192048);
   HT_2__795->SetBinError(16,1.860819);
   HT_2__795->SetBinError(17,1.642392);
   HT_2__795->SetBinError(18,1.391035);
   HT_2__795->SetBinError(19,1.068812);
   HT_2__795->SetBinError(20,1.054902);
   HT_2__795->SetBinError(21,0.5332143);
   HT_2__795->SetBinError(22,0.6384123);
   HT_2__795->SetBinError(23,0.5041837);
   HT_2__795->SetBinError(24,0.4842966);
   HT_2__795->SetBinError(25,0.4561341);
   HT_2__795->SetBinError(26,0.1325525);
   HT_2__795->SetEntries(327);
   HT_2__795->SetFillColor(2);
   HT_2__795->SetLineColor(2);
   HT_2__795->SetLineWidth(3);
   HT_2__795->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__795->GetXaxis()->SetRange(1,61);
   HT_2__795->GetXaxis()->SetLabelFont(42);
   HT_2__795->GetXaxis()->SetLabelSize(0.035);
   HT_2__795->GetXaxis()->SetTitleSize(0.035);
   HT_2__795->GetXaxis()->SetTitleFont(42);
   HT_2__795->GetYaxis()->SetTitle(" Events/25 GeV");
   HT_2__795->GetYaxis()->SetLabelFont(42);
   HT_2__795->GetYaxis()->SetLabelSize(0.035);
   HT_2__795->GetYaxis()->SetTitleSize(0.035);
   HT_2__795->GetYaxis()->SetTitleFont(42);
   HT_2__795->GetZaxis()->SetLabelFont(42);
   HT_2__795->GetZaxis()->SetLabelSize(0.035);
   HT_2__795->GetZaxis()->SetTitleSize(0.035);
   HT_2__795->GetZaxis()->SetTitleFont(42);
   ->Add(HT_2,"");
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
   TLegendEntry *entry=leg->AddEntry("HT_2","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("HT_2","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("HT_2","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("HT_2","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("HT_2","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("HT_2","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("HT_2","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   Double_t xAxis847[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__796 = new TH1D("HT_2__796","",60, xAxis847);
   HT_2__796->SetBinContent(16,22);
   HT_2__796->SetBinContent(17,9);
   HT_2__796->SetBinContent(18,15);
   HT_2__796->SetBinContent(19,9);
   HT_2__796->SetBinContent(20,5);
   HT_2__796->SetBinContent(21,7);
   HT_2__796->SetBinContent(22,2);
   HT_2__796->SetBinContent(23,2);
   HT_2__796->SetBinContent(24,4);
   HT_2__796->SetBinContent(25,5);
   HT_2__796->SetBinError(16,4.690416);
   HT_2__796->SetBinError(17,3.19);
   HT_2__796->SetBinError(18,3.872983);
   HT_2__796->SetBinError(19,3.19);
   HT_2__796->SetBinError(20,2.49);
   HT_2__796->SetBinError(21,2.86);
   HT_2__796->SetBinError(22,2);
   HT_2__796->SetBinError(23,2);
   HT_2__796->SetBinError(24,2.3);
   HT_2__796->SetBinError(25,2.49);
   HT_2__796->SetMinimum(0.11);
   HT_2__796->SetMaximum(263.7732);
   HT_2__796->SetEntries(81);

   ci = TColor::GetColor("#000099");
   HT_2__796->SetLineColor(ci);
   HT_2__796->SetLineWidth(2);
   HT_2__796->SetMarkerStyle(20);
   HT_2__796->SetMarkerSize(1.5);
   HT_2__796->GetXaxis()->SetTitle("H_{T} (GeV)");
   HT_2__796->GetXaxis()->SetRange(1,61);
   HT_2__796->GetXaxis()->SetLabelFont(42);
   HT_2__796->GetXaxis()->SetLabelSize(0.035);
   HT_2__796->GetXaxis()->SetTitleSize(0.035);
   HT_2__796->GetXaxis()->SetTitleFont(42);
   HT_2__796->GetYaxis()->SetTitle("Events / 25 GeV");
   HT_2__796->GetYaxis()->SetLabelFont(42);
   HT_2__796->GetYaxis()->SetLabelSize(0.035);
   HT_2__796->GetYaxis()->SetTitleSize(0.035);
   HT_2__796->GetYaxis()->SetTitleOffset(1.3);
   HT_2__796->GetYaxis()->SetTitleFont(42);
   HT_2__796->GetZaxis()->SetLabelFont(42);
   HT_2__796->GetZaxis()->SetLabelSize(0.035);
   HT_2__796->GetZaxis()->SetTitleSize(0.035);
   HT_2__796->GetZaxis()->SetTitleFont(42);
   HT_2__796->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_375_    Jet Multiplicity=2,3");
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
   canvasbtag_two_375_475/HT_2->cd();
  
// ------------>Primitives in pad: d
   TPad *d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-190.625,-0.25,1715.625,2.25);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis848[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__797 = new TH1D("HT_2__797","",60, xAxis848);
   HT_2__797->SetBinContent(16,0.8340499);
   HT_2__797->SetBinContent(17,0.4415426);
   HT_2__797->SetBinContent(18,1.028718);
   HT_2__797->SetBinContent(19,0.9244511);
   HT_2__797->SetBinContent(20,0.6021824);
   HT_2__797->SetBinContent(21,2.254918);
   HT_2__797->SetBinContent(22,0.6834188);
   HT_2__797->SetBinContent(23,0.9765358);
   HT_2__797->SetBinContent(24,2.548741);
   HT_2__797->SetBinContent(25,3.571513);
   HT_2__797->SetBinError(16,0.17782);
   HT_2__797->SetBinError(17,0.1565023);
   HT_2__797->SetBinError(18,0.2656138);
   HT_2__797->SetBinError(19,0.3276666);
   HT_2__797->SetBinError(20,0.2998868);
   HT_2__797->SetBinError(21,0.9212951);
   HT_2__797->SetBinError(22,0.6834188);
   HT_2__797->SetBinError(23,0.9765358);
   HT_2__797->SetBinError(24,1.465526);
   HT_2__797->SetBinError(25,1.778613);
   HT_2__797->SetMinimum(0);
   HT_2__797->SetMaximum(2);
   HT_2__797->SetEntries(18.65516);

   ci = TColor::GetColor("#000099");
   HT_2__797->SetLineColor(ci);
   HT_2__797->SetLineWidth(2);
   HT_2__797->SetMarkerStyle(20);
   HT_2__797->SetMarkerSize(1.5);
   HT_2__797->GetXaxis()->SetRange(1,61);
   HT_2__797->GetXaxis()->SetLabelFont(42);
   HT_2__797->GetXaxis()->SetLabelSize(0.12);
   HT_2__797->GetXaxis()->SetTitleSize(0.035);
   HT_2__797->GetXaxis()->SetTitleFont(42);
   HT_2__797->GetYaxis()->SetTitle("Data/MC");
   HT_2__797->GetYaxis()->SetNdivisions(505);
   HT_2__797->GetYaxis()->SetLabelFont(42);
   HT_2__797->GetYaxis()->SetLabelSize(0.11);
   HT_2__797->GetYaxis()->SetTitleSize(0.1);
   HT_2__797->GetYaxis()->SetTitleOffset(0.5);
   HT_2__797->GetYaxis()->SetTitleFont(42);
   HT_2__797->GetZaxis()->SetLabelFont(42);
   HT_2__797->GetZaxis()->SetLabelSize(0.035);
   HT_2__797->GetZaxis()->SetTitleSize(0.035);
   HT_2__797->GetZaxis()->SetTitleFont(42);
   HT_2__797->Draw("p");
   
   Double_t Graph_from_HT_2_fx1204[60] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5,
   612.5,
   637.5,
   662.5,
   687.5,
   712.5,
   737.5,
   762.5,
   787.5,
   812.5,
   837.5,
   862.5,
   887.5,
   912.5,
   937.5,
   962.5,
   987.5,
   1012.5,
   1037.5,
   1062.5,
   1087.5,
   1112.5,
   1137.5,
   1162.5,
   1187.5,
   1212.5,
   1237.5,
   1262.5,
   1287.5,
   1312.5,
   1337.5,
   1362.5,
   1387.5,
   1412.5,
   1437.5,
   1462.5,
   1487.5};
   Double_t Graph_from_HT_2_fy1204[60] = {
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
   0};
   Double_t Graph_from_HT_2_fex1204[60] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t Graph_from_HT_2_fey1204[60] = {
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
   0.08365308,
   0.09131465,
   0.1039121,
   0.1232447,
   0.1457034,
   0.1933691,
   0.2273249,
   0.2555148,
   0.3226609,
   0.3325127,
   0.2885706,
   0.4273578,
   0.5385709,
   0.4637467,
   0.4743799,
   0.5734421,
   1,
   0.5792889,
   1,
   0,
   1,
   0,
   0.5798231,
   0,
   1,
   0,
   0.9082998,
   0,
   0,
   0,
   1,
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
   0};
   TGraphErrors *gre = new TGraphErrors(60,Graph_from_HT_2_fx1204,Graph_from_HT_2_fy1204,Graph_from_HT_2_fex1204,Graph_from_HT_2_fey1204);
   gre->SetName("Graph_from_HT_2");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_HT_21204 = new TH1F("Graph_Graph_from_HT_21204","",100,0,1650);
   Graph_Graph_from_HT_21204->SetMinimum(0);
   Graph_Graph_from_HT_21204->SetMaximum(2.2);
   Graph_Graph_from_HT_21204->SetDirectory(0);
   Graph_Graph_from_HT_21204->SetStats(0);
   Graph_Graph_from_HT_21204->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_21204->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_21204->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_21204->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_HT_21204->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_21204->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_21204->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_HT_21204->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_HT_21204->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_HT_21204->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_HT_21204);
   
   gre->Draw("2");
   Double_t xAxis849[61] = {0, 25, 50, 75, 100, 125, 150, 175, 200, 225, 250, 275, 300, 325, 350, 375, 400, 425, 450, 475, 500, 525, 550, 575, 600, 625, 650, 675, 700, 725, 750, 775, 800, 825, 850, 875, 900, 925, 950, 975, 1000, 1025, 1050, 1075, 1100, 1125, 1150, 1175, 1200, 1225, 1250, 1275, 1300, 1325, 1350, 1375, 1400, 1425, 1450, 1475, 1500}; 
   
   TH1D *HT_2__798 = new TH1D("HT_2__798","",60, xAxis849);
   HT_2__798->SetBinContent(16,0.8340499);
   HT_2__798->SetBinContent(17,0.4415426);
   HT_2__798->SetBinContent(18,1.028718);
   HT_2__798->SetBinContent(19,0.9244511);
   HT_2__798->SetBinContent(20,0.6021824);
   HT_2__798->SetBinContent(21,2.254918);
   HT_2__798->SetBinContent(22,0.6834188);
   HT_2__798->SetBinContent(23,0.9765358);
   HT_2__798->SetBinContent(24,2.548741);
   HT_2__798->SetBinContent(25,3.571513);
   HT_2__798->SetBinError(16,0.17782);
   HT_2__798->SetBinError(17,0.1565023);
   HT_2__798->SetBinError(18,0.2656138);
   HT_2__798->SetBinError(19,0.3276666);
   HT_2__798->SetBinError(20,0.2998868);
   HT_2__798->SetBinError(21,0.9212951);
   HT_2__798->SetBinError(22,0.6834188);
   HT_2__798->SetBinError(23,0.9765358);
   HT_2__798->SetBinError(24,1.465526);
   HT_2__798->SetBinError(25,1.778613);
   HT_2__798->SetMinimum(0);
   HT_2__798->SetMaximum(2);
   HT_2__798->SetEntries(18.65516);

   ci = TColor::GetColor("#000099");
   HT_2__798->SetLineColor(ci);
   HT_2__798->SetLineWidth(2);
   HT_2__798->SetMarkerStyle(20);
   HT_2__798->SetMarkerSize(1.5);
   HT_2__798->GetXaxis()->SetRange(1,61);
   HT_2__798->GetXaxis()->SetLabelFont(42);
   HT_2__798->GetXaxis()->SetLabelSize(0.12);
   HT_2__798->GetXaxis()->SetTitleSize(0.035);
   HT_2__798->GetXaxis()->SetTitleFont(42);
   HT_2__798->GetYaxis()->SetTitle("Data/MC");
   HT_2__798->GetYaxis()->SetNdivisions(505);
   HT_2__798->GetYaxis()->SetLabelFont(42);
   HT_2__798->GetYaxis()->SetLabelSize(0.11);
   HT_2__798->GetYaxis()->SetTitleSize(0.1);
   HT_2__798->GetYaxis()->SetTitleOffset(0.5);
   HT_2__798->GetYaxis()->SetTitleFont(42);
   HT_2__798->GetZaxis()->SetLabelFont(42);
   HT_2__798->GetZaxis()->SetLabelSize(0.035);
   HT_2__798->GetZaxis()->SetTitleSize(0.035);
   HT_2__798->GetZaxis()->SetTitleFont(42);
   HT_2__798->Draw("PSAME");
   d->Modified();
   canvasbtag_two_375_475/HT_2->cd();
   canvasbtag_two_375_475/HT_2->Modified();
   canvasbtag_two_375_475/HT_2->cd();
   canvasbtag_two_375_475/HT_2->SetSelected(canvasbtag_two_375_475/HT_2);
}
