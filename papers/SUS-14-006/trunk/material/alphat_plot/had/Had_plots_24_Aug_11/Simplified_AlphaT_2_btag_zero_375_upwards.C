void Simplified_AlphaT_2_btag_zero_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_zero_375_475/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:16 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_zero_375_475/AlphaT_2 = new TCanvas("canvasbtag_zero_375_475/AlphaT_2", "cannameAlphaT_2",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_zero_375_475/AlphaT_2->SetHighLightColor(2);
   canvasbtag_zero_375_475/AlphaT_2->Range(0,0,1,1);
   canvasbtag_zero_375_475/AlphaT_2->SetFillColor(0);
   canvasbtag_zero_375_475/AlphaT_2->SetBorderMode(0);
   canvasbtag_zero_375_475/AlphaT_2->SetBorderSize(2);
   canvasbtag_zero_375_475/AlphaT_2->SetTickx(1);
   canvasbtag_zero_375_475/AlphaT_2->SetTicky(1);
   canvasbtag_zero_375_475/AlphaT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.594597,3.4875,4.765298);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1345[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1264 = new TH1D("plot__1264","",24, xAxis1345);
   plot__1264->SetBinContent(10,1119);
   plot__1264->SetBinContent(11,542);
   plot__1264->SetBinContent(12,315);
   plot__1264->SetBinContent(13,200);
   plot__1264->SetBinContent(14,145);
   plot__1264->SetBinContent(15,105.5);
   plot__1264->SetBinContent(16,69);
   plot__1264->SetBinContent(17,51.2);
   plot__1264->SetBinContent(18,20);
   plot__1264->SetBinContent(19,14.4);
   plot__1264->SetBinContent(20,9.8);
   plot__1264->SetBinContent(21,6.9);
   plot__1264->SetBinContent(22,4.4);
   plot__1264->SetBinContent(23,33);
   plot__1264->SetBinContent(24,0.442029);
   plot__1264->SetBinContent(25,3);
   plot__1264->SetBinError(10,33.45146);
   plot__1264->SetBinError(11,23.28089);
   plot__1264->SetBinError(12,17.74824);
   plot__1264->SetBinError(13,14.14214);
   plot__1264->SetBinError(14,12.04159);
   plot__1264->SetBinError(15,7.26292);
   plot__1264->SetBinError(16,5.87367);
   plot__1264->SetBinError(17,3.2);
   plot__1264->SetBinError(18,2);
   plot__1264->SetBinError(19,1.697056);
   plot__1264->SetBinError(20,3.19);
   plot__1264->SetBinError(21,2.68);
   plot__1264->SetBinError(22,2.3);
   plot__1264->SetBinError(23,4.062019);
   plot__1264->SetBinError(24,0.05659601);
   plot__1264->SetBinError(25,1.732051);
   plot__1264->SetMinimum(0.11);
   plot__1264->SetMaximum(13468.17);
   plot__1264->SetEntries(3354);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1264->SetLineColor(ci);
   plot__1264->SetLineWidth(2);
   plot__1264->SetMarkerStyle(20);
   plot__1264->SetMarkerSize(1.5);
   plot__1264->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1264->GetXaxis()->SetRange(1,23);
   plot__1264->GetXaxis()->SetLabelFont(42);
   plot__1264->GetXaxis()->SetLabelSize(0.035);
   plot__1264->GetXaxis()->SetTitleSize(0.035);
   plot__1264->GetXaxis()->SetTitleFont(42);
   plot__1264->GetYaxis()->SetTitle("Events");
   plot__1264->GetYaxis()->SetLabelFont(42);
   plot__1264->GetYaxis()->SetLabelSize(0.035);
   plot__1264->GetYaxis()->SetTitleSize(0.035);
   plot__1264->GetYaxis()->SetTitleOffset(1.3);
   plot__1264->GetYaxis()->SetTitleFont(42);
   plot__1264->GetZaxis()->SetLabelFont(42);
   plot__1264->GetZaxis()->SetLabelSize(0.035);
   plot__1264->GetZaxis()->SetTitleSize(0.035);
   plot__1264->GetZaxis()->SetTitleFont(42);
   plot__1264->Draw("");
   Double_t xAxis1346[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1265 = new TH1D("plot__1265","",24, xAxis1346);
   plot__1265->SetBinContent(10,7.220288);
   plot__1265->SetBinError(10,7.220288);
   plot__1265->SetEntries(26);
   plot__1265->SetLineColor(7);
   plot__1265->SetLineStyle(10);
   plot__1265->SetLineWidth(3);
   plot__1265->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1265->GetXaxis()->SetRange(1,23);
   plot__1265->GetXaxis()->SetLabelFont(42);
   plot__1265->GetXaxis()->SetLabelSize(0.035);
   plot__1265->GetXaxis()->SetTitleSize(0.035);
   plot__1265->GetXaxis()->SetTitleFont(42);
   plot__1265->GetYaxis()->SetTitle("Events/0.025");
   plot__1265->GetYaxis()->SetLabelFont(42);
   plot__1265->GetYaxis()->SetLabelSize(0.035);
   plot__1265->GetYaxis()->SetTitleSize(0.035);
   plot__1265->GetYaxis()->SetTitleFont(42);
   plot__1265->GetZaxis()->SetLabelFont(42);
   plot__1265->GetZaxis()->SetLabelSize(0.035);
   plot__1265->GetZaxis()->SetTitleSize(0.035);
   plot__1265->GetZaxis()->SetTitleFont(42);
   plot__1265->Draw("SAMEHIST");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1347[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_82 = new TH1F("_stack_82","",24, xAxis1347);
   _stack_82->SetMinimum(0.5399258);
   _stack_82->SetMaximum(2159.703);
   _stack_82->SetDirectory(0);
   _stack_82->SetStats(0);
   _stack_82->GetXaxis()->SetLabelFont(42);
   _stack_82->GetXaxis()->SetLabelOffset(0.007);
   _stack_82->GetXaxis()->SetLabelSize(0.05);
   _stack_82->GetXaxis()->SetTitleSize(0.05);
   _stack_82->GetYaxis()->SetLabelFont(42);
   _stack_82->GetYaxis()->SetLabelOffset(0.007);
   _stack_82->GetYaxis()->SetLabelSize(0.05);
   _stack_82->GetZaxis()->SetLabelFont(42);
   _stack_82->GetZaxis()->SetLabelOffset(0.007);
   _stack_82->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_82);
   
   Double_t xAxis1348[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1266 = new TH1D("plot__1266","",24, xAxis1348);
   plot__1266->SetBinContent(10,1339.597);
   plot__1266->SetBinContent(11,633.9201);
   plot__1266->SetBinContent(12,370.5483);
   plot__1266->SetBinContent(13,247.4987);
   plot__1266->SetBinContent(14,176.8011);
   plot__1266->SetBinContent(15,124.108);
   plot__1266->SetBinContent(16,84.19982);
   plot__1266->SetBinContent(17,52.13284);
   plot__1266->SetBinContent(18,30.59141);
   plot__1266->SetBinContent(19,18.83786);
   plot__1266->SetBinContent(20,12.13217);
   plot__1266->SetBinContent(21,7.828057);
   plot__1266->SetBinContent(22,4.381056);
   plot__1266->SetBinContent(23,39.3262);
   plot__1266->SetBinContent(24,0.5176265);
   plot__1266->SetBinContent(25,0.06441087);
   plot__1266->SetBinError(10,10.21782);
   plot__1266->SetBinError(11,6.869193);
   plot__1266->SetBinError(12,5.186327);
   plot__1266->SetBinError(13,4.179354);
   plot__1266->SetBinError(14,3.436969);
   plot__1266->SetBinError(15,2.086419);
   plot__1266->SetBinError(16,1.696186);
   plot__1266->SetBinError(17,0.8379434);
   plot__1266->SetBinError(18,0.6575671);
   plot__1266->SetBinError(19,0.5111398);
   plot__1266->SetBinError(20,0.4238112);
   plot__1266->SetBinError(21,0.222456);
   plot__1266->SetBinError(22,0.161636);
   plot__1266->SetBinError(23,4.434309);
   plot__1266->SetBinError(24,0.01580463);
   plot__1266->SetBinError(25,0.03814757);
   plot__1266->SetEntries(114260);
   plot__1266->SetLineColor(3);
   plot__1266->SetLineWidth(3);
   plot__1266->SetMarkerColor(4);
   plot__1266->SetMarkerStyle(20);
   plot__1266->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1266->GetXaxis()->SetRange(1,23);
   plot__1266->GetXaxis()->SetLabelFont(42);
   plot__1266->GetXaxis()->SetLabelSize(0.035);
   plot__1266->GetXaxis()->SetTitleSize(0.035);
   plot__1266->GetXaxis()->SetTitleFont(42);
   plot__1266->GetYaxis()->SetTitle("Events/0.025");
   plot__1266->GetYaxis()->SetLabelFont(42);
   plot__1266->GetYaxis()->SetLabelSize(0.035);
   plot__1266->GetYaxis()->SetTitleSize(0.035);
   plot__1266->GetYaxis()->SetTitleFont(42);
   plot__1266->GetZaxis()->SetLabelFont(42);
   plot__1266->GetZaxis()->SetLabelSize(0.035);
   plot__1266->GetZaxis()->SetTitleSize(0.035);
   plot__1266->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   ->Draw("samehist");
   Double_t xAxis1349[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1267 = new TH1D("plot__1267","",24, xAxis1349);
   plot__1267->SetBinContent(10,1339.597);
   plot__1267->SetBinContent(11,633.9201);
   plot__1267->SetBinContent(12,370.5483);
   plot__1267->SetBinContent(13,247.4987);
   plot__1267->SetBinContent(14,176.8011);
   plot__1267->SetBinContent(15,124.108);
   plot__1267->SetBinContent(16,84.19982);
   plot__1267->SetBinContent(17,52.13284);
   plot__1267->SetBinContent(18,30.59141);
   plot__1267->SetBinContent(19,18.83786);
   plot__1267->SetBinContent(20,12.13217);
   plot__1267->SetBinContent(21,7.828057);
   plot__1267->SetBinContent(22,4.381056);
   plot__1267->SetBinContent(23,39.3262);
   plot__1267->SetBinContent(24,0.5176265);
   plot__1267->SetBinContent(25,0.06441087);
   plot__1267->SetBinError(10,10.21782);
   plot__1267->SetBinError(11,6.869193);
   plot__1267->SetBinError(12,5.186327);
   plot__1267->SetBinError(13,4.179354);
   plot__1267->SetBinError(14,3.436969);
   plot__1267->SetBinError(15,2.086419);
   plot__1267->SetBinError(16,1.696186);
   plot__1267->SetBinError(17,0.8379434);
   plot__1267->SetBinError(18,0.6575671);
   plot__1267->SetBinError(19,0.5111398);
   plot__1267->SetBinError(20,0.4238112);
   plot__1267->SetBinError(21,0.222456);
   plot__1267->SetBinError(22,0.161636);
   plot__1267->SetBinError(23,4.434309);
   plot__1267->SetBinError(24,0.01580463);
   plot__1267->SetBinError(25,0.03814757);
   plot__1267->SetEntries(114260);
   plot__1267->SetLineColor(3);
   plot__1267->SetLineWidth(3);
   plot__1267->SetMarkerColor(4);
   plot__1267->SetMarkerStyle(20);
   plot__1267->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1267->GetXaxis()->SetRange(1,23);
   plot__1267->GetXaxis()->SetLabelFont(42);
   plot__1267->GetXaxis()->SetLabelSize(0.035);
   plot__1267->GetXaxis()->SetTitleSize(0.035);
   plot__1267->GetXaxis()->SetTitleFont(42);
   plot__1267->GetYaxis()->SetTitle("Events/0.025");
   plot__1267->GetYaxis()->SetLabelFont(42);
   plot__1267->GetYaxis()->SetLabelSize(0.035);
   plot__1267->GetYaxis()->SetTitleSize(0.035);
   plot__1267->GetYaxis()->SetTitleFont(42);
   plot__1267->GetZaxis()->SetLabelFont(42);
   plot__1267->GetZaxis()->SetLabelSize(0.035);
   plot__1267->GetZaxis()->SetTitleSize(0.035);
   plot__1267->GetZaxis()->SetTitleFont(42);
   plot__1267->Draw("SAMEHIST");
   Double_t xAxis1350[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1268 = new TH1D("plot__1268","",24, xAxis1350);
   plot__1268->SetBinContent(10,793.5355);
   plot__1268->SetBinContent(11,393.2939);
   plot__1268->SetBinContent(12,239.3379);
   plot__1268->SetBinContent(13,164.2466);
   plot__1268->SetBinContent(14,123.4068);
   plot__1268->SetBinContent(15,82.20156);
   plot__1268->SetBinContent(16,57.37701);
   plot__1268->SetBinContent(17,35.47368);
   plot__1268->SetBinContent(18,20.86534);
   plot__1268->SetBinContent(19,12.79578);
   plot__1268->SetBinContent(20,8.158713);
   plot__1268->SetBinContent(21,5.617594);
   plot__1268->SetBinContent(22,3.249613);
   plot__1268->SetBinContent(23,27.79947);
   plot__1268->SetBinContent(24,0.3665202);
   plot__1268->SetBinContent(25,0.04289528);
   plot__1268->SetBinError(10,5.373288);
   plot__1268->SetBinError(11,3.810332);
   plot__1268->SetBinError(12,2.963061);
   plot__1268->SetBinError(13,2.428852);
   plot__1268->SetBinError(14,2.165661);
   plot__1268->SetBinError(15,1.21556);
   plot__1268->SetBinError(16,1.043326);
   plot__1268->SetBinError(17,0.508923);
   plot__1268->SetBinError(18,0.3958787);
   plot__1268->SetBinError(19,0.3117882);
   plot__1268->SetBinError(20,0.2471721);
   plot__1268->SetBinError(21,0.1485723);
   plot__1268->SetBinError(22,0.1077543);
   plot__1268->SetBinError(23,3.728235);
   plot__1268->SetBinError(24,0.0103405);
   plot__1268->SetBinError(25,0.03150106);
   plot__1268->SetEntries(100542);
   plot__1268->SetLineColor(5);
   plot__1268->SetLineWidth(3);
   plot__1268->SetMarkerStyle(20);
   plot__1268->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1268->GetXaxis()->SetRange(1,23);
   plot__1268->GetXaxis()->SetLabelFont(42);
   plot__1268->GetXaxis()->SetLabelSize(0.035);
   plot__1268->GetXaxis()->SetTitleSize(0.035);
   plot__1268->GetXaxis()->SetTitleFont(42);
   plot__1268->GetYaxis()->SetTitle("Events/0.025");
   plot__1268->GetYaxis()->SetLabelFont(42);
   plot__1268->GetYaxis()->SetLabelSize(0.035);
   plot__1268->GetYaxis()->SetTitleSize(0.035);
   plot__1268->GetYaxis()->SetTitleFont(42);
   plot__1268->GetZaxis()->SetLabelFont(42);
   plot__1268->GetZaxis()->SetLabelSize(0.035);
   plot__1268->GetZaxis()->SetTitleSize(0.035);
   plot__1268->GetZaxis()->SetTitleFont(42);
   plot__1268->Draw("SAMEHIST");
   
   Double_t Graph_from_plot_fx1325[24] = {
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
   Double_t Graph_from_plot_fy1325[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   793.5355,
   393.2939,
   239.3379,
   164.2466,
   123.4068,
   82.20156,
   57.37701,
   35.47368,
   20.86534,
   12.79578,
   8.158713,
   5.617594,
   3.249613,
   27.79947,
   0.3665202};
   Double_t Graph_from_plot_fex1325[24] = {
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
   Double_t Graph_from_plot_fey1325[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.373288,
   3.810332,
   2.963061,
   2.428852,
   2.165661,
   1.21556,
   1.043326,
   0.508923,
   0.3958787,
   0.3117882,
   0.2471721,
   0.1485723,
   0.1077543,
   3.728235,
   0.0103405};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1325,Graph_from_plot_fy1325,Graph_from_plot_fex1325,Graph_from_plot_fey1325);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(5);
   gre->SetFillStyle(3008);
   gre->SetLineColor(5);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1325 = new TH1F("Graph_Graph_from_plot1325","",100,0,11);
   Graph_Graph_from_plot1325->SetMinimum(0.8787997);
   Graph_Graph_from_plot1325->SetMaximum(878.7997);
   Graph_Graph_from_plot1325->SetDirectory(0);
   Graph_Graph_from_plot1325->SetStats(0);
   Graph_Graph_from_plot1325->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1325->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1325->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1325->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1325->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1325->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1325->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1325->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1325->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1325->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1325);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1326[24] = {
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
   Double_t Graph_from_plot_fy1326[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7.220288,
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
   Double_t Graph_from_plot_fex1326[24] = {
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
   Double_t Graph_from_plot_fey1326[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   7.220288,
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
   gre = new TGraphErrors(24,Graph_from_plot_fx1326,Graph_from_plot_fy1326,Graph_from_plot_fex1326,Graph_from_plot_fey1326);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot13211326 = new TH1F("Graph_Graph_Graph_from_plot13211326","",100,0,11);
   Graph_Graph_Graph_from_plot13211326->SetMinimum(0.01588463);
   Graph_Graph_Graph_from_plot13211326->SetMaximum(15.88463);
   Graph_Graph_Graph_from_plot13211326->SetDirectory(0);
   Graph_Graph_Graph_from_plot13211326->SetStats(0);
   Graph_Graph_Graph_from_plot13211326->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot13211326->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot13211326->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot13211326->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot13211326->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot13211326->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot13211326->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot13211326->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot13211326->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot13211326->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot13211326);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1327[24] = {
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
   Double_t Graph_from_plot_fy1327[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   1346.817,
   633.9201,
   370.5483,
   247.4987,
   176.8011,
   124.108,
   84.19982,
   52.13284,
   30.59141,
   18.83786,
   12.13217,
   7.828057,
   4.381056,
   39.3262,
   0.5176265};
   Double_t Graph_from_plot_fex1327[24] = {
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
   Double_t Graph_from_plot_fey1327[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   12.51145,
   6.869193,
   5.186327,
   4.179354,
   3.436969,
   2.086419,
   1.696186,
   0.8379434,
   0.6575671,
   0.5111398,
   0.4238112,
   0.222456,
   0.161636,
   4.434309,
   0.01580463};
   gre = new TGraphErrors(24,Graph_from_plot_fx1327,Graph_from_plot_fy1327,Graph_from_plot_fex1327,Graph_from_plot_fey1327);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_Graph_from_plot13221327 = new TH1F("Graph_Graph_Graph_from_plot13221327","",100,0,11);
   Graph_Graph_Graph_from_plot13221327->SetMinimum(1.495261);
   Graph_Graph_Graph_from_plot13221327->SetMaximum(1495.261);
   Graph_Graph_Graph_from_plot13221327->SetDirectory(0);
   Graph_Graph_Graph_from_plot13221327->SetStats(0);
   Graph_Graph_Graph_from_plot13221327->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot13221327->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot13221327->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot13221327->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_from_plot13221327->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot13221327->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot13221327->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_from_plot13221327->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_from_plot13221327->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_from_plot13221327->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_Graph_from_plot13221327);
   
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_zero_375_    Jet Multiplicity=2,3");
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
   Double_t xAxis1351[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1269 = new TH1D("plot__1269","",24, xAxis1351);
   plot__1269->SetBinContent(10,1119);
   plot__1269->SetBinContent(11,542);
   plot__1269->SetBinContent(12,315);
   plot__1269->SetBinContent(13,200);
   plot__1269->SetBinContent(14,145);
   plot__1269->SetBinContent(15,105.5);
   plot__1269->SetBinContent(16,69);
   plot__1269->SetBinContent(17,51.2);
   plot__1269->SetBinContent(18,20);
   plot__1269->SetBinContent(19,14.4);
   plot__1269->SetBinContent(20,9.8);
   plot__1269->SetBinContent(21,6.9);
   plot__1269->SetBinContent(22,4.4);
   plot__1269->SetBinContent(23,33);
   plot__1269->SetBinContent(24,0.442029);
   plot__1269->SetBinContent(25,3);
   plot__1269->SetBinError(10,33.45146);
   plot__1269->SetBinError(11,23.28089);
   plot__1269->SetBinError(12,17.74824);
   plot__1269->SetBinError(13,14.14214);
   plot__1269->SetBinError(14,12.04159);
   plot__1269->SetBinError(15,7.26292);
   plot__1269->SetBinError(16,5.87367);
   plot__1269->SetBinError(17,3.2);
   plot__1269->SetBinError(18,2);
   plot__1269->SetBinError(19,1.697056);
   plot__1269->SetBinError(20,3.19);
   plot__1269->SetBinError(21,2.68);
   plot__1269->SetBinError(22,2.3);
   plot__1269->SetBinError(23,4.062019);
   plot__1269->SetBinError(24,0.05659601);
   plot__1269->SetBinError(25,1.732051);
   plot__1269->SetMinimum(0.11);
   plot__1269->SetMaximum(13468.17);
   plot__1269->SetEntries(3354);

   ci = TColor::GetColor("#000099");
   plot__1269->SetLineColor(ci);
   plot__1269->SetLineWidth(2);
   plot__1269->SetMarkerStyle(20);
   plot__1269->SetMarkerSize(1.5);
   plot__1269->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1269->GetXaxis()->SetRange(1,23);
   plot__1269->GetXaxis()->SetLabelFont(42);
   plot__1269->GetXaxis()->SetLabelSize(0.035);
   plot__1269->GetXaxis()->SetTitleSize(0.035);
   plot__1269->GetXaxis()->SetTitleFont(42);
   plot__1269->GetYaxis()->SetTitle("Events");
   plot__1269->GetYaxis()->SetLabelFont(42);
   plot__1269->GetYaxis()->SetLabelSize(0.035);
   plot__1269->GetYaxis()->SetTitleSize(0.035);
   plot__1269->GetYaxis()->SetTitleOffset(1.3);
   plot__1269->GetYaxis()->SetTitleFont(42);
   plot__1269->GetZaxis()->SetLabelFont(42);
   plot__1269->GetZaxis()->SetLabelSize(0.035);
   plot__1269->GetZaxis()->SetTitleSize(0.035);
   plot__1269->GetZaxis()->SetTitleFont(42);
   plot__1269->Draw("PSAME");
   u->Modified();
   canvasbtag_zero_375_475/AlphaT_2->cd();
  
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
   Double_t xAxis1352[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1270 = new TH1D("plot__1270","",24, xAxis1352);
   plot__1270->SetBinContent(10,0.8308479);
   plot__1270->SetBinContent(11,0.8549973);
   plot__1270->SetBinContent(12,0.8500916);
   plot__1270->SetBinContent(13,0.8080849);
   plot__1270->SetBinContent(14,0.8201305);
   plot__1270->SetBinContent(15,0.8500658);
   plot__1270->SetBinContent(16,0.8194792);
   plot__1270->SetBinContent(17,0.9821064);
   plot__1270->SetBinContent(18,0.6537784);
   plot__1270->SetBinContent(19,0.764418);
   plot__1270->SetBinContent(20,0.8077696);
   plot__1270->SetBinContent(21,0.8814448);
   plot__1270->SetBinContent(22,1.004324);
   plot__1270->SetBinContent(23,0.8391353);
   plot__1270->SetBinContent(24,0.8539535);
   plot__1270->SetBinContent(25,46.57599);
   plot__1270->SetBinError(10,0.02483742);
   plot__1270->SetBinError(11,0.03672528);
   plot__1270->SetBinError(12,0.04789724);
   plot__1270->SetBinError(13,0.05714023);
   plot__1270->SetBinError(14,0.06810813);
   plot__1270->SetBinError(15,0.05852095);
   plot__1270->SetBinError(16,0.0697587);
   plot__1270->SetBinError(17,0.06138165);
   plot__1270->SetBinError(18,0.06537784);
   plot__1270->SetBinError(19,0.09008752);
   plot__1270->SetBinError(20,0.2629372);
   plot__1270->SetBinError(21,0.3423583);
   plot__1270->SetBinError(22,0.5249875);
   plot__1270->SetBinError(23,0.1032904);
   plot__1270->SetBinError(24,0.1093375);
   plot__1270->SetBinError(25,38.52309);
   plot__1270->SetMinimum(0);
   plot__1270->SetMaximum(2);
   plot__1270->SetEntries(264.6969);

   ci = TColor::GetColor("#000099");
   plot__1270->SetLineColor(ci);
   plot__1270->SetLineWidth(2);
   plot__1270->SetMarkerStyle(20);
   plot__1270->SetMarkerSize(1.5);
   plot__1270->GetXaxis()->SetRange(1,23);
   plot__1270->GetXaxis()->SetLabelFont(42);
   plot__1270->GetXaxis()->SetLabelSize(0.12);
   plot__1270->GetXaxis()->SetTitleSize(0.035);
   plot__1270->GetXaxis()->SetTitleFont(42);
   plot__1270->GetYaxis()->SetTitle("Data/MC");
   plot__1270->GetYaxis()->SetNdivisions(505);
   plot__1270->GetYaxis()->SetLabelFont(42);
   plot__1270->GetYaxis()->SetLabelSize(0.11);
   plot__1270->GetYaxis()->SetTitleSize(0.1);
   plot__1270->GetYaxis()->SetTitleOffset(0.5);
   plot__1270->GetYaxis()->SetTitleFont(42);
   plot__1270->GetZaxis()->SetLabelFont(42);
   plot__1270->GetZaxis()->SetLabelSize(0.035);
   plot__1270->GetZaxis()->SetTitleSize(0.035);
   plot__1270->GetZaxis()->SetTitleFont(42);
   plot__1270->Draw("p");
   
   Double_t Graph_from_plot_fx1328[24] = {
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
   Double_t Graph_from_plot_fy1328[24] = {
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
   0.8539535};
   Double_t Graph_from_plot_fex1328[24] = {
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
   Double_t Graph_from_plot_fey1328[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.009289643,
   0.01083606,
   0.01399636,
   0.01688637,
   0.01943974,
   0.01681131,
   0.02014477,
   0.01607324,
   0.02149516,
   0.02713364,
   0.03493283,
   0.02841777,
   0.03689429,
   0.1127571,
   0.03053289};
   gre = new TGraphErrors(24,Graph_from_plot_fx1328,Graph_from_plot_fy1328,Graph_from_plot_fex1328,Graph_from_plot_fey1328);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1328 = new TH1F("Graph_Graph_from_plot1328","",100,0,11);
   Graph_Graph_from_plot1328->SetMinimum(0.7944869);
   Graph_Graph_from_plot1328->SetMaximum(1.141691);
   Graph_Graph_from_plot1328->SetDirectory(0);
   Graph_Graph_from_plot1328->SetStats(0);
   Graph_Graph_from_plot1328->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1328->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1328->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1328->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1328->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1328->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1328->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1328->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1328->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1328->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1328);
   
   gre->Draw("2");
   Double_t xAxis1353[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1271 = new TH1D("plot__1271","",24, xAxis1353);
   plot__1271->SetBinContent(10,0.8308479);
   plot__1271->SetBinContent(11,0.8549973);
   plot__1271->SetBinContent(12,0.8500916);
   plot__1271->SetBinContent(13,0.8080849);
   plot__1271->SetBinContent(14,0.8201305);
   plot__1271->SetBinContent(15,0.8500658);
   plot__1271->SetBinContent(16,0.8194792);
   plot__1271->SetBinContent(17,0.9821064);
   plot__1271->SetBinContent(18,0.6537784);
   plot__1271->SetBinContent(19,0.764418);
   plot__1271->SetBinContent(20,0.8077696);
   plot__1271->SetBinContent(21,0.8814448);
   plot__1271->SetBinContent(22,1.004324);
   plot__1271->SetBinContent(23,0.8391353);
   plot__1271->SetBinContent(24,0.8539535);
   plot__1271->SetBinContent(25,46.57599);
   plot__1271->SetBinError(10,0.02483742);
   plot__1271->SetBinError(11,0.03672528);
   plot__1271->SetBinError(12,0.04789724);
   plot__1271->SetBinError(13,0.05714023);
   plot__1271->SetBinError(14,0.06810813);
   plot__1271->SetBinError(15,0.05852095);
   plot__1271->SetBinError(16,0.0697587);
   plot__1271->SetBinError(17,0.06138165);
   plot__1271->SetBinError(18,0.06537784);
   plot__1271->SetBinError(19,0.09008752);
   plot__1271->SetBinError(20,0.2629372);
   plot__1271->SetBinError(21,0.3423583);
   plot__1271->SetBinError(22,0.5249875);
   plot__1271->SetBinError(23,0.1032904);
   plot__1271->SetBinError(24,0.1093375);
   plot__1271->SetBinError(25,38.52309);
   plot__1271->SetMinimum(0);
   plot__1271->SetMaximum(2);
   plot__1271->SetEntries(264.6969);

   ci = TColor::GetColor("#000099");
   plot__1271->SetLineColor(ci);
   plot__1271->SetLineWidth(2);
   plot__1271->SetMarkerStyle(20);
   plot__1271->SetMarkerSize(1.5);
   plot__1271->GetXaxis()->SetRange(1,23);
   plot__1271->GetXaxis()->SetLabelFont(42);
   plot__1271->GetXaxis()->SetLabelSize(0.12);
   plot__1271->GetXaxis()->SetTitleSize(0.035);
   plot__1271->GetXaxis()->SetTitleFont(42);
   plot__1271->GetYaxis()->SetTitle("Data/MC");
   plot__1271->GetYaxis()->SetNdivisions(505);
   plot__1271->GetYaxis()->SetLabelFont(42);
   plot__1271->GetYaxis()->SetLabelSize(0.11);
   plot__1271->GetYaxis()->SetTitleSize(0.1);
   plot__1271->GetYaxis()->SetTitleOffset(0.5);
   plot__1271->GetYaxis()->SetTitleFont(42);
   plot__1271->GetZaxis()->SetLabelFont(42);
   plot__1271->GetZaxis()->SetLabelSize(0.035);
   plot__1271->GetZaxis()->SetTitleSize(0.035);
   plot__1271->GetZaxis()->SetTitleFont(42);
   plot__1271->Draw("PSAME");
   d->Modified();
   canvasbtag_zero_375_475/AlphaT_2->cd();
   canvasbtag_zero_375_475/AlphaT_2->Modified();
   canvasbtag_zero_375_475/AlphaT_2->cd();
   canvasbtag_zero_375_475/AlphaT_2->SetSelected(canvasbtag_zero_375_475/AlphaT_2);
}
