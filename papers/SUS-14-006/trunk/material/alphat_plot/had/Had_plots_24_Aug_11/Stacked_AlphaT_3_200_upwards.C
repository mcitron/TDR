void Stacked_AlphaT_3_200_upwards()
{
//=========Macro generated from canvas: canvas200_275/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:53:55 2016) by ROOT version6.06/06
   TCanvas *canvas200_275/AlphaT_3 = new TCanvas("canvas200_275/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas200_275/AlphaT_3->SetHighLightColor(2);
   canvas200_275/AlphaT_3->Range(0,0,1,1);
   canvas200_275/AlphaT_3->SetFillColor(0);
   canvas200_275/AlphaT_3->SetBorderMode(0);
   canvas200_275/AlphaT_3->SetBorderSize(2);
   canvas200_275/AlphaT_3->SetTickx(1);
   canvas200_275/AlphaT_3->SetTicky(1);
   canvas200_275/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.591275,3.4875,4.735402);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis376[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__354 = new TH1D("plot__354","",24, xAxis376);
   plot__354->SetBinContent(10,1062);
   plot__354->SetBinContent(11,794);
   plot__354->SetBinContent(12,415);
   plot__354->SetBinContent(13,212);
   plot__354->SetBinContent(14,122);
   plot__354->SetBinContent(15,62);
   plot__354->SetBinContent(16,28.5);
   plot__354->SetBinContent(17,13.6);
   plot__354->SetBinContent(18,4.4);
   plot__354->SetBinContent(19,1.8);
   plot__354->SetBinContent(20,0.8);
   plot__354->SetBinContent(21,0.1);
   plot__354->SetBinError(10,32.58834);
   plot__354->SetBinError(11,28.17801);
   plot__354->SetBinError(12,20.37155);
   plot__354->SetBinError(13,14.56022);
   plot__354->SetBinError(14,11.04536);
   plot__354->SetBinError(15,5.567764);
   plot__354->SetBinError(16,3.774917);
   plot__354->SetBinError(17,1.649242);
   plot__354->SetBinError(18,2.3);
   plot__354->SetBinError(19,1);
   plot__354->SetMinimum(0.11);
   plot__354->SetMaximum(12668.76);
   plot__354->SetEntries(2915);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__354->SetLineColor(ci);
   plot__354->SetLineWidth(2);
   plot__354->SetMarkerStyle(20);
   plot__354->SetMarkerSize(1.5);
   plot__354->GetXaxis()->SetTitle("#alpha_{T}");
   plot__354->GetXaxis()->SetRange(1,23);
   plot__354->GetXaxis()->SetLabelFont(42);
   plot__354->GetXaxis()->SetLabelSize(0.035);
   plot__354->GetXaxis()->SetTitleSize(0.035);
   plot__354->GetXaxis()->SetTitleFont(42);
   plot__354->GetYaxis()->SetTitle("Events");
   plot__354->GetYaxis()->SetLabelFont(42);
   plot__354->GetYaxis()->SetLabelSize(0.035);
   plot__354->GetYaxis()->SetTitleSize(0.035);
   plot__354->GetYaxis()->SetTitleOffset(1.3);
   plot__354->GetYaxis()->SetTitleFont(42);
   plot__354->GetZaxis()->SetLabelFont(42);
   plot__354->GetZaxis()->SetLabelSize(0.035);
   plot__354->GetZaxis()->SetTitleSize(0.035);
   plot__354->GetZaxis()->SetTitleFont(42);
   plot__354->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis377[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_23 = new TH1F("_stack_23","",24, xAxis377);
   _stack_23->SetMinimum(0.5067504);
   _stack_23->SetMaximum(2027.002);
   _stack_23->SetDirectory(0);
   _stack_23->SetStats(0);
   _stack_23->GetXaxis()->SetLabelFont(42);
   _stack_23->GetXaxis()->SetLabelOffset(0.007);
   _stack_23->GetXaxis()->SetLabelSize(0.05);
   _stack_23->GetXaxis()->SetTitleSize(0.05);
   _stack_23->GetYaxis()->SetLabelFont(42);
   _stack_23->GetYaxis()->SetLabelOffset(0.007);
   _stack_23->GetYaxis()->SetLabelSize(0.05);
   _stack_23->GetZaxis()->SetLabelFont(42);
   _stack_23->GetZaxis()->SetLabelOffset(0.007);
   _stack_23->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_23);
   
   Double_t xAxis378[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__355 = new TH1D("plot__355","",24, xAxis378);
   plot__355->SetBinContent(11,7.30815);
   plot__355->SetBinError(11,7.30815);
   plot__355->SetEntries(26);
   plot__355->SetFillColor(7);
   plot__355->SetLineColor(7);
   plot__355->SetLineStyle(10);
   plot__355->SetLineWidth(3);
   plot__355->GetXaxis()->SetTitle("#alpha_{T}");
   plot__355->GetXaxis()->SetRange(1,23);
   plot__355->GetXaxis()->SetLabelFont(42);
   plot__355->GetXaxis()->SetLabelSize(0.035);
   plot__355->GetXaxis()->SetTitleSize(0.035);
   plot__355->GetXaxis()->SetTitleFont(42);
   plot__355->GetYaxis()->SetTitle("Events/0.025");
   plot__355->GetYaxis()->SetLabelFont(42);
   plot__355->GetYaxis()->SetLabelSize(0.035);
   plot__355->GetYaxis()->SetTitleSize(0.035);
   plot__355->GetYaxis()->SetTitleFont(42);
   plot__355->GetZaxis()->SetLabelFont(42);
   plot__355->GetZaxis()->SetLabelSize(0.035);
   plot__355->GetZaxis()->SetTitleSize(0.035);
   plot__355->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis379[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__356 = new TH1D("plot__356","",24, xAxis379);
   plot__356->SetBinContent(10,2.553381);
   plot__356->SetBinContent(11,1.824355);
   plot__356->SetBinContent(12,1.016967);
   plot__356->SetBinContent(13,2.783011);
   plot__356->SetBinContent(14,0.3107226);
   plot__356->SetBinContent(15,0.1153756);
   plot__356->SetBinContent(16,0.05557868);
   plot__356->SetBinContent(17,0.009372507);
   plot__356->SetBinContent(18,0.02531563);
   plot__356->SetBinContent(19,0.003522126);
   plot__356->SetBinError(10,0.3421654);
   plot__356->SetBinError(11,0.3144296);
   plot__356->SetBinError(12,0.2409718);
   plot__356->SetBinError(13,2.368808);
   plot__356->SetBinError(14,0.1226314);
   plot__356->SetBinError(15,0.05512561);
   plot__356->SetBinError(16,0.03933067);
   plot__356->SetBinError(17,0.009372507);
   plot__356->SetBinError(18,0.01812652);
   plot__356->SetBinError(19,0.003522126);
   plot__356->SetEntries(198);
   plot__356->SetFillColor(6);
   plot__356->SetLineColor(6);
   plot__356->SetLineWidth(3);
   plot__356->GetXaxis()->SetTitle("#alpha_{T}");
   plot__356->GetXaxis()->SetRange(1,23);
   plot__356->GetXaxis()->SetLabelFont(42);
   plot__356->GetXaxis()->SetLabelSize(0.035);
   plot__356->GetXaxis()->SetTitleSize(0.035);
   plot__356->GetXaxis()->SetTitleFont(42);
   plot__356->GetYaxis()->SetTitle("Events/0.025");
   plot__356->GetYaxis()->SetLabelFont(42);
   plot__356->GetYaxis()->SetLabelSize(0.035);
   plot__356->GetYaxis()->SetTitleSize(0.035);
   plot__356->GetYaxis()->SetTitleFont(42);
   plot__356->GetZaxis()->SetLabelFont(42);
   plot__356->GetZaxis()->SetLabelSize(0.035);
   plot__356->GetZaxis()->SetTitleSize(0.035);
   plot__356->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis380[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__357 = new TH1D("plot__357","",24, xAxis380);
   plot__357->SetBinContent(10,10.84956);
   plot__357->SetBinContent(11,9.650134);
   plot__357->SetBinContent(12,4.386124);
   plot__357->SetBinContent(13,3.294849);
   plot__357->SetBinContent(14,1.963042);
   plot__357->SetBinContent(15,1.227095);
   plot__357->SetBinContent(16,0.6013099);
   plot__357->SetBinContent(17,0.1906688);
   plot__357->SetBinContent(18,0.07677054);
   plot__357->SetBinContent(19,0.04022195);
   plot__357->SetBinContent(20,0.01900583);
   plot__357->SetBinContent(21,0.006232822);
   plot__357->SetBinError(10,0.8434121);
   plot__357->SetBinError(11,0.7979633);
   plot__357->SetBinError(12,0.4682526);
   plot__357->SetBinError(13,0.4240448);
   plot__357->SetBinError(14,0.3474319);
   plot__357->SetBinError(15,0.1828687);
   plot__357->SetBinError(16,0.1279365);
   plot__357->SetBinError(17,0.03465287);
   plot__357->SetBinError(18,0.02505014);
   plot__357->SetBinError(19,0.01428441);
   plot__357->SetBinError(20,0.009897784);
   plot__357->SetBinError(21,0.003670837);
   plot__357->SetEntries(1248);
   plot__357->SetFillColor(44);
   plot__357->SetLineColor(44);
   plot__357->SetLineWidth(3);
   plot__357->GetXaxis()->SetTitle("#alpha_{T}");
   plot__357->GetXaxis()->SetRange(1,23);
   plot__357->GetXaxis()->SetLabelFont(42);
   plot__357->GetXaxis()->SetLabelSize(0.035);
   plot__357->GetXaxis()->SetTitleSize(0.035);
   plot__357->GetXaxis()->SetTitleFont(42);
   plot__357->GetYaxis()->SetTitle("Events/0.025");
   plot__357->GetYaxis()->SetLabelFont(42);
   plot__357->GetYaxis()->SetLabelSize(0.035);
   plot__357->GetYaxis()->SetTitleSize(0.035);
   plot__357->GetYaxis()->SetTitleFont(42);
   plot__357->GetZaxis()->SetLabelFont(42);
   plot__357->GetZaxis()->SetLabelSize(0.035);
   plot__357->GetZaxis()->SetTitleSize(0.035);
   plot__357->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis381[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__358 = new TH1D("plot__358","",24, xAxis381);
   plot__358->SetBinContent(10,29.06117);
   plot__358->SetBinContent(11,19.24905);
   plot__358->SetBinContent(12,7.873355);
   plot__358->SetBinContent(13,6.486702);
   plot__358->SetBinContent(14,2.172511);
   plot__358->SetBinContent(15,2.064858);
   plot__358->SetBinContent(17,0.2989414);
   plot__358->SetBinError(10,3.817777);
   plot__358->SetBinError(11,3.046657);
   plot__358->SetBinError(12,1.803854);
   plot__358->SetBinError(13,1.712695);
   plot__358->SetBinError(14,0.9299862);
   plot__358->SetBinError(15,0.7044505);
   plot__358->SetBinError(17,0.1684733);
   plot__358->SetEntries(192);
   plot__358->SetFillColor(40);
   plot__358->SetLineColor(40);
   plot__358->SetLineWidth(3);
   plot__358->GetXaxis()->SetTitle("#alpha_{T}");
   plot__358->GetXaxis()->SetRange(1,23);
   plot__358->GetXaxis()->SetLabelFont(42);
   plot__358->GetXaxis()->SetLabelSize(0.035);
   plot__358->GetXaxis()->SetTitleSize(0.035);
   plot__358->GetXaxis()->SetTitleFont(42);
   plot__358->GetYaxis()->SetTitle("Events/0.025");
   plot__358->GetYaxis()->SetLabelFont(42);
   plot__358->GetYaxis()->SetLabelSize(0.035);
   plot__358->GetYaxis()->SetTitleSize(0.035);
   plot__358->GetYaxis()->SetTitleFont(42);
   plot__358->GetZaxis()->SetLabelFont(42);
   plot__358->GetZaxis()->SetLabelSize(0.035);
   plot__358->GetZaxis()->SetTitleSize(0.035);
   plot__358->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis382[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__359 = new TH1D("plot__359","",24, xAxis382);
   plot__359->SetBinContent(10,308.1261);
   plot__359->SetBinContent(11,207.7058);
   plot__359->SetBinContent(12,112.6144);
   plot__359->SetBinContent(13,53.99314);
   plot__359->SetBinContent(14,32.2525);
   plot__359->SetBinContent(15,19.09079);
   plot__359->SetBinContent(16,8.538683);
   plot__359->SetBinContent(17,3.171806);
   plot__359->SetBinContent(18,1.001828);
   plot__359->SetBinContent(19,0.4230344);
   plot__359->SetBinContent(20,0.2807034);
   plot__359->SetBinContent(21,0.08312365);
   plot__359->SetBinContent(22,0.04285901);
   plot__359->SetBinContent(23,0.07654273);
   plot__359->SetBinContent(24,0.001109315);
   plot__359->SetBinError(10,6.721941);
   plot__359->SetBinError(11,5.896884);
   plot__359->SetBinError(12,4.346074);
   plot__359->SetBinError(13,3.010678);
   plot__359->SetBinError(14,2.330053);
   plot__359->SetBinError(15,1.271343);
   plot__359->SetBinError(16,0.8473827);
   plot__359->SetBinError(17,0.3208066);
   plot__359->SetBinError(18,0.1801596);
   plot__359->SetBinError(19,0.1209378);
   plot__359->SetBinError(20,0.09173672);
   plot__359->SetBinError(21,0.03765453);
   plot__359->SetBinError(22,0.03037722);
   plot__359->SetBinError(23,0.1956307);
   plot__359->SetBinError(24,0.001109315);
   plot__359->SetEntries(5853);
   plot__359->SetFillColor(4);
   plot__359->SetLineColor(4);
   plot__359->SetLineWidth(3);
   plot__359->GetXaxis()->SetTitle("#alpha_{T}");
   plot__359->GetXaxis()->SetRange(1,23);
   plot__359->GetXaxis()->SetLabelFont(42);
   plot__359->GetXaxis()->SetLabelSize(0.035);
   plot__359->GetXaxis()->SetTitleSize(0.035);
   plot__359->GetXaxis()->SetTitleFont(42);
   plot__359->GetYaxis()->SetTitle("Events/0.025");
   plot__359->GetYaxis()->SetLabelFont(42);
   plot__359->GetYaxis()->SetLabelSize(0.035);
   plot__359->GetYaxis()->SetTitleSize(0.035);
   plot__359->GetYaxis()->SetTitleFont(42);
   plot__359->GetZaxis()->SetLabelFont(42);
   plot__359->GetZaxis()->SetLabelSize(0.035);
   plot__359->GetZaxis()->SetTitleSize(0.035);
   plot__359->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis383[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__360 = new TH1D("plot__360","",24, xAxis383);
   plot__360->SetBinContent(10,400.7694);
   plot__360->SetBinContent(11,282.84);
   plot__360->SetBinContent(12,161.3422);
   plot__360->SetBinContent(13,92.46289);
   plot__360->SetBinContent(14,53.48787);
   plot__360->SetBinContent(15,30.70259);
   plot__360->SetBinContent(16,15.8588);
   plot__360->SetBinContent(17,6.715858);
   plot__360->SetBinContent(18,2.434635);
   plot__360->SetBinContent(19,0.8903525);
   plot__360->SetBinContent(20,0.4189005);
   plot__360->SetBinContent(21,0.1076556);
   plot__360->SetBinContent(22,0.07380156);
   plot__360->SetBinContent(23,0.01385033);
   plot__360->SetBinError(10,4.547771);
   plot__360->SetBinError(11,4.371468);
   plot__360->SetBinError(12,3.350487);
   plot__360->SetBinError(13,2.531463);
   plot__360->SetBinError(14,1.939886);
   plot__360->SetBinError(15,1.01207);
   plot__360->SetBinError(16,0.7809687);
   plot__360->SetBinError(17,0.3012727);
   plot__360->SetBinError(18,0.1816865);
   plot__360->SetBinError(19,0.1097086);
   plot__360->SetBinError(20,0.07746787);
   plot__360->SetBinError(21,0.02535296);
   plot__360->SetBinError(22,0.02197716);
   plot__360->SetBinError(23,0.08321758);
   plot__360->SetEntries(30239);
   plot__360->SetFillColor(5);
   plot__360->SetLineColor(5);
   plot__360->SetLineWidth(3);
   plot__360->GetXaxis()->SetTitle("#alpha_{T}");
   plot__360->GetXaxis()->SetRange(1,23);
   plot__360->GetXaxis()->SetLabelFont(42);
   plot__360->GetXaxis()->SetLabelSize(0.035);
   plot__360->GetXaxis()->SetTitleSize(0.035);
   plot__360->GetXaxis()->SetTitleFont(42);
   plot__360->GetYaxis()->SetTitle("Events/0.025");
   plot__360->GetYaxis()->SetLabelFont(42);
   plot__360->GetYaxis()->SetLabelSize(0.035);
   plot__360->GetYaxis()->SetTitleSize(0.035);
   plot__360->GetYaxis()->SetTitleFont(42);
   plot__360->GetZaxis()->SetLabelFont(42);
   plot__360->GetZaxis()->SetLabelSize(0.035);
   plot__360->GetZaxis()->SetTitleSize(0.035);
   plot__360->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis384[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__361 = new TH1D("plot__361","",24, xAxis384);
   plot__361->SetBinContent(10,515.5164);
   plot__361->SetBinContent(11,351.8633);
   plot__361->SetBinContent(12,158.3317);
   plot__361->SetBinContent(13,65.40044);
   plot__361->SetBinContent(14,34.10896);
   plot__361->SetBinContent(15,16.42086);
   plot__361->SetBinContent(16,6.224049);
   plot__361->SetBinContent(17,2.604244);
   plot__361->SetBinContent(18,0.6043064);
   plot__361->SetBinContent(19,0.243529);
   plot__361->SetBinContent(20,0.06307558);
   plot__361->SetBinError(10,10.51115);
   plot__361->SetBinError(11,8.559197);
   plot__361->SetBinError(12,5.585802);
   plot__361->SetBinError(13,3.60268);
   plot__361->SetBinError(14,2.581454);
   plot__361->SetBinError(15,1.27776);
   plot__361->SetBinError(16,0.7877947);
   plot__361->SetBinError(17,0.3281814);
   plot__361->SetBinError(18,0.1649111);
   plot__361->SetBinError(19,0.1031758);
   plot__361->SetBinError(20,0.04460118);
   plot__361->SetEntries(6404);
   plot__361->SetFillColor(2);
   plot__361->SetLineColor(2);
   plot__361->SetLineWidth(3);
   plot__361->GetXaxis()->SetTitle("#alpha_{T}");
   plot__361->GetXaxis()->SetRange(1,23);
   plot__361->GetXaxis()->SetLabelFont(42);
   plot__361->GetXaxis()->SetLabelSize(0.035);
   plot__361->GetXaxis()->SetTitleSize(0.035);
   plot__361->GetXaxis()->SetTitleFont(42);
   plot__361->GetYaxis()->SetTitle("Events/0.025");
   plot__361->GetYaxis()->SetLabelFont(42);
   plot__361->GetYaxis()->SetLabelSize(0.035);
   plot__361->GetYaxis()->SetTitleSize(0.035);
   plot__361->GetYaxis()->SetTitleFont(42);
   plot__361->GetZaxis()->SetLabelFont(42);
   plot__361->GetZaxis()->SetLabelSize(0.035);
   plot__361->GetZaxis()->SetTitleSize(0.035);
   plot__361->GetZaxis()->SetTitleFont(42);
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
   leg->Draw();
   Double_t xAxis385[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__362 = new TH1D("plot__362","",24, xAxis385);
   plot__362->SetBinContent(10,1062);
   plot__362->SetBinContent(11,794);
   plot__362->SetBinContent(12,415);
   plot__362->SetBinContent(13,212);
   plot__362->SetBinContent(14,122);
   plot__362->SetBinContent(15,62);
   plot__362->SetBinContent(16,28.5);
   plot__362->SetBinContent(17,13.6);
   plot__362->SetBinContent(18,4.4);
   plot__362->SetBinContent(19,1.8);
   plot__362->SetBinContent(20,0.8);
   plot__362->SetBinContent(21,0.1);
   plot__362->SetBinError(10,32.58834);
   plot__362->SetBinError(11,28.17801);
   plot__362->SetBinError(12,20.37155);
   plot__362->SetBinError(13,14.56022);
   plot__362->SetBinError(14,11.04536);
   plot__362->SetBinError(15,5.567764);
   plot__362->SetBinError(16,3.774917);
   plot__362->SetBinError(17,1.649242);
   plot__362->SetBinError(18,2.3);
   plot__362->SetBinError(19,1);
   plot__362->SetMinimum(0.11);
   plot__362->SetMaximum(12668.76);
   plot__362->SetEntries(2915);

   ci = TColor::GetColor("#000099");
   plot__362->SetLineColor(ci);
   plot__362->SetLineWidth(2);
   plot__362->SetMarkerStyle(20);
   plot__362->SetMarkerSize(1.5);
   plot__362->GetXaxis()->SetTitle("#alpha_{T}");
   plot__362->GetXaxis()->SetRange(1,23);
   plot__362->GetXaxis()->SetLabelFont(42);
   plot__362->GetXaxis()->SetLabelSize(0.035);
   plot__362->GetXaxis()->SetTitleSize(0.035);
   plot__362->GetXaxis()->SetTitleFont(42);
   plot__362->GetYaxis()->SetTitle("Events");
   plot__362->GetYaxis()->SetLabelFont(42);
   plot__362->GetYaxis()->SetLabelSize(0.035);
   plot__362->GetYaxis()->SetTitleSize(0.035);
   plot__362->GetYaxis()->SetTitleOffset(1.3);
   plot__362->GetYaxis()->SetTitleFont(42);
   plot__362->GetZaxis()->SetLabelFont(42);
   plot__362->GetZaxis()->SetLabelSize(0.035);
   plot__362->GetZaxis()->SetTitleSize(0.035);
   plot__362->GetZaxis()->SetTitleFont(42);
   plot__362->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"200_2    Jet Multiplicity>3");
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
   canvas200_275/AlphaT_3->cd();
  
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
   Double_t xAxis386[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__363 = new TH1D("plot__363","",24, xAxis386);
   plot__363->SetBinContent(10,0.8382825);
   plot__363->SetBinContent(11,0.9018211);
   plot__363->SetBinContent(12,0.9314022);
   plot__363->SetBinContent(13,0.944653);
   plot__363->SetBinContent(14,0.981531);
   plot__363->SetBinContent(15,0.8905286);
   plot__363->SetBinContent(16,0.9111714);
   plot__363->SetBinContent(17,1.046887);
   plot__363->SetBinContent(18,1.062069);
   plot__363->SetBinContent(19,1.124536);
   plot__363->SetBinContent(20,1.02343);
   plot__363->SetBinContent(21,0.5075832);
   plot__363->SetBinError(10,0.02572339);
   plot__363->SetBinError(11,0.03200443);
   plot__363->SetBinError(12,0.04572073);
   plot__363->SetBinError(13,0.06487904);
   plot__363->SetBinError(14,0.08886365);
   plot__363->SetBinError(15,0.07997183);
   plot__363->SetBinError(16,0.1206876);
   plot__363->SetBinError(17,0.1269538);
   plot__363->SetBinError(18,0.5551726);
   plot__363->SetBinError(19,0.6247423);
   plot__363->SetMinimum(0);
   plot__363->SetMaximum(2);
   plot__363->SetEntries(151.0525);

   ci = TColor::GetColor("#000099");
   plot__363->SetLineColor(ci);
   plot__363->SetLineWidth(2);
   plot__363->SetMarkerStyle(20);
   plot__363->SetMarkerSize(1.5);
   plot__363->GetXaxis()->SetRange(1,23);
   plot__363->GetXaxis()->SetLabelFont(42);
   plot__363->GetXaxis()->SetLabelSize(0.12);
   plot__363->GetXaxis()->SetTitleSize(0.035);
   plot__363->GetXaxis()->SetTitleFont(42);
   plot__363->GetYaxis()->SetTitle("Data/MC");
   plot__363->GetYaxis()->SetNdivisions(505);
   plot__363->GetYaxis()->SetLabelFont(42);
   plot__363->GetYaxis()->SetLabelSize(0.11);
   plot__363->GetYaxis()->SetTitleSize(0.1);
   plot__363->GetYaxis()->SetTitleOffset(0.5);
   plot__363->GetYaxis()->SetTitleFont(42);
   plot__363->GetZaxis()->SetLabelFont(42);
   plot__363->GetZaxis()->SetLabelSize(0.035);
   plot__363->GetZaxis()->SetTitleSize(0.035);
   plot__363->GetZaxis()->SetTitleFont(42);
   plot__363->Draw("p");
   
   Double_t Graph_from_plot_fx1092[24] = {
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
   Double_t Graph_from_plot_fy1092[24] = {
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
   Double_t Graph_from_plot_fex1092[24] = {
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
   Double_t Graph_from_plot_fey1092[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01093048,
   0.0156793,
   0.01807309,
   0.0271687,
   0.03303179,
   0.03148822,
   0.04483351,
   0.0442907,
   0.07385548,
   0.1210189,
   0.164348,
   0.2311656,
   0.3213906,
   2.351892,
   1};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1092,Graph_from_plot_fy1092,Graph_from_plot_fex1092,Graph_from_plot_fey1092);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1092 = new TH1F("Graph_Graph_from_plot1092","",100,0,11);
   Graph_Graph_from_plot1092->SetMinimum(-1.822271);
   Graph_Graph_from_plot1092->SetMaximum(3.822271);
   Graph_Graph_from_plot1092->SetDirectory(0);
   Graph_Graph_from_plot1092->SetStats(0);
   Graph_Graph_from_plot1092->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1092->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1092->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1092->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1092->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1092->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1092->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1092->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1092->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1092->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1092);
   
   gre->Draw("2");
   Double_t xAxis387[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__364 = new TH1D("plot__364","",24, xAxis387);
   plot__364->SetBinContent(10,0.8382825);
   plot__364->SetBinContent(11,0.9018211);
   plot__364->SetBinContent(12,0.9314022);
   plot__364->SetBinContent(13,0.944653);
   plot__364->SetBinContent(14,0.981531);
   plot__364->SetBinContent(15,0.8905286);
   plot__364->SetBinContent(16,0.9111714);
   plot__364->SetBinContent(17,1.046887);
   plot__364->SetBinContent(18,1.062069);
   plot__364->SetBinContent(19,1.124536);
   plot__364->SetBinContent(20,1.02343);
   plot__364->SetBinContent(21,0.5075832);
   plot__364->SetBinError(10,0.02572339);
   plot__364->SetBinError(11,0.03200443);
   plot__364->SetBinError(12,0.04572073);
   plot__364->SetBinError(13,0.06487904);
   plot__364->SetBinError(14,0.08886365);
   plot__364->SetBinError(15,0.07997183);
   plot__364->SetBinError(16,0.1206876);
   plot__364->SetBinError(17,0.1269538);
   plot__364->SetBinError(18,0.5551726);
   plot__364->SetBinError(19,0.6247423);
   plot__364->SetMinimum(0);
   plot__364->SetMaximum(2);
   plot__364->SetEntries(151.0525);

   ci = TColor::GetColor("#000099");
   plot__364->SetLineColor(ci);
   plot__364->SetLineWidth(2);
   plot__364->SetMarkerStyle(20);
   plot__364->SetMarkerSize(1.5);
   plot__364->GetXaxis()->SetRange(1,23);
   plot__364->GetXaxis()->SetLabelFont(42);
   plot__364->GetXaxis()->SetLabelSize(0.12);
   plot__364->GetXaxis()->SetTitleSize(0.035);
   plot__364->GetXaxis()->SetTitleFont(42);
   plot__364->GetYaxis()->SetTitle("Data/MC");
   plot__364->GetYaxis()->SetNdivisions(505);
   plot__364->GetYaxis()->SetLabelFont(42);
   plot__364->GetYaxis()->SetLabelSize(0.11);
   plot__364->GetYaxis()->SetTitleSize(0.1);
   plot__364->GetYaxis()->SetTitleOffset(0.5);
   plot__364->GetYaxis()->SetTitleFont(42);
   plot__364->GetZaxis()->SetLabelFont(42);
   plot__364->GetZaxis()->SetLabelSize(0.035);
   plot__364->GetZaxis()->SetTitleSize(0.035);
   plot__364->GetZaxis()->SetTitleFont(42);
   plot__364->Draw("PSAME");
   d->Modified();
   canvas200_275/AlphaT_3->cd();
   canvas200_275/AlphaT_3->Modified();
   canvas200_275/AlphaT_3->cd();
   canvas200_275/AlphaT_3->SetSelected(canvas200_275/AlphaT_3);
}
