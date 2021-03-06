void AlphaT_2_btag_two_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_200_275/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:12 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_200_275/AlphaT_2 = new TCanvas("canvasbtag_two_200_275/AlphaT_2", "cannameAlphaT_2",0,0,1200,1000);
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
   Double_t xAxis1123[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1055 = new TH1D("plot__1055","",24, xAxis1123);
   plot__1055->SetBinContent(10,80);
   plot__1055->SetBinContent(11,89);
   plot__1055->SetBinContent(12,78);
   plot__1055->SetBinContent(13,48);
   plot__1055->SetBinContent(14,28);
   plot__1055->SetBinContent(15,17);
   plot__1055->SetBinContent(16,13);
   plot__1055->SetBinContent(17,8.8);
   plot__1055->SetBinContent(18,2);
   plot__1055->SetBinContent(19,2);
   plot__1055->SetBinContent(20,0.6);
   plot__1055->SetBinContent(21,0.8);
   plot__1055->SetBinContent(22,0.4);
   plot__1055->SetBinContent(23,3.5);
   plot__1055->SetBinContent(24,0.05072464);
   plot__1055->SetBinError(10,8.944272);
   plot__1055->SetBinError(11,9.433981);
   plot__1055->SetBinError(12,8.831761);
   plot__1055->SetBinError(13,6.928203);
   plot__1055->SetBinError(14,5.291503);
   plot__1055->SetBinError(15,2.915476);
   plot__1055->SetBinError(16,2.54951);
   plot__1055->SetBinError(17,3.03);
   plot__1055->SetBinError(18,2);
   plot__1055->SetBinError(19,2);
   plot__1055->SetBinError(23,2.14);
   plot__1055->SetBinError(24,0.01917211);
   plot__1055->SetMinimum(0.11);
   plot__1055->SetMaximum(975.2741);
   plot__1055->SetEntries(494);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1055->SetLineColor(ci);
   plot__1055->SetLineWidth(2);
   plot__1055->SetMarkerStyle(20);
   plot__1055->SetMarkerSize(1.5);
   plot__1055->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1055->GetXaxis()->SetRange(1,23);
   plot__1055->GetXaxis()->SetLabelFont(42);
   plot__1055->GetXaxis()->SetLabelSize(0.035);
   plot__1055->GetXaxis()->SetTitleSize(0.035);
   plot__1055->GetXaxis()->SetTitleFont(42);
   plot__1055->GetYaxis()->SetTitle("Events");
   plot__1055->GetYaxis()->SetLabelFont(42);
   plot__1055->GetYaxis()->SetLabelSize(0.035);
   plot__1055->GetYaxis()->SetTitleSize(0.035);
   plot__1055->GetYaxis()->SetTitleOffset(1.3);
   plot__1055->GetYaxis()->SetTitleFont(42);
   plot__1055->GetZaxis()->SetLabelFont(42);
   plot__1055->GetZaxis()->SetLabelSize(0.035);
   plot__1055->GetZaxis()->SetTitleSize(0.035);
   plot__1055->GetZaxis()->SetTitleFont(42);
   plot__1055->Draw("PE0");
   Double_t xAxis1124[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1056 = new TH1D("plot__1056","",24, xAxis1124);
   plot__1056->SetBinContent(10,6.412195);
   plot__1056->SetBinContent(11,6.265869);
   plot__1056->SetBinContent(12,7.449286);
   plot__1056->SetBinContent(13,3.850903);
   plot__1056->SetBinContent(14,2.094244);
   plot__1056->SetBinContent(15,2.115464);
   plot__1056->SetBinContent(16,1.363503);
   plot__1056->SetBinContent(17,1.119791);
   plot__1056->SetBinContent(18,0.6103992);
   plot__1056->SetBinContent(19,0.2897004);
   plot__1056->SetBinContent(20,0.3021225);
   plot__1056->SetBinContent(21,0.1248293);
   plot__1056->SetBinContent(22,0.03689541);
   plot__1056->SetBinContent(23,0.2064288);
   plot__1056->SetBinContent(24,0.002991721);
   plot__1056->SetBinError(10,1.104725);
   plot__1056->SetBinError(11,1.046128);
   plot__1056->SetBinError(12,1.159468);
   plot__1056->SetBinError(13,0.8034263);
   plot__1056->SetBinError(14,0.6059395);
   plot__1056->SetBinError(15,0.4289328);
   plot__1056->SetBinError(16,0.3246756);
   plot__1056->SetBinError(17,0.1939108);
   plot__1056->SetBinError(18,0.1525166);
   plot__1056->SetBinError(19,0.09810914);
   plot__1056->SetBinError(20,0.1046643);
   plot__1056->SetBinError(21,0.05002382);
   plot__1056->SetBinError(22,0.02076997);
   plot__1056->SetBinError(23,0.32127);
   plot__1056->SetBinError(24,0.00174827);
   plot__1056->SetEntries(332);
   plot__1056->SetLineColor(4);
   plot__1056->SetLineWidth(3);
   plot__1056->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1056->GetXaxis()->SetRange(1,23);
   plot__1056->GetXaxis()->SetLabelFont(42);
   plot__1056->GetXaxis()->SetLabelSize(0.035);
   plot__1056->GetXaxis()->SetTitleSize(0.035);
   plot__1056->GetXaxis()->SetTitleFont(42);
   plot__1056->GetYaxis()->SetTitle("Events/0.025");
   plot__1056->GetYaxis()->SetLabelFont(42);
   plot__1056->GetYaxis()->SetLabelSize(0.035);
   plot__1056->GetYaxis()->SetTitleSize(0.035);
   plot__1056->GetYaxis()->SetTitleFont(42);
   plot__1056->GetZaxis()->SetLabelFont(42);
   plot__1056->GetZaxis()->SetLabelSize(0.035);
   plot__1056->GetZaxis()->SetTitleSize(0.035);
   plot__1056->GetZaxis()->SetTitleFont(42);
   plot__1056->Draw("HISTSAME");
   Double_t xAxis1125[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1057 = new TH1D("plot__1057","",24, xAxis1125);
   plot__1057->SetBinContent(10,72.80804);
   plot__1057->SetBinContent(11,53.75449);
   plot__1057->SetBinContent(12,53.33509);
   plot__1057->SetBinContent(13,28.83833);
   plot__1057->SetBinContent(14,15.70758);
   plot__1057->SetBinContent(15,11.53995);
   plot__1057->SetBinContent(16,5.240026);
   plot__1057->SetBinContent(17,2.845781);
   plot__1057->SetBinContent(18,0.9498739);
   plot__1057->SetBinContent(19,0.6762762);
   plot__1057->SetBinContent(20,0.4177811);
   plot__1057->SetBinContent(21,0.1898818);
   plot__1057->SetBinContent(22,0.06103695);
   plot__1057->SetBinContent(23,0.8104673);
   plot__1057->SetBinContent(24,0.0117459);
   plot__1057->SetBinError(10,3.820291);
   plot__1057->SetBinError(11,3.242661);
   plot__1057->SetBinError(12,3.094791);
   plot__1057->SetBinError(13,2.257917);
   plot__1057->SetBinError(14,1.669073);
   plot__1057->SetBinError(15,1.023724);
   plot__1057->SetBinError(16,0.6873633);
   plot__1057->SetBinError(17,0.3250409);
   plot__1057->SetBinError(18,0.1825143);
   plot__1057->SetBinError(19,0.1565307);
   plot__1057->SetBinError(20,0.1215901);
   plot__1057->SetBinError(21,0.0608196);
   plot__1057->SetBinError(22,0.03308326);
   plot__1057->SetBinError(23,0.6365797);
   plot__1057->SetBinError(24,0.003864328);
   plot__1057->SetEntries(1735);
   plot__1057->SetLineColor(2);
   plot__1057->SetLineWidth(3);
   plot__1057->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1057->GetXaxis()->SetRange(1,23);
   plot__1057->GetXaxis()->SetLabelFont(42);
   plot__1057->GetXaxis()->SetLabelSize(0.035);
   plot__1057->GetXaxis()->SetTitleSize(0.035);
   plot__1057->GetXaxis()->SetTitleFont(42);
   plot__1057->GetYaxis()->SetTitle("Events/0.025");
   plot__1057->GetYaxis()->SetLabelFont(42);
   plot__1057->GetYaxis()->SetLabelSize(0.035);
   plot__1057->GetYaxis()->SetTitleSize(0.035);
   plot__1057->GetYaxis()->SetTitleFont(42);
   plot__1057->GetZaxis()->SetLabelFont(42);
   plot__1057->GetZaxis()->SetLabelSize(0.035);
   plot__1057->GetZaxis()->SetTitleSize(0.035);
   plot__1057->GetZaxis()->SetTitleFont(42);
   plot__1057->Draw("HISTSAME");
   Double_t xAxis1126[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1058 = new TH1D("plot__1058","",24, xAxis1126);
   plot__1058->SetBinContent(10,14.86592);
   plot__1058->SetBinContent(11,14.24041);
   plot__1058->SetBinContent(12,18.49409);
   plot__1058->SetBinContent(13,12.55275);
   plot__1058->SetBinContent(14,8.901682);
   plot__1058->SetBinContent(15,5.753382);
   plot__1058->SetBinContent(16,4.318962);
   plot__1058->SetBinContent(17,3.194914);
   plot__1058->SetBinContent(18,1.820895);
   plot__1058->SetBinContent(19,1.02232);
   plot__1058->SetBinContent(20,0.8691194);
   plot__1058->SetBinContent(21,0.3178003);
   plot__1058->SetBinContent(22,0.2176765);
   plot__1058->SetBinContent(23,1.369839);
   plot__1058->SetBinContent(24,0.01636049);
   plot__1058->SetBinError(10,0.8966075);
   plot__1058->SetBinError(11,1.017444);
   plot__1058->SetBinError(12,1.327737);
   plot__1058->SetBinError(13,1.025164);
   plot__1058->SetBinError(14,0.921789);
   plot__1058->SetBinError(15,0.4626668);
   plot__1058->SetBinError(16,0.457112);
   plot__1058->SetBinError(17,0.235807);
   plot__1058->SetBinError(18,0.1724973);
   plot__1058->SetBinError(19,0.1510065);
   plot__1058->SetBinError(20,0.1415033);
   plot__1058->SetBinError(21,0.05449183);
   plot__1058->SetBinError(22,0.03918072);
   plot__1058->SetBinError(23,0.8275988);
   plot__1058->SetBinError(24,0.00436425);
   plot__1058->SetEntries(2499);
   plot__1058->SetLineColor(5);
   plot__1058->SetLineWidth(3);
   plot__1058->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1058->GetXaxis()->SetRange(1,23);
   plot__1058->GetXaxis()->SetLabelFont(42);
   plot__1058->GetXaxis()->SetLabelSize(0.035);
   plot__1058->GetXaxis()->SetTitleSize(0.035);
   plot__1058->GetXaxis()->SetTitleFont(42);
   plot__1058->GetYaxis()->SetTitle("Events/0.025");
   plot__1058->GetYaxis()->SetLabelFont(42);
   plot__1058->GetYaxis()->SetLabelSize(0.035);
   plot__1058->GetYaxis()->SetTitleSize(0.035);
   plot__1058->GetYaxis()->SetTitleFont(42);
   plot__1058->GetZaxis()->SetLabelFont(42);
   plot__1058->GetZaxis()->SetLabelSize(0.035);
   plot__1058->GetZaxis()->SetTitleSize(0.035);
   plot__1058->GetZaxis()->SetTitleFont(42);
   plot__1058->Draw("HISTSAME");
   Double_t xAxis1127[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1059 = new TH1D("plot__1059","",24, xAxis1127);
   plot__1059->SetBinContent(11,0.0672155);
   plot__1059->SetBinContent(12,0.2270012);
   plot__1059->SetBinContent(13,0.02075003);
   plot__1059->SetBinContent(16,0.02929217);
   plot__1059->SetBinContent(18,0.01539052);
   plot__1059->SetBinContent(22,0.005203707);
   plot__1059->SetBinError(11,0.0672155);
   plot__1059->SetBinError(12,0.114741);
   plot__1059->SetBinError(13,0.02075003);
   plot__1059->SetBinError(16,0.02929217);
   plot__1059->SetBinError(18,0.01539052);
   plot__1059->SetBinError(22,0.005203707);
   plot__1059->SetEntries(34);
   plot__1059->SetLineColor(6);
   plot__1059->SetLineWidth(3);
   plot__1059->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1059->GetXaxis()->SetRange(1,23);
   plot__1059->GetXaxis()->SetLabelFont(42);
   plot__1059->GetXaxis()->SetLabelSize(0.035);
   plot__1059->GetXaxis()->SetTitleSize(0.035);
   plot__1059->GetXaxis()->SetTitleFont(42);
   plot__1059->GetYaxis()->SetTitle("Events/0.025");
   plot__1059->GetYaxis()->SetLabelFont(42);
   plot__1059->GetYaxis()->SetLabelSize(0.035);
   plot__1059->GetYaxis()->SetTitleSize(0.035);
   plot__1059->GetYaxis()->SetTitleFont(42);
   plot__1059->GetZaxis()->SetLabelFont(42);
   plot__1059->GetZaxis()->SetLabelSize(0.035);
   plot__1059->GetZaxis()->SetTitleSize(0.035);
   plot__1059->GetZaxis()->SetTitleFont(42);
   plot__1059->Draw("HISTSAME");
   Double_t xAxis1128[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1060 = new TH1D("plot__1060","",24, xAxis1128);
   plot__1060->SetBinContent(10,2.836294);
   plot__1060->SetBinContent(11,3.960034);
   plot__1060->SetBinContent(12,4.960784);
   plot__1060->SetBinContent(13,3.276787);
   plot__1060->SetBinContent(14,0.5176774);
   plot__1060->SetBinContent(15,1.214168);
   plot__1060->SetBinContent(16,0.6942231);
   plot__1060->SetBinContent(17,0.5735606);
   plot__1060->SetBinContent(18,0.2628563);
   plot__1060->SetBinContent(19,0.09959243);
   plot__1060->SetBinContent(20,0.08958839);
   plot__1060->SetBinContent(21,0.08151528);
   plot__1060->SetBinContent(22,0.0379959);
   plot__1060->SetBinContent(23,0.6147361);
   plot__1060->SetBinContent(24,0.008909219);
   plot__1060->SetBinError(10,0.9911837);
   plot__1060->SetBinError(11,1.315046);
   plot__1060->SetBinError(12,1.373912);
   plot__1060->SetBinError(13,1.19393);
   plot__1060->SetBinError(14,0.5176774);
   plot__1060->SetBinError(15,0.5095698);
   plot__1060->SetBinError(16,0.3545297);
   plot__1060->SetBinError(17,0.2479859);
   plot__1060->SetBinError(18,0.1524283);
   plot__1060->SetBinError(19,0.09959243);
   plot__1060->SetBinError(20,0.08958839);
   plot__1060->SetBinError(21,0.05794803);
   plot__1060->SetBinError(22,0.0379959);
   plot__1060->SetBinError(23,0.5544078);
   plot__1060->SetBinError(24,0.005161473);
   plot__1060->SetEntries(99);
   plot__1060->SetLineColor(40);
   plot__1060->SetLineWidth(3);
   plot__1060->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1060->GetXaxis()->SetRange(1,23);
   plot__1060->GetXaxis()->SetLabelFont(42);
   plot__1060->GetXaxis()->SetLabelSize(0.035);
   plot__1060->GetXaxis()->SetTitleSize(0.035);
   plot__1060->GetXaxis()->SetTitleFont(42);
   plot__1060->GetYaxis()->SetTitle("Events/0.025");
   plot__1060->GetYaxis()->SetLabelFont(42);
   plot__1060->GetYaxis()->SetLabelSize(0.035);
   plot__1060->GetYaxis()->SetTitleSize(0.035);
   plot__1060->GetYaxis()->SetTitleFont(42);
   plot__1060->GetZaxis()->SetLabelFont(42);
   plot__1060->GetZaxis()->SetLabelSize(0.035);
   plot__1060->GetZaxis()->SetTitleSize(0.035);
   plot__1060->GetZaxis()->SetTitleFont(42);
   plot__1060->Draw("HISTSAME");
   Double_t xAxis1129[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1061 = new TH1D("plot__1061","",24, xAxis1129);
   plot__1061->SetBinContent(10,0.6049633);
   plot__1061->SetBinContent(11,0.6503431);
   plot__1061->SetBinContent(12,0.9043153);
   plot__1061->SetBinContent(13,0.9197437);
   plot__1061->SetBinContent(14,0.9096459);
   plot__1061->SetBinContent(15,0.828441);
   plot__1061->SetBinContent(16,0.8649255);
   plot__1061->SetBinContent(17,0.7027173);
   plot__1061->SetBinContent(18,0.4441084);
   plot__1061->SetBinContent(19,0.2362846);
   plot__1061->SetBinContent(20,0.1292737);
   plot__1061->SetBinContent(21,0.0832138);
   plot__1061->SetBinContent(22,0.05945878);
   plot__1061->SetBinContent(23,0.392756);
   plot__1061->SetBinContent(24,0.005094091);
   plot__1061->SetBinError(10,0.2062076);
   plot__1061->SetBinError(11,0.1158218);
   plot__1061->SetBinError(12,0.1642803);
   plot__1061->SetBinError(13,0.174753);
   plot__1061->SetBinError(14,0.1266406);
   plot__1061->SetBinError(15,0.0847376);
   plot__1061->SetBinError(16,0.09020895);
   plot__1061->SetBinError(17,0.05010238);
   plot__1061->SetBinError(18,0.0394944);
   plot__1061->SetBinError(19,0.02901428);
   plot__1061->SetBinError(20,0.0214404);
   plot__1061->SetBinError(21,0.01228376);
   plot__1061->SetBinError(22,0.01004412);
   plot__1061->SetBinError(23,0.4431455);
   plot__1061->SetBinError(24,0.0008135038);
   plot__1061->SetEntries(1108);
   plot__1061->SetLineColor(44);
   plot__1061->SetLineWidth(3);
   plot__1061->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1061->GetXaxis()->SetRange(1,23);
   plot__1061->GetXaxis()->SetLabelFont(42);
   plot__1061->GetXaxis()->SetLabelSize(0.035);
   plot__1061->GetXaxis()->SetTitleSize(0.035);
   plot__1061->GetXaxis()->SetTitleFont(42);
   plot__1061->GetYaxis()->SetTitle("Events/0.025");
   plot__1061->GetYaxis()->SetLabelFont(42);
   plot__1061->GetYaxis()->SetLabelSize(0.035);
   plot__1061->GetYaxis()->SetTitleSize(0.035);
   plot__1061->GetYaxis()->SetTitleFont(42);
   plot__1061->GetZaxis()->SetLabelFont(42);
   plot__1061->GetZaxis()->SetLabelSize(0.035);
   plot__1061->GetZaxis()->SetTitleSize(0.035);
   plot__1061->GetZaxis()->SetTitleFont(42);
   plot__1061->Draw("HISTSAME");
   Double_t xAxis1130[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1062 = new TH1D("plot__1062","",24, xAxis1130);
   plot__1062->SetEntries(25);
   plot__1062->SetLineColor(7);
   plot__1062->SetLineStyle(10);
   plot__1062->SetLineWidth(3);
   plot__1062->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1062->GetXaxis()->SetRange(1,23);
   plot__1062->GetXaxis()->SetLabelFont(42);
   plot__1062->GetXaxis()->SetLabelSize(0.035);
   plot__1062->GetXaxis()->SetTitleSize(0.035);
   plot__1062->GetXaxis()->SetTitleFont(42);
   plot__1062->GetYaxis()->SetTitle("Events/0.025");
   plot__1062->GetYaxis()->SetLabelFont(42);
   plot__1062->GetYaxis()->SetLabelSize(0.035);
   plot__1062->GetYaxis()->SetTitleSize(0.035);
   plot__1062->GetYaxis()->SetTitleFont(42);
   plot__1062->GetZaxis()->SetLabelFont(42);
   plot__1062->GetZaxis()->SetLabelSize(0.035);
   plot__1062->GetZaxis()->SetTitleSize(0.035);
   plot__1062->GetZaxis()->SetTitleFont(42);
   plot__1062->Draw("HISTSAME");
   Double_t xAxis1131[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1063 = new TH1D("plot__1063","",24, xAxis1131);
   plot__1063->SetBinContent(10,97.52741);
   plot__1063->SetBinContent(11,78.93836);
   plot__1063->SetBinContent(12,85.37057);
   plot__1063->SetBinContent(13,49.45926);
   plot__1063->SetBinContent(14,28.13083);
   plot__1063->SetBinContent(15,21.4514);
   plot__1063->SetBinContent(16,12.51093);
   plot__1063->SetBinContent(17,8.436763);
   plot__1063->SetBinContent(18,4.103524);
   plot__1063->SetBinContent(19,2.324173);
   plot__1063->SetBinContent(20,1.807885);
   plot__1063->SetBinContent(21,0.7972404);
   plot__1063->SetBinContent(22,0.4182672);
   plot__1063->SetBinContent(23,3.394228);
   plot__1063->SetBinContent(24,0.04510142);
   plot__1063->SetBinError(10,4.200466);
   plot__1063->SetBinError(11,3.79364);
   plot__1063->SetBinError(12,3.822666);
   plot__1063->SetBinError(13,2.87247);
   plot__1063->SetBinError(14,2.070433);
   plot__1063->SetBinError(15,1.308777);
   plot__1063->SetBinError(16,0.9599588);
   plot__1063->SetBinError(17,0.5127038);
   plot__1063->SetBinError(18,0.3337052);
   plot__1063->SetBinError(19,0.2601744);
   plot__1063->SetBinError(20,0.2329114);
   plot__1063->SetBinError(21,0.1126039);
   plot__1063->SetBinError(22,0.06806375);
   plot__1063->SetBinError(23,1.302733);
   plot__1063->SetBinError(24,0.008021144);
   plot__1063->SetEntries(5832);
   plot__1063->SetLineColor(3);
   plot__1063->SetLineWidth(3);
   plot__1063->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1063->GetXaxis()->SetRange(1,23);
   plot__1063->GetXaxis()->SetLabelFont(42);
   plot__1063->GetXaxis()->SetLabelSize(0.035);
   plot__1063->GetXaxis()->SetTitleSize(0.035);
   plot__1063->GetXaxis()->SetTitleFont(42);
   plot__1063->GetYaxis()->SetTitle("Events/0.025");
   plot__1063->GetYaxis()->SetLabelFont(42);
   plot__1063->GetYaxis()->SetLabelSize(0.035);
   plot__1063->GetYaxis()->SetTitleSize(0.035);
   plot__1063->GetYaxis()->SetTitleFont(42);
   plot__1063->GetZaxis()->SetLabelFont(42);
   plot__1063->GetZaxis()->SetLabelSize(0.035);
   plot__1063->GetZaxis()->SetTitleSize(0.035);
   plot__1063->GetZaxis()->SetTitleFont(42);
   plot__1063->Draw("HISTSAME");
   
   Double_t Graph_from_plot_fx1273[24] = {
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
   Double_t Graph_from_plot_fy1273[24] = {
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
   Double_t Graph_from_plot_fex1273[24] = {
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
   Double_t Graph_from_plot_fey1273[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1273,Graph_from_plot_fy1273,Graph_from_plot_fex1273,Graph_from_plot_fey1273);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1273 = new TH1F("Graph_Graph_from_plot1273","",100,0,11);
   Graph_Graph_from_plot1273->SetMinimum(0.0011);
   Graph_Graph_from_plot1273->SetMaximum(1.1);
   Graph_Graph_from_plot1273->SetDirectory(0);
   Graph_Graph_from_plot1273->SetStats(0);
   Graph_Graph_from_plot1273->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1273->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1273->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1273->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1273->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1273->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1273->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1273->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1273->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1273->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1273);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1274[24] = {
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
   Double_t Graph_from_plot_fy1274[24] = {
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
   Double_t Graph_from_plot_fex1274[24] = {
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
   Double_t Graph_from_plot_fey1274[24] = {
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
   gre = new TGraphErrors(24,Graph_from_plot_fx1274,Graph_from_plot_fy1274,Graph_from_plot_fex1274,Graph_from_plot_fey1274);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1274 = new TH1F("Graph_Graph_from_plot1274","",100,0,11);
   Graph_Graph_from_plot1274->SetMinimum(0.1119007);
   Graph_Graph_from_plot1274->SetMaximum(111.9007);
   Graph_Graph_from_plot1274->SetDirectory(0);
   Graph_Graph_from_plot1274->SetStats(0);
   Graph_Graph_from_plot1274->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1274->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1274->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1274->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1274->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1274->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1274->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1274->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1274->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1274->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1274);
   
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
   entry=leg->AddEntry("plot","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
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
   Double_t xAxis1132[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1064 = new TH1D("plot__1064","",24, xAxis1132);
   plot__1064->SetBinContent(10,80);
   plot__1064->SetBinContent(11,89);
   plot__1064->SetBinContent(12,78);
   plot__1064->SetBinContent(13,48);
   plot__1064->SetBinContent(14,28);
   plot__1064->SetBinContent(15,17);
   plot__1064->SetBinContent(16,13);
   plot__1064->SetBinContent(17,8.8);
   plot__1064->SetBinContent(18,2);
   plot__1064->SetBinContent(19,2);
   plot__1064->SetBinContent(20,0.6);
   plot__1064->SetBinContent(21,0.8);
   plot__1064->SetBinContent(22,0.4);
   plot__1064->SetBinContent(23,3.5);
   plot__1064->SetBinContent(24,0.05072464);
   plot__1064->SetBinError(10,8.944272);
   plot__1064->SetBinError(11,9.433981);
   plot__1064->SetBinError(12,8.831761);
   plot__1064->SetBinError(13,6.928203);
   plot__1064->SetBinError(14,5.291503);
   plot__1064->SetBinError(15,2.915476);
   plot__1064->SetBinError(16,2.54951);
   plot__1064->SetBinError(17,3.03);
   plot__1064->SetBinError(18,2);
   plot__1064->SetBinError(19,2);
   plot__1064->SetBinError(23,2.14);
   plot__1064->SetBinError(24,0.01917211);
   plot__1064->SetMinimum(0.11);
   plot__1064->SetMaximum(975.2741);
   plot__1064->SetEntries(494);

   ci = TColor::GetColor("#000099");
   plot__1064->SetLineColor(ci);
   plot__1064->SetLineWidth(2);
   plot__1064->SetMarkerStyle(20);
   plot__1064->SetMarkerSize(1.5);
   plot__1064->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1064->GetXaxis()->SetRange(1,23);
   plot__1064->GetXaxis()->SetLabelFont(42);
   plot__1064->GetXaxis()->SetLabelSize(0.035);
   plot__1064->GetXaxis()->SetTitleSize(0.035);
   plot__1064->GetXaxis()->SetTitleFont(42);
   plot__1064->GetYaxis()->SetTitle("Events");
   plot__1064->GetYaxis()->SetLabelFont(42);
   plot__1064->GetYaxis()->SetLabelSize(0.035);
   plot__1064->GetYaxis()->SetTitleSize(0.035);
   plot__1064->GetYaxis()->SetTitleOffset(1.3);
   plot__1064->GetYaxis()->SetTitleFont(42);
   plot__1064->GetZaxis()->SetLabelFont(42);
   plot__1064->GetZaxis()->SetLabelSize(0.035);
   plot__1064->GetZaxis()->SetTitleSize(0.035);
   plot__1064->GetZaxis()->SetTitleFont(42);
   plot__1064->Draw("PSAME");
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
   Double_t xAxis1133[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1065 = new TH1D("plot__1065","",24, xAxis1133);
   plot__1065->SetBinContent(10,0.8202822);
   plot__1065->SetBinContent(11,1.127462);
   plot__1065->SetBinContent(12,0.9136639);
   plot__1065->SetBinContent(13,0.9704957);
   plot__1065->SetBinContent(14,0.9953493);
   plot__1065->SetBinContent(15,0.7924891);
   plot__1065->SetBinContent(16,1.039091);
   plot__1065->SetBinContent(17,1.043054);
   plot__1065->SetBinContent(18,0.487386);
   plot__1065->SetBinContent(19,0.8605211);
   plot__1065->SetBinContent(20,0.3318795);
   plot__1065->SetBinContent(21,1.003461);
   plot__1065->SetBinContent(22,0.9563264);
   plot__1065->SetBinContent(23,1.031162);
   plot__1065->SetBinContent(24,1.124679);
   plot__1065->SetBinError(10,0.09171034);
   plot__1065->SetBinError(11,0.1195107);
   plot__1065->SetBinError(12,0.1034521);
   plot__1065->SetBinError(13,0.140079);
   plot__1065->SetBinError(14,0.1881033);
   plot__1065->SetBinError(15,0.1359108);
   plot__1065->SetBinError(16,0.2037826);
   plot__1065->SetBinError(17,0.3591425);
   plot__1065->SetBinError(18,0.487386);
   plot__1065->SetBinError(19,0.8605211);
   plot__1065->SetBinError(23,0.6304822);
   plot__1065->SetBinError(24,0.4250888);
   plot__1065->SetMinimum(0);
   plot__1065->SetMaximum(2);
   plot__1065->SetEntries(80.83899);

   ci = TColor::GetColor("#000099");
   plot__1065->SetLineColor(ci);
   plot__1065->SetLineWidth(2);
   plot__1065->SetMarkerStyle(20);
   plot__1065->SetMarkerSize(1.5);
   plot__1065->GetXaxis()->SetRange(1,23);
   plot__1065->GetXaxis()->SetLabelFont(42);
   plot__1065->GetXaxis()->SetLabelSize(0.12);
   plot__1065->GetXaxis()->SetTitleSize(0.035);
   plot__1065->GetXaxis()->SetTitleFont(42);
   plot__1065->GetYaxis()->SetTitle("Data/MC");
   plot__1065->GetYaxis()->SetNdivisions(505);
   plot__1065->GetYaxis()->SetLabelFont(42);
   plot__1065->GetYaxis()->SetLabelSize(0.11);
   plot__1065->GetYaxis()->SetTitleSize(0.1);
   plot__1065->GetYaxis()->SetTitleOffset(0.5);
   plot__1065->GetYaxis()->SetTitleFont(42);
   plot__1065->GetZaxis()->SetLabelFont(42);
   plot__1065->GetZaxis()->SetLabelSize(0.035);
   plot__1065->GetZaxis()->SetTitleSize(0.035);
   plot__1065->GetZaxis()->SetTitleFont(42);
   plot__1065->Draw("p");
   
   Double_t Graph_from_plot_fx1275[24] = {
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
   Double_t Graph_from_plot_fy1275[24] = {
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
   Double_t Graph_from_plot_fex1275[24] = {
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
   Double_t Graph_from_plot_fey1275[24] = {
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
   gre = new TGraphErrors(24,Graph_from_plot_fx1275,Graph_from_plot_fy1275,Graph_from_plot_fex1275,Graph_from_plot_fey1275);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1275 = new TH1F("Graph_Graph_from_plot1275","",100,0,11);
   Graph_Graph_from_plot1275->SetMinimum(0.5394299);
   Graph_Graph_from_plot1275->SetMaximum(1.46057);
   Graph_Graph_from_plot1275->SetDirectory(0);
   Graph_Graph_from_plot1275->SetStats(0);
   Graph_Graph_from_plot1275->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1275->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1275->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1275->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1275->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1275->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1275->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1275->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1275->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1275->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1275);
   
   gre->Draw("2");
   Double_t xAxis1134[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1066 = new TH1D("plot__1066","",24, xAxis1134);
   plot__1066->SetBinContent(10,0.8202822);
   plot__1066->SetBinContent(11,1.127462);
   plot__1066->SetBinContent(12,0.9136639);
   plot__1066->SetBinContent(13,0.9704957);
   plot__1066->SetBinContent(14,0.9953493);
   plot__1066->SetBinContent(15,0.7924891);
   plot__1066->SetBinContent(16,1.039091);
   plot__1066->SetBinContent(17,1.043054);
   plot__1066->SetBinContent(18,0.487386);
   plot__1066->SetBinContent(19,0.8605211);
   plot__1066->SetBinContent(20,0.3318795);
   plot__1066->SetBinContent(21,1.003461);
   plot__1066->SetBinContent(22,0.9563264);
   plot__1066->SetBinContent(23,1.031162);
   plot__1066->SetBinContent(24,1.124679);
   plot__1066->SetBinError(10,0.09171034);
   plot__1066->SetBinError(11,0.1195107);
   plot__1066->SetBinError(12,0.1034521);
   plot__1066->SetBinError(13,0.140079);
   plot__1066->SetBinError(14,0.1881033);
   plot__1066->SetBinError(15,0.1359108);
   plot__1066->SetBinError(16,0.2037826);
   plot__1066->SetBinError(17,0.3591425);
   plot__1066->SetBinError(18,0.487386);
   plot__1066->SetBinError(19,0.8605211);
   plot__1066->SetBinError(23,0.6304822);
   plot__1066->SetBinError(24,0.4250888);
   plot__1066->SetMinimum(0);
   plot__1066->SetMaximum(2);
   plot__1066->SetEntries(80.83899);

   ci = TColor::GetColor("#000099");
   plot__1066->SetLineColor(ci);
   plot__1066->SetLineWidth(2);
   plot__1066->SetMarkerStyle(20);
   plot__1066->SetMarkerSize(1.5);
   plot__1066->GetXaxis()->SetRange(1,23);
   plot__1066->GetXaxis()->SetLabelFont(42);
   plot__1066->GetXaxis()->SetLabelSize(0.12);
   plot__1066->GetXaxis()->SetTitleSize(0.035);
   plot__1066->GetXaxis()->SetTitleFont(42);
   plot__1066->GetYaxis()->SetTitle("Data/MC");
   plot__1066->GetYaxis()->SetNdivisions(505);
   plot__1066->GetYaxis()->SetLabelFont(42);
   plot__1066->GetYaxis()->SetLabelSize(0.11);
   plot__1066->GetYaxis()->SetTitleSize(0.1);
   plot__1066->GetYaxis()->SetTitleOffset(0.5);
   plot__1066->GetYaxis()->SetTitleFont(42);
   plot__1066->GetZaxis()->SetLabelFont(42);
   plot__1066->GetZaxis()->SetLabelSize(0.035);
   plot__1066->GetZaxis()->SetTitleSize(0.035);
   plot__1066->GetZaxis()->SetTitleFont(42);
   plot__1066->Draw("PSAME");
   d->Modified();
   canvasbtag_two_200_275/AlphaT_2->cd();
   canvasbtag_two_200_275/AlphaT_2->Modified();
   canvasbtag_two_200_275/AlphaT_2->cd();
   canvasbtag_two_200_275/AlphaT_2->SetSelected(canvasbtag_two_200_275/AlphaT_2);
}
