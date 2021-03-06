void Simplified_AlphaT_all_btag_morethanzero_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/AlphaT_all/cannameAlphaT_all
//=========  (Wed Aug 24 11:54:04 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_morethanzero_375_475/AlphaT_all = new TCanvas("canvasbtag_morethanzero_375_475/AlphaT_all", "cannameAlphaT_all",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetHighLightColor(2);
   canvasbtag_morethanzero_375_475/AlphaT_all->Range(0,0,1,1);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetFillColor(0);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetBorderMode(0);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetBorderSize(2);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetTickx(1);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetTicky(1);
   canvasbtag_morethanzero_375_475/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.547527,3.4875,4.341673);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis718[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__675 = new TH1D("plot__675","",24, xAxis718);
   plot__675->SetBinContent(10,484);
   plot__675->SetBinContent(11,197);
   plot__675->SetBinContent(12,94);
   plot__675->SetBinContent(13,43);
   plot__675->SetBinContent(14,29);
   plot__675->SetBinContent(15,15);
   plot__675->SetBinContent(16,9.5);
   plot__675->SetBinContent(17,10);
   plot__675->SetBinContent(18,4.6);
   plot__675->SetBinContent(19,2.6);
   plot__675->SetBinContent(20,1.6);
   plot__675->SetBinContent(21,0.8);
   plot__675->SetBinContent(22,0.6);
   plot__675->SetBinContent(23,4);
   plot__675->SetBinContent(24,0.05072464);
   plot__675->SetBinError(10,22);
   plot__675->SetBinError(11,14.03567);
   plot__675->SetBinError(12,9.69536);
   plot__675->SetBinError(13,6.557439);
   plot__675->SetBinError(14,5.385165);
   plot__675->SetBinError(15,2.738613);
   plot__675->SetBinError(16,3.19);
   plot__675->SetBinError(17,1.414214);
   plot__675->SetBinError(18,2.3);
   plot__675->SetBinError(19,2);
   plot__675->SetBinError(20,1);
   plot__675->SetBinError(23,2.14);
   plot__675->SetBinError(24,0.01917211);
   plot__675->SetMinimum(0.11);
   plot__675->SetMaximum(5659.177);
   plot__675->SetEntries(1037);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__675->SetLineColor(ci);
   plot__675->SetLineWidth(2);
   plot__675->SetMarkerStyle(20);
   plot__675->SetMarkerSize(1.5);
   plot__675->GetXaxis()->SetTitle("#alpha_{T}");
   plot__675->GetXaxis()->SetRange(1,23);
   plot__675->GetXaxis()->SetLabelFont(42);
   plot__675->GetXaxis()->SetLabelSize(0.035);
   plot__675->GetXaxis()->SetTitleSize(0.035);
   plot__675->GetXaxis()->SetTitleFont(42);
   plot__675->GetYaxis()->SetTitle("Events");
   plot__675->GetYaxis()->SetLabelFont(42);
   plot__675->GetYaxis()->SetLabelSize(0.035);
   plot__675->GetYaxis()->SetTitleSize(0.035);
   plot__675->GetYaxis()->SetTitleOffset(1.3);
   plot__675->GetYaxis()->SetTitleFont(42);
   plot__675->GetZaxis()->SetLabelFont(42);
   plot__675->GetZaxis()->SetLabelSize(0.035);
   plot__675->GetZaxis()->SetTitleSize(0.035);
   plot__675->GetZaxis()->SetTitleFont(42);
   plot__675->Draw("");
   Double_t xAxis719[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__676 = new TH1D("plot__676","",24, xAxis719);
   plot__676->SetEntries(25);
   plot__676->SetLineColor(7);
   plot__676->SetLineStyle(10);
   plot__676->SetLineWidth(3);
   plot__676->GetXaxis()->SetTitle("#alpha_{T}");
   plot__676->GetXaxis()->SetRange(1,23);
   plot__676->GetXaxis()->SetLabelFont(42);
   plot__676->GetXaxis()->SetLabelSize(0.035);
   plot__676->GetXaxis()->SetTitleSize(0.035);
   plot__676->GetXaxis()->SetTitleFont(42);
   plot__676->GetYaxis()->SetTitle("Events/0.025");
   plot__676->GetYaxis()->SetLabelFont(42);
   plot__676->GetYaxis()->SetLabelSize(0.035);
   plot__676->GetYaxis()->SetTitleSize(0.035);
   plot__676->GetYaxis()->SetTitleFont(42);
   plot__676->GetZaxis()->SetLabelFont(42);
   plot__676->GetZaxis()->SetLabelSize(0.035);
   plot__676->GetZaxis()->SetTitleSize(0.035);
   plot__676->GetZaxis()->SetTitleFont(42);
   plot__676->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis720[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_44 = new TH1F("_stack_44","",24, xAxis720);
   _stack_44->SetMinimum(0.2303269);
   _stack_44->SetMaximum(921.3077);
   _stack_44->SetDirectory(0);
   _stack_44->SetStats(0);
   _stack_44->GetXaxis()->SetLabelFont(42);
   _stack_44->GetXaxis()->SetLabelOffset(0.007);
   _stack_44->GetXaxis()->SetLabelSize(0.05);
   _stack_44->GetXaxis()->SetTitleSize(0.05);
   _stack_44->GetYaxis()->SetLabelFont(42);
   _stack_44->GetYaxis()->SetLabelOffset(0.007);
   _stack_44->GetYaxis()->SetLabelSize(0.05);
   _stack_44->GetZaxis()->SetLabelFont(42);
   _stack_44->GetZaxis()->SetLabelOffset(0.007);
   _stack_44->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_44);
   
   Double_t xAxis721[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__677 = new TH1D("plot__677","",24, xAxis721);
   plot__677->SetBinContent(10,565.9177);
   plot__677->SetBinContent(11,198.5741);
   plot__677->SetBinContent(12,101.1249);
   plot__677->SetBinContent(13,51.77257);
   plot__677->SetBinContent(14,33.93347);
   plot__677->SetBinContent(15,20.97829);
   plot__677->SetBinContent(16,12.26029);
   plot__677->SetBinContent(17,8.066539);
   plot__677->SetBinContent(18,4.785545);
   plot__677->SetBinContent(19,2.928024);
   plot__677->SetBinContent(20,1.708368);
   plot__677->SetBinContent(21,0.9823947);
   plot__677->SetBinContent(22,0.4664084);
   plot__677->SetBinContent(23,3.523864);
   plot__677->SetBinContent(24,0.04417181);
   plot__677->SetBinError(10,9.899573);
   plot__677->SetBinError(11,5.621826);
   plot__677->SetBinError(12,3.999286);
   plot__677->SetBinError(13,2.739516);
   plot__677->SetBinError(14,2.043117);
   plot__677->SetBinError(15,1.150586);
   plot__677->SetBinError(16,0.8507076);
   plot__677->SetBinError(17,0.4492278);
   plot__677->SetBinError(18,0.3495896);
   plot__677->SetBinError(19,0.2809559);
   plot__677->SetBinError(20,0.1873973);
   plot__677->SetBinError(21,0.1225415);
   plot__677->SetBinError(22,0.08824119);
   plot__677->SetBinError(23,1.327378);
   plot__677->SetBinError(24,0.005625018);
   plot__677->SetEntries(18044);
   plot__677->SetLineColor(3);
   plot__677->SetLineWidth(3);
   plot__677->SetMarkerColor(4);
   plot__677->SetMarkerStyle(20);
   plot__677->GetXaxis()->SetTitle("#alpha_{T}");
   plot__677->GetXaxis()->SetRange(1,23);
   plot__677->GetXaxis()->SetLabelFont(42);
   plot__677->GetXaxis()->SetLabelSize(0.035);
   plot__677->GetXaxis()->SetTitleSize(0.035);
   plot__677->GetXaxis()->SetTitleFont(42);
   plot__677->GetYaxis()->SetTitle("Events/0.025");
   plot__677->GetYaxis()->SetLabelFont(42);
   plot__677->GetYaxis()->SetLabelSize(0.035);
   plot__677->GetYaxis()->SetTitleSize(0.035);
   plot__677->GetYaxis()->SetTitleFont(42);
   plot__677->GetZaxis()->SetLabelFont(42);
   plot__677->GetZaxis()->SetLabelSize(0.035);
   plot__677->GetZaxis()->SetTitleSize(0.035);
   plot__677->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   ->Draw("samehist");
   Double_t xAxis722[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__678 = new TH1D("plot__678","",24, xAxis722);
   plot__678->SetBinContent(10,565.9177);
   plot__678->SetBinContent(11,198.5741);
   plot__678->SetBinContent(12,101.1249);
   plot__678->SetBinContent(13,51.77257);
   plot__678->SetBinContent(14,33.93347);
   plot__678->SetBinContent(15,20.97829);
   plot__678->SetBinContent(16,12.26029);
   plot__678->SetBinContent(17,8.066539);
   plot__678->SetBinContent(18,4.785545);
   plot__678->SetBinContent(19,2.928024);
   plot__678->SetBinContent(20,1.708368);
   plot__678->SetBinContent(21,0.9823947);
   plot__678->SetBinContent(22,0.4664084);
   plot__678->SetBinContent(23,3.523864);
   plot__678->SetBinContent(24,0.04417181);
   plot__678->SetBinError(10,9.899573);
   plot__678->SetBinError(11,5.621826);
   plot__678->SetBinError(12,3.999286);
   plot__678->SetBinError(13,2.739516);
   plot__678->SetBinError(14,2.043117);
   plot__678->SetBinError(15,1.150586);
   plot__678->SetBinError(16,0.8507076);
   plot__678->SetBinError(17,0.4492278);
   plot__678->SetBinError(18,0.3495896);
   plot__678->SetBinError(19,0.2809559);
   plot__678->SetBinError(20,0.1873973);
   plot__678->SetBinError(21,0.1225415);
   plot__678->SetBinError(22,0.08824119);
   plot__678->SetBinError(23,1.327378);
   plot__678->SetBinError(24,0.005625018);
   plot__678->SetEntries(18044);
   plot__678->SetLineColor(3);
   plot__678->SetLineWidth(3);
   plot__678->SetMarkerColor(4);
   plot__678->SetMarkerStyle(20);
   plot__678->GetXaxis()->SetTitle("#alpha_{T}");
   plot__678->GetXaxis()->SetRange(1,23);
   plot__678->GetXaxis()->SetLabelFont(42);
   plot__678->GetXaxis()->SetLabelSize(0.035);
   plot__678->GetXaxis()->SetTitleSize(0.035);
   plot__678->GetXaxis()->SetTitleFont(42);
   plot__678->GetYaxis()->SetTitle("Events/0.025");
   plot__678->GetYaxis()->SetLabelFont(42);
   plot__678->GetYaxis()->SetLabelSize(0.035);
   plot__678->GetYaxis()->SetTitleSize(0.035);
   plot__678->GetYaxis()->SetTitleFont(42);
   plot__678->GetZaxis()->SetLabelFont(42);
   plot__678->GetZaxis()->SetLabelSize(0.035);
   plot__678->GetZaxis()->SetTitleSize(0.035);
   plot__678->GetZaxis()->SetTitleFont(42);
   plot__678->Draw("SAMEHIST");
   Double_t xAxis723[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__679 = new TH1D("plot__679","",24, xAxis723);
   plot__679->SetBinContent(10,129.9195);
   plot__679->SetBinContent(11,57.62545);
   plot__679->SetBinContent(12,32.60106);
   plot__679->SetBinContent(13,19.22539);
   plot__679->SetBinContent(14,14.86828);
   plot__679->SetBinContent(15,9.27908);
   plot__679->SetBinContent(16,6.125087);
   plot__679->SetBinContent(17,3.738743);
   plot__679->SetBinContent(18,1.830623);
   plot__679->SetBinContent(19,1.210336);
   plot__679->SetBinContent(20,0.922445);
   plot__679->SetBinContent(21,0.4336903);
   plot__679->SetBinContent(22,0.2413942);
   plot__679->SetBinContent(23,2.080853);
   plot__679->SetBinContent(24,0.0245784);
   plot__679->SetBinError(10,2.188546);
   plot__679->SetBinError(11,1.447532);
   plot__679->SetBinError(12,1.107943);
   plot__679->SetBinError(13,0.8383509);
   plot__679->SetBinError(14,0.7640832);
   plot__679->SetBinError(15,0.422982);
   plot__679->SetBinError(16,0.3554115);
   plot__679->SetBinError(17,0.1680924);
   plot__679->SetBinError(18,0.1176548);
   plot__679->SetBinError(19,0.09007692);
   plot__679->SetBinError(20,0.08008592);
   plot__679->SetBinError(21,0.03919344);
   plot__679->SetBinError(22,0.03354697);
   plot__679->SetBinError(23,1.020013);
   plot__679->SetBinError(24,0.002576555);
   plot__679->SetEntries(12992);
   plot__679->SetLineColor(5);
   plot__679->SetLineWidth(3);
   plot__679->SetMarkerStyle(20);
   plot__679->GetXaxis()->SetTitle("#alpha_{T}");
   plot__679->GetXaxis()->SetRange(1,23);
   plot__679->GetXaxis()->SetLabelFont(42);
   plot__679->GetXaxis()->SetLabelSize(0.035);
   plot__679->GetXaxis()->SetTitleSize(0.035);
   plot__679->GetXaxis()->SetTitleFont(42);
   plot__679->GetYaxis()->SetTitle("Events/0.025");
   plot__679->GetYaxis()->SetLabelFont(42);
   plot__679->GetYaxis()->SetLabelSize(0.035);
   plot__679->GetYaxis()->SetTitleSize(0.035);
   plot__679->GetYaxis()->SetTitleFont(42);
   plot__679->GetZaxis()->SetLabelFont(42);
   plot__679->GetZaxis()->SetLabelSize(0.035);
   plot__679->GetZaxis()->SetTitleSize(0.035);
   plot__679->GetZaxis()->SetTitleFont(42);
   plot__679->Draw("SAMEHIST");
   
   Double_t Graph_from_plot_fx1173[24] = {
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
   Double_t Graph_from_plot_fy1173[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   129.9195,
   57.62545,
   32.60106,
   19.22539,
   14.86828,
   9.27908,
   6.125087,
   3.738743,
   1.830623,
   1.210336,
   0.922445,
   0.4336903,
   0.2413942,
   2.080853,
   0.0245784};
   Double_t Graph_from_plot_fex1173[24] = {
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
   Double_t Graph_from_plot_fey1173[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   2.188546,
   1.447532,
   1.107943,
   0.8383509,
   0.7640832,
   0.422982,
   0.3554115,
   0.1680924,
   0.1176548,
   0.09007692,
   0.08008592,
   0.03919344,
   0.03354697,
   1.020013,
   0.002576555};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1173,Graph_from_plot_fy1173,Graph_from_plot_fex1173,Graph_from_plot_fey1173);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(5);
   gre->SetFillStyle(3008);
   gre->SetLineColor(5);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1173 = new TH1F("Graph_Graph_from_plot1173","",100,0,11);
   Graph_Graph_from_plot1173->SetMinimum(0.1453189);
   Graph_Graph_from_plot1173->SetMaximum(145.3189);
   Graph_Graph_from_plot1173->SetDirectory(0);
   Graph_Graph_from_plot1173->SetStats(0);
   Graph_Graph_from_plot1173->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1173->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1173->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1173->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1173->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1173->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1173->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1173->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1173->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1173->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1173);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1174[24] = {
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
   Double_t Graph_from_plot_fy1174[24] = {
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
   Double_t Graph_from_plot_fex1174[24] = {
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
   Double_t Graph_from_plot_fey1174[24] = {
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
   gre = new TGraphErrors(24,Graph_from_plot_fx1174,Graph_from_plot_fy1174,Graph_from_plot_fex1174,Graph_from_plot_fey1174);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot11691174 = new TH1F("Graph_Graph_Graph_from_plot11691174","",100,0,11);
   Graph_Graph_Graph_from_plot11691174->SetMinimum(0.0011);
   Graph_Graph_Graph_from_plot11691174->SetMaximum(1.1);
   Graph_Graph_Graph_from_plot11691174->SetDirectory(0);
   Graph_Graph_Graph_from_plot11691174->SetStats(0);
   Graph_Graph_Graph_from_plot11691174->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot11691174->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot11691174->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot11691174->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot11691174->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot11691174->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot11691174->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot11691174->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot11691174->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot11691174->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot11691174);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1175[24] = {
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
   Double_t Graph_from_plot_fy1175[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   565.9177,
   198.5741,
   101.1249,
   51.77257,
   33.93347,
   20.97829,
   12.26029,
   8.066539,
   4.785545,
   2.928024,
   1.708368,
   0.9823947,
   0.4664084,
   3.523864,
   0.04417181};
   Double_t Graph_from_plot_fex1175[24] = {
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
   Double_t Graph_from_plot_fey1175[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   9.899573,
   5.621826,
   3.999286,
   2.739516,
   2.043117,
   1.150586,
   0.8507076,
   0.4492278,
   0.3495896,
   0.2809559,
   0.1873973,
   0.1225415,
   0.08824119,
   1.327378,
   0.005625018};
   gre = new TGraphErrors(24,Graph_from_plot_fx1175,Graph_from_plot_fy1175,Graph_from_plot_fex1175,Graph_from_plot_fey1175);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot11701175 = new TH1F("Graph_Graph_Graph_from_plot11701175","",100,0,11);
   Graph_Graph_Graph_from_plot11701175->SetMinimum(0.633399);
   Graph_Graph_Graph_from_plot11701175->SetMaximum(633.399);
   Graph_Graph_Graph_from_plot11701175->SetDirectory(0);
   Graph_Graph_Graph_from_plot11701175->SetStats(0);
   Graph_Graph_Graph_from_plot11701175->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot11701175->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot11701175->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot11701175->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot11701175->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot11701175->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot11701175->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot11701175->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot11701175->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot11701175->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot11701175);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_    Jet Multiplicity=all");
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
   Double_t xAxis724[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__680 = new TH1D("plot__680","",24, xAxis724);
   plot__680->SetBinContent(10,484);
   plot__680->SetBinContent(11,197);
   plot__680->SetBinContent(12,94);
   plot__680->SetBinContent(13,43);
   plot__680->SetBinContent(14,29);
   plot__680->SetBinContent(15,15);
   plot__680->SetBinContent(16,9.5);
   plot__680->SetBinContent(17,10);
   plot__680->SetBinContent(18,4.6);
   plot__680->SetBinContent(19,2.6);
   plot__680->SetBinContent(20,1.6);
   plot__680->SetBinContent(21,0.8);
   plot__680->SetBinContent(22,0.6);
   plot__680->SetBinContent(23,4);
   plot__680->SetBinContent(24,0.05072464);
   plot__680->SetBinError(10,22);
   plot__680->SetBinError(11,14.03567);
   plot__680->SetBinError(12,9.69536);
   plot__680->SetBinError(13,6.557439);
   plot__680->SetBinError(14,5.385165);
   plot__680->SetBinError(15,2.738613);
   plot__680->SetBinError(16,3.19);
   plot__680->SetBinError(17,1.414214);
   plot__680->SetBinError(18,2.3);
   plot__680->SetBinError(19,2);
   plot__680->SetBinError(20,1);
   plot__680->SetBinError(23,2.14);
   plot__680->SetBinError(24,0.01917211);
   plot__680->SetMinimum(0.11);
   plot__680->SetMaximum(5659.177);
   plot__680->SetEntries(1037);

   ci = TColor::GetColor("#000099");
   plot__680->SetLineColor(ci);
   plot__680->SetLineWidth(2);
   plot__680->SetMarkerStyle(20);
   plot__680->SetMarkerSize(1.5);
   plot__680->GetXaxis()->SetTitle("#alpha_{T}");
   plot__680->GetXaxis()->SetRange(1,23);
   plot__680->GetXaxis()->SetLabelFont(42);
   plot__680->GetXaxis()->SetLabelSize(0.035);
   plot__680->GetXaxis()->SetTitleSize(0.035);
   plot__680->GetXaxis()->SetTitleFont(42);
   plot__680->GetYaxis()->SetTitle("Events");
   plot__680->GetYaxis()->SetLabelFont(42);
   plot__680->GetYaxis()->SetLabelSize(0.035);
   plot__680->GetYaxis()->SetTitleSize(0.035);
   plot__680->GetYaxis()->SetTitleOffset(1.3);
   plot__680->GetYaxis()->SetTitleFont(42);
   plot__680->GetZaxis()->SetLabelFont(42);
   plot__680->GetZaxis()->SetLabelSize(0.035);
   plot__680->GetZaxis()->SetTitleSize(0.035);
   plot__680->GetZaxis()->SetTitleFont(42);
   plot__680->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_all->cd();
  
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
   Double_t xAxis725[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__681 = new TH1D("plot__681","",24, xAxis725);
   plot__681->SetBinContent(10,0.855248);
   plot__681->SetBinContent(11,0.9920732);
   plot__681->SetBinContent(12,0.9295433);
   plot__681->SetBinContent(13,0.8305556);
   plot__681->SetBinContent(14,0.8546134);
   plot__681->SetBinContent(15,0.7150249);
   plot__681->SetBinContent(16,0.7748596);
   plot__681->SetBinContent(17,1.239689);
   plot__681->SetBinContent(18,0.9612279);
   plot__681->SetBinContent(19,0.8879709);
   plot__681->SetBinContent(20,0.9365662);
   plot__681->SetBinContent(21,0.8143366);
   plot__681->SetBinContent(22,1.286426);
   plot__681->SetBinContent(23,1.135118);
   plot__681->SetBinContent(24,1.148349);
   plot__681->SetBinError(10,0.03887491);
   plot__681->SetBinError(11,0.07068229);
   plot__681->SetBinError(12,0.09587507);
   plot__681->SetBinError(13,0.1266585);
   plot__681->SetBinError(14,0.1586977);
   plot__681->SetBinError(15,0.1305451);
   plot__681->SetBinError(16,0.2601897);
   plot__681->SetBinError(17,0.1753185);
   plot__681->SetBinError(18,0.480614);
   plot__681->SetBinError(19,0.6830546);
   plot__681->SetBinError(20,0.5853538);
   plot__681->SetBinError(23,0.6072879);
   plot__681->SetBinError(24,0.434035);
   plot__681->SetMinimum(0);
   plot__681->SetMaximum(2);
   plot__681->SetEntries(93.23127);

   ci = TColor::GetColor("#000099");
   plot__681->SetLineColor(ci);
   plot__681->SetLineWidth(2);
   plot__681->SetMarkerStyle(20);
   plot__681->SetMarkerSize(1.5);
   plot__681->GetXaxis()->SetRange(1,23);
   plot__681->GetXaxis()->SetLabelFont(42);
   plot__681->GetXaxis()->SetLabelSize(0.12);
   plot__681->GetXaxis()->SetTitleSize(0.035);
   plot__681->GetXaxis()->SetTitleFont(42);
   plot__681->GetYaxis()->SetTitle("Data/MC");
   plot__681->GetYaxis()->SetNdivisions(505);
   plot__681->GetYaxis()->SetLabelFont(42);
   plot__681->GetYaxis()->SetLabelSize(0.11);
   plot__681->GetYaxis()->SetTitleSize(0.1);
   plot__681->GetYaxis()->SetTitleOffset(0.5);
   plot__681->GetYaxis()->SetTitleFont(42);
   plot__681->GetZaxis()->SetLabelFont(42);
   plot__681->GetZaxis()->SetLabelSize(0.035);
   plot__681->GetZaxis()->SetTitleSize(0.035);
   plot__681->GetZaxis()->SetTitleFont(42);
   plot__681->Draw("p");
   
   Double_t Graph_from_plot_fx1176[24] = {
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
   Double_t Graph_from_plot_fy1176[24] = {
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
   1.148349};
   Double_t Graph_from_plot_fex1176[24] = {
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
   Double_t Graph_from_plot_fey1176[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01749295,
   0.02831098,
   0.03954797,
   0.05291443,
   0.06020947,
   0.05484653,
   0.06938726,
   0.05569028,
   0.07305114,
   0.0959541,
   0.1096937,
   0.1247375,
   0.189193,
   0.3766825,
   0.1273441};
   gre = new TGraphErrors(24,Graph_from_plot_fx1176,Graph_from_plot_fy1176,Graph_from_plot_fex1176,Graph_from_plot_fey1176);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1176 = new TH1F("Graph_Graph_from_plot1176","",100,0,11);
   Graph_Graph_from_plot1176->SetMinimum(0.547981);
   Graph_Graph_from_plot1176->SetMaximum(1.452019);
   Graph_Graph_from_plot1176->SetDirectory(0);
   Graph_Graph_from_plot1176->SetStats(0);
   Graph_Graph_from_plot1176->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1176->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1176->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1176->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1176->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1176->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1176->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1176->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1176->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1176->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1176);
   
   gre->Draw("2");
   Double_t xAxis726[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__682 = new TH1D("plot__682","",24, xAxis726);
   plot__682->SetBinContent(10,0.855248);
   plot__682->SetBinContent(11,0.9920732);
   plot__682->SetBinContent(12,0.9295433);
   plot__682->SetBinContent(13,0.8305556);
   plot__682->SetBinContent(14,0.8546134);
   plot__682->SetBinContent(15,0.7150249);
   plot__682->SetBinContent(16,0.7748596);
   plot__682->SetBinContent(17,1.239689);
   plot__682->SetBinContent(18,0.9612279);
   plot__682->SetBinContent(19,0.8879709);
   plot__682->SetBinContent(20,0.9365662);
   plot__682->SetBinContent(21,0.8143366);
   plot__682->SetBinContent(22,1.286426);
   plot__682->SetBinContent(23,1.135118);
   plot__682->SetBinContent(24,1.148349);
   plot__682->SetBinError(10,0.03887491);
   plot__682->SetBinError(11,0.07068229);
   plot__682->SetBinError(12,0.09587507);
   plot__682->SetBinError(13,0.1266585);
   plot__682->SetBinError(14,0.1586977);
   plot__682->SetBinError(15,0.1305451);
   plot__682->SetBinError(16,0.2601897);
   plot__682->SetBinError(17,0.1753185);
   plot__682->SetBinError(18,0.480614);
   plot__682->SetBinError(19,0.6830546);
   plot__682->SetBinError(20,0.5853538);
   plot__682->SetBinError(23,0.6072879);
   plot__682->SetBinError(24,0.434035);
   plot__682->SetMinimum(0);
   plot__682->SetMaximum(2);
   plot__682->SetEntries(93.23127);

   ci = TColor::GetColor("#000099");
   plot__682->SetLineColor(ci);
   plot__682->SetLineWidth(2);
   plot__682->SetMarkerStyle(20);
   plot__682->SetMarkerSize(1.5);
   plot__682->GetXaxis()->SetRange(1,23);
   plot__682->GetXaxis()->SetLabelFont(42);
   plot__682->GetXaxis()->SetLabelSize(0.12);
   plot__682->GetXaxis()->SetTitleSize(0.035);
   plot__682->GetXaxis()->SetTitleFont(42);
   plot__682->GetYaxis()->SetTitle("Data/MC");
   plot__682->GetYaxis()->SetNdivisions(505);
   plot__682->GetYaxis()->SetLabelFont(42);
   plot__682->GetYaxis()->SetLabelSize(0.11);
   plot__682->GetYaxis()->SetTitleSize(0.1);
   plot__682->GetYaxis()->SetTitleOffset(0.5);
   plot__682->GetYaxis()->SetTitleFont(42);
   plot__682->GetZaxis()->SetLabelFont(42);
   plot__682->GetZaxis()->SetLabelSize(0.035);
   plot__682->GetZaxis()->SetTitleSize(0.035);
   plot__682->GetZaxis()->SetTitleFont(42);
   plot__682->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_all->cd();
   canvasbtag_morethanzero_375_475/AlphaT_all->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_all->cd();
   canvasbtag_morethanzero_375_475/AlphaT_all->SetSelected(canvasbtag_morethanzero_375_475/AlphaT_all);
}
