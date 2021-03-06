void Simplified_AlphaT_all_btag_two_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_200_275/AlphaT_all/cannameAlphaT_all
//=========  (Wed Aug 24 11:54:11 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_200_275/AlphaT_all = new TCanvas("canvasbtag_two_200_275/AlphaT_all", "cannameAlphaT_all",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_200_275/AlphaT_all->SetHighLightColor(2);
   canvasbtag_two_200_275/AlphaT_all->Range(0,0,1,1);
   canvasbtag_two_200_275/AlphaT_all->SetFillColor(0);
   canvasbtag_two_200_275/AlphaT_all->SetBorderMode(0);
   canvasbtag_two_200_275/AlphaT_all->SetBorderSize(2);
   canvasbtag_two_200_275/AlphaT_all->SetTickx(1);
   canvasbtag_two_200_275/AlphaT_all->SetTicky(1);
   canvasbtag_two_200_275/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.508538,3.4875,3.99077);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1114[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1047 = new TH1D("plot__1047","",24, xAxis1114);
   plot__1047->SetBinContent(10,228);
   plot__1047->SetBinContent(11,186);
   plot__1047->SetBinContent(12,114);
   plot__1047->SetBinContent(13,64);
   plot__1047->SetBinContent(14,33);
   plot__1047->SetBinContent(15,20);
   plot__1047->SetBinContent(16,14);
   plot__1047->SetBinContent(17,9.2);
   plot__1047->SetBinContent(18,2.2);
   plot__1047->SetBinContent(19,2);
   plot__1047->SetBinContent(20,0.6);
   plot__1047->SetBinContent(21,0.8);
   plot__1047->SetBinContent(22,0.4);
   plot__1047->SetBinContent(23,3.5);
   plot__1047->SetBinContent(24,0.05072464);
   plot__1047->SetBinError(10,15.09967);
   plot__1047->SetBinError(11,13.63818);
   plot__1047->SetBinError(12,10.67708);
   plot__1047->SetBinError(13,8);
   plot__1047->SetBinError(14,5.744563);
   plot__1047->SetBinError(15,3.162278);
   plot__1047->SetBinError(16,2.645751);
   plot__1047->SetBinError(17,3.19);
   plot__1047->SetBinError(18,2);
   plot__1047->SetBinError(19,2);
   plot__1047->SetBinError(23,2.14);
   plot__1047->SetBinError(24,0.01917211);
   plot__1047->SetMinimum(0.11);
   plot__1047->SetMaximum(2759.553);
   plot__1047->SetEntries(807);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1047->SetLineColor(ci);
   plot__1047->SetLineWidth(2);
   plot__1047->SetMarkerStyle(20);
   plot__1047->SetMarkerSize(1.5);
   plot__1047->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1047->GetXaxis()->SetRange(1,23);
   plot__1047->GetXaxis()->SetLabelFont(42);
   plot__1047->GetXaxis()->SetLabelSize(0.035);
   plot__1047->GetXaxis()->SetTitleSize(0.035);
   plot__1047->GetXaxis()->SetTitleFont(42);
   plot__1047->GetYaxis()->SetTitle("Events");
   plot__1047->GetYaxis()->SetLabelFont(42);
   plot__1047->GetYaxis()->SetLabelSize(0.035);
   plot__1047->GetYaxis()->SetTitleSize(0.035);
   plot__1047->GetYaxis()->SetTitleOffset(1.3);
   plot__1047->GetYaxis()->SetTitleFont(42);
   plot__1047->GetZaxis()->SetLabelFont(42);
   plot__1047->GetZaxis()->SetLabelSize(0.035);
   plot__1047->GetZaxis()->SetTitleSize(0.035);
   plot__1047->GetZaxis()->SetTitleFont(42);
   plot__1047->Draw("");
   Double_t xAxis1115[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1048 = new TH1D("plot__1048","",24, xAxis1115);
   plot__1048->SetEntries(25);
   plot__1048->SetLineColor(7);
   plot__1048->SetLineStyle(10);
   plot__1048->SetLineWidth(3);
   plot__1048->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1048->GetXaxis()->SetRange(1,23);
   plot__1048->GetXaxis()->SetLabelFont(42);
   plot__1048->GetXaxis()->SetLabelSize(0.035);
   plot__1048->GetXaxis()->SetTitleSize(0.035);
   plot__1048->GetXaxis()->SetTitleFont(42);
   plot__1048->GetYaxis()->SetTitle("Events/0.025");
   plot__1048->GetYaxis()->SetLabelFont(42);
   plot__1048->GetYaxis()->SetLabelSize(0.035);
   plot__1048->GetYaxis()->SetTitleSize(0.035);
   plot__1048->GetYaxis()->SetTitleFont(42);
   plot__1048->GetZaxis()->SetLabelFont(42);
   plot__1048->GetZaxis()->SetLabelSize(0.035);
   plot__1048->GetZaxis()->SetTitleSize(0.035);
   plot__1048->GetZaxis()->SetTitleFont(42);
   plot__1048->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1116[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_68 = new TH1F("_stack_68","",24, xAxis1116);
   _stack_68->SetMinimum(0.113317);
   _stack_68->SetMaximum(453.2678);
   _stack_68->SetDirectory(0);
   _stack_68->SetStats(0);
   _stack_68->GetXaxis()->SetLabelFont(42);
   _stack_68->GetXaxis()->SetLabelOffset(0.007);
   _stack_68->GetXaxis()->SetLabelSize(0.05);
   _stack_68->GetXaxis()->SetTitleSize(0.05);
   _stack_68->GetYaxis()->SetLabelFont(42);
   _stack_68->GetYaxis()->SetLabelOffset(0.007);
   _stack_68->GetYaxis()->SetLabelSize(0.05);
   _stack_68->GetZaxis()->SetLabelFont(42);
   _stack_68->GetZaxis()->SetLabelOffset(0.007);
   _stack_68->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_68);
   
   Double_t xAxis1117[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1049 = new TH1D("plot__1049","",24, xAxis1117);
   plot__1049->SetBinContent(10,275.9553);
   plot__1049->SetBinContent(11,185.6341);
   plot__1049->SetBinContent(12,132.9982);
   plot__1049->SetBinContent(13,66.37822);
   plot__1049->SetBinContent(14,38.47327);
   plot__1049->SetBinContent(15,24.69563);
   plot__1049->SetBinContent(16,13.59653);
   plot__1049->SetBinContent(17,9.083735);
   plot__1049->SetBinContent(18,4.277684);
   plot__1049->SetBinContent(19,2.42582);
   plot__1049->SetBinContent(20,1.813059);
   plot__1049->SetBinContent(21,0.7972404);
   plot__1049->SetBinContent(22,0.4182672);
   plot__1049->SetBinContent(23,3.394228);
   plot__1049->SetBinContent(24,0.04510142);
   plot__1049->SetBinError(10,7.337106);
   plot__1049->SetBinError(11,5.982948);
   plot__1049->SetBinError(12,4.86094);
   plot__1049->SetBinError(13,3.40716);
   plot__1049->SetBinError(14,2.543404);
   plot__1049->SetBinError(15,1.424827);
   plot__1049->SetBinError(16,1.00042);
   plot__1049->SetBinError(17,0.538723);
   plot__1049->SetBinError(18,0.3433687);
   plot__1049->SetBinError(19,0.2648666);
   plot__1049->SetBinError(20,0.2329689);
   plot__1049->SetBinError(21,0.1126039);
   plot__1049->SetBinError(22,0.06806375);
   plot__1049->SetBinError(23,1.302733);
   plot__1049->SetBinError(24,0.008021144);
   plot__1049->SetEntries(8455);
   plot__1049->SetLineColor(3);
   plot__1049->SetLineWidth(3);
   plot__1049->SetMarkerColor(4);
   plot__1049->SetMarkerStyle(20);
   plot__1049->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1049->GetXaxis()->SetRange(1,23);
   plot__1049->GetXaxis()->SetLabelFont(42);
   plot__1049->GetXaxis()->SetLabelSize(0.035);
   plot__1049->GetXaxis()->SetTitleSize(0.035);
   plot__1049->GetXaxis()->SetTitleFont(42);
   plot__1049->GetYaxis()->SetTitle("Events/0.025");
   plot__1049->GetYaxis()->SetLabelFont(42);
   plot__1049->GetYaxis()->SetLabelSize(0.035);
   plot__1049->GetYaxis()->SetTitleSize(0.035);
   plot__1049->GetYaxis()->SetTitleFont(42);
   plot__1049->GetZaxis()->SetLabelFont(42);
   plot__1049->GetZaxis()->SetLabelSize(0.035);
   plot__1049->GetZaxis()->SetTitleSize(0.035);
   plot__1049->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   ->Draw("samehist");
   Double_t xAxis1118[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1050 = new TH1D("plot__1050","",24, xAxis1118);
   plot__1050->SetBinContent(10,275.9553);
   plot__1050->SetBinContent(11,185.6341);
   plot__1050->SetBinContent(12,132.9982);
   plot__1050->SetBinContent(13,66.37822);
   plot__1050->SetBinContent(14,38.47327);
   plot__1050->SetBinContent(15,24.69563);
   plot__1050->SetBinContent(16,13.59653);
   plot__1050->SetBinContent(17,9.083735);
   plot__1050->SetBinContent(18,4.277684);
   plot__1050->SetBinContent(19,2.42582);
   plot__1050->SetBinContent(20,1.813059);
   plot__1050->SetBinContent(21,0.7972404);
   plot__1050->SetBinContent(22,0.4182672);
   plot__1050->SetBinContent(23,3.394228);
   plot__1050->SetBinContent(24,0.04510142);
   plot__1050->SetBinError(10,7.337106);
   plot__1050->SetBinError(11,5.982948);
   plot__1050->SetBinError(12,4.86094);
   plot__1050->SetBinError(13,3.40716);
   plot__1050->SetBinError(14,2.543404);
   plot__1050->SetBinError(15,1.424827);
   plot__1050->SetBinError(16,1.00042);
   plot__1050->SetBinError(17,0.538723);
   plot__1050->SetBinError(18,0.3433687);
   plot__1050->SetBinError(19,0.2648666);
   plot__1050->SetBinError(20,0.2329689);
   plot__1050->SetBinError(21,0.1126039);
   plot__1050->SetBinError(22,0.06806375);
   plot__1050->SetBinError(23,1.302733);
   plot__1050->SetBinError(24,0.008021144);
   plot__1050->SetEntries(8455);
   plot__1050->SetLineColor(3);
   plot__1050->SetLineWidth(3);
   plot__1050->SetMarkerColor(4);
   plot__1050->SetMarkerStyle(20);
   plot__1050->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1050->GetXaxis()->SetRange(1,23);
   plot__1050->GetXaxis()->SetLabelFont(42);
   plot__1050->GetXaxis()->SetLabelSize(0.035);
   plot__1050->GetXaxis()->SetTitleSize(0.035);
   plot__1050->GetXaxis()->SetTitleFont(42);
   plot__1050->GetYaxis()->SetTitle("Events/0.025");
   plot__1050->GetYaxis()->SetLabelFont(42);
   plot__1050->GetYaxis()->SetLabelSize(0.035);
   plot__1050->GetYaxis()->SetTitleSize(0.035);
   plot__1050->GetYaxis()->SetTitleFont(42);
   plot__1050->GetZaxis()->SetLabelFont(42);
   plot__1050->GetZaxis()->SetLabelSize(0.035);
   plot__1050->GetZaxis()->SetTitleSize(0.035);
   plot__1050->GetZaxis()->SetTitleFont(42);
   plot__1050->Draw("SAMEHIST");
   Double_t xAxis1119[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1051 = new TH1D("plot__1051","",24, xAxis1119);
   plot__1051->SetBinContent(10,24.41525);
   plot__1051->SetBinContent(11,19.54761);
   plot__1051->SetBinContent(12,21.39666);
   plot__1051->SetBinContent(13,14.89855);
   plot__1051->SetBinContent(14,9.654987);
   plot__1051->SetBinContent(15,6.186801);
   plot__1051->SetBinContent(16,4.569866);
   plot__1051->SetBinContent(17,3.331275);
   plot__1051->SetBinContent(18,1.893777);
   plot__1051->SetBinContent(19,1.082424);
   plot__1051->SetBinContent(20,0.8742933);
   plot__1051->SetBinContent(21,0.3178003);
   plot__1051->SetBinContent(22,0.2176765);
   plot__1051->SetBinContent(23,1.369839);
   plot__1051->SetBinContent(24,0.01636049);
   plot__1051->SetBinError(10,1.115881);
   plot__1051->SetBinError(11,1.166243);
   plot__1051->SetBinError(12,1.392008);
   plot__1051->SetBinError(13,1.099053);
   plot__1051->SetBinError(14,0.9433232);
   plot__1051->SetBinError(15,0.474734);
   plot__1051->SetBinError(16,0.4658616);
   plot__1051->SetBinError(17,0.2398171);
   plot__1051->SetBinError(18,0.1754748);
   plot__1051->SetBinError(19,0.1534303);
   plot__1051->SetBinError(20,0.1415978);
   plot__1051->SetBinError(21,0.05449183);
   plot__1051->SetBinError(22,0.03918072);
   plot__1051->SetBinError(23,0.8275988);
   plot__1051->SetBinError(24,0.00436425);
   plot__1051->SetEntries(3191);
   plot__1051->SetLineColor(5);
   plot__1051->SetLineWidth(3);
   plot__1051->SetMarkerStyle(20);
   plot__1051->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1051->GetXaxis()->SetRange(1,23);
   plot__1051->GetXaxis()->SetLabelFont(42);
   plot__1051->GetXaxis()->SetLabelSize(0.035);
   plot__1051->GetXaxis()->SetTitleSize(0.035);
   plot__1051->GetXaxis()->SetTitleFont(42);
   plot__1051->GetYaxis()->SetTitle("Events/0.025");
   plot__1051->GetYaxis()->SetLabelFont(42);
   plot__1051->GetYaxis()->SetLabelSize(0.035);
   plot__1051->GetYaxis()->SetTitleSize(0.035);
   plot__1051->GetYaxis()->SetTitleFont(42);
   plot__1051->GetZaxis()->SetLabelFont(42);
   plot__1051->GetZaxis()->SetLabelSize(0.035);
   plot__1051->GetZaxis()->SetTitleSize(0.035);
   plot__1051->GetZaxis()->SetTitleFont(42);
   plot__1051->Draw("SAMEHIST");
   
   Double_t Graph_from_plot_fx1269[24] = {
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
   Double_t Graph_from_plot_fy1269[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   24.41525,
   19.54761,
   21.39666,
   14.89855,
   9.654987,
   6.186801,
   4.569866,
   3.331275,
   1.893777,
   1.082424,
   0.8742933,
   0.3178003,
   0.2176765,
   1.369839,
   0.01636049};
   Double_t Graph_from_plot_fex1269[24] = {
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
   Double_t Graph_from_plot_fey1269[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1.115881,
   1.166243,
   1.392008,
   1.099053,
   0.9433232,
   0.474734,
   0.4658616,
   0.2398171,
   0.1754748,
   0.1534303,
   0.1415978,
   0.05449183,
   0.03918072,
   0.8275988,
   0.00436425};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1269,Graph_from_plot_fy1269,Graph_from_plot_fex1269,Graph_from_plot_fey1269);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(5);
   gre->SetFillStyle(3008);
   gre->SetLineColor(5);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1269 = new TH1F("Graph_Graph_from_plot1269","",100,0,11);
   Graph_Graph_from_plot1269->SetMinimum(0.02808425);
   Graph_Graph_from_plot1269->SetMaximum(28.08425);
   Graph_Graph_from_plot1269->SetDirectory(0);
   Graph_Graph_from_plot1269->SetStats(0);
   Graph_Graph_from_plot1269->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1269->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1269->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1269->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1269->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1269->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1269->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1269->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1269->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1269->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1269);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1270[24] = {
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
   Double_t Graph_from_plot_fy1270[24] = {
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
   Double_t Graph_from_plot_fex1270[24] = {
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
   Double_t Graph_from_plot_fey1270[24] = {
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
   gre = new TGraphErrors(24,Graph_from_plot_fx1270,Graph_from_plot_fy1270,Graph_from_plot_fex1270,Graph_from_plot_fey1270);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot12651270 = new TH1F("Graph_Graph_Graph_from_plot12651270","",100,0,11);
   Graph_Graph_Graph_from_plot12651270->SetMinimum(0.0011);
   Graph_Graph_Graph_from_plot12651270->SetMaximum(1.1);
   Graph_Graph_Graph_from_plot12651270->SetDirectory(0);
   Graph_Graph_Graph_from_plot12651270->SetStats(0);
   Graph_Graph_Graph_from_plot12651270->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12651270->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12651270->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12651270->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot12651270->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12651270->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12651270->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12651270->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12651270->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12651270->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot12651270);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1271[24] = {
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
   Double_t Graph_from_plot_fy1271[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   275.9553,
   185.6341,
   132.9982,
   66.37822,
   38.47327,
   24.69563,
   13.59653,
   9.083735,
   4.277684,
   2.42582,
   1.813059,
   0.7972404,
   0.4182672,
   3.394228,
   0.04510142};
   Double_t Graph_from_plot_fex1271[24] = {
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
   Double_t Graph_from_plot_fey1271[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7.337106,
   5.982948,
   4.86094,
   3.40716,
   2.543404,
   1.424827,
   1.00042,
   0.538723,
   0.3433687,
   0.2648666,
   0.2329689,
   0.1126039,
   0.06806375,
   1.302733,
   0.008021144};
   gre = new TGraphErrors(24,Graph_from_plot_fx1271,Graph_from_plot_fy1271,Graph_from_plot_fex1271,Graph_from_plot_fey1271);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot12661271 = new TH1F("Graph_Graph_Graph_from_plot12661271","",100,0,11);
   Graph_Graph_Graph_from_plot12661271->SetMinimum(0.3116216);
   Graph_Graph_Graph_from_plot12661271->SetMaximum(311.6216);
   Graph_Graph_Graph_from_plot12661271->SetDirectory(0);
   Graph_Graph_Graph_from_plot12661271->SetStats(0);
   Graph_Graph_Graph_from_plot12661271->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12661271->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12661271->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12661271->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot12661271->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12661271->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12661271->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot12661271->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot12661271->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot12661271->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot12661271);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_200_2    Jet Multiplicity=all");
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
   Double_t xAxis1120[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1052 = new TH1D("plot__1052","",24, xAxis1120);
   plot__1052->SetBinContent(10,228);
   plot__1052->SetBinContent(11,186);
   plot__1052->SetBinContent(12,114);
   plot__1052->SetBinContent(13,64);
   plot__1052->SetBinContent(14,33);
   plot__1052->SetBinContent(15,20);
   plot__1052->SetBinContent(16,14);
   plot__1052->SetBinContent(17,9.2);
   plot__1052->SetBinContent(18,2.2);
   plot__1052->SetBinContent(19,2);
   plot__1052->SetBinContent(20,0.6);
   plot__1052->SetBinContent(21,0.8);
   plot__1052->SetBinContent(22,0.4);
   plot__1052->SetBinContent(23,3.5);
   plot__1052->SetBinContent(24,0.05072464);
   plot__1052->SetBinError(10,15.09967);
   plot__1052->SetBinError(11,13.63818);
   plot__1052->SetBinError(12,10.67708);
   plot__1052->SetBinError(13,8);
   plot__1052->SetBinError(14,5.744563);
   plot__1052->SetBinError(15,3.162278);
   plot__1052->SetBinError(16,2.645751);
   plot__1052->SetBinError(17,3.19);
   plot__1052->SetBinError(18,2);
   plot__1052->SetBinError(19,2);
   plot__1052->SetBinError(23,2.14);
   plot__1052->SetBinError(24,0.01917211);
   plot__1052->SetMinimum(0.11);
   plot__1052->SetMaximum(2759.553);
   plot__1052->SetEntries(807);

   ci = TColor::GetColor("#000099");
   plot__1052->SetLineColor(ci);
   plot__1052->SetLineWidth(2);
   plot__1052->SetMarkerStyle(20);
   plot__1052->SetMarkerSize(1.5);
   plot__1052->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1052->GetXaxis()->SetRange(1,23);
   plot__1052->GetXaxis()->SetLabelFont(42);
   plot__1052->GetXaxis()->SetLabelSize(0.035);
   plot__1052->GetXaxis()->SetTitleSize(0.035);
   plot__1052->GetXaxis()->SetTitleFont(42);
   plot__1052->GetYaxis()->SetTitle("Events");
   plot__1052->GetYaxis()->SetLabelFont(42);
   plot__1052->GetYaxis()->SetLabelSize(0.035);
   plot__1052->GetYaxis()->SetTitleSize(0.035);
   plot__1052->GetYaxis()->SetTitleOffset(1.3);
   plot__1052->GetYaxis()->SetTitleFont(42);
   plot__1052->GetZaxis()->SetLabelFont(42);
   plot__1052->GetZaxis()->SetLabelSize(0.035);
   plot__1052->GetZaxis()->SetTitleSize(0.035);
   plot__1052->GetZaxis()->SetTitleFont(42);
   plot__1052->Draw("PSAME");
   u->Modified();
   canvasbtag_two_200_275/AlphaT_all->cd();
  
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
   Double_t xAxis1121[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1053 = new TH1D("plot__1053","",24, xAxis1121);
   plot__1053->SetBinContent(10,0.8262208);
   plot__1053->SetBinContent(11,1.001971);
   plot__1053->SetBinContent(12,0.8571544);
   plot__1053->SetBinContent(13,0.9641717);
   plot__1053->SetBinContent(14,0.8577383);
   plot__1053->SetBinContent(15,0.8098599);
   plot__1053->SetBinContent(16,1.029675);
   plot__1053->SetBinContent(17,1.012799);
   plot__1053->SetBinContent(18,0.514297);
   plot__1053->SetBinContent(19,0.8244636);
   plot__1053->SetBinContent(20,0.3309324);
   plot__1053->SetBinContent(21,1.003461);
   plot__1053->SetBinContent(22,0.9563264);
   plot__1053->SetBinContent(23,1.031162);
   plot__1053->SetBinContent(24,1.124679);
   plot__1053->SetBinError(10,0.05471781);
   plot__1053->SetBinError(11,0.07346809);
   plot__1053->SetBinError(12,0.08027986);
   plot__1053->SetBinError(13,0.1205215);
   plot__1053->SetBinError(14,0.1493131);
   plot__1053->SetBinError(15,0.1280501);
   plot__1053->SetBinError(16,0.1945902);
   plot__1053->SetBinError(17,0.3511771);
   plot__1053->SetBinError(18,0.4675427);
   plot__1053->SetBinError(19,0.8244636);
   plot__1053->SetBinError(23,0.6304822);
   plot__1053->SetBinError(24,0.4250888);
   plot__1053->SetMinimum(0);
   plot__1053->SetMaximum(2);
   plot__1053->SetEntries(82.21834);

   ci = TColor::GetColor("#000099");
   plot__1053->SetLineColor(ci);
   plot__1053->SetLineWidth(2);
   plot__1053->SetMarkerStyle(20);
   plot__1053->SetMarkerSize(1.5);
   plot__1053->GetXaxis()->SetRange(1,23);
   plot__1053->GetXaxis()->SetLabelFont(42);
   plot__1053->GetXaxis()->SetLabelSize(0.12);
   plot__1053->GetXaxis()->SetTitleSize(0.035);
   plot__1053->GetXaxis()->SetTitleFont(42);
   plot__1053->GetYaxis()->SetTitle("Data/MC");
   plot__1053->GetYaxis()->SetNdivisions(505);
   plot__1053->GetYaxis()->SetLabelFont(42);
   plot__1053->GetYaxis()->SetLabelSize(0.11);
   plot__1053->GetYaxis()->SetTitleSize(0.1);
   plot__1053->GetYaxis()->SetTitleOffset(0.5);
   plot__1053->GetYaxis()->SetTitleFont(42);
   plot__1053->GetZaxis()->SetLabelFont(42);
   plot__1053->GetZaxis()->SetLabelSize(0.035);
   plot__1053->GetZaxis()->SetTitleSize(0.035);
   plot__1053->GetZaxis()->SetTitleFont(42);
   plot__1053->Draw("p");
   
   Double_t Graph_from_plot_fx1272[24] = {
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
   Double_t Graph_from_plot_fy1272[24] = {
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
   Double_t Graph_from_plot_fex1272[24] = {
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
   Double_t Graph_from_plot_fey1272[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02658802,
   0.03222979,
   0.03654891,
   0.05132949,
   0.06610834,
   0.0576955,
   0.07357909,
   0.05930633,
   0.08026976,
   0.1091864,
   0.1284949,
   0.141242,
   0.1627279,
   0.3838084,
   0.1778468};
   gre = new TGraphErrors(24,Graph_from_plot_fx1272,Graph_from_plot_fy1272,Graph_from_plot_fex1272,Graph_from_plot_fey1272);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1272 = new TH1F("Graph_Graph_from_plot1272","",100,0,11);
   Graph_Graph_from_plot1272->SetMinimum(0.5394299);
   Graph_Graph_from_plot1272->SetMaximum(1.46057);
   Graph_Graph_from_plot1272->SetDirectory(0);
   Graph_Graph_from_plot1272->SetStats(0);
   Graph_Graph_from_plot1272->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1272->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1272->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1272->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1272->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1272->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1272->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1272->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1272->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1272->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1272);
   
   gre->Draw("2");
   Double_t xAxis1122[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1054 = new TH1D("plot__1054","",24, xAxis1122);
   plot__1054->SetBinContent(10,0.8262208);
   plot__1054->SetBinContent(11,1.001971);
   plot__1054->SetBinContent(12,0.8571544);
   plot__1054->SetBinContent(13,0.9641717);
   plot__1054->SetBinContent(14,0.8577383);
   plot__1054->SetBinContent(15,0.8098599);
   plot__1054->SetBinContent(16,1.029675);
   plot__1054->SetBinContent(17,1.012799);
   plot__1054->SetBinContent(18,0.514297);
   plot__1054->SetBinContent(19,0.8244636);
   plot__1054->SetBinContent(20,0.3309324);
   plot__1054->SetBinContent(21,1.003461);
   plot__1054->SetBinContent(22,0.9563264);
   plot__1054->SetBinContent(23,1.031162);
   plot__1054->SetBinContent(24,1.124679);
   plot__1054->SetBinError(10,0.05471781);
   plot__1054->SetBinError(11,0.07346809);
   plot__1054->SetBinError(12,0.08027986);
   plot__1054->SetBinError(13,0.1205215);
   plot__1054->SetBinError(14,0.1493131);
   plot__1054->SetBinError(15,0.1280501);
   plot__1054->SetBinError(16,0.1945902);
   plot__1054->SetBinError(17,0.3511771);
   plot__1054->SetBinError(18,0.4675427);
   plot__1054->SetBinError(19,0.8244636);
   plot__1054->SetBinError(23,0.6304822);
   plot__1054->SetBinError(24,0.4250888);
   plot__1054->SetMinimum(0);
   plot__1054->SetMaximum(2);
   plot__1054->SetEntries(82.21834);

   ci = TColor::GetColor("#000099");
   plot__1054->SetLineColor(ci);
   plot__1054->SetLineWidth(2);
   plot__1054->SetMarkerStyle(20);
   plot__1054->SetMarkerSize(1.5);
   plot__1054->GetXaxis()->SetRange(1,23);
   plot__1054->GetXaxis()->SetLabelFont(42);
   plot__1054->GetXaxis()->SetLabelSize(0.12);
   plot__1054->GetXaxis()->SetTitleSize(0.035);
   plot__1054->GetXaxis()->SetTitleFont(42);
   plot__1054->GetYaxis()->SetTitle("Data/MC");
   plot__1054->GetYaxis()->SetNdivisions(505);
   plot__1054->GetYaxis()->SetLabelFont(42);
   plot__1054->GetYaxis()->SetLabelSize(0.11);
   plot__1054->GetYaxis()->SetTitleSize(0.1);
   plot__1054->GetYaxis()->SetTitleOffset(0.5);
   plot__1054->GetYaxis()->SetTitleFont(42);
   plot__1054->GetZaxis()->SetLabelFont(42);
   plot__1054->GetZaxis()->SetLabelSize(0.035);
   plot__1054->GetZaxis()->SetTitleSize(0.035);
   plot__1054->GetZaxis()->SetTitleFont(42);
   plot__1054->Draw("PSAME");
   d->Modified();
   canvasbtag_two_200_275/AlphaT_all->cd();
   canvasbtag_two_200_275/AlphaT_all->Modified();
   canvasbtag_two_200_275/AlphaT_all->cd();
   canvasbtag_two_200_275/AlphaT_all->SetSelected(canvasbtag_two_200_275/AlphaT_all);
}
