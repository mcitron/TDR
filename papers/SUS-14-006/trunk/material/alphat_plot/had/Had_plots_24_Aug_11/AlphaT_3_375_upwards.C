void AlphaT_3_375_upwards()
{
//=========Macro generated from canvas: canvas375_475/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:53:50 2016) by ROOT version6.06/06
   TCanvas *canvas375_475/AlphaT_3 = new TCanvas("canvas375_475/AlphaT_3", "cannameAlphaT_3",0,0,1200,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas375_475/AlphaT_3->SetHighLightColor(2);
   canvas375_475/AlphaT_3->Range(0,0,1,1);
   canvas375_475/AlphaT_3->SetFillColor(0);
   canvas375_475/AlphaT_3->SetBorderMode(0);
   canvas375_475/AlphaT_3->SetBorderSize(2);
   canvas375_475/AlphaT_3->SetTickx(1);
   canvas375_475/AlphaT_3->SetTicky(1);
   canvas375_475/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.564057,3.4875,4.490441);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis166[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__156 = new TH1D("plot__156","",24, xAxis166);
   plot__156->SetBinContent(10,658);
   plot__156->SetBinContent(11,244);
   plot__156->SetBinContent(12,114);
   plot__156->SetBinContent(13,57);
   plot__156->SetBinContent(14,30);
   plot__156->SetBinContent(15,17.5);
   plot__156->SetBinContent(16,5.5);
   plot__156->SetBinContent(17,3.6);
   plot__156->SetBinContent(18,0.6);
   plot__156->SetBinContent(19,0.8);
   plot__156->SetBinContent(20,0.2);
   plot__156->SetBinError(10,25.65151);
   plot__156->SetBinError(11,15.6205);
   plot__156->SetBinError(12,10.67708);
   plot__156->SetBinError(13,7.549834);
   plot__156->SetBinError(14,5.477226);
   plot__156->SetBinError(15,2.95804);
   plot__156->SetBinError(16,2.49);
   plot__156->SetBinError(17,2.14);
   plot__156->SetMinimum(0.11);
   plot__156->SetMaximum(7673.458);
   plot__156->SetEntries(1200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__156->SetLineColor(ci);
   plot__156->SetLineWidth(2);
   plot__156->SetMarkerStyle(20);
   plot__156->SetMarkerSize(1.5);
   plot__156->GetXaxis()->SetTitle("#alpha_{T}");
   plot__156->GetXaxis()->SetRange(1,23);
   plot__156->GetXaxis()->SetLabelFont(42);
   plot__156->GetXaxis()->SetLabelSize(0.035);
   plot__156->GetXaxis()->SetTitleSize(0.035);
   plot__156->GetXaxis()->SetTitleFont(42);
   plot__156->GetYaxis()->SetTitle("Events");
   plot__156->GetYaxis()->SetLabelFont(42);
   plot__156->GetYaxis()->SetLabelSize(0.035);
   plot__156->GetYaxis()->SetTitleSize(0.035);
   plot__156->GetYaxis()->SetTitleOffset(1.3);
   plot__156->GetYaxis()->SetTitleFont(42);
   plot__156->GetZaxis()->SetLabelFont(42);
   plot__156->GetZaxis()->SetLabelSize(0.035);
   plot__156->GetZaxis()->SetTitleSize(0.035);
   plot__156->GetZaxis()->SetTitleFont(42);
   plot__156->Draw("PE0");
   Double_t xAxis167[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__157 = new TH1D("plot__157","",24, xAxis167);
   plot__157->SetBinContent(10,186.2021);
   plot__157->SetBinContent(11,57.67718);
   plot__157->SetBinContent(12,27.5928);
   plot__157->SetBinContent(13,12.50719);
   plot__157->SetBinContent(14,7.438001);
   plot__157->SetBinContent(15,4.197848);
   plot__157->SetBinContent(16,2.023727);
   plot__157->SetBinContent(17,0.9714371);
   plot__157->SetBinContent(18,0.2562656);
   plot__157->SetBinContent(19,0.02456751);
   plot__157->SetBinContent(20,0.0691242);
   plot__157->SetBinError(10,4.877562);
   plot__157->SetBinError(11,2.731111);
   plot__157->SetBinError(12,1.878064);
   plot__157->SetBinError(13,1.227199);
   plot__157->SetBinError(14,0.9818706);
   plot__157->SetBinError(15,0.5145428);
   plot__157->SetBinError(16,0.3559127);
   plot__157->SetBinError(17,0.1579119);
   plot__157->SetBinError(18,0.08710858);
   plot__157->SetBinError(19,0.02456751);
   plot__157->SetBinError(20,0.04285195);
   plot__157->SetEntries(2813);
   plot__157->SetLineColor(4);
   plot__157->SetLineWidth(3);
   plot__157->GetXaxis()->SetTitle("#alpha_{T}");
   plot__157->GetXaxis()->SetRange(1,23);
   plot__157->GetXaxis()->SetLabelFont(42);
   plot__157->GetXaxis()->SetLabelSize(0.035);
   plot__157->GetXaxis()->SetTitleSize(0.035);
   plot__157->GetXaxis()->SetTitleFont(42);
   plot__157->GetYaxis()->SetTitle("Events/0.025");
   plot__157->GetYaxis()->SetLabelFont(42);
   plot__157->GetYaxis()->SetLabelSize(0.035);
   plot__157->GetYaxis()->SetTitleSize(0.035);
   plot__157->GetYaxis()->SetTitleFont(42);
   plot__157->GetZaxis()->SetLabelFont(42);
   plot__157->GetZaxis()->SetLabelSize(0.035);
   plot__157->GetZaxis()->SetTitleSize(0.035);
   plot__157->GetZaxis()->SetTitleFont(42);
   plot__157->Draw("HISTSAME");
   Double_t xAxis168[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__158 = new TH1D("plot__158","",24, xAxis168);
   plot__158->SetBinContent(10,285.7131);
   plot__158->SetBinContent(11,86.73479);
   plot__158->SetBinContent(12,33.46933);
   plot__158->SetBinContent(13,13.12387);
   plot__158->SetBinContent(14,6.94681);
   plot__158->SetBinContent(15,2.456825);
   plot__158->SetBinContent(16,1.090458);
   plot__158->SetBinContent(17,0.8549522);
   plot__158->SetBinContent(18,0.2682641);
   plot__158->SetBinContent(19,0.1397479);
   plot__158->SetBinError(10,7.902097);
   plot__158->SetBinError(11,4.382594);
   plot__158->SetBinError(12,2.678418);
   plot__158->SetBinError(13,1.727506);
   plot__158->SetBinError(14,1.229786);
   plot__158->SetBinError(15,0.5131908);
   plot__158->SetBinError(16,0.340122);
   plot__158->SetBinError(17,0.200271);
   plot__158->SetBinError(18,0.1147407);
   plot__158->SetBinError(19,0.08093155);
   plot__158->SetEntries(2248);
   plot__158->SetLineColor(2);
   plot__158->SetLineWidth(3);
   plot__158->GetXaxis()->SetTitle("#alpha_{T}");
   plot__158->GetXaxis()->SetRange(1,23);
   plot__158->GetXaxis()->SetLabelFont(42);
   plot__158->GetXaxis()->SetLabelSize(0.035);
   plot__158->GetXaxis()->SetTitleSize(0.035);
   plot__158->GetXaxis()->SetTitleFont(42);
   plot__158->GetYaxis()->SetTitle("Events/0.025");
   plot__158->GetYaxis()->SetLabelFont(42);
   plot__158->GetYaxis()->SetLabelSize(0.035);
   plot__158->GetYaxis()->SetTitleSize(0.035);
   plot__158->GetYaxis()->SetTitleFont(42);
   plot__158->GetZaxis()->SetLabelFont(42);
   plot__158->GetZaxis()->SetLabelSize(0.035);
   plot__158->GetZaxis()->SetTitleSize(0.035);
   plot__158->GetZaxis()->SetTitleFont(42);
   plot__158->Draw("HISTSAME");
   Double_t xAxis169[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__159 = new TH1D("plot__159","",24, xAxis169);
   plot__159->SetBinContent(10,270.338);
   plot__159->SetBinContent(11,106.093);
   plot__159->SetBinContent(12,51.30711);
   plot__159->SetBinContent(13,29.2891);
   plot__159->SetBinContent(14,17.23115);
   plot__159->SetBinContent(15,9.038213);
   plot__159->SetBinContent(16,4.231737);
   plot__159->SetBinContent(17,2.091971);
   plot__159->SetBinContent(18,0.6655129);
   plot__159->SetBinContent(19,0.2463664);
   plot__159->SetBinContent(20,0.1082638);
   plot__159->SetBinContent(21,0.03645284);
   plot__159->SetBinContent(22,0.03647225);
   plot__159->SetBinContent(23,0.01385033);
   plot__159->SetBinError(10,3.045776);
   plot__159->SetBinError(11,1.914409);
   plot__159->SetBinError(12,1.356321);
   plot__159->SetBinError(13,0.978803);
   plot__159->SetBinError(14,0.7527237);
   plot__159->SetBinError(15,0.3928387);
   plot__159->SetBinError(16,0.2639959);
   plot__159->SetBinError(17,0.1253277);
   plot__159->SetBinError(18,0.06320727);
   plot__159->SetBinError(19,0.03834509);
   plot__159->SetBinError(20,0.0273374);
   plot__159->SetBinError(21,0.009181429);
   plot__159->SetBinError(22,0.01527186);
   plot__159->SetBinError(23,0.08321758);
   plot__159->SetEntries(21238);
   plot__159->SetLineColor(5);
   plot__159->SetLineWidth(3);
   plot__159->GetXaxis()->SetTitle("#alpha_{T}");
   plot__159->GetXaxis()->SetRange(1,23);
   plot__159->GetXaxis()->SetLabelFont(42);
   plot__159->GetXaxis()->SetLabelSize(0.035);
   plot__159->GetXaxis()->SetTitleSize(0.035);
   plot__159->GetXaxis()->SetTitleFont(42);
   plot__159->GetYaxis()->SetTitle("Events/0.025");
   plot__159->GetYaxis()->SetLabelFont(42);
   plot__159->GetYaxis()->SetLabelSize(0.035);
   plot__159->GetYaxis()->SetTitleSize(0.035);
   plot__159->GetYaxis()->SetTitleFont(42);
   plot__159->GetZaxis()->SetLabelFont(42);
   plot__159->GetZaxis()->SetLabelSize(0.035);
   plot__159->GetZaxis()->SetTitleSize(0.035);
   plot__159->GetZaxis()->SetTitleFont(42);
   plot__159->Draw("HISTSAME");
   Double_t xAxis170[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__160 = new TH1D("plot__160","",24, xAxis170);
   plot__160->SetBinContent(10,1.190627);
   plot__160->SetBinContent(11,0.281399);
   plot__160->SetBinContent(12,0.04721664);
   plot__160->SetBinContent(13,0.02191586);
   plot__160->SetBinContent(14,0.03281616);
   plot__160->SetBinContent(15,0.02519106);
   plot__160->SetBinContent(19,0.003522126);
   plot__160->SetBinError(10,0.1964732);
   plot__160->SetBinError(11,0.07906873);
   plot__160->SetBinError(12,0.03341428);
   plot__160->SetBinError(13,0.02191586);
   plot__160->SetBinError(14,0.02795898);
   plot__160->SetBinError(15,0.01785529);
   plot__160->SetBinError(19,0.003522126);
   plot__160->SetEntries(96);
   plot__160->SetLineColor(6);
   plot__160->SetLineWidth(3);
   plot__160->GetXaxis()->SetTitle("#alpha_{T}");
   plot__160->GetXaxis()->SetRange(1,23);
   plot__160->GetXaxis()->SetLabelFont(42);
   plot__160->GetXaxis()->SetLabelSize(0.035);
   plot__160->GetXaxis()->SetTitleSize(0.035);
   plot__160->GetXaxis()->SetTitleFont(42);
   plot__160->GetYaxis()->SetTitle("Events/0.025");
   plot__160->GetYaxis()->SetLabelFont(42);
   plot__160->GetYaxis()->SetLabelSize(0.035);
   plot__160->GetYaxis()->SetTitleSize(0.035);
   plot__160->GetYaxis()->SetTitleFont(42);
   plot__160->GetZaxis()->SetLabelFont(42);
   plot__160->GetZaxis()->SetLabelSize(0.035);
   plot__160->GetZaxis()->SetTitleSize(0.035);
   plot__160->GetZaxis()->SetTitleFont(42);
   plot__160->Draw("HISTSAME");
   Double_t xAxis171[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__161 = new TH1D("plot__161","",24, xAxis171);
   plot__161->SetBinContent(10,6.253783);
   plot__161->SetBinContent(11,2.966938);
   plot__161->SetBinContent(12,1.249068);
   plot__161->SetBinContent(13,0.695571);
   plot__161->SetBinContent(14,0.5037664);
   plot__161->SetBinContent(15,0.535273);
   plot__161->SetBinContent(16,0.1595321);
   plot__161->SetBinContent(17,0.04917001);
   plot__161->SetBinContent(18,0.01575297);
   plot__161->SetBinContent(19,0.01618716);
   plot__161->SetBinContent(20,0.007127019);
   plot__161->SetBinError(10,0.6171959);
   plot__161->SetBinError(11,0.4314406);
   plot__161->SetBinError(12,0.2728721);
   plot__161->SetBinError(13,0.1873052);
   plot__161->SetBinError(14,0.1878353);
   plot__161->SetBinError(15,0.1369593);
   plot__161->SetBinError(16,0.04434884);
   plot__161->SetBinError(17,0.01621466);
   plot__161->SetBinError(18,0.009889281);
   plot__161->SetBinError(19,0.009349536);
   plot__161->SetBinError(20,0.007127019);
   plot__161->SetEntries(495);
   plot__161->SetLineColor(44);
   plot__161->SetLineWidth(3);
   plot__161->GetXaxis()->SetTitle("#alpha_{T}");
   plot__161->GetXaxis()->SetRange(1,23);
   plot__161->GetXaxis()->SetLabelFont(42);
   plot__161->GetXaxis()->SetLabelSize(0.035);
   plot__161->GetXaxis()->SetTitleSize(0.035);
   plot__161->GetXaxis()->SetTitleFont(42);
   plot__161->GetYaxis()->SetTitle("Events/0.025");
   plot__161->GetYaxis()->SetLabelFont(42);
   plot__161->GetYaxis()->SetLabelSize(0.035);
   plot__161->GetYaxis()->SetTitleSize(0.035);
   plot__161->GetYaxis()->SetTitleFont(42);
   plot__161->GetZaxis()->SetLabelFont(42);
   plot__161->GetZaxis()->SetLabelSize(0.035);
   plot__161->GetZaxis()->SetTitleSize(0.035);
   plot__161->GetZaxis()->SetTitleFont(42);
   plot__161->Draw("HISTSAME");
   Double_t xAxis172[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__162 = new TH1D("plot__162","",24, xAxis172);
   plot__162->SetBinContent(11,7.30815);
   plot__162->SetBinError(11,7.30815);
   plot__162->SetEntries(26);
   plot__162->SetLineColor(7);
   plot__162->SetLineStyle(10);
   plot__162->SetLineWidth(3);
   plot__162->GetXaxis()->SetTitle("#alpha_{T}");
   plot__162->GetXaxis()->SetRange(1,23);
   plot__162->GetXaxis()->SetLabelFont(42);
   plot__162->GetXaxis()->SetLabelSize(0.035);
   plot__162->GetXaxis()->SetTitleSize(0.035);
   plot__162->GetXaxis()->SetTitleFont(42);
   plot__162->GetYaxis()->SetTitle("Events/0.025");
   plot__162->GetYaxis()->SetLabelFont(42);
   plot__162->GetYaxis()->SetLabelSize(0.035);
   plot__162->GetYaxis()->SetTitleSize(0.035);
   plot__162->GetYaxis()->SetTitleFont(42);
   plot__162->GetZaxis()->SetLabelFont(42);
   plot__162->GetZaxis()->SetLabelSize(0.035);
   plot__162->GetZaxis()->SetTitleSize(0.035);
   plot__162->GetZaxis()->SetTitleFont(42);
   plot__162->Draw("HISTSAME");
   Double_t xAxis173[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__163 = new TH1D("plot__163","",24, xAxis173);
   plot__163->SetBinContent(10,17.64808);
   plot__163->SetBinContent(11,5.918575);
   plot__163->SetBinContent(12,1.826917);
   plot__163->SetBinContent(13,0.5842133);
   plot__163->SetBinContent(14,0.3195099);
   plot__163->SetBinContent(15,0.2298168);
   plot__163->SetBinError(10,3.003868);
   plot__163->SetBinError(11,1.796202);
   plot__163->SetBinError(12,0.8479571);
   plot__163->SetBinError(13,0.5842133);
   plot__163->SetBinError(14,0.3195099);
   plot__163->SetBinError(15,0.2298168);
   plot__163->SetEntries(85);
   plot__163->SetLineColor(40);
   plot__163->SetLineWidth(3);
   plot__163->GetXaxis()->SetTitle("#alpha_{T}");
   plot__163->GetXaxis()->SetRange(1,23);
   plot__163->GetXaxis()->SetLabelFont(42);
   plot__163->GetXaxis()->SetLabelSize(0.035);
   plot__163->GetXaxis()->SetTitleSize(0.035);
   plot__163->GetXaxis()->SetTitleFont(42);
   plot__163->GetYaxis()->SetTitle("Events/0.025");
   plot__163->GetYaxis()->SetLabelFont(42);
   plot__163->GetYaxis()->SetLabelSize(0.035);
   plot__163->GetYaxis()->SetTitleSize(0.035);
   plot__163->GetYaxis()->SetTitleFont(42);
   plot__163->GetZaxis()->SetLabelFont(42);
   plot__163->GetZaxis()->SetLabelSize(0.035);
   plot__163->GetZaxis()->SetTitleSize(0.035);
   plot__163->GetZaxis()->SetTitleFont(42);
   plot__163->Draw("HISTSAME");
   Double_t xAxis174[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__164 = new TH1D("plot__164","",24, xAxis174);
   plot__164->SetBinContent(10,767.3458);
   plot__164->SetBinContent(11,266.98);
   plot__164->SetBinContent(12,115.4925);
   plot__164->SetBinContent(13,56.22186);
   plot__164->SetBinContent(14,32.47205);
   plot__164->SetBinContent(15,16.48317);
   plot__164->SetBinContent(16,7.505454);
   plot__164->SetBinContent(17,3.96753);
   plot__164->SetBinContent(18,1.205796);
   plot__164->SetBinContent(19,0.4303911);
   plot__164->SetBinContent(20,0.184515);
   plot__164->SetBinContent(21,0.03645284);
   plot__164->SetBinContent(22,0.03647225);
   plot__164->SetBinContent(23,0.01385033);
   plot__164->SetBinError(10,10.24467);
   plot__164->SetBinError(11,9.335891);
   plot__164->SetBinError(12,3.651748);
   plot__164->SetBinError(13,2.413549);
   plot__164->SetBinError(14,1.783588);
   plot__164->SetBinError(15,0.8685239);
   plot__164->SetBinError(16,0.5603726);
   plot__164->SetBinError(17,0.2846306);
   plot__164->SetBinError(18,0.157627);
   plot__164->SetBinError(19,0.09340044);
   plot__164->SetBinError(20,0.05132657);
   plot__164->SetBinError(21,0.009181429);
   plot__164->SetBinError(22,0.01527186);
   plot__164->SetBinError(23,0.08321758);
   plot__164->SetEntries(27001);
   plot__164->SetLineColor(3);
   plot__164->SetLineWidth(3);
   plot__164->GetXaxis()->SetTitle("#alpha_{T}");
   plot__164->GetXaxis()->SetRange(1,23);
   plot__164->GetXaxis()->SetLabelFont(42);
   plot__164->GetXaxis()->SetLabelSize(0.035);
   plot__164->GetXaxis()->SetTitleSize(0.035);
   plot__164->GetXaxis()->SetTitleFont(42);
   plot__164->GetYaxis()->SetTitle("Events/0.025");
   plot__164->GetYaxis()->SetLabelFont(42);
   plot__164->GetYaxis()->SetLabelSize(0.035);
   plot__164->GetYaxis()->SetTitleSize(0.035);
   plot__164->GetYaxis()->SetTitleFont(42);
   plot__164->GetZaxis()->SetLabelFont(42);
   plot__164->GetZaxis()->SetLabelSize(0.035);
   plot__164->GetZaxis()->SetTitleSize(0.035);
   plot__164->GetZaxis()->SetTitleFont(42);
   plot__164->Draw("HISTSAME");
   
   Double_t Graph_from_plot_fx1041[24] = {
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
   Double_t Graph_from_plot_fy1041[24] = {
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
   7.30815,
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
   Double_t Graph_from_plot_fex1041[24] = {
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
   Double_t Graph_from_plot_fey1041[24] = {
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
   7.30815,
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
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1041,Graph_from_plot_fy1041,Graph_from_plot_fex1041,Graph_from_plot_fey1041);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1041 = new TH1F("Graph_Graph_from_plot1041","",100,0,11);
   Graph_Graph_from_plot1041->SetMinimum(0.01607793);
   Graph_Graph_from_plot1041->SetMaximum(16.07793);
   Graph_Graph_from_plot1041->SetDirectory(0);
   Graph_Graph_from_plot1041->SetStats(0);
   Graph_Graph_from_plot1041->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1041->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1041->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1041->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1041->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1041->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1041->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1041->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1041->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1041->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1041);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1042[24] = {
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
   Double_t Graph_from_plot_fy1042[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   767.3458,
   266.98,
   115.4925,
   56.22186,
   32.47205,
   16.48317,
   7.505454,
   3.96753,
   1.205796,
   0.4303911,
   0.184515,
   0.03645284,
   0.03647225,
   0.01385033,
   0};
   Double_t Graph_from_plot_fex1042[24] = {
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
   Double_t Graph_from_plot_fey1042[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   10.24467,
   9.335891,
   3.651748,
   2.413549,
   1.783588,
   0.8685239,
   0.5603726,
   0.2846306,
   0.157627,
   0.09340044,
   0.05132657,
   0.009181429,
   0.01527186,
   0.08321758,
   0};
   gre = new TGraphErrors(24,Graph_from_plot_fx1042,Graph_from_plot_fy1042,Graph_from_plot_fex1042,Graph_from_plot_fey1042);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1042 = new TH1F("Graph_Graph_from_plot1042","",100,0,11);
   Graph_Graph_from_plot1042->SetMinimum(0.8553495);
   Graph_Graph_from_plot1042->SetMaximum(855.3495);
   Graph_Graph_from_plot1042->SetDirectory(0);
   Graph_Graph_from_plot1042->SetStats(0);
   Graph_Graph_from_plot1042->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1042->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1042->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1042->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1042->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1042->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1042->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1042->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1042->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1042->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1042);
   
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
   entry=leg->AddEntry("AlphaT_3","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
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
   TLatex *   tex = new TLatex(0.1,0.95,"375_    Jet Multiplicity>3");
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
   Double_t xAxis175[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__165 = new TH1D("plot__165","",24, xAxis175);
   plot__165->SetBinContent(10,658);
   plot__165->SetBinContent(11,244);
   plot__165->SetBinContent(12,114);
   plot__165->SetBinContent(13,57);
   plot__165->SetBinContent(14,30);
   plot__165->SetBinContent(15,17.5);
   plot__165->SetBinContent(16,5.5);
   plot__165->SetBinContent(17,3.6);
   plot__165->SetBinContent(18,0.6);
   plot__165->SetBinContent(19,0.8);
   plot__165->SetBinContent(20,0.2);
   plot__165->SetBinError(10,25.65151);
   plot__165->SetBinError(11,15.6205);
   plot__165->SetBinError(12,10.67708);
   plot__165->SetBinError(13,7.549834);
   plot__165->SetBinError(14,5.477226);
   plot__165->SetBinError(15,2.95804);
   plot__165->SetBinError(16,2.49);
   plot__165->SetBinError(17,2.14);
   plot__165->SetMinimum(0.11);
   plot__165->SetMaximum(7673.458);
   plot__165->SetEntries(1200);

   ci = TColor::GetColor("#000099");
   plot__165->SetLineColor(ci);
   plot__165->SetLineWidth(2);
   plot__165->SetMarkerStyle(20);
   plot__165->SetMarkerSize(1.5);
   plot__165->GetXaxis()->SetTitle("#alpha_{T}");
   plot__165->GetXaxis()->SetRange(1,23);
   plot__165->GetXaxis()->SetLabelFont(42);
   plot__165->GetXaxis()->SetLabelSize(0.035);
   plot__165->GetXaxis()->SetTitleSize(0.035);
   plot__165->GetXaxis()->SetTitleFont(42);
   plot__165->GetYaxis()->SetTitle("Events");
   plot__165->GetYaxis()->SetLabelFont(42);
   plot__165->GetYaxis()->SetLabelSize(0.035);
   plot__165->GetYaxis()->SetTitleSize(0.035);
   plot__165->GetYaxis()->SetTitleOffset(1.3);
   plot__165->GetYaxis()->SetTitleFont(42);
   plot__165->GetZaxis()->SetLabelFont(42);
   plot__165->GetZaxis()->SetLabelSize(0.035);
   plot__165->GetZaxis()->SetTitleSize(0.035);
   plot__165->GetZaxis()->SetTitleFont(42);
   plot__165->Draw("PSAME");
   u->Modified();
   canvas375_475/AlphaT_3->cd();
  
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
   Double_t xAxis176[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__166 = new TH1D("plot__166","",24, xAxis176);
   plot__166->SetBinContent(10,0.8575013);
   plot__166->SetBinContent(11,0.9139261);
   plot__166->SetBinContent(12,0.9870775);
   plot__166->SetBinContent(13,1.013841);
   plot__166->SetBinContent(14,0.9238715);
   plot__166->SetBinContent(15,1.061689);
   plot__166->SetBinContent(16,0.7328004);
   plot__166->SetBinContent(17,0.9073655);
   plot__166->SetBinContent(18,0.4975968);
   plot__166->SetBinContent(19,1.858774);
   plot__166->SetBinContent(20,1.083923);
   plot__166->SetBinError(10,0.03342888);
   plot__166->SetBinError(11,0.05850812);
   plot__166->SetBinError(12,0.09244828);
   plot__166->SetBinError(13,0.1342865);
   plot__166->SetBinError(14,0.1686751);
   plot__166->SetBinError(15,0.1794582);
   plot__166->SetBinError(16,0.3317587);
   plot__166->SetBinError(17,0.5393784);
   plot__166->SetMinimum(0);
   plot__166->SetMaximum(2);
   plot__166->SetEntries(153.0392);

   ci = TColor::GetColor("#000099");
   plot__166->SetLineColor(ci);
   plot__166->SetLineWidth(2);
   plot__166->SetMarkerStyle(20);
   plot__166->SetMarkerSize(1.5);
   plot__166->GetXaxis()->SetRange(1,23);
   plot__166->GetXaxis()->SetLabelFont(42);
   plot__166->GetXaxis()->SetLabelSize(0.12);
   plot__166->GetXaxis()->SetTitleSize(0.035);
   plot__166->GetXaxis()->SetTitleFont(42);
   plot__166->GetYaxis()->SetTitle("Data/MC");
   plot__166->GetYaxis()->SetNdivisions(505);
   plot__166->GetYaxis()->SetLabelFont(42);
   plot__166->GetYaxis()->SetLabelSize(0.11);
   plot__166->GetYaxis()->SetTitleSize(0.1);
   plot__166->GetYaxis()->SetTitleOffset(0.5);
   plot__166->GetYaxis()->SetTitleFont(42);
   plot__166->GetZaxis()->SetLabelFont(42);
   plot__166->GetZaxis()->SetLabelSize(0.035);
   plot__166->GetZaxis()->SetTitleSize(0.035);
   plot__166->GetZaxis()->SetTitleFont(42);
   plot__166->Draw("p");
   
   Double_t Graph_from_plot_fx1043[24] = {
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
   Double_t Graph_from_plot_fy1043[24] = {
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
   Double_t Graph_from_plot_fex1043[24] = {
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
   Double_t Graph_from_plot_fey1043[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01335079,
   0.0349685,
   0.03161893,
   0.04292902,
   0.05492687,
   0.05269157,
   0.07466204,
   0.07173999,
   0.1307245,
   0.2170129,
   0.2781702,
   0.2518714,
   0.4187255,
   6.008346,
   0};
   gre = new TGraphErrors(24,Graph_from_plot_fx1043,Graph_from_plot_fy1043,Graph_from_plot_fex1043,Graph_from_plot_fey1043);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1043 = new TH1F("Graph_Graph_from_plot1043","",100,0,11);
   Graph_Graph_from_plot1043->SetMinimum(-6.210015);
   Graph_Graph_from_plot1043->SetMaximum(8.210015);
   Graph_Graph_from_plot1043->SetDirectory(0);
   Graph_Graph_from_plot1043->SetStats(0);
   Graph_Graph_from_plot1043->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1043->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1043->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1043->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1043->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1043->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1043->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1043->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1043->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1043->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1043);
   
   gre->Draw("2");
   Double_t xAxis177[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__167 = new TH1D("plot__167","",24, xAxis177);
   plot__167->SetBinContent(10,0.8575013);
   plot__167->SetBinContent(11,0.9139261);
   plot__167->SetBinContent(12,0.9870775);
   plot__167->SetBinContent(13,1.013841);
   plot__167->SetBinContent(14,0.9238715);
   plot__167->SetBinContent(15,1.061689);
   plot__167->SetBinContent(16,0.7328004);
   plot__167->SetBinContent(17,0.9073655);
   plot__167->SetBinContent(18,0.4975968);
   plot__167->SetBinContent(19,1.858774);
   plot__167->SetBinContent(20,1.083923);
   plot__167->SetBinError(10,0.03342888);
   plot__167->SetBinError(11,0.05850812);
   plot__167->SetBinError(12,0.09244828);
   plot__167->SetBinError(13,0.1342865);
   plot__167->SetBinError(14,0.1686751);
   plot__167->SetBinError(15,0.1794582);
   plot__167->SetBinError(16,0.3317587);
   plot__167->SetBinError(17,0.5393784);
   plot__167->SetMinimum(0);
   plot__167->SetMaximum(2);
   plot__167->SetEntries(153.0392);

   ci = TColor::GetColor("#000099");
   plot__167->SetLineColor(ci);
   plot__167->SetLineWidth(2);
   plot__167->SetMarkerStyle(20);
   plot__167->SetMarkerSize(1.5);
   plot__167->GetXaxis()->SetRange(1,23);
   plot__167->GetXaxis()->SetLabelFont(42);
   plot__167->GetXaxis()->SetLabelSize(0.12);
   plot__167->GetXaxis()->SetTitleSize(0.035);
   plot__167->GetXaxis()->SetTitleFont(42);
   plot__167->GetYaxis()->SetTitle("Data/MC");
   plot__167->GetYaxis()->SetNdivisions(505);
   plot__167->GetYaxis()->SetLabelFont(42);
   plot__167->GetYaxis()->SetLabelSize(0.11);
   plot__167->GetYaxis()->SetTitleSize(0.1);
   plot__167->GetYaxis()->SetTitleOffset(0.5);
   plot__167->GetYaxis()->SetTitleFont(42);
   plot__167->GetZaxis()->SetLabelFont(42);
   plot__167->GetZaxis()->SetLabelSize(0.035);
   plot__167->GetZaxis()->SetTitleSize(0.035);
   plot__167->GetZaxis()->SetTitleFont(42);
   plot__167->Draw("PSAME");
   d->Modified();
   canvas375_475/AlphaT_3->cd();
   canvas375_475/AlphaT_3->Modified();
   canvas375_475/AlphaT_3->cd();
   canvas375_475/AlphaT_3->SetSelected(canvas375_475/AlphaT_3);
}
