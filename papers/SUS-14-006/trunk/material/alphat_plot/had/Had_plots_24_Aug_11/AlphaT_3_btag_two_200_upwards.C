void AlphaT_3_btag_two_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_200_275/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:12 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_200_275/AlphaT_3 = new TCanvas("canvasbtag_two_200_275/AlphaT_3", "cannameAlphaT_3",0,0,1200,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_200_275/AlphaT_3->SetHighLightColor(2);
   canvasbtag_two_200_275/AlphaT_3->Range(0,0,1,1);
   canvasbtag_two_200_275/AlphaT_3->SetFillColor(0);
   canvasbtag_two_200_275/AlphaT_3->SetBorderMode(0);
   canvasbtag_two_200_275/AlphaT_3->SetBorderSize(2);
   canvasbtag_two_200_275/AlphaT_3->SetTickx(1);
   canvasbtag_two_200_275/AlphaT_3->SetTicky(1);
   canvasbtag_two_200_275/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.484299,3.4875,3.772615);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1156[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1086 = new TH1D("plot__1086","",24, xAxis1156);
   plot__1086->SetBinContent(10,148);
   plot__1086->SetBinContent(11,97);
   plot__1086->SetBinContent(12,36);
   plot__1086->SetBinContent(13,16);
   plot__1086->SetBinContent(14,5);
   plot__1086->SetBinContent(15,3);
   plot__1086->SetBinContent(16,1);
   plot__1086->SetBinContent(17,0.4);
   plot__1086->SetBinContent(18,0.2);
   plot__1086->SetBinError(10,12.16553);
   plot__1086->SetBinError(11,9.848858);
   plot__1086->SetBinError(12,6);
   plot__1086->SetBinError(13,4);
   plot__1086->SetBinError(14,2.3);
   plot__1086->SetBinError(15,2.14);
   plot__1086->SetBinError(16,1);
   plot__1086->SetMinimum(0.11);
   plot__1086->SetMaximum(1765.726);
   plot__1086->SetEntries(338);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1086->SetLineColor(ci);
   plot__1086->SetLineWidth(2);
   plot__1086->SetMarkerStyle(20);
   plot__1086->SetMarkerSize(1.5);
   plot__1086->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1086->GetXaxis()->SetRange(1,23);
   plot__1086->GetXaxis()->SetLabelFont(42);
   plot__1086->GetXaxis()->SetLabelSize(0.035);
   plot__1086->GetXaxis()->SetTitleSize(0.035);
   plot__1086->GetXaxis()->SetTitleFont(42);
   plot__1086->GetYaxis()->SetTitle("Events");
   plot__1086->GetYaxis()->SetLabelFont(42);
   plot__1086->GetYaxis()->SetLabelSize(0.035);
   plot__1086->GetYaxis()->SetTitleSize(0.035);
   plot__1086->GetYaxis()->SetTitleOffset(1.3);
   plot__1086->GetYaxis()->SetTitleFont(42);
   plot__1086->GetZaxis()->SetLabelFont(42);
   plot__1086->GetZaxis()->SetLabelSize(0.035);
   plot__1086->GetZaxis()->SetTitleSize(0.035);
   plot__1086->GetZaxis()->SetTitleFont(42);
   plot__1086->Draw("PE0");
   Double_t xAxis1157[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1087 = new TH1D("plot__1087","",24, xAxis1157);
   plot__1087->SetBinContent(10,4.386244);
   plot__1087->SetBinContent(11,3.089164);
   plot__1087->SetBinContent(12,1.948783);
   plot__1087->SetBinContent(13,0.6246388);
   plot__1087->SetBinContent(14,0.5316585);
   plot__1087->SetBinContent(15,0.2567242);
   plot__1087->SetBinContent(16,0.3053395);
   plot__1087->SetBinContent(17,0.1253586);
   plot__1087->SetBinContent(18,0.0251289);
   plot__1087->SetBinError(10,0.7744114);
   plot__1087->SetBinError(11,0.7061483);
   plot__1087->SetBinError(12,0.560994);
   plot__1087->SetBinError(13,0.3172855);
   plot__1087->SetBinError(14,0.3095655);
   plot__1087->SetBinError(15,0.1500639);
   plot__1087->SetBinError(16,0.1422258);
   plot__1087->SetBinError(17,0.06319344);
   plot__1087->SetBinError(18,0.0251289);
   plot__1087->SetEntries(122);
   plot__1087->SetLineColor(4);
   plot__1087->SetLineWidth(3);
   plot__1087->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1087->GetXaxis()->SetRange(1,23);
   plot__1087->GetXaxis()->SetLabelFont(42);
   plot__1087->GetXaxis()->SetLabelSize(0.035);
   plot__1087->GetXaxis()->SetTitleSize(0.035);
   plot__1087->GetXaxis()->SetTitleFont(42);
   plot__1087->GetYaxis()->SetTitle("Events/0.025");
   plot__1087->GetYaxis()->SetLabelFont(42);
   plot__1087->GetYaxis()->SetLabelSize(0.035);
   plot__1087->GetYaxis()->SetTitleSize(0.035);
   plot__1087->GetYaxis()->SetTitleFont(42);
   plot__1087->GetZaxis()->SetLabelFont(42);
   plot__1087->GetZaxis()->SetLabelSize(0.035);
   plot__1087->GetZaxis()->SetTitleSize(0.035);
   plot__1087->GetZaxis()->SetTitleFont(42);
   plot__1087->Draw("HISTSAME");
   Double_t xAxis1158[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1088 = new TH1D("plot__1088","",24, xAxis1158);
   plot__1088->SetBinContent(10,155.3615);
   plot__1088->SetBinContent(11,91.16549);
   plot__1088->SetBinContent(12,39.93203);
   plot__1088->SetBinContent(13,11.41811);
   plot__1088->SetBinContent(14,7.473554);
   plot__1088->SetBinContent(15,2.07376);
   plot__1088->SetBinContent(16,0.4991202);
   plot__1088->SetBinContent(17,0.2641163);
   plot__1088->SetBinContent(18,0.06882089);
   plot__1088->SetBinContent(19,0.04145886);
   plot__1088->SetBinError(10,5.5897);
   plot__1088->SetBinError(11,4.227259);
   plot__1088->SetBinError(12,2.740247);
   plot__1088->SetBinError(13,1.430868);
   plot__1088->SetBinError(14,1.19604);
   plot__1088->SetBinError(15,0.4402512);
   plot__1088->SetBinError(16,0.2139835);
   plot__1088->SetBinError(17,0.1010942);
   plot__1088->SetBinError(18,0.06882089);
   plot__1088->SetBinError(19,0.04145886);
   plot__1088->SetEntries(1773);
   plot__1088->SetLineColor(2);
   plot__1088->SetLineWidth(3);
   plot__1088->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1088->GetXaxis()->SetRange(1,23);
   plot__1088->GetXaxis()->SetLabelFont(42);
   plot__1088->GetXaxis()->SetLabelSize(0.035);
   plot__1088->GetXaxis()->SetTitleSize(0.035);
   plot__1088->GetXaxis()->SetTitleFont(42);
   plot__1088->GetYaxis()->SetTitle("Events/0.025");
   plot__1088->GetYaxis()->SetLabelFont(42);
   plot__1088->GetYaxis()->SetLabelSize(0.035);
   plot__1088->GetYaxis()->SetTitleSize(0.035);
   plot__1088->GetYaxis()->SetTitleFont(42);
   plot__1088->GetZaxis()->SetLabelFont(42);
   plot__1088->GetZaxis()->SetLabelSize(0.035);
   plot__1088->GetZaxis()->SetTitleSize(0.035);
   plot__1088->GetZaxis()->SetTitleFont(42);
   plot__1088->Draw("HISTSAME");
   Double_t xAxis1159[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1089 = new TH1D("plot__1089","",24, xAxis1159);
   plot__1089->SetBinContent(10,9.473746);
   plot__1089->SetBinContent(11,5.163056);
   plot__1089->SetBinContent(12,2.825645);
   plot__1089->SetBinContent(13,2.26564);
   plot__1089->SetBinContent(14,0.7374074);
   plot__1089->SetBinContent(15,0.4233788);
   plot__1089->SetBinContent(16,0.2476112);
   plot__1089->SetBinContent(17,0.13215);
   plot__1089->SetBinContent(18,0.0699251);
   plot__1089->SetBinContent(19,0.05869729);
   plot__1089->SetBinContent(20,0.005173888);
   plot__1089->SetBinError(10,0.6563566);
   plot__1089->SetBinError(11,0.5494438);
   plot__1089->SetBinError(12,0.4044101);
   plot__1089->SetBinError(13,0.3799106);
   plot__1089->SetBinError(14,0.1942397);
   plot__1089->SetBinError(15,0.1029133);
   plot__1089->SetBinError(16,0.08855097);
   plot__1089->SetBinError(17,0.04183168);
   plot__1089->SetBinError(18,0.03060085);
   plot__1089->SetBinError(19,0.0264695);
   plot__1089->SetBinError(20,0.005173888);
   plot__1089->SetEntries(717);
   plot__1089->SetLineColor(5);
   plot__1089->SetLineWidth(3);
   plot__1089->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1089->GetXaxis()->SetRange(1,23);
   plot__1089->GetXaxis()->SetLabelFont(42);
   plot__1089->GetXaxis()->SetLabelSize(0.035);
   plot__1089->GetXaxis()->SetTitleSize(0.035);
   plot__1089->GetXaxis()->SetTitleFont(42);
   plot__1089->GetYaxis()->SetTitle("Events/0.025");
   plot__1089->GetYaxis()->SetLabelFont(42);
   plot__1089->GetYaxis()->SetLabelSize(0.035);
   plot__1089->GetYaxis()->SetTitleSize(0.035);
   plot__1089->GetYaxis()->SetTitleFont(42);
   plot__1089->GetZaxis()->SetLabelFont(42);
   plot__1089->GetZaxis()->SetLabelSize(0.035);
   plot__1089->GetZaxis()->SetTitleSize(0.035);
   plot__1089->GetZaxis()->SetTitleFont(42);
   plot__1089->Draw("HISTSAME");
   Double_t xAxis1160[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1090 = new TH1D("plot__1090","",24, xAxis1160);
   plot__1090->SetBinContent(10,0.02728206);
   plot__1090->SetBinContent(11,0.08586722);
   plot__1090->SetBinContent(12,0.105423);
   plot__1090->SetBinError(10,0.02728206);
   plot__1090->SetBinError(11,0.06681905);
   plot__1090->SetBinError(12,0.0858109);
   plot__1090->SetEntries(30);
   plot__1090->SetLineColor(6);
   plot__1090->SetLineWidth(3);
   plot__1090->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1090->GetXaxis()->SetRange(1,23);
   plot__1090->GetXaxis()->SetLabelFont(42);
   plot__1090->GetXaxis()->SetLabelSize(0.035);
   plot__1090->GetXaxis()->SetTitleSize(0.035);
   plot__1090->GetXaxis()->SetTitleFont(42);
   plot__1090->GetYaxis()->SetTitle("Events/0.025");
   plot__1090->GetYaxis()->SetLabelFont(42);
   plot__1090->GetYaxis()->SetLabelSize(0.035);
   plot__1090->GetYaxis()->SetTitleSize(0.035);
   plot__1090->GetYaxis()->SetTitleFont(42);
   plot__1090->GetZaxis()->SetLabelFont(42);
   plot__1090->GetZaxis()->SetLabelSize(0.035);
   plot__1090->GetZaxis()->SetTitleSize(0.035);
   plot__1090->GetZaxis()->SetTitleFont(42);
   plot__1090->Draw("HISTSAME");
   Double_t xAxis1161[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1091 = new TH1D("plot__1091","",24, xAxis1161);
   plot__1091->SetBinContent(10,6.917945);
   plot__1091->SetBinContent(11,3.365584);
   plot__1091->SetBinContent(12,1.15645);
   plot__1091->SetBinContent(13,1.772242);
   plot__1091->SetBinContent(14,1.178223);
   plot__1091->SetBinContent(15,0.358161);
   plot__1091->SetBinContent(17,0.09956399);
   plot__1091->SetBinError(10,1.777567);
   plot__1091->SetBinError(11,1.145975);
   plot__1091->SetBinError(12,0.6730211);
   plot__1091->SetBinError(13,0.9130609);
   plot__1091->SetBinError(14,0.7072199);
   plot__1091->SetBinError(15,0.2650544);
   plot__1091->SetBinError(17,0.09956399);
   plot__1091->SetEntries(66);
   plot__1091->SetLineColor(40);
   plot__1091->SetLineWidth(3);
   plot__1091->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1091->GetXaxis()->SetRange(1,23);
   plot__1091->GetXaxis()->SetLabelFont(42);
   plot__1091->GetXaxis()->SetLabelSize(0.035);
   plot__1091->GetXaxis()->SetTitleSize(0.035);
   plot__1091->GetXaxis()->SetTitleFont(42);
   plot__1091->GetYaxis()->SetTitle("Events/0.025");
   plot__1091->GetYaxis()->SetLabelFont(42);
   plot__1091->GetYaxis()->SetLabelSize(0.035);
   plot__1091->GetYaxis()->SetTitleSize(0.035);
   plot__1091->GetYaxis()->SetTitleFont(42);
   plot__1091->GetZaxis()->SetLabelFont(42);
   plot__1091->GetZaxis()->SetLabelSize(0.035);
   plot__1091->GetZaxis()->SetTitleSize(0.035);
   plot__1091->GetZaxis()->SetTitleFont(42);
   plot__1091->Draw("HISTSAME");
   Double_t xAxis1162[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1092 = new TH1D("plot__1092","",24, xAxis1162);
   plot__1092->SetBinContent(10,0.4058298);
   plot__1092->SetBinContent(11,0.2494901);
   plot__1092->SetBinContent(12,0.1344893);
   plot__1092->SetBinContent(13,0.2469616);
   plot__1092->SetBinContent(14,0.1190414);
   plot__1092->SetBinContent(15,0.03046178);
   plot__1092->SetBinContent(17,0.006598688);
   plot__1092->SetBinContent(18,0.005305513);
   plot__1092->SetBinError(10,0.09248172);
   plot__1092->SetBinError(11,0.07710061);
   plot__1092->SetBinError(12,0.04976757);
   plot__1092->SetBinError(13,0.1257488);
   plot__1092->SetBinError(14,0.05644959);
   plot__1092->SetBinError(15,0.01773574);
   plot__1092->SetBinError(17,0.004786534);
   plot__1092->SetBinError(18,0.003806532);
   plot__1092->SetEntries(90);
   plot__1092->SetLineColor(44);
   plot__1092->SetLineWidth(3);
   plot__1092->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1092->GetXaxis()->SetRange(1,23);
   plot__1092->GetXaxis()->SetLabelFont(42);
   plot__1092->GetXaxis()->SetLabelSize(0.035);
   plot__1092->GetXaxis()->SetTitleSize(0.035);
   plot__1092->GetXaxis()->SetTitleFont(42);
   plot__1092->GetYaxis()->SetTitle("Events/0.025");
   plot__1092->GetYaxis()->SetLabelFont(42);
   plot__1092->GetYaxis()->SetLabelSize(0.035);
   plot__1092->GetYaxis()->SetTitleSize(0.035);
   plot__1092->GetYaxis()->SetTitleFont(42);
   plot__1092->GetZaxis()->SetLabelFont(42);
   plot__1092->GetZaxis()->SetLabelSize(0.035);
   plot__1092->GetZaxis()->SetTitleSize(0.035);
   plot__1092->GetZaxis()->SetTitleFont(42);
   plot__1092->Draw("HISTSAME");
   Double_t xAxis1163[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1093 = new TH1D("plot__1093","",24, xAxis1163);
   plot__1093->SetEntries(25);
   plot__1093->SetLineColor(7);
   plot__1093->SetLineStyle(10);
   plot__1093->SetLineWidth(3);
   plot__1093->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1093->GetXaxis()->SetRange(1,23);
   plot__1093->GetXaxis()->SetLabelFont(42);
   plot__1093->GetXaxis()->SetLabelSize(0.035);
   plot__1093->GetXaxis()->SetTitleSize(0.035);
   plot__1093->GetXaxis()->SetTitleFont(42);
   plot__1093->GetYaxis()->SetTitle("Events/0.025");
   plot__1093->GetYaxis()->SetLabelFont(42);
   plot__1093->GetYaxis()->SetLabelSize(0.035);
   plot__1093->GetYaxis()->SetTitleSize(0.035);
   plot__1093->GetYaxis()->SetTitleFont(42);
   plot__1093->GetZaxis()->SetLabelFont(42);
   plot__1093->GetZaxis()->SetLabelSize(0.035);
   plot__1093->GetZaxis()->SetTitleSize(0.035);
   plot__1093->GetZaxis()->SetTitleFont(42);
   plot__1093->Draw("HISTSAME");
   Double_t xAxis1164[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1094 = new TH1D("plot__1094","",24, xAxis1164);
   plot__1094->SetBinContent(10,176.5726);
   plot__1094->SetBinContent(11,103.1187);
   plot__1094->SetBinContent(12,46.10282);
   plot__1094->SetBinContent(13,16.32759);
   plot__1094->SetBinContent(14,10.03988);
   plot__1094->SetBinContent(15,3.142486);
   plot__1094->SetBinContent(16,1.052071);
   plot__1094->SetBinContent(17,0.6277877);
   plot__1094->SetBinContent(18,0.1691804);
   plot__1094->SetBinContent(19,0.1001562);
   plot__1094->SetBinContent(20,0.005173888);
   plot__1094->SetBinError(10,5.953512);
   plot__1094->SetBinError(11,4.471456);
   plot__1094->SetBinError(12,2.906891);
   plot__1094->SetBinError(13,1.772534);
   plot__1094->SetBinError(14,1.437852);
   plot__1094->SetBinError(15,0.5454355);
   plot__1094->SetBinError(16,0.271769);
   plot__1094->SetBinError(17,0.1609324);
   plot__1094->SetBinError(18,0.07949011);
   plot__1094->SetBinError(19,0.04918813);
   plot__1094->SetBinError(20,0.005173888);
   plot__1094->SetEntries(2823);
   plot__1094->SetLineColor(3);
   plot__1094->SetLineWidth(3);
   plot__1094->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1094->GetXaxis()->SetRange(1,23);
   plot__1094->GetXaxis()->SetLabelFont(42);
   plot__1094->GetXaxis()->SetLabelSize(0.035);
   plot__1094->GetXaxis()->SetTitleSize(0.035);
   plot__1094->GetXaxis()->SetTitleFont(42);
   plot__1094->GetYaxis()->SetTitle("Events/0.025");
   plot__1094->GetYaxis()->SetLabelFont(42);
   plot__1094->GetYaxis()->SetLabelSize(0.035);
   plot__1094->GetYaxis()->SetTitleSize(0.035);
   plot__1094->GetYaxis()->SetTitleFont(42);
   plot__1094->GetZaxis()->SetLabelFont(42);
   plot__1094->GetZaxis()->SetLabelSize(0.035);
   plot__1094->GetZaxis()->SetTitleSize(0.035);
   plot__1094->GetZaxis()->SetTitleFont(42);
   plot__1094->Draw("HISTSAME");
   
   Double_t Graph_from_plot_fx1281[24] = {
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
   Double_t Graph_from_plot_fy1281[24] = {
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
   Double_t Graph_from_plot_fex1281[24] = {
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
   Double_t Graph_from_plot_fey1281[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1281,Graph_from_plot_fy1281,Graph_from_plot_fex1281,Graph_from_plot_fey1281);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1281 = new TH1F("Graph_Graph_from_plot1281","",100,0,11);
   Graph_Graph_from_plot1281->SetMinimum(0.0011);
   Graph_Graph_from_plot1281->SetMaximum(1.1);
   Graph_Graph_from_plot1281->SetDirectory(0);
   Graph_Graph_from_plot1281->SetStats(0);
   Graph_Graph_from_plot1281->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1281->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1281->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1281->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1281->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1281->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1281->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1281->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1281->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1281->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1281);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1282[24] = {
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
   Double_t Graph_from_plot_fy1282[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   176.5726,
   103.1187,
   46.10282,
   16.32759,
   10.03988,
   3.142486,
   1.052071,
   0.6277877,
   0.1691804,
   0.1001562,
   0.005173888,
   0,
   0,
   0,
   0};
   Double_t Graph_from_plot_fex1282[24] = {
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
   Double_t Graph_from_plot_fey1282[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   5.953512,
   4.471456,
   2.906891,
   1.772534,
   1.437852,
   0.5454355,
   0.271769,
   0.1609324,
   0.07949011,
   0.04918813,
   0.005173888,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(24,Graph_from_plot_fx1282,Graph_from_plot_fy1282,Graph_from_plot_fex1282,Graph_from_plot_fey1282);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1282 = new TH1F("Graph_Graph_from_plot1282","",100,0,11);
   Graph_Graph_from_plot1282->SetMinimum(0.2007787);
   Graph_Graph_from_plot1282->SetMaximum(200.7787);
   Graph_Graph_from_plot1282->SetDirectory(0);
   Graph_Graph_from_plot1282->SetStats(0);
   Graph_Graph_from_plot1282->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1282->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1282->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1282->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1282->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1282->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1282->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1282->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1282->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1282->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1282);
   
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_3","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_3","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_3","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_3","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_3","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_3","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_3","QCD","L");
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
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_200_2    Jet Multiplicity>3");
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
   Double_t xAxis1165[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1095 = new TH1D("plot__1095","",24, xAxis1165);
   plot__1095->SetBinContent(10,148);
   plot__1095->SetBinContent(11,97);
   plot__1095->SetBinContent(12,36);
   plot__1095->SetBinContent(13,16);
   plot__1095->SetBinContent(14,5);
   plot__1095->SetBinContent(15,3);
   plot__1095->SetBinContent(16,1);
   plot__1095->SetBinContent(17,0.4);
   plot__1095->SetBinContent(18,0.2);
   plot__1095->SetBinError(10,12.16553);
   plot__1095->SetBinError(11,9.848858);
   plot__1095->SetBinError(12,6);
   plot__1095->SetBinError(13,4);
   plot__1095->SetBinError(14,2.3);
   plot__1095->SetBinError(15,2.14);
   plot__1095->SetBinError(16,1);
   plot__1095->SetMinimum(0.11);
   plot__1095->SetMaximum(1765.726);
   plot__1095->SetEntries(338);

   ci = TColor::GetColor("#000099");
   plot__1095->SetLineColor(ci);
   plot__1095->SetLineWidth(2);
   plot__1095->SetMarkerStyle(20);
   plot__1095->SetMarkerSize(1.5);
   plot__1095->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1095->GetXaxis()->SetRange(1,23);
   plot__1095->GetXaxis()->SetLabelFont(42);
   plot__1095->GetXaxis()->SetLabelSize(0.035);
   plot__1095->GetXaxis()->SetTitleSize(0.035);
   plot__1095->GetXaxis()->SetTitleFont(42);
   plot__1095->GetYaxis()->SetTitle("Events");
   plot__1095->GetYaxis()->SetLabelFont(42);
   plot__1095->GetYaxis()->SetLabelSize(0.035);
   plot__1095->GetYaxis()->SetTitleSize(0.035);
   plot__1095->GetYaxis()->SetTitleOffset(1.3);
   plot__1095->GetYaxis()->SetTitleFont(42);
   plot__1095->GetZaxis()->SetLabelFont(42);
   plot__1095->GetZaxis()->SetLabelSize(0.035);
   plot__1095->GetZaxis()->SetTitleSize(0.035);
   plot__1095->GetZaxis()->SetTitleFont(42);
   plot__1095->Draw("PSAME");
   u->Modified();
   canvasbtag_two_200_275/AlphaT_3->cd();
  
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
   Double_t xAxis1166[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1096 = new TH1D("plot__1096","",24, xAxis1166);
   plot__1096->SetBinContent(10,0.8381822);
   plot__1096->SetBinContent(11,0.9406639);
   plot__1096->SetBinContent(12,0.7808632);
   plot__1096->SetBinContent(13,0.9799364);
   plot__1096->SetBinContent(14,0.4980137);
   plot__1096->SetBinContent(15,0.9546582);
   plot__1096->SetBinContent(16,0.9505063);
   plot__1096->SetBinContent(17,0.6371581);
   plot__1096->SetBinContent(18,1.18217);
   plot__1096->SetBinError(10,0.06889815);
   plot__1096->SetBinError(11,0.09550995);
   plot__1096->SetBinError(12,0.1301439);
   plot__1096->SetBinError(13,0.2449841);
   plot__1096->SetBinError(14,0.2290863);
   plot__1096->SetBinError(15,0.6809895);
   plot__1096->SetBinError(16,0.9505063);
   plot__1096->SetMinimum(0);
   plot__1096->SetMaximum(2);
   plot__1096->SetEntries(30.82293);

   ci = TColor::GetColor("#000099");
   plot__1096->SetLineColor(ci);
   plot__1096->SetLineWidth(2);
   plot__1096->SetMarkerStyle(20);
   plot__1096->SetMarkerSize(1.5);
   plot__1096->GetXaxis()->SetRange(1,23);
   plot__1096->GetXaxis()->SetLabelFont(42);
   plot__1096->GetXaxis()->SetLabelSize(0.12);
   plot__1096->GetXaxis()->SetTitleSize(0.035);
   plot__1096->GetXaxis()->SetTitleFont(42);
   plot__1096->GetYaxis()->SetTitle("Data/MC");
   plot__1096->GetYaxis()->SetNdivisions(505);
   plot__1096->GetYaxis()->SetLabelFont(42);
   plot__1096->GetYaxis()->SetLabelSize(0.11);
   plot__1096->GetYaxis()->SetTitleSize(0.1);
   plot__1096->GetYaxis()->SetTitleOffset(0.5);
   plot__1096->GetYaxis()->SetTitleFont(42);
   plot__1096->GetZaxis()->SetLabelFont(42);
   plot__1096->GetZaxis()->SetLabelSize(0.035);
   plot__1096->GetZaxis()->SetTitleSize(0.035);
   plot__1096->GetZaxis()->SetTitleFont(42);
   plot__1096->Draw("p");
   
   Double_t Graph_from_plot_fx1283[24] = {
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
   Double_t Graph_from_plot_fy1283[24] = {
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
   Double_t Graph_from_plot_fex1283[24] = {
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
   Double_t Graph_from_plot_fey1283[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03371708,
   0.04336224,
   0.06305234,
   0.1085607,
   0.143214,
   0.1735681,
   0.2583182,
   0.2563484,
   0.4698541,
   0.4911144,
   1,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(24,Graph_from_plot_fx1283,Graph_from_plot_fy1283,Graph_from_plot_fex1283,Graph_from_plot_fey1283);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1283 = new TH1F("Graph_Graph_from_plot1283","",100,0,11);
   Graph_Graph_from_plot1283->SetMinimum(0);
   Graph_Graph_from_plot1283->SetMaximum(2.2);
   Graph_Graph_from_plot1283->SetDirectory(0);
   Graph_Graph_from_plot1283->SetStats(0);
   Graph_Graph_from_plot1283->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1283->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1283->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1283->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1283->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1283->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1283->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1283->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1283->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1283->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1283);
   
   gre->Draw("2");
   Double_t xAxis1167[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1097 = new TH1D("plot__1097","",24, xAxis1167);
   plot__1097->SetBinContent(10,0.8381822);
   plot__1097->SetBinContent(11,0.9406639);
   plot__1097->SetBinContent(12,0.7808632);
   plot__1097->SetBinContent(13,0.9799364);
   plot__1097->SetBinContent(14,0.4980137);
   plot__1097->SetBinContent(15,0.9546582);
   plot__1097->SetBinContent(16,0.9505063);
   plot__1097->SetBinContent(17,0.6371581);
   plot__1097->SetBinContent(18,1.18217);
   plot__1097->SetBinError(10,0.06889815);
   plot__1097->SetBinError(11,0.09550995);
   plot__1097->SetBinError(12,0.1301439);
   plot__1097->SetBinError(13,0.2449841);
   plot__1097->SetBinError(14,0.2290863);
   plot__1097->SetBinError(15,0.6809895);
   plot__1097->SetBinError(16,0.9505063);
   plot__1097->SetMinimum(0);
   plot__1097->SetMaximum(2);
   plot__1097->SetEntries(30.82293);

   ci = TColor::GetColor("#000099");
   plot__1097->SetLineColor(ci);
   plot__1097->SetLineWidth(2);
   plot__1097->SetMarkerStyle(20);
   plot__1097->SetMarkerSize(1.5);
   plot__1097->GetXaxis()->SetRange(1,23);
   plot__1097->GetXaxis()->SetLabelFont(42);
   plot__1097->GetXaxis()->SetLabelSize(0.12);
   plot__1097->GetXaxis()->SetTitleSize(0.035);
   plot__1097->GetXaxis()->SetTitleFont(42);
   plot__1097->GetYaxis()->SetTitle("Data/MC");
   plot__1097->GetYaxis()->SetNdivisions(505);
   plot__1097->GetYaxis()->SetLabelFont(42);
   plot__1097->GetYaxis()->SetLabelSize(0.11);
   plot__1097->GetYaxis()->SetTitleSize(0.1);
   plot__1097->GetYaxis()->SetTitleOffset(0.5);
   plot__1097->GetYaxis()->SetTitleFont(42);
   plot__1097->GetZaxis()->SetLabelFont(42);
   plot__1097->GetZaxis()->SetLabelSize(0.035);
   plot__1097->GetZaxis()->SetTitleSize(0.035);
   plot__1097->GetZaxis()->SetTitleFont(42);
   plot__1097->Draw("PSAME");
   d->Modified();
   canvasbtag_two_200_275/AlphaT_3->cd();
   canvasbtag_two_200_275/AlphaT_3->Modified();
   canvasbtag_two_200_275/AlphaT_3->cd();
   canvasbtag_two_200_275/AlphaT_3->SetSelected(canvasbtag_two_200_275/AlphaT_3);
}
