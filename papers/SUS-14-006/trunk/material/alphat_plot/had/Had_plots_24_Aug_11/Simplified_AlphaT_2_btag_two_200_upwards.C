void Simplified_AlphaT_2_btag_two_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_200_275/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:12 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_200_275/AlphaT_2 = new TCanvas("canvasbtag_two_200_275/AlphaT_2", "cannameAlphaT_2",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_200_275/AlphaT_2->SetHighLightColor(2);
   canvasbtag_two_200_275/AlphaT_2->Range(0,0,1,1);
   canvasbtag_two_200_275/AlphaT_2->SetFillColor(0);
   canvasbtag_two_200_275/AlphaT_2->SetBorderMode(0);
   canvasbtag_two_200_275/AlphaT_2->SetBorderSize(2);
   canvasbtag_two_200_275/AlphaT_2->SetTickx(1);
   canvasbtag_two_200_275/AlphaT_2->SetTicky(1);
   canvasbtag_two_200_275/AlphaT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.452074,3.4875,3.482594);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1147[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1078 = new TH1D("plot__1078","",24, xAxis1147);
   plot__1078->SetBinContent(10,80);
   plot__1078->SetBinContent(11,89);
   plot__1078->SetBinContent(12,78);
   plot__1078->SetBinContent(13,48);
   plot__1078->SetBinContent(14,28);
   plot__1078->SetBinContent(15,17);
   plot__1078->SetBinContent(16,13);
   plot__1078->SetBinContent(17,8.8);
   plot__1078->SetBinContent(18,2);
   plot__1078->SetBinContent(19,2);
   plot__1078->SetBinContent(20,0.6);
   plot__1078->SetBinContent(21,0.8);
   plot__1078->SetBinContent(22,0.4);
   plot__1078->SetBinContent(23,3.5);
   plot__1078->SetBinContent(24,0.05072464);
   plot__1078->SetBinError(10,8.944272);
   plot__1078->SetBinError(11,9.433981);
   plot__1078->SetBinError(12,8.831761);
   plot__1078->SetBinError(13,6.928203);
   plot__1078->SetBinError(14,5.291503);
   plot__1078->SetBinError(15,2.915476);
   plot__1078->SetBinError(16,2.54951);
   plot__1078->SetBinError(17,3.03);
   plot__1078->SetBinError(18,2);
   plot__1078->SetBinError(19,2);
   plot__1078->SetBinError(23,2.14);
   plot__1078->SetBinError(24,0.01917211);
   plot__1078->SetMinimum(0.11);
   plot__1078->SetMaximum(975.2741);
   plot__1078->SetEntries(494);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1078->SetLineColor(ci);
   plot__1078->SetLineWidth(2);
   plot__1078->SetMarkerStyle(20);
   plot__1078->SetMarkerSize(1.5);
   plot__1078->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1078->GetXaxis()->SetRange(1,23);
   plot__1078->GetXaxis()->SetLabelFont(42);
   plot__1078->GetXaxis()->SetLabelSize(0.035);
   plot__1078->GetXaxis()->SetTitleSize(0.035);
   plot__1078->GetXaxis()->SetTitleFont(42);
   plot__1078->GetYaxis()->SetTitle("Events");
   plot__1078->GetYaxis()->SetLabelFont(42);
   plot__1078->GetYaxis()->SetLabelSize(0.035);
   plot__1078->GetYaxis()->SetTitleSize(0.035);
   plot__1078->GetYaxis()->SetTitleOffset(1.3);
   plot__1078->GetYaxis()->SetTitleFont(42);
   plot__1078->GetZaxis()->SetLabelFont(42);
   plot__1078->GetZaxis()->SetLabelSize(0.035);
   plot__1078->GetZaxis()->SetTitleSize(0.035);
   plot__1078->GetZaxis()->SetTitleFont(42);
   plot__1078->Draw("");
   Double_t xAxis1148[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1079 = new TH1D("plot__1079","",24, xAxis1148);
   plot__1079->SetEntries(25);
   plot__1079->SetLineColor(7);
   plot__1079->SetLineStyle(10);
   plot__1079->SetLineWidth(3);
   plot__1079->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1079->GetXaxis()->SetRange(1,23);
   plot__1079->GetXaxis()->SetLabelFont(42);
   plot__1079->GetXaxis()->SetLabelSize(0.035);
   plot__1079->GetXaxis()->SetTitleSize(0.035);
   plot__1079->GetXaxis()->SetTitleFont(42);
   plot__1079->GetYaxis()->SetTitle("Events/0.025");
   plot__1079->GetYaxis()->SetLabelFont(42);
   plot__1079->GetYaxis()->SetLabelSize(0.035);
   plot__1079->GetYaxis()->SetTitleSize(0.035);
   plot__1079->GetYaxis()->SetTitleFont(42);
   plot__1079->GetZaxis()->SetLabelFont(42);
   plot__1079->GetZaxis()->SetLabelSize(0.035);
   plot__1079->GetZaxis()->SetTitleSize(0.035);
   plot__1079->GetZaxis()->SetTitleFont(42);
   plot__1079->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1149[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_70 = new TH1F("_stack_70","",24, xAxis1149);
   _stack_70->SetMinimum(0.04069115);
   _stack_70->SetMaximum(162.7646);
   _stack_70->SetDirectory(0);
   _stack_70->SetStats(0);
   _stack_70->GetXaxis()->SetLabelFont(42);
   _stack_70->GetXaxis()->SetLabelOffset(0.007);
   _stack_70->GetXaxis()->SetLabelSize(0.05);
   _stack_70->GetXaxis()->SetTitleSize(0.05);
   _stack_70->GetYaxis()->SetLabelFont(42);
   _stack_70->GetYaxis()->SetLabelOffset(0.007);
   _stack_70->GetYaxis()->SetLabelSize(0.05);
   _stack_70->GetZaxis()->SetLabelFont(42);
   _stack_70->GetZaxis()->SetLabelOffset(0.007);
   _stack_70->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_70);
   
   Double_t xAxis1150[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1080 = new TH1D("plot__1080","",24, xAxis1150);
   plot__1080->SetBinContent(10,97.52741);
   plot__1080->SetBinContent(11,78.93836);
   plot__1080->SetBinContent(12,85.37057);
   plot__1080->SetBinContent(13,49.45926);
   plot__1080->SetBinContent(14,28.13083);
   plot__1080->SetBinContent(15,21.4514);
   plot__1080->SetBinContent(16,12.51093);
   plot__1080->SetBinContent(17,8.436763);
   plot__1080->SetBinContent(18,4.103524);
   plot__1080->SetBinContent(19,2.324173);
   plot__1080->SetBinContent(20,1.807885);
   plot__1080->SetBinContent(21,0.7972404);
   plot__1080->SetBinContent(22,0.4182672);
   plot__1080->SetBinContent(23,3.394228);
   plot__1080->SetBinContent(24,0.04510142);
   plot__1080->SetBinError(10,4.200466);
   plot__1080->SetBinError(11,3.79364);
   plot__1080->SetBinError(12,3.822666);
   plot__1080->SetBinError(13,2.87247);
   plot__1080->SetBinError(14,2.070433);
   plot__1080->SetBinError(15,1.308777);
   plot__1080->SetBinError(16,0.9599588);
   plot__1080->SetBinError(17,0.5127038);
   plot__1080->SetBinError(18,0.3337052);
   plot__1080->SetBinError(19,0.2601744);
   plot__1080->SetBinError(20,0.2329114);
   plot__1080->SetBinError(21,0.1126039);
   plot__1080->SetBinError(22,0.06806375);
   plot__1080->SetBinError(23,1.302733);
   plot__1080->SetBinError(24,0.008021144);
   plot__1080->SetEntries(5807);
   plot__1080->SetLineColor(3);
   plot__1080->SetLineWidth(3);
   plot__1080->SetMarkerColor(4);
   plot__1080->SetMarkerStyle(20);
   plot__1080->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1080->GetXaxis()->SetRange(1,23);
   plot__1080->GetXaxis()->SetLabelFont(42);
   plot__1080->GetXaxis()->SetLabelSize(0.035);
   plot__1080->GetXaxis()->SetTitleSize(0.035);
   plot__1080->GetXaxis()->SetTitleFont(42);
   plot__1080->GetYaxis()->SetTitle("Events/0.025");
   plot__1080->GetYaxis()->SetLabelFont(42);
   plot__1080->GetYaxis()->SetLabelSize(0.035);
   plot__1080->GetYaxis()->SetTitleSize(0.035);
   plot__1080->GetYaxis()->SetTitleFont(42);
   plot__1080->GetZaxis()->SetLabelFont(42);
   plot__1080->GetZaxis()->SetLabelSize(0.035);
   plot__1080->GetZaxis()->SetTitleSize(0.035);
   plot__1080->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   ->Draw("samehist");
   Double_t xAxis1151[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1081 = new TH1D("plot__1081","",24, xAxis1151);
   plot__1081->SetBinContent(10,97.52741);
   plot__1081->SetBinContent(11,78.93836);
   plot__1081->SetBinContent(12,85.37057);
   plot__1081->SetBinContent(13,49.45926);
   plot__1081->SetBinContent(14,28.13083);
   plot__1081->SetBinContent(15,21.4514);
   plot__1081->SetBinContent(16,12.51093);
   plot__1081->SetBinContent(17,8.436763);
   plot__1081->SetBinContent(18,4.103524);
   plot__1081->SetBinContent(19,2.324173);
   plot__1081->SetBinContent(20,1.807885);
   plot__1081->SetBinContent(21,0.7972404);
   plot__1081->SetBinContent(22,0.4182672);
   plot__1081->SetBinContent(23,3.394228);
   plot__1081->SetBinContent(24,0.04510142);
   plot__1081->SetBinError(10,4.200466);
   plot__1081->SetBinError(11,3.79364);
   plot__1081->SetBinError(12,3.822666);
   plot__1081->SetBinError(13,2.87247);
   plot__1081->SetBinError(14,2.070433);
   plot__1081->SetBinError(15,1.308777);
   plot__1081->SetBinError(16,0.9599588);
   plot__1081->SetBinError(17,0.5127038);
   plot__1081->SetBinError(18,0.3337052);
   plot__1081->SetBinError(19,0.2601744);
   plot__1081->SetBinError(20,0.2329114);
   plot__1081->SetBinError(21,0.1126039);
   plot__1081->SetBinError(22,0.06806375);
   plot__1081->SetBinError(23,1.302733);
   plot__1081->SetBinError(24,0.008021144);
   plot__1081->SetEntries(5807);
   plot__1081->SetLineColor(3);
   plot__1081->SetLineWidth(3);
   plot__1081->SetMarkerColor(4);
   plot__1081->SetMarkerStyle(20);
   plot__1081->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1081->GetXaxis()->SetRange(1,23);
   plot__1081->GetXaxis()->SetLabelFont(42);
   plot__1081->GetXaxis()->SetLabelSize(0.035);
   plot__1081->GetXaxis()->SetTitleSize(0.035);
   plot__1081->GetXaxis()->SetTitleFont(42);
   plot__1081->GetYaxis()->SetTitle("Events/0.025");
   plot__1081->GetYaxis()->SetLabelFont(42);
   plot__1081->GetYaxis()->SetLabelSize(0.035);
   plot__1081->GetYaxis()->SetTitleSize(0.035);
   plot__1081->GetYaxis()->SetTitleFont(42);
   plot__1081->GetZaxis()->SetLabelFont(42);
   plot__1081->GetZaxis()->SetLabelSize(0.035);
   plot__1081->GetZaxis()->SetTitleSize(0.035);
   plot__1081->GetZaxis()->SetTitleFont(42);
   plot__1081->Draw("SAMEHIST");
   Double_t xAxis1152[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1082 = new TH1D("plot__1082","",24, xAxis1152);
   plot__1082->SetBinContent(10,14.86592);
   plot__1082->SetBinContent(11,14.24041);
   plot__1082->SetBinContent(12,18.49409);
   plot__1082->SetBinContent(13,12.55275);
   plot__1082->SetBinContent(14,8.901682);
   plot__1082->SetBinContent(15,5.753382);
   plot__1082->SetBinContent(16,4.318962);
   plot__1082->SetBinContent(17,3.194914);
   plot__1082->SetBinContent(18,1.820895);
   plot__1082->SetBinContent(19,1.02232);
   plot__1082->SetBinContent(20,0.8691194);
   plot__1082->SetBinContent(21,0.3178003);
   plot__1082->SetBinContent(22,0.2176765);
   plot__1082->SetBinContent(23,1.369839);
   plot__1082->SetBinContent(24,0.01636049);
   plot__1082->SetBinError(10,0.8966075);
   plot__1082->SetBinError(11,1.017444);
   plot__1082->SetBinError(12,1.327737);
   plot__1082->SetBinError(13,1.025164);
   plot__1082->SetBinError(14,0.921789);
   plot__1082->SetBinError(15,0.4626668);
   plot__1082->SetBinError(16,0.457112);
   plot__1082->SetBinError(17,0.235807);
   plot__1082->SetBinError(18,0.1724973);
   plot__1082->SetBinError(19,0.1510065);
   plot__1082->SetBinError(20,0.1415033);
   plot__1082->SetBinError(21,0.05449183);
   plot__1082->SetBinError(22,0.03918072);
   plot__1082->SetBinError(23,0.8275988);
   plot__1082->SetBinError(24,0.00436425);
   plot__1082->SetEntries(2499);
   plot__1082->SetLineColor(5);
   plot__1082->SetLineWidth(3);
   plot__1082->SetMarkerStyle(20);
   plot__1082->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1082->GetXaxis()->SetRange(1,23);
   plot__1082->GetXaxis()->SetLabelFont(42);
   plot__1082->GetXaxis()->SetLabelSize(0.035);
   plot__1082->GetXaxis()->SetTitleSize(0.035);
   plot__1082->GetXaxis()->SetTitleFont(42);
   plot__1082->GetYaxis()->SetTitle("Events/0.025");
   plot__1082->GetYaxis()->SetLabelFont(42);
   plot__1082->GetYaxis()->SetLabelSize(0.035);
   plot__1082->GetYaxis()->SetTitleSize(0.035);
   plot__1082->GetYaxis()->SetTitleFont(42);
   plot__1082->GetZaxis()->SetLabelFont(42);
   plot__1082->GetZaxis()->SetLabelSize(0.035);
   plot__1082->GetZaxis()->SetTitleSize(0.035);
   plot__1082->GetZaxis()->SetTitleFont(42);
   plot__1082->Draw("SAMEHIST");
   
   Double_t Graph_from_plot_fx1277[24] = {
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
   Double_t Graph_from_plot_fy1277[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   14.86592,
   14.24041,
   18.49409,
   12.55275,
   8.901682,
   5.753382,
   4.318962,
   3.194914,
   1.820895,
   1.02232,
   0.8691194,
   0.3178003,
   0.2176765,
   1.369839,
   0.01636049};
   Double_t Graph_from_plot_fex1277[24] = {
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
   Double_t Graph_from_plot_fey1277[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.8966075,
   1.017444,
   1.327737,
   1.025164,
   0.921789,
   0.4626668,
   0.457112,
   0.235807,
   0.1724973,
   0.1510065,
   0.1415033,
   0.05449183,
   0.03918072,
   0.8275988,
   0.00436425};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1277,Graph_from_plot_fy1277,Graph_from_plot_fex1277,Graph_from_plot_fey1277);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(5);
   gre->SetFillStyle(3008);
   gre->SetLineColor(5);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1277 = new TH1F("Graph_Graph_from_plot1277","",100,0,11);
   Graph_Graph_from_plot1277->SetMinimum(0.02180401);
   Graph_Graph_from_plot1277->SetMaximum(21.80401);
   Graph_Graph_from_plot1277->SetDirectory(0);
   Graph_Graph_from_plot1277->SetStats(0);
   Graph_Graph_from_plot1277->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1277->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1277->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1277->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1277->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1277->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1277->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1277->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1277->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1277->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1277);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1278[24] = {
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
   Double_t Graph_from_plot_fy1278[24] = {
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
   Double_t Graph_from_plot_fex1278[24] = {
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
   Double_t Graph_from_plot_fey1278[24] = {
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
   gre = new TGraphErrors(24,Graph_from_plot_fx1278,Graph_from_plot_fy1278,Graph_from_plot_fex1278,Graph_from_plot_fey1278);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot12731278 = new TH1F("Graph_Graph_Graph_from_plot12731278","",100,0,11);
   Graph_Graph_Graph_from_plot12731278->SetMinimum(0.0011);
   Graph_Graph_Graph_from_plot12731278->SetMaximum(1.1);
   Graph_Graph_Graph_from_plot12731278->SetDirectory(0);
   Graph_Graph_Graph_from_plot12731278->SetStats(0);
   Graph_Graph_Graph_from_plot12731278->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12731278->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12731278->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12731278->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot12731278->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12731278->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12731278->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12731278->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12731278->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12731278->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot12731278);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1279[24] = {
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
   Double_t Graph_from_plot_fy1279[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   97.52741,
   78.93836,
   85.37057,
   49.45926,
   28.13083,
   21.4514,
   12.51093,
   8.436763,
   4.103524,
   2.324173,
   1.807885,
   0.7972404,
   0.4182672,
   3.394228,
   0.04510142};
   Double_t Graph_from_plot_fex1279[24] = {
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
   Double_t Graph_from_plot_fey1279[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   4.200466,
   3.79364,
   3.822666,
   2.87247,
   2.070433,
   1.308777,
   0.9599588,
   0.5127038,
   0.3337052,
   0.2601744,
   0.2329114,
   0.1126039,
   0.06806375,
   1.302733,
   0.008021144};
   gre = new TGraphErrors(24,Graph_from_plot_fx1279,Graph_from_plot_fy1279,Graph_from_plot_fex1279,Graph_from_plot_fey1279);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot12741279 = new TH1F("Graph_Graph_Graph_from_plot12741279","",100,0,11);
   Graph_Graph_Graph_from_plot12741279->SetMinimum(0.1119007);
   Graph_Graph_Graph_from_plot12741279->SetMaximum(111.9007);
   Graph_Graph_Graph_from_plot12741279->SetDirectory(0);
   Graph_Graph_Graph_from_plot12741279->SetStats(0);
   Graph_Graph_Graph_from_plot12741279->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12741279->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12741279->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12741279->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot12741279->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12741279->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12741279->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12741279->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12741279->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12741279->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot12741279);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_200_2    Jet Multiplicity=2,3");
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
   Double_t xAxis1153[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1083 = new TH1D("plot__1083","",24, xAxis1153);
   plot__1083->SetBinContent(10,80);
   plot__1083->SetBinContent(11,89);
   plot__1083->SetBinContent(12,78);
   plot__1083->SetBinContent(13,48);
   plot__1083->SetBinContent(14,28);
   plot__1083->SetBinContent(15,17);
   plot__1083->SetBinContent(16,13);
   plot__1083->SetBinContent(17,8.8);
   plot__1083->SetBinContent(18,2);
   plot__1083->SetBinContent(19,2);
   plot__1083->SetBinContent(20,0.6);
   plot__1083->SetBinContent(21,0.8);
   plot__1083->SetBinContent(22,0.4);
   plot__1083->SetBinContent(23,3.5);
   plot__1083->SetBinContent(24,0.05072464);
   plot__1083->SetBinError(10,8.944272);
   plot__1083->SetBinError(11,9.433981);
   plot__1083->SetBinError(12,8.831761);
   plot__1083->SetBinError(13,6.928203);
   plot__1083->SetBinError(14,5.291503);
   plot__1083->SetBinError(15,2.915476);
   plot__1083->SetBinError(16,2.54951);
   plot__1083->SetBinError(17,3.03);
   plot__1083->SetBinError(18,2);
   plot__1083->SetBinError(19,2);
   plot__1083->SetBinError(23,2.14);
   plot__1083->SetBinError(24,0.01917211);
   plot__1083->SetMinimum(0.11);
   plot__1083->SetMaximum(975.2741);
   plot__1083->SetEntries(494);

   ci = TColor::GetColor("#000099");
   plot__1083->SetLineColor(ci);
   plot__1083->SetLineWidth(2);
   plot__1083->SetMarkerStyle(20);
   plot__1083->SetMarkerSize(1.5);
   plot__1083->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1083->GetXaxis()->SetRange(1,23);
   plot__1083->GetXaxis()->SetLabelFont(42);
   plot__1083->GetXaxis()->SetLabelSize(0.035);
   plot__1083->GetXaxis()->SetTitleSize(0.035);
   plot__1083->GetXaxis()->SetTitleFont(42);
   plot__1083->GetYaxis()->SetTitle("Events");
   plot__1083->GetYaxis()->SetLabelFont(42);
   plot__1083->GetYaxis()->SetLabelSize(0.035);
   plot__1083->GetYaxis()->SetTitleSize(0.035);
   plot__1083->GetYaxis()->SetTitleOffset(1.3);
   plot__1083->GetYaxis()->SetTitleFont(42);
   plot__1083->GetZaxis()->SetLabelFont(42);
   plot__1083->GetZaxis()->SetLabelSize(0.035);
   plot__1083->GetZaxis()->SetTitleSize(0.035);
   plot__1083->GetZaxis()->SetTitleFont(42);
   plot__1083->Draw("PSAME");
   u->Modified();
   canvasbtag_two_200_275/AlphaT_2->cd();
  
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
   Double_t xAxis1154[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1084 = new TH1D("plot__1084","",24, xAxis1154);
   plot__1084->SetBinContent(10,0.8202822);
   plot__1084->SetBinContent(11,1.127462);
   plot__1084->SetBinContent(12,0.9136639);
   plot__1084->SetBinContent(13,0.9704957);
   plot__1084->SetBinContent(14,0.9953493);
   plot__1084->SetBinContent(15,0.7924891);
   plot__1084->SetBinContent(16,1.039091);
   plot__1084->SetBinContent(17,1.043054);
   plot__1084->SetBinContent(18,0.487386);
   plot__1084->SetBinContent(19,0.8605211);
   plot__1084->SetBinContent(20,0.3318795);
   plot__1084->SetBinContent(21,1.003461);
   plot__1084->SetBinContent(22,0.9563264);
   plot__1084->SetBinContent(23,1.031162);
   plot__1084->SetBinContent(24,1.124679);
   plot__1084->SetBinError(10,0.09171034);
   plot__1084->SetBinError(11,0.1195107);
   plot__1084->SetBinError(12,0.1034521);
   plot__1084->SetBinError(13,0.140079);
   plot__1084->SetBinError(14,0.1881033);
   plot__1084->SetBinError(15,0.1359108);
   plot__1084->SetBinError(16,0.2037826);
   plot__1084->SetBinError(17,0.3591425);
   plot__1084->SetBinError(18,0.487386);
   plot__1084->SetBinError(19,0.8605211);
   plot__1084->SetBinError(23,0.6304822);
   plot__1084->SetBinError(24,0.4250888);
   plot__1084->SetMinimum(0);
   plot__1084->SetMaximum(2);
   plot__1084->SetEntries(80.83899);

   ci = TColor::GetColor("#000099");
   plot__1084->SetLineColor(ci);
   plot__1084->SetLineWidth(2);
   plot__1084->SetMarkerStyle(20);
   plot__1084->SetMarkerSize(1.5);
   plot__1084->GetXaxis()->SetRange(1,23);
   plot__1084->GetXaxis()->SetLabelFont(42);
   plot__1084->GetXaxis()->SetLabelSize(0.12);
   plot__1084->GetXaxis()->SetTitleSize(0.035);
   plot__1084->GetXaxis()->SetTitleFont(42);
   plot__1084->GetYaxis()->SetTitle("Data/MC");
   plot__1084->GetYaxis()->SetNdivisions(505);
   plot__1084->GetYaxis()->SetLabelFont(42);
   plot__1084->GetYaxis()->SetLabelSize(0.11);
   plot__1084->GetYaxis()->SetTitleSize(0.1);
   plot__1084->GetYaxis()->SetTitleOffset(0.5);
   plot__1084->GetYaxis()->SetTitleFont(42);
   plot__1084->GetZaxis()->SetLabelFont(42);
   plot__1084->GetZaxis()->SetLabelSize(0.035);
   plot__1084->GetZaxis()->SetTitleSize(0.035);
   plot__1084->GetZaxis()->SetTitleFont(42);
   plot__1084->Draw("p");
   
   Double_t Graph_from_plot_fx1280[24] = {
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
   Double_t Graph_from_plot_fy1280[24] = {
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
   1.124679};
   Double_t Graph_from_plot_fex1280[24] = {
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
   Double_t Graph_from_plot_fey1280[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04306959,
   0.04805826,
   0.04477733,
   0.05807749,
   0.07360013,
   0.06101126,
   0.0767296,
   0.0607702,
   0.08132162,
   0.1119428,
   0.1288309,
   0.141242,
   0.1627279,
   0.3838084,
   0.1778468};
   gre = new TGraphErrors(24,Graph_from_plot_fx1280,Graph_from_plot_fy1280,Graph_from_plot_fex1280,Graph_from_plot_fey1280);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1280 = new TH1F("Graph_Graph_from_plot1280","",100,0,11);
   Graph_Graph_from_plot1280->SetMinimum(0.5394299);
   Graph_Graph_from_plot1280->SetMaximum(1.46057);
   Graph_Graph_from_plot1280->SetDirectory(0);
   Graph_Graph_from_plot1280->SetStats(0);
   Graph_Graph_from_plot1280->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1280->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1280->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1280->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1280->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1280->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1280->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1280->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1280->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1280->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1280);
   
   gre->Draw("2");
   Double_t xAxis1155[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1085 = new TH1D("plot__1085","",24, xAxis1155);
   plot__1085->SetBinContent(10,0.8202822);
   plot__1085->SetBinContent(11,1.127462);
   plot__1085->SetBinContent(12,0.9136639);
   plot__1085->SetBinContent(13,0.9704957);
   plot__1085->SetBinContent(14,0.9953493);
   plot__1085->SetBinContent(15,0.7924891);
   plot__1085->SetBinContent(16,1.039091);
   plot__1085->SetBinContent(17,1.043054);
   plot__1085->SetBinContent(18,0.487386);
   plot__1085->SetBinContent(19,0.8605211);
   plot__1085->SetBinContent(20,0.3318795);
   plot__1085->SetBinContent(21,1.003461);
   plot__1085->SetBinContent(22,0.9563264);
   plot__1085->SetBinContent(23,1.031162);
   plot__1085->SetBinContent(24,1.124679);
   plot__1085->SetBinError(10,0.09171034);
   plot__1085->SetBinError(11,0.1195107);
   plot__1085->SetBinError(12,0.1034521);
   plot__1085->SetBinError(13,0.140079);
   plot__1085->SetBinError(14,0.1881033);
   plot__1085->SetBinError(15,0.1359108);
   plot__1085->SetBinError(16,0.2037826);
   plot__1085->SetBinError(17,0.3591425);
   plot__1085->SetBinError(18,0.487386);
   plot__1085->SetBinError(19,0.8605211);
   plot__1085->SetBinError(23,0.6304822);
   plot__1085->SetBinError(24,0.4250888);
   plot__1085->SetMinimum(0);
   plot__1085->SetMaximum(2);
   plot__1085->SetEntries(80.83899);

   ci = TColor::GetColor("#000099");
   plot__1085->SetLineColor(ci);
   plot__1085->SetLineWidth(2);
   plot__1085->SetMarkerStyle(20);
   plot__1085->SetMarkerSize(1.5);
   plot__1085->GetXaxis()->SetRange(1,23);
   plot__1085->GetXaxis()->SetLabelFont(42);
   plot__1085->GetXaxis()->SetLabelSize(0.12);
   plot__1085->GetXaxis()->SetTitleSize(0.035);
   plot__1085->GetXaxis()->SetTitleFont(42);
   plot__1085->GetYaxis()->SetTitle("Data/MC");
   plot__1085->GetYaxis()->SetNdivisions(505);
   plot__1085->GetYaxis()->SetLabelFont(42);
   plot__1085->GetYaxis()->SetLabelSize(0.11);
   plot__1085->GetYaxis()->SetTitleSize(0.1);
   plot__1085->GetYaxis()->SetTitleOffset(0.5);
   plot__1085->GetYaxis()->SetTitleFont(42);
   plot__1085->GetZaxis()->SetLabelFont(42);
   plot__1085->GetZaxis()->SetLabelSize(0.035);
   plot__1085->GetZaxis()->SetTitleSize(0.035);
   plot__1085->GetZaxis()->SetTitleFont(42);
   plot__1085->Draw("PSAME");
   d->Modified();
   canvasbtag_two_200_275/AlphaT_2->cd();
   canvasbtag_two_200_275/AlphaT_2->Modified();
   canvasbtag_two_200_275/AlphaT_2->cd();
   canvasbtag_two_200_275/AlphaT_2->SetSelected(canvasbtag_two_200_275/AlphaT_2);
}
