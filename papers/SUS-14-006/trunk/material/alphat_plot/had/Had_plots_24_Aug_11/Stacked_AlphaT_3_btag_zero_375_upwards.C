void Stacked_AlphaT_3_btag_zero_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_zero_375_475/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:17 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_zero_375_475/AlphaT_3 = new TCanvas("canvasbtag_zero_375_475/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_zero_375_475/AlphaT_3->SetHighLightColor(2);
   canvasbtag_zero_375_475/AlphaT_3->Range(0,0,1,1);
   canvasbtag_zero_375_475/AlphaT_3->SetFillColor(0);
   canvasbtag_zero_375_475/AlphaT_3->SetBorderMode(0);
   canvasbtag_zero_375_475/AlphaT_3->SetBorderSize(2);
   canvasbtag_zero_375_475/AlphaT_3->SetTickx(1);
   canvasbtag_zero_375_475/AlphaT_3->SetTicky(1);
   canvasbtag_zero_375_475/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.535877,3.4875,4.236816);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1366[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1284 = new TH1D("plot__1284","",24, xAxis1366);
   plot__1284->SetBinContent(10,389);
   plot__1284->SetBinContent(11,152);
   plot__1284->SetBinContent(12,80);
   plot__1284->SetBinContent(13,39);
   plot__1284->SetBinContent(14,22);
   plot__1284->SetBinContent(15,13.5);
   plot__1284->SetBinContent(16,3);
   plot__1284->SetBinContent(17,2.6);
   plot__1284->SetBinContent(18,0.4);
   plot__1284->SetBinContent(19,0.8);
   plot__1284->SetBinError(10,19.72308);
   plot__1284->SetBinError(11,12.32883);
   plot__1284->SetBinError(12,8.944272);
   plot__1284->SetBinError(13,6.244998);
   plot__1284->SetBinError(14,4.690416);
   plot__1284->SetBinError(15,2.598076);
   plot__1284->SetBinError(16,2.14);
   plot__1284->SetBinError(17,2);
   plot__1284->SetMinimum(0.11);
   plot__1284->SetMaximum(4566.109);
   plot__1284->SetEntries(759);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1284->SetLineColor(ci);
   plot__1284->SetLineWidth(2);
   plot__1284->SetMarkerStyle(20);
   plot__1284->SetMarkerSize(1.5);
   plot__1284->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1284->GetXaxis()->SetRange(1,23);
   plot__1284->GetXaxis()->SetLabelFont(42);
   plot__1284->GetXaxis()->SetLabelSize(0.035);
   plot__1284->GetXaxis()->SetTitleSize(0.035);
   plot__1284->GetXaxis()->SetTitleFont(42);
   plot__1284->GetYaxis()->SetTitle("Events");
   plot__1284->GetYaxis()->SetLabelFont(42);
   plot__1284->GetYaxis()->SetLabelSize(0.035);
   plot__1284->GetYaxis()->SetTitleSize(0.035);
   plot__1284->GetYaxis()->SetTitleOffset(1.3);
   plot__1284->GetYaxis()->SetTitleFont(42);
   plot__1284->GetZaxis()->SetLabelFont(42);
   plot__1284->GetZaxis()->SetLabelSize(0.035);
   plot__1284->GetZaxis()->SetTitleSize(0.035);
   plot__1284->GetZaxis()->SetTitleFont(42);
   plot__1284->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1367[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_83 = new TH1F("_stack_83","",24, xAxis1367);
   _stack_83->SetMinimum(0.1826444);
   _stack_83->SetMaximum(730.5775);
   _stack_83->SetDirectory(0);
   _stack_83->SetStats(0);
   _stack_83->GetXaxis()->SetLabelFont(42);
   _stack_83->GetXaxis()->SetLabelOffset(0.007);
   _stack_83->GetXaxis()->SetLabelSize(0.05);
   _stack_83->GetXaxis()->SetTitleSize(0.05);
   _stack_83->GetYaxis()->SetLabelFont(42);
   _stack_83->GetYaxis()->SetLabelOffset(0.007);
   _stack_83->GetYaxis()->SetLabelSize(0.05);
   _stack_83->GetZaxis()->SetLabelFont(42);
   _stack_83->GetZaxis()->SetLabelOffset(0.007);
   _stack_83->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_83);
   
   Double_t xAxis1368[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1285 = new TH1D("plot__1285","",24, xAxis1368);
   plot__1285->SetBinContent(10,1.166129);
   plot__1285->SetBinContent(11,0.2141197);
   plot__1285->SetBinContent(12,0.02455927);
   plot__1285->SetBinContent(13,0.02191586);
   plot__1285->SetBinContent(14,0.03281616);
   plot__1285->SetBinContent(15,0.02519106);
   plot__1285->SetBinError(10,0.1949399);
   plot__1285->SetBinError(11,0.06882476);
   plot__1285->SetBinError(12,0.02455927);
   plot__1285->SetBinError(13,0.02191586);
   plot__1285->SetBinError(14,0.02795898);
   plot__1285->SetBinError(15,0.01785529);
   plot__1285->SetEntries(90);
   plot__1285->SetFillColor(6);
   plot__1285->SetLineColor(6);
   plot__1285->SetLineWidth(3);
   plot__1285->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1285->GetXaxis()->SetRange(1,23);
   plot__1285->GetXaxis()->SetLabelFont(42);
   plot__1285->GetXaxis()->SetLabelSize(0.035);
   plot__1285->GetXaxis()->SetTitleSize(0.035);
   plot__1285->GetXaxis()->SetTitleFont(42);
   plot__1285->GetYaxis()->SetTitle("Events/0.025");
   plot__1285->GetYaxis()->SetLabelFont(42);
   plot__1285->GetYaxis()->SetLabelSize(0.035);
   plot__1285->GetYaxis()->SetTitleSize(0.035);
   plot__1285->GetYaxis()->SetTitleFont(42);
   plot__1285->GetZaxis()->SetLabelFont(42);
   plot__1285->GetZaxis()->SetLabelSize(0.035);
   plot__1285->GetZaxis()->SetTitleSize(0.035);
   plot__1285->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1369[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1286 = new TH1D("plot__1286","",24, xAxis1369);
   plot__1286->SetBinContent(10,4.318654);
   plot__1286->SetBinContent(11,2.247937);
   plot__1286->SetBinError(10,1.523238);
   plot__1286->SetBinError(11,1.163961);
   plot__1286->SetEntries(39);
   plot__1286->SetFillColor(40);
   plot__1286->SetLineColor(40);
   plot__1286->SetLineWidth(3);
   plot__1286->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1286->GetXaxis()->SetRange(1,23);
   plot__1286->GetXaxis()->SetLabelFont(42);
   plot__1286->GetXaxis()->SetLabelSize(0.035);
   plot__1286->GetXaxis()->SetTitleSize(0.035);
   plot__1286->GetXaxis()->SetTitleFont(42);
   plot__1286->GetYaxis()->SetTitle("Events/0.025");
   plot__1286->GetYaxis()->SetLabelFont(42);
   plot__1286->GetYaxis()->SetLabelSize(0.035);
   plot__1286->GetYaxis()->SetTitleSize(0.035);
   plot__1286->GetYaxis()->SetTitleFont(42);
   plot__1286->GetZaxis()->SetLabelFont(42);
   plot__1286->GetZaxis()->SetLabelSize(0.035);
   plot__1286->GetZaxis()->SetTitleSize(0.035);
   plot__1286->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1370[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1287 = new TH1D("plot__1287","",24, xAxis1370);
   plot__1287->SetBinContent(11,7.30815);
   plot__1287->SetBinError(11,7.30815);
   plot__1287->SetEntries(26);
   plot__1287->SetFillColor(7);
   plot__1287->SetLineColor(7);
   plot__1287->SetLineStyle(10);
   plot__1287->SetLineWidth(3);
   plot__1287->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1287->GetXaxis()->SetRange(1,23);
   plot__1287->GetXaxis()->SetLabelFont(42);
   plot__1287->GetXaxis()->SetLabelSize(0.035);
   plot__1287->GetXaxis()->SetTitleSize(0.035);
   plot__1287->GetXaxis()->SetTitleFont(42);
   plot__1287->GetYaxis()->SetTitle("Events/0.025");
   plot__1287->GetYaxis()->SetLabelFont(42);
   plot__1287->GetYaxis()->SetLabelSize(0.035);
   plot__1287->GetYaxis()->SetTitleSize(0.035);
   plot__1287->GetYaxis()->SetTitleFont(42);
   plot__1287->GetZaxis()->SetLabelFont(42);
   plot__1287->GetZaxis()->SetLabelSize(0.035);
   plot__1287->GetZaxis()->SetTitleSize(0.035);
   plot__1287->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1371[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1288 = new TH1D("plot__1288","",24, xAxis1371);
   plot__1288->SetBinContent(10,4.78264);
   plot__1288->SetBinContent(11,1.955643);
   plot__1288->SetBinContent(12,0.9241985);
   plot__1288->SetBinContent(13,0.5577962);
   plot__1288->SetBinContent(14,0.2991073);
   plot__1288->SetBinContent(15,0.453718);
   plot__1288->SetBinContent(16,0.1485287);
   plot__1288->SetBinContent(17,0.04917001);
   plot__1288->SetBinContent(18,0.01367051);
   plot__1288->SetBinContent(19,0.01100486);
   plot__1288->SetBinContent(20,0.007127019);
   plot__1288->SetBinError(10,0.5456703);
   plot__1288->SetBinError(11,0.2810822);
   plot__1288->SetBinError(12,0.2000073);
   plot__1288->SetBinError(13,0.1783963);
   plot__1288->SetBinError(14,0.1724523);
   plot__1288->SetBinError(15,0.1325747);
   plot__1288->SetBinError(16,0.04296213);
   plot__1288->SetBinError(17,0.01621466);
   plot__1288->SetBinError(18,0.009667535);
   plot__1288->SetBinError(19,0.007781881);
   plot__1288->SetBinError(20,0.007127019);
   plot__1288->SetEntries(378);
   plot__1288->SetFillColor(44);
   plot__1288->SetLineColor(44);
   plot__1288->SetLineWidth(3);
   plot__1288->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1288->GetXaxis()->SetRange(1,23);
   plot__1288->GetXaxis()->SetLabelFont(42);
   plot__1288->GetXaxis()->SetLabelSize(0.035);
   plot__1288->GetXaxis()->SetTitleSize(0.035);
   plot__1288->GetXaxis()->SetTitleFont(42);
   plot__1288->GetYaxis()->SetTitle("Events/0.025");
   plot__1288->GetYaxis()->SetLabelFont(42);
   plot__1288->GetYaxis()->SetLabelSize(0.035);
   plot__1288->GetYaxis()->SetTitleSize(0.035);
   plot__1288->GetYaxis()->SetTitleFont(42);
   plot__1288->GetZaxis()->SetLabelFont(42);
   plot__1288->GetZaxis()->SetLabelSize(0.035);
   plot__1288->GetZaxis()->SetTitleSize(0.035);
   plot__1288->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1372[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1289 = new TH1D("plot__1289","",24, xAxis1372);
   plot__1289->SetBinContent(10,60.02003);
   plot__1289->SetBinContent(11,19.93634);
   plot__1289->SetBinContent(12,5.960781);
   plot__1289->SetBinContent(13,4.475611);
   plot__1289->SetBinContent(14,0.933098);
   plot__1289->SetBinContent(15,0.2544633);
   plot__1289->SetBinContent(16,0.3911692);
   plot__1289->SetBinContent(17,0.4235814);
   plot__1289->SetBinContent(18,0.07206353);
   plot__1289->SetBinContent(19,0.04974102);
   plot__1289->SetBinError(10,3.806533);
   plot__1289->SetBinError(11,2.155934);
   plot__1289->SetBinError(12,1.167113);
   plot__1289->SetBinError(13,1.059635);
   plot__1289->SetBinError(14,0.4287005);
   plot__1289->SetBinError(15,0.1551486);
   plot__1289->SetBinError(16,0.2009951);
   plot__1289->SetBinError(17,0.1427313);
   plot__1289->SetBinError(18,0.05451296);
   plot__1289->SetBinError(19,0.04974102);
   plot__1289->SetEntries(466);
   plot__1289->SetFillColor(2);
   plot__1289->SetLineColor(2);
   plot__1289->SetLineWidth(3);
   plot__1289->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1289->GetXaxis()->SetRange(1,23);
   plot__1289->GetXaxis()->SetLabelFont(42);
   plot__1289->GetXaxis()->SetLabelSize(0.035);
   plot__1289->GetXaxis()->SetTitleSize(0.035);
   plot__1289->GetXaxis()->SetTitleFont(42);
   plot__1289->GetYaxis()->SetTitle("Events/0.025");
   plot__1289->GetYaxis()->SetLabelFont(42);
   plot__1289->GetYaxis()->SetLabelSize(0.035);
   plot__1289->GetYaxis()->SetTitleSize(0.035);
   plot__1289->GetYaxis()->SetTitleFont(42);
   plot__1289->GetZaxis()->SetLabelFont(42);
   plot__1289->GetZaxis()->SetLabelSize(0.035);
   plot__1289->GetZaxis()->SetTitleSize(0.035);
   plot__1289->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1373[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1290 = new TH1D("plot__1290","",24, xAxis1373);
   plot__1290->SetBinContent(10,157.7604);
   plot__1290->SetBinContent(11,49.01871);
   plot__1290->SetBinContent(12,23.80668);
   plot__1290->SetBinContent(13,10.59043);
   plot__1290->SetBinContent(14,6.304199);
   plot__1290->SetBinContent(15,3.560781);
   plot__1290->SetBinContent(16,1.87915);
   plot__1290->SetBinContent(17,0.770099);
   plot__1290->SetBinContent(18,0.1351335);
   plot__1290->SetBinContent(19,0.02456751);
   plot__1290->SetBinContent(20,0.0691242);
   plot__1290->SetBinError(10,4.465668);
   plot__1290->SetBinError(11,2.507738);
   plot__1290->SetBinError(12,1.737289);
   plot__1290->SetBinError(13,1.131965);
   plot__1290->SetBinError(14,0.9002008);
   plot__1290->SetBinError(15,0.4718322);
   plot__1290->SetBinError(16,0.3453324);
   plot__1290->SetBinError(17,0.1374136);
   plot__1290->SetBinError(18,0.05544748);
   plot__1290->SetBinError(19,0.02456751);
   plot__1290->SetBinError(20,0.04285195);
   plot__1290->SetEntries(2408);
   plot__1290->SetFillColor(4);
   plot__1290->SetLineColor(4);
   plot__1290->SetLineWidth(3);
   plot__1290->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1290->GetXaxis()->SetRange(1,23);
   plot__1290->GetXaxis()->SetLabelFont(42);
   plot__1290->GetXaxis()->SetLabelSize(0.035);
   plot__1290->GetXaxis()->SetTitleSize(0.035);
   plot__1290->GetXaxis()->SetTitleFont(42);
   plot__1290->GetYaxis()->SetTitle("Events/0.025");
   plot__1290->GetYaxis()->SetLabelFont(42);
   plot__1290->GetYaxis()->SetLabelSize(0.035);
   plot__1290->GetYaxis()->SetTitleSize(0.035);
   plot__1290->GetYaxis()->SetTitleFont(42);
   plot__1290->GetZaxis()->SetLabelFont(42);
   plot__1290->GetZaxis()->SetLabelSize(0.035);
   plot__1290->GetZaxis()->SetTitleSize(0.035);
   plot__1290->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1374[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1291 = new TH1D("plot__1291","",24, xAxis1374);
   plot__1291->SetBinContent(10,228.5631);
   plot__1291->SetBinContent(11,89.53909);
   plot__1291->SetBinContent(12,42.91482);
   plot__1291->SetBinContent(13,25.08815);
   plot__1291->SetBinContent(14,14.23596);
   plot__1291->SetBinContent(15,7.660869);
   plot__1291->SetBinContent(16,3.68661);
   plot__1291->SetBinContent(17,1.836674);
   plot__1291->SetBinContent(18,0.5759669);
   plot__1291->SetBinContent(19,0.1875753);
   plot__1291->SetBinContent(20,0.08526745);
   plot__1291->SetBinContent(21,0.02744437);
   plot__1291->SetBinContent(22,0.03440226);
   plot__1291->SetBinContent(23,0.01385033);
   plot__1291->SetBinError(10,2.79745);
   plot__1291->SetBinError(11,1.759575);
   plot__1291->SetBinError(12,1.23121);
   plot__1291->SetBinError(13,0.9243697);
   plot__1291->SetBinError(14,0.6795648);
   plot__1291->SetBinError(15,0.3650368);
   plot__1291->SetBinError(16,0.2468499);
   plot__1291->SetBinError(17,0.1196755);
   plot__1291->SetBinError(18,0.05921012);
   plot__1291->SetBinError(19,0.03092317);
   plot__1291->SetBinError(20,0.02007297);
   plot__1291->SetBinError(21,0.007851505);
   plot__1291->SetBinError(22,0.01513092);
   plot__1291->SetBinError(23,0.08321758);
   plot__1291->SetEntries(18028);
   plot__1291->SetFillColor(5);
   plot__1291->SetLineColor(5);
   plot__1291->SetLineWidth(3);
   plot__1291->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1291->GetXaxis()->SetRange(1,23);
   plot__1291->GetXaxis()->SetLabelFont(42);
   plot__1291->GetXaxis()->SetLabelSize(0.035);
   plot__1291->GetXaxis()->SetTitleSize(0.035);
   plot__1291->GetXaxis()->SetTitleFont(42);
   plot__1291->GetYaxis()->SetTitle("Events/0.025");
   plot__1291->GetYaxis()->SetLabelFont(42);
   plot__1291->GetYaxis()->SetLabelSize(0.035);
   plot__1291->GetYaxis()->SetTitleSize(0.035);
   plot__1291->GetYaxis()->SetTitleFont(42);
   plot__1291->GetZaxis()->SetLabelFont(42);
   plot__1291->GetZaxis()->SetLabelSize(0.035);
   plot__1291->GetZaxis()->SetTitleSize(0.035);
   plot__1291->GetZaxis()->SetTitleFont(42);
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
   leg->Draw();
   Double_t xAxis1375[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1292 = new TH1D("plot__1292","",24, xAxis1375);
   plot__1292->SetBinContent(10,389);
   plot__1292->SetBinContent(11,152);
   plot__1292->SetBinContent(12,80);
   plot__1292->SetBinContent(13,39);
   plot__1292->SetBinContent(14,22);
   plot__1292->SetBinContent(15,13.5);
   plot__1292->SetBinContent(16,3);
   plot__1292->SetBinContent(17,2.6);
   plot__1292->SetBinContent(18,0.4);
   plot__1292->SetBinContent(19,0.8);
   plot__1292->SetBinError(10,19.72308);
   plot__1292->SetBinError(11,12.32883);
   plot__1292->SetBinError(12,8.944272);
   plot__1292->SetBinError(13,6.244998);
   plot__1292->SetBinError(14,4.690416);
   plot__1292->SetBinError(15,2.598076);
   plot__1292->SetBinError(16,2.14);
   plot__1292->SetBinError(17,2);
   plot__1292->SetMinimum(0.11);
   plot__1292->SetMaximum(4566.109);
   plot__1292->SetEntries(759);

   ci = TColor::GetColor("#000099");
   plot__1292->SetLineColor(ci);
   plot__1292->SetLineWidth(2);
   plot__1292->SetMarkerStyle(20);
   plot__1292->SetMarkerSize(1.5);
   plot__1292->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1292->GetXaxis()->SetRange(1,23);
   plot__1292->GetXaxis()->SetLabelFont(42);
   plot__1292->GetXaxis()->SetLabelSize(0.035);
   plot__1292->GetXaxis()->SetTitleSize(0.035);
   plot__1292->GetXaxis()->SetTitleFont(42);
   plot__1292->GetYaxis()->SetTitle("Events");
   plot__1292->GetYaxis()->SetLabelFont(42);
   plot__1292->GetYaxis()->SetLabelSize(0.035);
   plot__1292->GetYaxis()->SetTitleSize(0.035);
   plot__1292->GetYaxis()->SetTitleOffset(1.3);
   plot__1292->GetYaxis()->SetTitleFont(42);
   plot__1292->GetZaxis()->SetLabelFont(42);
   plot__1292->GetZaxis()->SetLabelSize(0.035);
   plot__1292->GetZaxis()->SetTitleSize(0.035);
   plot__1292->GetZaxis()->SetTitleFont(42);
   plot__1292->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_zero_375_    Jet Multiplicity>3");
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
   canvasbtag_zero_375_475/AlphaT_3->cd();
  
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
   Double_t xAxis1376[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1293 = new TH1D("plot__1293","",24, xAxis1376);
   plot__1293->SetBinContent(10,0.8519288);
   plot__1293->SetBinContent(11,0.8929621);
   plot__1293->SetBinContent(12,1.086498);
   plot__1293->SetBinContent(13,0.9574332);
   plot__1293->SetBinContent(14,1.008935);
   plot__1293->SetBinContent(15,1.129232);
   plot__1293->SetBinContent(16,0.4913636);
   plot__1293->SetBinContent(17,0.8442863);
   plot__1293->SetBinContent(18,0.5019863);
   plot__1293->SetBinContent(19,2.931598);
   plot__1293->SetBinError(10,0.04319451);
   plot__1293->SetBinError(11,0.07242879);
   plot__1293->SetBinError(12,0.1214742);
   plot__1293->SetBinError(13,0.153312);
   plot__1293->SetBinError(14,0.2151056);
   plot__1293->SetBinError(15,0.2173209);
   plot__1293->SetBinError(16,0.350506);
   plot__1293->SetBinError(17,0.649451);
   plot__1293->SetMinimum(0);
   plot__1293->SetMaximum(2);
   plot__1293->SetEntries(97.18211);

   ci = TColor::GetColor("#000099");
   plot__1293->SetLineColor(ci);
   plot__1293->SetLineWidth(2);
   plot__1293->SetMarkerStyle(20);
   plot__1293->SetMarkerSize(1.5);
   plot__1293->GetXaxis()->SetRange(1,23);
   plot__1293->GetXaxis()->SetLabelFont(42);
   plot__1293->GetXaxis()->SetLabelSize(0.12);
   plot__1293->GetXaxis()->SetTitleSize(0.035);
   plot__1293->GetXaxis()->SetTitleFont(42);
   plot__1293->GetYaxis()->SetTitle("Data/MC");
   plot__1293->GetYaxis()->SetNdivisions(505);
   plot__1293->GetYaxis()->SetLabelFont(42);
   plot__1293->GetYaxis()->SetLabelSize(0.11);
   plot__1293->GetYaxis()->SetTitleSize(0.1);
   plot__1293->GetYaxis()->SetTitleOffset(0.5);
   plot__1293->GetYaxis()->SetTitleFont(42);
   plot__1293->GetZaxis()->SetLabelFont(42);
   plot__1293->GetZaxis()->SetLabelSize(0.035);
   plot__1293->GetZaxis()->SetTitleSize(0.035);
   plot__1293->GetZaxis()->SetTitleFont(42);
   plot__1293->Draw("p");
   
   Double_t Graph_from_plot_fx1332[24] = {
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
   Double_t Graph_from_plot_fy1332[24] = {
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
   Double_t Graph_from_plot_fex1332[24] = {
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
   Double_t Graph_from_plot_fey1332[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01467718,
   0.04875707,
   0.03309144,
   0.04453522,
   0.05591382,
   0.05276011,
   0.07724714,
   0.07534743,
   0.1232514,
   0.2344858,
   0.2962755,
   0.286088,
   0.4398236,
   6.008346,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1332,Graph_from_plot_fy1332,Graph_from_plot_fex1332,Graph_from_plot_fey1332);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1332 = new TH1F("Graph_Graph_from_plot1332","",100,0,11);
   Graph_Graph_from_plot1332->SetMinimum(-6.210015);
   Graph_Graph_from_plot1332->SetMaximum(8.210015);
   Graph_Graph_from_plot1332->SetDirectory(0);
   Graph_Graph_from_plot1332->SetStats(0);
   Graph_Graph_from_plot1332->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1332->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1332->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1332->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1332->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1332->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1332->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1332->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1332->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1332->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1332);
   
   gre->Draw("2");
   Double_t xAxis1377[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1294 = new TH1D("plot__1294","",24, xAxis1377);
   plot__1294->SetBinContent(10,0.8519288);
   plot__1294->SetBinContent(11,0.8929621);
   plot__1294->SetBinContent(12,1.086498);
   plot__1294->SetBinContent(13,0.9574332);
   plot__1294->SetBinContent(14,1.008935);
   plot__1294->SetBinContent(15,1.129232);
   plot__1294->SetBinContent(16,0.4913636);
   plot__1294->SetBinContent(17,0.8442863);
   plot__1294->SetBinContent(18,0.5019863);
   plot__1294->SetBinContent(19,2.931598);
   plot__1294->SetBinError(10,0.04319451);
   plot__1294->SetBinError(11,0.07242879);
   plot__1294->SetBinError(12,0.1214742);
   plot__1294->SetBinError(13,0.153312);
   plot__1294->SetBinError(14,0.2151056);
   plot__1294->SetBinError(15,0.2173209);
   plot__1294->SetBinError(16,0.350506);
   plot__1294->SetBinError(17,0.649451);
   plot__1294->SetMinimum(0);
   plot__1294->SetMaximum(2);
   plot__1294->SetEntries(97.18211);

   ci = TColor::GetColor("#000099");
   plot__1294->SetLineColor(ci);
   plot__1294->SetLineWidth(2);
   plot__1294->SetMarkerStyle(20);
   plot__1294->SetMarkerSize(1.5);
   plot__1294->GetXaxis()->SetRange(1,23);
   plot__1294->GetXaxis()->SetLabelFont(42);
   plot__1294->GetXaxis()->SetLabelSize(0.12);
   plot__1294->GetXaxis()->SetTitleSize(0.035);
   plot__1294->GetXaxis()->SetTitleFont(42);
   plot__1294->GetYaxis()->SetTitle("Data/MC");
   plot__1294->GetYaxis()->SetNdivisions(505);
   plot__1294->GetYaxis()->SetLabelFont(42);
   plot__1294->GetYaxis()->SetLabelSize(0.11);
   plot__1294->GetYaxis()->SetTitleSize(0.1);
   plot__1294->GetYaxis()->SetTitleOffset(0.5);
   plot__1294->GetYaxis()->SetTitleFont(42);
   plot__1294->GetZaxis()->SetLabelFont(42);
   plot__1294->GetZaxis()->SetLabelSize(0.035);
   plot__1294->GetZaxis()->SetTitleSize(0.035);
   plot__1294->GetZaxis()->SetTitleFont(42);
   plot__1294->Draw("PSAME");
   d->Modified();
   canvasbtag_zero_375_475/AlphaT_3->cd();
   canvasbtag_zero_375_475/AlphaT_3->Modified();
   canvasbtag_zero_375_475/AlphaT_3->cd();
   canvasbtag_zero_375_475/AlphaT_3->SetSelected(canvasbtag_zero_375_475/AlphaT_3);
}
