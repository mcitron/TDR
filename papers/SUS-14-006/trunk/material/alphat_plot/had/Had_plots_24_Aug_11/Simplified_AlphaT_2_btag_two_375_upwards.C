void Simplified_AlphaT_2_btag_two_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_375_475/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:08 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_375_475/AlphaT_2 = new TCanvas("canvasbtag_two_375_475/AlphaT_2", "cannameAlphaT_2",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_375_475/AlphaT_2->SetHighLightColor(2);
   canvasbtag_two_375_475/AlphaT_2->Range(0,0,1,1);
   canvasbtag_two_375_475/AlphaT_2->SetFillColor(0);
   canvasbtag_two_375_475/AlphaT_2->SetBorderMode(0);
   canvasbtag_two_375_475/AlphaT_2->SetBorderSize(2);
   canvasbtag_two_375_475/AlphaT_2->SetTickx(1);
   canvasbtag_two_375_475/AlphaT_2->SetTicky(1);
   canvasbtag_two_375_475/AlphaT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.412075,3.4875,3.122601);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis949[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__892 = new TH1D("plot__892","",24, xAxis949);
   plot__892->SetBinContent(10,31);
   plot__892->SetBinContent(11,18);
   plot__892->SetBinContent(12,11);
   plot__892->SetBinContent(13,3);
   plot__892->SetBinContent(14,2);
   plot__892->SetBinContent(15,1);
   plot__892->SetBinContent(16,0.5);
   plot__892->SetBinContent(17,1);
   plot__892->SetBinContent(18,0.2);
   plot__892->SetBinContent(19,0.4);
   plot__892->SetBinContent(20,0.2);
   plot__892->SetBinContent(21,0.1);
   plot__892->SetBinContent(23,1);
   plot__892->SetBinContent(24,0.01449275);
   plot__892->SetBinError(10,5.567764);
   plot__892->SetBinError(11,4.242641);
   plot__892->SetBinError(12,3.316625);
   plot__892->SetBinError(13,2);
   plot__892->SetBinError(14,1);
   plot__892->SetBinError(15,1);
   plot__892->SetBinError(17,1);
   plot__892->SetBinError(24,0.01024792);
   plot__892->SetMinimum(0.11);
   plot__892->SetMaximum(466.8024);
   plot__892->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__892->SetLineColor(ci);
   plot__892->SetLineWidth(2);
   plot__892->SetMarkerStyle(20);
   plot__892->SetMarkerSize(1.5);
   plot__892->GetXaxis()->SetTitle("#alpha_{T}");
   plot__892->GetXaxis()->SetRange(1,23);
   plot__892->GetXaxis()->SetLabelFont(42);
   plot__892->GetXaxis()->SetLabelSize(0.035);
   plot__892->GetXaxis()->SetTitleSize(0.035);
   plot__892->GetXaxis()->SetTitleFont(42);
   plot__892->GetYaxis()->SetTitle("Events");
   plot__892->GetYaxis()->SetLabelFont(42);
   plot__892->GetYaxis()->SetLabelSize(0.035);
   plot__892->GetYaxis()->SetTitleSize(0.035);
   plot__892->GetYaxis()->SetTitleOffset(1.3);
   plot__892->GetYaxis()->SetTitleFont(42);
   plot__892->GetZaxis()->SetLabelFont(42);
   plot__892->GetZaxis()->SetLabelSize(0.035);
   plot__892->GetZaxis()->SetTitleSize(0.035);
   plot__892->GetZaxis()->SetTitleFont(42);
   plot__892->Draw("");
   Double_t xAxis950[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__893 = new TH1D("plot__893","",24, xAxis950);
   plot__893->SetEntries(25);
   plot__893->SetLineColor(7);
   plot__893->SetLineStyle(10);
   plot__893->SetLineWidth(3);
   plot__893->GetXaxis()->SetTitle("#alpha_{T}");
   plot__893->GetXaxis()->SetRange(1,23);
   plot__893->GetXaxis()->SetLabelFont(42);
   plot__893->GetXaxis()->SetLabelSize(0.035);
   plot__893->GetXaxis()->SetTitleSize(0.035);
   plot__893->GetXaxis()->SetTitleFont(42);
   plot__893->GetYaxis()->SetTitle("Events/0.025");
   plot__893->GetYaxis()->SetLabelFont(42);
   plot__893->GetYaxis()->SetLabelSize(0.035);
   plot__893->GetYaxis()->SetTitleSize(0.035);
   plot__893->GetYaxis()->SetTitleFont(42);
   plot__893->GetZaxis()->SetLabelFont(42);
   plot__893->GetZaxis()->SetLabelSize(0.035);
   plot__893->GetZaxis()->SetTitleSize(0.035);
   plot__893->GetZaxis()->SetTitleFont(42);
   plot__893->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis951[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_58 = new TH1F("_stack_58","",24, xAxis951);
   _stack_58->SetMinimum(0.01981861);
   _stack_58->SetMaximum(79.27444);
   _stack_58->SetDirectory(0);
   _stack_58->SetStats(0);
   _stack_58->GetXaxis()->SetLabelFont(42);
   _stack_58->GetXaxis()->SetLabelOffset(0.007);
   _stack_58->GetXaxis()->SetLabelSize(0.05);
   _stack_58->GetXaxis()->SetTitleSize(0.05);
   _stack_58->GetYaxis()->SetLabelFont(42);
   _stack_58->GetYaxis()->SetLabelOffset(0.007);
   _stack_58->GetYaxis()->SetLabelSize(0.05);
   _stack_58->GetZaxis()->SetLabelFont(42);
   _stack_58->GetZaxis()->SetLabelOffset(0.007);
   _stack_58->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_58);
   
   Double_t xAxis952[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__894 = new TH1D("plot__894","",24, xAxis952);
   plot__894->SetBinContent(10,46.68024);
   plot__894->SetBinContent(11,17.05144);
   plot__894->SetBinContent(12,9.525618);
   plot__894->SetBinContent(13,4.459434);
   plot__894->SetBinContent(14,1.98794);
   plot__894->SetBinContent(15,1.449987);
   plot__894->SetBinContent(16,0.8993795);
   plot__894->SetBinContent(17,0.6931947);
   plot__894->SetBinContent(18,0.3216294);
   plot__894->SetBinContent(19,0.1844185);
   plot__894->SetBinContent(20,0.1365527);
   plot__894->SetBinContent(21,0.05811676);
   plot__894->SetBinContent(22,0.02212127);
   plot__894->SetBinContent(23,0.2367661);
   plot__894->SetBinContent(24,0.003394776);
   plot__894->SetBinError(10,2.866287);
   plot__894->SetBinError(11,1.684989);
   plot__894->SetBinError(12,1.287212);
   plot__894->SetBinError(13,0.880107);
   plot__894->SetBinError(14,0.432263);
   plot__894->SetBinError(15,0.2782495);
   plot__894->SetBinError(16,0.2332783);
   plot__894->SetBinError(17,0.1477638);
   plot__894->SetBinError(18,0.08011131);
   plot__894->SetBinError(19,0.06290747);
   plot__894->SetBinError(20,0.04531968);
   plot__894->SetBinError(21,0.02159474);
   plot__894->SetBinError(22,0.0111469);
   plot__894->SetBinError(23,0.3440684);
   plot__894->SetBinError(24,0.001833178);
   plot__894->SetEntries(1485);
   plot__894->SetLineColor(3);
   plot__894->SetLineWidth(3);
   plot__894->SetMarkerColor(4);
   plot__894->SetMarkerStyle(20);
   plot__894->GetXaxis()->SetTitle("#alpha_{T}");
   plot__894->GetXaxis()->SetRange(1,23);
   plot__894->GetXaxis()->SetLabelFont(42);
   plot__894->GetXaxis()->SetLabelSize(0.035);
   plot__894->GetXaxis()->SetTitleSize(0.035);
   plot__894->GetXaxis()->SetTitleFont(42);
   plot__894->GetYaxis()->SetTitle("Events/0.025");
   plot__894->GetYaxis()->SetLabelFont(42);
   plot__894->GetYaxis()->SetLabelSize(0.035);
   plot__894->GetYaxis()->SetTitleSize(0.035);
   plot__894->GetYaxis()->SetTitleFont(42);
   plot__894->GetZaxis()->SetLabelFont(42);
   plot__894->GetZaxis()->SetLabelSize(0.035);
   plot__894->GetZaxis()->SetTitleSize(0.035);
   plot__894->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   ->Draw("samehist");
   Double_t xAxis953[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__895 = new TH1D("plot__895","",24, xAxis953);
   plot__895->SetBinContent(10,46.68024);
   plot__895->SetBinContent(11,17.05144);
   plot__895->SetBinContent(12,9.525618);
   plot__895->SetBinContent(13,4.459434);
   plot__895->SetBinContent(14,1.98794);
   plot__895->SetBinContent(15,1.449987);
   plot__895->SetBinContent(16,0.8993795);
   plot__895->SetBinContent(17,0.6931947);
   plot__895->SetBinContent(18,0.3216294);
   plot__895->SetBinContent(19,0.1844185);
   plot__895->SetBinContent(20,0.1365527);
   plot__895->SetBinContent(21,0.05811676);
   plot__895->SetBinContent(22,0.02212127);
   plot__895->SetBinContent(23,0.2367661);
   plot__895->SetBinContent(24,0.003394776);
   plot__895->SetBinError(10,2.866287);
   plot__895->SetBinError(11,1.684989);
   plot__895->SetBinError(12,1.287212);
   plot__895->SetBinError(13,0.880107);
   plot__895->SetBinError(14,0.432263);
   plot__895->SetBinError(15,0.2782495);
   plot__895->SetBinError(16,0.2332783);
   plot__895->SetBinError(17,0.1477638);
   plot__895->SetBinError(18,0.08011131);
   plot__895->SetBinError(19,0.06290747);
   plot__895->SetBinError(20,0.04531968);
   plot__895->SetBinError(21,0.02159474);
   plot__895->SetBinError(22,0.0111469);
   plot__895->SetBinError(23,0.3440684);
   plot__895->SetBinError(24,0.001833178);
   plot__895->SetEntries(1485);
   plot__895->SetLineColor(3);
   plot__895->SetLineWidth(3);
   plot__895->SetMarkerColor(4);
   plot__895->SetMarkerStyle(20);
   plot__895->GetXaxis()->SetTitle("#alpha_{T}");
   plot__895->GetXaxis()->SetRange(1,23);
   plot__895->GetXaxis()->SetLabelFont(42);
   plot__895->GetXaxis()->SetLabelSize(0.035);
   plot__895->GetXaxis()->SetTitleSize(0.035);
   plot__895->GetXaxis()->SetTitleFont(42);
   plot__895->GetYaxis()->SetTitle("Events/0.025");
   plot__895->GetYaxis()->SetLabelFont(42);
   plot__895->GetYaxis()->SetLabelSize(0.035);
   plot__895->GetYaxis()->SetTitleSize(0.035);
   plot__895->GetYaxis()->SetTitleFont(42);
   plot__895->GetZaxis()->SetLabelFont(42);
   plot__895->GetZaxis()->SetLabelSize(0.035);
   plot__895->GetZaxis()->SetTitleSize(0.035);
   plot__895->GetZaxis()->SetTitleFont(42);
   plot__895->Draw("SAMEHIST");
   Double_t xAxis954[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__896 = new TH1D("plot__896","",24, xAxis954);
   plot__896->SetBinContent(10,7.675544);
   plot__896->SetBinContent(11,3.820424);
   plot__896->SetBinContent(12,1.864468);
   plot__896->SetBinContent(13,1.089361);
   plot__896->SetBinContent(14,0.999323);
   plot__896->SetBinContent(15,0.6654477);
   plot__896->SetBinContent(16,0.397498);
   plot__896->SetBinContent(17,0.2729743);
   plot__896->SetBinContent(18,0.1520008);
   plot__896->SetBinContent(19,0.07192497);
   plot__896->SetBinContent(20,0.08898046);
   plot__896->SetBinContent(21,0.03001038);
   plot__896->SetBinContent(22,0.02043996);
   plot__896->SetBinContent(23,0.06946895);
   plot__896->SetBinContent(24,0.0009701795);
   plot__896->SetBinError(10,0.5164263);
   plot__896->SetBinError(11,0.3792352);
   plot__896->SetBinError(12,0.2694208);
   plot__896->SetBinError(13,0.1809977);
   plot__896->SetBinError(14,0.2052328);
   plot__896->SetBinError(15,0.1171389);
   plot__896->SetBinError(16,0.1187223);
   plot__896->SetBinError(17,0.04033356);
   plot__896->SetBinError(18,0.02717874);
   plot__896->SetBinError(19,0.01890348);
   plot__896->SetBinError(20,0.0242686);
   plot__896->SetBinError(21,0.01069878);
   plot__896->SetBinError(22,0.01101938);
   plot__896->SetBinError(23,0.1863719);
   plot__896->SetBinError(24,0.0003735284);
   plot__896->SetEntries(888);
   plot__896->SetLineColor(5);
   plot__896->SetLineWidth(3);
   plot__896->SetMarkerStyle(20);
   plot__896->GetXaxis()->SetTitle("#alpha_{T}");
   plot__896->GetXaxis()->SetRange(1,23);
   plot__896->GetXaxis()->SetLabelFont(42);
   plot__896->GetXaxis()->SetLabelSize(0.035);
   plot__896->GetXaxis()->SetTitleSize(0.035);
   plot__896->GetXaxis()->SetTitleFont(42);
   plot__896->GetYaxis()->SetTitle("Events/0.025");
   plot__896->GetYaxis()->SetLabelFont(42);
   plot__896->GetYaxis()->SetLabelSize(0.035);
   plot__896->GetYaxis()->SetTitleSize(0.035);
   plot__896->GetYaxis()->SetTitleFont(42);
   plot__896->GetZaxis()->SetLabelFont(42);
   plot__896->GetZaxis()->SetLabelSize(0.035);
   plot__896->GetZaxis()->SetTitleSize(0.035);
   plot__896->GetZaxis()->SetTitleFont(42);
   plot__896->Draw("SAMEHIST");
   
   Double_t Graph_from_plot_fx1229[24] = {
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
   Double_t Graph_from_plot_fy1229[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7.675544,
   3.820424,
   1.864468,
   1.089361,
   0.999323,
   0.6654477,
   0.397498,
   0.2729743,
   0.1520008,
   0.07192497,
   0.08898046,
   0.03001038,
   0.02043996,
   0.06946895,
   0.0009701795};
   Double_t Graph_from_plot_fex1229[24] = {
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
   Double_t Graph_from_plot_fey1229[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.5164263,
   0.3792352,
   0.2694208,
   0.1809977,
   0.2052328,
   0.1171389,
   0.1187223,
   0.04033356,
   0.02717874,
   0.01890348,
   0.0242686,
   0.01069878,
   0.01101938,
   0.1863719,
   0.0003735284};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1229,Graph_from_plot_fy1229,Graph_from_plot_fex1229,Graph_from_plot_fey1229);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(5);
   gre->SetFillStyle(3008);
   gre->SetLineColor(5);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1229 = new TH1F("Graph_Graph_from_plot1229","",100,0,11);
   Graph_Graph_from_plot1229->SetMinimum(0.009011167);
   Graph_Graph_from_plot1229->SetMaximum(9.011167);
   Graph_Graph_from_plot1229->SetDirectory(0);
   Graph_Graph_from_plot1229->SetStats(0);
   Graph_Graph_from_plot1229->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1229->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1229->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1229->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1229->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1229->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1229->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1229->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1229->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1229->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1229);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1230[24] = {
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
   Double_t Graph_from_plot_fy1230[24] = {
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
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_plot_fex1230[24] = {
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
   Double_t Graph_from_plot_fey1230[24] = {
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
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(24,Graph_from_plot_fx1230,Graph_from_plot_fy1230,Graph_from_plot_fex1230,Graph_from_plot_fey1230);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot12251230 = new TH1F("Graph_Graph_Graph_from_plot12251230","",100,0,11);
   Graph_Graph_Graph_from_plot12251230->SetMinimum(0.0011);
   Graph_Graph_Graph_from_plot12251230->SetMaximum(1.1);
   Graph_Graph_Graph_from_plot12251230->SetDirectory(0);
   Graph_Graph_Graph_from_plot12251230->SetStats(0);
   Graph_Graph_Graph_from_plot12251230->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12251230->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12251230->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12251230->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot12251230->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12251230->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12251230->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12251230->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12251230->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12251230->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot12251230);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1231[24] = {
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
   Double_t Graph_from_plot_fy1231[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   46.68024,
   17.05144,
   9.525618,
   4.459434,
   1.98794,
   1.449987,
   0.8993795,
   0.6931947,
   0.3216294,
   0.1844185,
   0.1365527,
   0.05811676,
   0.02212127,
   0.2367661,
   0.003394776};
   Double_t Graph_from_plot_fex1231[24] = {
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
   Double_t Graph_from_plot_fey1231[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.866287,
   1.684989,
   1.287212,
   0.880107,
   0.432263,
   0.2782495,
   0.2332783,
   0.1477638,
   0.08011131,
   0.06290747,
   0.04531968,
   0.02159474,
   0.0111469,
   0.3440684,
   0.001833178};
   gre = new TGraphErrors(24,Graph_from_plot_fx1231,Graph_from_plot_fy1231,Graph_from_plot_fex1231,Graph_from_plot_fey1231);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot12261231 = new TH1F("Graph_Graph_Graph_from_plot12261231","",100,0,11);
   Graph_Graph_Graph_from_plot12261231->SetMinimum(0.05450118);
   Graph_Graph_Graph_from_plot12261231->SetMaximum(54.50118);
   Graph_Graph_Graph_from_plot12261231->SetDirectory(0);
   Graph_Graph_Graph_from_plot12261231->SetStats(0);
   Graph_Graph_Graph_from_plot12261231->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12261231->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12261231->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12261231->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot12261231->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12261231->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12261231->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12261231->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12261231->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12261231->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot12261231);
   
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
   TLegendEntry *entry=leg->AddEntry("plot","Data","P");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(62);
   entry=leg->AddEntry("plot","Z Jets","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("plot","EWK","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("plot","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
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
   Double_t xAxis955[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__897 = new TH1D("plot__897","",24, xAxis955);
   plot__897->SetBinContent(10,31);
   plot__897->SetBinContent(11,18);
   plot__897->SetBinContent(12,11);
   plot__897->SetBinContent(13,3);
   plot__897->SetBinContent(14,2);
   plot__897->SetBinContent(15,1);
   plot__897->SetBinContent(16,0.5);
   plot__897->SetBinContent(17,1);
   plot__897->SetBinContent(18,0.2);
   plot__897->SetBinContent(19,0.4);
   plot__897->SetBinContent(20,0.2);
   plot__897->SetBinContent(21,0.1);
   plot__897->SetBinContent(23,1);
   plot__897->SetBinContent(24,0.01449275);
   plot__897->SetBinError(10,5.567764);
   plot__897->SetBinError(11,4.242641);
   plot__897->SetBinError(12,3.316625);
   plot__897->SetBinError(13,2);
   plot__897->SetBinError(14,1);
   plot__897->SetBinError(15,1);
   plot__897->SetBinError(17,1);
   plot__897->SetBinError(24,0.01024792);
   plot__897->SetMinimum(0.11);
   plot__897->SetMaximum(466.8024);
   plot__897->SetEntries(105);

   ci = TColor::GetColor("#000099");
   plot__897->SetLineColor(ci);
   plot__897->SetLineWidth(2);
   plot__897->SetMarkerStyle(20);
   plot__897->SetMarkerSize(1.5);
   plot__897->GetXaxis()->SetTitle("#alpha_{T}");
   plot__897->GetXaxis()->SetRange(1,23);
   plot__897->GetXaxis()->SetLabelFont(42);
   plot__897->GetXaxis()->SetLabelSize(0.035);
   plot__897->GetXaxis()->SetTitleSize(0.035);
   plot__897->GetXaxis()->SetTitleFont(42);
   plot__897->GetYaxis()->SetTitle("Events");
   plot__897->GetYaxis()->SetLabelFont(42);
   plot__897->GetYaxis()->SetLabelSize(0.035);
   plot__897->GetYaxis()->SetTitleSize(0.035);
   plot__897->GetYaxis()->SetTitleOffset(1.3);
   plot__897->GetYaxis()->SetTitleFont(42);
   plot__897->GetZaxis()->SetLabelFont(42);
   plot__897->GetZaxis()->SetLabelSize(0.035);
   plot__897->GetZaxis()->SetTitleSize(0.035);
   plot__897->GetZaxis()->SetTitleFont(42);
   plot__897->Draw("PSAME");
   u->Modified();
   canvasbtag_two_375_475/AlphaT_2->cd();
  
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
   Double_t xAxis956[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__898 = new TH1D("plot__898","",24, xAxis956);
   plot__898->SetBinContent(10,0.6640925);
   plot__898->SetBinContent(11,1.055629);
   plot__898->SetBinContent(12,1.154781);
   plot__898->SetBinContent(13,0.6727311);
   plot__898->SetBinContent(14,1.006067);
   plot__898->SetBinContent(15,0.6896615);
   plot__898->SetBinContent(16,0.5559388);
   plot__898->SetBinContent(17,1.442596);
   plot__898->SetBinContent(18,0.6218337);
   plot__898->SetBinContent(19,2.16898);
   plot__898->SetBinContent(20,1.464636);
   plot__898->SetBinContent(21,1.720674);
   plot__898->SetBinContent(23,4.223577);
   plot__898->SetBinContent(24,4.269134);
   plot__898->SetBinError(10,0.1192745);
   plot__898->SetBinError(11,0.2488142);
   plot__898->SetBinError(12,0.3481795);
   plot__898->SetBinError(13,0.4484874);
   plot__898->SetBinError(14,0.5030333);
   plot__898->SetBinError(15,0.6896615);
   plot__898->SetBinError(17,1.442596);
   plot__898->SetBinError(24,3.018733);
   plot__898->SetMinimum(0);
   plot__898->SetMaximum(2);
   plot__898->SetEntries(7.186058);

   ci = TColor::GetColor("#000099");
   plot__898->SetLineColor(ci);
   plot__898->SetLineWidth(2);
   plot__898->SetMarkerStyle(20);
   plot__898->SetMarkerSize(1.5);
   plot__898->GetXaxis()->SetRange(1,23);
   plot__898->GetXaxis()->SetLabelFont(42);
   plot__898->GetXaxis()->SetLabelSize(0.12);
   plot__898->GetXaxis()->SetTitleSize(0.035);
   plot__898->GetXaxis()->SetTitleFont(42);
   plot__898->GetYaxis()->SetTitle("Data/MC");
   plot__898->GetYaxis()->SetNdivisions(505);
   plot__898->GetYaxis()->SetLabelFont(42);
   plot__898->GetYaxis()->SetLabelSize(0.11);
   plot__898->GetYaxis()->SetTitleSize(0.1);
   plot__898->GetYaxis()->SetTitleOffset(0.5);
   plot__898->GetYaxis()->SetTitleFont(42);
   plot__898->GetZaxis()->SetLabelFont(42);
   plot__898->GetZaxis()->SetLabelSize(0.035);
   plot__898->GetZaxis()->SetTitleSize(0.035);
   plot__898->GetZaxis()->SetTitleFont(42);
   plot__898->Draw("p");
   
   Double_t Graph_from_plot_fx1232[24] = {
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
   Double_t Graph_from_plot_fy1232[24] = {
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
   4.269134};
   Double_t Graph_from_plot_fex1232[24] = {
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
   Double_t Graph_from_plot_fey1232[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06140257,
   0.09881797,
   0.1351316,
   0.1973585,
   0.2174427,
   0.191898,
   0.2593769,
   0.2131635,
   0.2490796,
   0.3411126,
   0.3318842,
   0.371575,
   0.5038999,
   1.453199,
   0.5399996};
   gre = new TGraphErrors(24,Graph_from_plot_fx1232,Graph_from_plot_fy1232,Graph_from_plot_fex1232,Graph_from_plot_fey1232);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1232 = new TH1F("Graph_Graph_from_plot1232","",100,0,11);
   Graph_Graph_from_plot1232->SetMinimum(-0.9794327);
   Graph_Graph_from_plot1232->SetMaximum(5.335366);
   Graph_Graph_from_plot1232->SetDirectory(0);
   Graph_Graph_from_plot1232->SetStats(0);
   Graph_Graph_from_plot1232->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1232->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1232->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1232->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1232->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1232->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1232->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1232->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1232->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1232->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1232);
   
   gre->Draw("2");
   Double_t xAxis957[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__899 = new TH1D("plot__899","",24, xAxis957);
   plot__899->SetBinContent(10,0.6640925);
   plot__899->SetBinContent(11,1.055629);
   plot__899->SetBinContent(12,1.154781);
   plot__899->SetBinContent(13,0.6727311);
   plot__899->SetBinContent(14,1.006067);
   plot__899->SetBinContent(15,0.6896615);
   plot__899->SetBinContent(16,0.5559388);
   plot__899->SetBinContent(17,1.442596);
   plot__899->SetBinContent(18,0.6218337);
   plot__899->SetBinContent(19,2.16898);
   plot__899->SetBinContent(20,1.464636);
   plot__899->SetBinContent(21,1.720674);
   plot__899->SetBinContent(23,4.223577);
   plot__899->SetBinContent(24,4.269134);
   plot__899->SetBinError(10,0.1192745);
   plot__899->SetBinError(11,0.2488142);
   plot__899->SetBinError(12,0.3481795);
   plot__899->SetBinError(13,0.4484874);
   plot__899->SetBinError(14,0.5030333);
   plot__899->SetBinError(15,0.6896615);
   plot__899->SetBinError(17,1.442596);
   plot__899->SetBinError(24,3.018733);
   plot__899->SetMinimum(0);
   plot__899->SetMaximum(2);
   plot__899->SetEntries(7.186058);

   ci = TColor::GetColor("#000099");
   plot__899->SetLineColor(ci);
   plot__899->SetLineWidth(2);
   plot__899->SetMarkerStyle(20);
   plot__899->SetMarkerSize(1.5);
   plot__899->GetXaxis()->SetRange(1,23);
   plot__899->GetXaxis()->SetLabelFont(42);
   plot__899->GetXaxis()->SetLabelSize(0.12);
   plot__899->GetXaxis()->SetTitleSize(0.035);
   plot__899->GetXaxis()->SetTitleFont(42);
   plot__899->GetYaxis()->SetTitle("Data/MC");
   plot__899->GetYaxis()->SetNdivisions(505);
   plot__899->GetYaxis()->SetLabelFont(42);
   plot__899->GetYaxis()->SetLabelSize(0.11);
   plot__899->GetYaxis()->SetTitleSize(0.1);
   plot__899->GetYaxis()->SetTitleOffset(0.5);
   plot__899->GetYaxis()->SetTitleFont(42);
   plot__899->GetZaxis()->SetLabelFont(42);
   plot__899->GetZaxis()->SetLabelSize(0.035);
   plot__899->GetZaxis()->SetTitleSize(0.035);
   plot__899->GetZaxis()->SetTitleFont(42);
   plot__899->Draw("PSAME");
   d->Modified();
   canvasbtag_two_375_475/AlphaT_2->cd();
   canvasbtag_two_375_475/AlphaT_2->Modified();
   canvasbtag_two_375_475/AlphaT_2->cd();
   canvasbtag_two_375_475/AlphaT_2->SetSelected(canvasbtag_two_375_475/AlphaT_2);
}
