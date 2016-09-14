void Stacked_AlphaT_3_375_upwards()
{
//=========Macro generated from canvas: canvas375_475/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:53:50 2016) by ROOT version6.06/06
   TCanvas *canvas375_475/AlphaT_3 = new TCanvas("canvas375_475/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
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
   Double_t xAxis178[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__168 = new TH1D("plot__168","",24, xAxis178);
   plot__168->SetBinContent(10,658);
   plot__168->SetBinContent(11,244);
   plot__168->SetBinContent(12,114);
   plot__168->SetBinContent(13,57);
   plot__168->SetBinContent(14,30);
   plot__168->SetBinContent(15,17.5);
   plot__168->SetBinContent(16,5.5);
   plot__168->SetBinContent(17,3.6);
   plot__168->SetBinContent(18,0.6);
   plot__168->SetBinContent(19,0.8);
   plot__168->SetBinContent(20,0.2);
   plot__168->SetBinError(10,25.65151);
   plot__168->SetBinError(11,15.6205);
   plot__168->SetBinError(12,10.67708);
   plot__168->SetBinError(13,7.549834);
   plot__168->SetBinError(14,5.477226);
   plot__168->SetBinError(15,2.95804);
   plot__168->SetBinError(16,2.49);
   plot__168->SetBinError(17,2.14);
   plot__168->SetMinimum(0.11);
   plot__168->SetMaximum(7673.458);
   plot__168->SetEntries(1200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__168->SetLineColor(ci);
   plot__168->SetLineWidth(2);
   plot__168->SetMarkerStyle(20);
   plot__168->SetMarkerSize(1.5);
   plot__168->GetXaxis()->SetTitle("#alpha_{T}");
   plot__168->GetXaxis()->SetRange(1,23);
   plot__168->GetXaxis()->SetLabelFont(42);
   plot__168->GetXaxis()->SetLabelSize(0.035);
   plot__168->GetXaxis()->SetTitleSize(0.035);
   plot__168->GetXaxis()->SetTitleFont(42);
   plot__168->GetYaxis()->SetTitle("Events");
   plot__168->GetYaxis()->SetLabelFont(42);
   plot__168->GetYaxis()->SetLabelSize(0.035);
   plot__168->GetYaxis()->SetTitleSize(0.035);
   plot__168->GetYaxis()->SetTitleOffset(1.3);
   plot__168->GetYaxis()->SetTitleFont(42);
   plot__168->GetZaxis()->SetLabelFont(42);
   plot__168->GetZaxis()->SetLabelSize(0.035);
   plot__168->GetZaxis()->SetTitleSize(0.035);
   plot__168->GetZaxis()->SetTitleFont(42);
   plot__168->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis179[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_11 = new TH1F("_stack_11","",24, xAxis179);
   _stack_11->SetMinimum(0.3069383);
   _stack_11->SetMaximum(1227.753);
   _stack_11->SetDirectory(0);
   _stack_11->SetStats(0);
   _stack_11->GetXaxis()->SetLabelFont(42);
   _stack_11->GetXaxis()->SetLabelOffset(0.007);
   _stack_11->GetXaxis()->SetLabelSize(0.05);
   _stack_11->GetXaxis()->SetTitleSize(0.05);
   _stack_11->GetYaxis()->SetLabelFont(42);
   _stack_11->GetYaxis()->SetLabelOffset(0.007);
   _stack_11->GetYaxis()->SetLabelSize(0.05);
   _stack_11->GetZaxis()->SetLabelFont(42);
   _stack_11->GetZaxis()->SetLabelOffset(0.007);
   _stack_11->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_11);
   
   Double_t xAxis180[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__169 = new TH1D("plot__169","",24, xAxis180);
   plot__169->SetBinContent(10,1.190627);
   plot__169->SetBinContent(11,0.281399);
   plot__169->SetBinContent(12,0.04721664);
   plot__169->SetBinContent(13,0.02191586);
   plot__169->SetBinContent(14,0.03281616);
   plot__169->SetBinContent(15,0.02519106);
   plot__169->SetBinContent(19,0.003522126);
   plot__169->SetBinError(10,0.1964732);
   plot__169->SetBinError(11,0.07906873);
   plot__169->SetBinError(12,0.03341428);
   plot__169->SetBinError(13,0.02191586);
   plot__169->SetBinError(14,0.02795898);
   plot__169->SetBinError(15,0.01785529);
   plot__169->SetBinError(19,0.003522126);
   plot__169->SetEntries(96);
   plot__169->SetFillColor(6);
   plot__169->SetLineColor(6);
   plot__169->SetLineWidth(3);
   plot__169->GetXaxis()->SetTitle("#alpha_{T}");
   plot__169->GetXaxis()->SetRange(1,23);
   plot__169->GetXaxis()->SetLabelFont(42);
   plot__169->GetXaxis()->SetLabelSize(0.035);
   plot__169->GetXaxis()->SetTitleSize(0.035);
   plot__169->GetXaxis()->SetTitleFont(42);
   plot__169->GetYaxis()->SetTitle("Events/0.025");
   plot__169->GetYaxis()->SetLabelFont(42);
   plot__169->GetYaxis()->SetLabelSize(0.035);
   plot__169->GetYaxis()->SetTitleSize(0.035);
   plot__169->GetYaxis()->SetTitleFont(42);
   plot__169->GetZaxis()->SetLabelFont(42);
   plot__169->GetZaxis()->SetLabelSize(0.035);
   plot__169->GetZaxis()->SetTitleSize(0.035);
   plot__169->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis181[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__170 = new TH1D("plot__170","",24, xAxis181);
   plot__170->SetBinContent(11,7.30815);
   plot__170->SetBinError(11,7.30815);
   plot__170->SetEntries(26);
   plot__170->SetFillColor(7);
   plot__170->SetLineColor(7);
   plot__170->SetLineStyle(10);
   plot__170->SetLineWidth(3);
   plot__170->GetXaxis()->SetTitle("#alpha_{T}");
   plot__170->GetXaxis()->SetRange(1,23);
   plot__170->GetXaxis()->SetLabelFont(42);
   plot__170->GetXaxis()->SetLabelSize(0.035);
   plot__170->GetXaxis()->SetTitleSize(0.035);
   plot__170->GetXaxis()->SetTitleFont(42);
   plot__170->GetYaxis()->SetTitle("Events/0.025");
   plot__170->GetYaxis()->SetLabelFont(42);
   plot__170->GetYaxis()->SetLabelSize(0.035);
   plot__170->GetYaxis()->SetTitleSize(0.035);
   plot__170->GetYaxis()->SetTitleFont(42);
   plot__170->GetZaxis()->SetLabelFont(42);
   plot__170->GetZaxis()->SetLabelSize(0.035);
   plot__170->GetZaxis()->SetTitleSize(0.035);
   plot__170->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis182[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__171 = new TH1D("plot__171","",24, xAxis182);
   plot__171->SetBinContent(10,6.253783);
   plot__171->SetBinContent(11,2.966938);
   plot__171->SetBinContent(12,1.249068);
   plot__171->SetBinContent(13,0.695571);
   plot__171->SetBinContent(14,0.5037664);
   plot__171->SetBinContent(15,0.535273);
   plot__171->SetBinContent(16,0.1595321);
   plot__171->SetBinContent(17,0.04917001);
   plot__171->SetBinContent(18,0.01575297);
   plot__171->SetBinContent(19,0.01618716);
   plot__171->SetBinContent(20,0.007127019);
   plot__171->SetBinError(10,0.6171959);
   plot__171->SetBinError(11,0.4314406);
   plot__171->SetBinError(12,0.2728721);
   plot__171->SetBinError(13,0.1873052);
   plot__171->SetBinError(14,0.1878353);
   plot__171->SetBinError(15,0.1369593);
   plot__171->SetBinError(16,0.04434884);
   plot__171->SetBinError(17,0.01621466);
   plot__171->SetBinError(18,0.009889281);
   plot__171->SetBinError(19,0.009349536);
   plot__171->SetBinError(20,0.007127019);
   plot__171->SetEntries(495);
   plot__171->SetFillColor(44);
   plot__171->SetLineColor(44);
   plot__171->SetLineWidth(3);
   plot__171->GetXaxis()->SetTitle("#alpha_{T}");
   plot__171->GetXaxis()->SetRange(1,23);
   plot__171->GetXaxis()->SetLabelFont(42);
   plot__171->GetXaxis()->SetLabelSize(0.035);
   plot__171->GetXaxis()->SetTitleSize(0.035);
   plot__171->GetXaxis()->SetTitleFont(42);
   plot__171->GetYaxis()->SetTitle("Events/0.025");
   plot__171->GetYaxis()->SetLabelFont(42);
   plot__171->GetYaxis()->SetLabelSize(0.035);
   plot__171->GetYaxis()->SetTitleSize(0.035);
   plot__171->GetYaxis()->SetTitleFont(42);
   plot__171->GetZaxis()->SetLabelFont(42);
   plot__171->GetZaxis()->SetLabelSize(0.035);
   plot__171->GetZaxis()->SetTitleSize(0.035);
   plot__171->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis183[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__172 = new TH1D("plot__172","",24, xAxis183);
   plot__172->SetBinContent(10,17.64808);
   plot__172->SetBinContent(11,5.918575);
   plot__172->SetBinContent(12,1.826917);
   plot__172->SetBinContent(13,0.5842133);
   plot__172->SetBinContent(14,0.3195099);
   plot__172->SetBinContent(15,0.2298168);
   plot__172->SetBinError(10,3.003868);
   plot__172->SetBinError(11,1.796202);
   plot__172->SetBinError(12,0.8479571);
   plot__172->SetBinError(13,0.5842133);
   plot__172->SetBinError(14,0.3195099);
   plot__172->SetBinError(15,0.2298168);
   plot__172->SetEntries(85);
   plot__172->SetFillColor(40);
   plot__172->SetLineColor(40);
   plot__172->SetLineWidth(3);
   plot__172->GetXaxis()->SetTitle("#alpha_{T}");
   plot__172->GetXaxis()->SetRange(1,23);
   plot__172->GetXaxis()->SetLabelFont(42);
   plot__172->GetXaxis()->SetLabelSize(0.035);
   plot__172->GetXaxis()->SetTitleSize(0.035);
   plot__172->GetXaxis()->SetTitleFont(42);
   plot__172->GetYaxis()->SetTitle("Events/0.025");
   plot__172->GetYaxis()->SetLabelFont(42);
   plot__172->GetYaxis()->SetLabelSize(0.035);
   plot__172->GetYaxis()->SetTitleSize(0.035);
   plot__172->GetYaxis()->SetTitleFont(42);
   plot__172->GetZaxis()->SetLabelFont(42);
   plot__172->GetZaxis()->SetLabelSize(0.035);
   plot__172->GetZaxis()->SetTitleSize(0.035);
   plot__172->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis184[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__173 = new TH1D("plot__173","",24, xAxis184);
   plot__173->SetBinContent(10,186.2021);
   plot__173->SetBinContent(11,57.67718);
   plot__173->SetBinContent(12,27.5928);
   plot__173->SetBinContent(13,12.50719);
   plot__173->SetBinContent(14,7.438001);
   plot__173->SetBinContent(15,4.197848);
   plot__173->SetBinContent(16,2.023727);
   plot__173->SetBinContent(17,0.9714371);
   plot__173->SetBinContent(18,0.2562656);
   plot__173->SetBinContent(19,0.02456751);
   plot__173->SetBinContent(20,0.0691242);
   plot__173->SetBinError(10,4.877562);
   plot__173->SetBinError(11,2.731111);
   plot__173->SetBinError(12,1.878064);
   plot__173->SetBinError(13,1.227199);
   plot__173->SetBinError(14,0.9818706);
   plot__173->SetBinError(15,0.5145428);
   plot__173->SetBinError(16,0.3559127);
   plot__173->SetBinError(17,0.1579119);
   plot__173->SetBinError(18,0.08710858);
   plot__173->SetBinError(19,0.02456751);
   plot__173->SetBinError(20,0.04285195);
   plot__173->SetEntries(2813);
   plot__173->SetFillColor(4);
   plot__173->SetLineColor(4);
   plot__173->SetLineWidth(3);
   plot__173->GetXaxis()->SetTitle("#alpha_{T}");
   plot__173->GetXaxis()->SetRange(1,23);
   plot__173->GetXaxis()->SetLabelFont(42);
   plot__173->GetXaxis()->SetLabelSize(0.035);
   plot__173->GetXaxis()->SetTitleSize(0.035);
   plot__173->GetXaxis()->SetTitleFont(42);
   plot__173->GetYaxis()->SetTitle("Events/0.025");
   plot__173->GetYaxis()->SetLabelFont(42);
   plot__173->GetYaxis()->SetLabelSize(0.035);
   plot__173->GetYaxis()->SetTitleSize(0.035);
   plot__173->GetYaxis()->SetTitleFont(42);
   plot__173->GetZaxis()->SetLabelFont(42);
   plot__173->GetZaxis()->SetLabelSize(0.035);
   plot__173->GetZaxis()->SetTitleSize(0.035);
   plot__173->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis185[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__174 = new TH1D("plot__174","",24, xAxis185);
   plot__174->SetBinContent(10,285.7131);
   plot__174->SetBinContent(11,86.73479);
   plot__174->SetBinContent(12,33.46933);
   plot__174->SetBinContent(13,13.12387);
   plot__174->SetBinContent(14,6.94681);
   plot__174->SetBinContent(15,2.456825);
   plot__174->SetBinContent(16,1.090458);
   plot__174->SetBinContent(17,0.8549522);
   plot__174->SetBinContent(18,0.2682641);
   plot__174->SetBinContent(19,0.1397479);
   plot__174->SetBinError(10,7.902097);
   plot__174->SetBinError(11,4.382594);
   plot__174->SetBinError(12,2.678418);
   plot__174->SetBinError(13,1.727506);
   plot__174->SetBinError(14,1.229786);
   plot__174->SetBinError(15,0.5131908);
   plot__174->SetBinError(16,0.340122);
   plot__174->SetBinError(17,0.200271);
   plot__174->SetBinError(18,0.1147407);
   plot__174->SetBinError(19,0.08093155);
   plot__174->SetEntries(2248);
   plot__174->SetFillColor(2);
   plot__174->SetLineColor(2);
   plot__174->SetLineWidth(3);
   plot__174->GetXaxis()->SetTitle("#alpha_{T}");
   plot__174->GetXaxis()->SetRange(1,23);
   plot__174->GetXaxis()->SetLabelFont(42);
   plot__174->GetXaxis()->SetLabelSize(0.035);
   plot__174->GetXaxis()->SetTitleSize(0.035);
   plot__174->GetXaxis()->SetTitleFont(42);
   plot__174->GetYaxis()->SetTitle("Events/0.025");
   plot__174->GetYaxis()->SetLabelFont(42);
   plot__174->GetYaxis()->SetLabelSize(0.035);
   plot__174->GetYaxis()->SetTitleSize(0.035);
   plot__174->GetYaxis()->SetTitleFont(42);
   plot__174->GetZaxis()->SetLabelFont(42);
   plot__174->GetZaxis()->SetLabelSize(0.035);
   plot__174->GetZaxis()->SetTitleSize(0.035);
   plot__174->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis186[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__175 = new TH1D("plot__175","",24, xAxis186);
   plot__175->SetBinContent(10,270.338);
   plot__175->SetBinContent(11,106.093);
   plot__175->SetBinContent(12,51.30711);
   plot__175->SetBinContent(13,29.2891);
   plot__175->SetBinContent(14,17.23115);
   plot__175->SetBinContent(15,9.038213);
   plot__175->SetBinContent(16,4.231737);
   plot__175->SetBinContent(17,2.091971);
   plot__175->SetBinContent(18,0.6655129);
   plot__175->SetBinContent(19,0.2463664);
   plot__175->SetBinContent(20,0.1082638);
   plot__175->SetBinContent(21,0.03645284);
   plot__175->SetBinContent(22,0.03647225);
   plot__175->SetBinContent(23,0.01385033);
   plot__175->SetBinError(10,3.045776);
   plot__175->SetBinError(11,1.914409);
   plot__175->SetBinError(12,1.356321);
   plot__175->SetBinError(13,0.978803);
   plot__175->SetBinError(14,0.7527237);
   plot__175->SetBinError(15,0.3928387);
   plot__175->SetBinError(16,0.2639959);
   plot__175->SetBinError(17,0.1253277);
   plot__175->SetBinError(18,0.06320727);
   plot__175->SetBinError(19,0.03834509);
   plot__175->SetBinError(20,0.0273374);
   plot__175->SetBinError(21,0.009181429);
   plot__175->SetBinError(22,0.01527186);
   plot__175->SetBinError(23,0.08321758);
   plot__175->SetEntries(21238);
   plot__175->SetFillColor(5);
   plot__175->SetLineColor(5);
   plot__175->SetLineWidth(3);
   plot__175->GetXaxis()->SetTitle("#alpha_{T}");
   plot__175->GetXaxis()->SetRange(1,23);
   plot__175->GetXaxis()->SetLabelFont(42);
   plot__175->GetXaxis()->SetLabelSize(0.035);
   plot__175->GetXaxis()->SetTitleSize(0.035);
   plot__175->GetXaxis()->SetTitleFont(42);
   plot__175->GetYaxis()->SetTitle("Events/0.025");
   plot__175->GetYaxis()->SetLabelFont(42);
   plot__175->GetYaxis()->SetLabelSize(0.035);
   plot__175->GetYaxis()->SetTitleSize(0.035);
   plot__175->GetYaxis()->SetTitleFont(42);
   plot__175->GetZaxis()->SetLabelFont(42);
   plot__175->GetZaxis()->SetLabelSize(0.035);
   plot__175->GetZaxis()->SetTitleSize(0.035);
   plot__175->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis187[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__176 = new TH1D("plot__176","",24, xAxis187);
   plot__176->SetBinContent(10,658);
   plot__176->SetBinContent(11,244);
   plot__176->SetBinContent(12,114);
   plot__176->SetBinContent(13,57);
   plot__176->SetBinContent(14,30);
   plot__176->SetBinContent(15,17.5);
   plot__176->SetBinContent(16,5.5);
   plot__176->SetBinContent(17,3.6);
   plot__176->SetBinContent(18,0.6);
   plot__176->SetBinContent(19,0.8);
   plot__176->SetBinContent(20,0.2);
   plot__176->SetBinError(10,25.65151);
   plot__176->SetBinError(11,15.6205);
   plot__176->SetBinError(12,10.67708);
   plot__176->SetBinError(13,7.549834);
   plot__176->SetBinError(14,5.477226);
   plot__176->SetBinError(15,2.95804);
   plot__176->SetBinError(16,2.49);
   plot__176->SetBinError(17,2.14);
   plot__176->SetMinimum(0.11);
   plot__176->SetMaximum(7673.458);
   plot__176->SetEntries(1200);

   ci = TColor::GetColor("#000099");
   plot__176->SetLineColor(ci);
   plot__176->SetLineWidth(2);
   plot__176->SetMarkerStyle(20);
   plot__176->SetMarkerSize(1.5);
   plot__176->GetXaxis()->SetTitle("#alpha_{T}");
   plot__176->GetXaxis()->SetRange(1,23);
   plot__176->GetXaxis()->SetLabelFont(42);
   plot__176->GetXaxis()->SetLabelSize(0.035);
   plot__176->GetXaxis()->SetTitleSize(0.035);
   plot__176->GetXaxis()->SetTitleFont(42);
   plot__176->GetYaxis()->SetTitle("Events");
   plot__176->GetYaxis()->SetLabelFont(42);
   plot__176->GetYaxis()->SetLabelSize(0.035);
   plot__176->GetYaxis()->SetTitleSize(0.035);
   plot__176->GetYaxis()->SetTitleOffset(1.3);
   plot__176->GetYaxis()->SetTitleFont(42);
   plot__176->GetZaxis()->SetLabelFont(42);
   plot__176->GetZaxis()->SetLabelSize(0.035);
   plot__176->GetZaxis()->SetTitleSize(0.035);
   plot__176->GetZaxis()->SetTitleFont(42);
   plot__176->Draw("PSAME");
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
   Double_t xAxis188[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__177 = new TH1D("plot__177","",24, xAxis188);
   plot__177->SetBinContent(10,0.8575013);
   plot__177->SetBinContent(11,0.9139261);
   plot__177->SetBinContent(12,0.9870775);
   plot__177->SetBinContent(13,1.013841);
   plot__177->SetBinContent(14,0.9238715);
   plot__177->SetBinContent(15,1.061689);
   plot__177->SetBinContent(16,0.7328004);
   plot__177->SetBinContent(17,0.9073655);
   plot__177->SetBinContent(18,0.4975968);
   plot__177->SetBinContent(19,1.858774);
   plot__177->SetBinContent(20,1.083923);
   plot__177->SetBinError(10,0.03342888);
   plot__177->SetBinError(11,0.05850812);
   plot__177->SetBinError(12,0.09244828);
   plot__177->SetBinError(13,0.1342865);
   plot__177->SetBinError(14,0.1686751);
   plot__177->SetBinError(15,0.1794582);
   plot__177->SetBinError(16,0.3317587);
   plot__177->SetBinError(17,0.5393784);
   plot__177->SetMinimum(0);
   plot__177->SetMaximum(2);
   plot__177->SetEntries(153.0392);

   ci = TColor::GetColor("#000099");
   plot__177->SetLineColor(ci);
   plot__177->SetLineWidth(2);
   plot__177->SetMarkerStyle(20);
   plot__177->SetMarkerSize(1.5);
   plot__177->GetXaxis()->SetRange(1,23);
   plot__177->GetXaxis()->SetLabelFont(42);
   plot__177->GetXaxis()->SetLabelSize(0.12);
   plot__177->GetXaxis()->SetTitleSize(0.035);
   plot__177->GetXaxis()->SetTitleFont(42);
   plot__177->GetYaxis()->SetTitle("Data/MC");
   plot__177->GetYaxis()->SetNdivisions(505);
   plot__177->GetYaxis()->SetLabelFont(42);
   plot__177->GetYaxis()->SetLabelSize(0.11);
   plot__177->GetYaxis()->SetTitleSize(0.1);
   plot__177->GetYaxis()->SetTitleOffset(0.5);
   plot__177->GetYaxis()->SetTitleFont(42);
   plot__177->GetZaxis()->SetLabelFont(42);
   plot__177->GetZaxis()->SetLabelSize(0.035);
   plot__177->GetZaxis()->SetTitleSize(0.035);
   plot__177->GetZaxis()->SetTitleFont(42);
   plot__177->Draw("p");
   
   Double_t Graph_from_plot_fx1044[24] = {
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
   Double_t Graph_from_plot_fy1044[24] = {
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
   Double_t Graph_from_plot_fex1044[24] = {
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
   Double_t Graph_from_plot_fey1044[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1044,Graph_from_plot_fy1044,Graph_from_plot_fex1044,Graph_from_plot_fey1044);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1044 = new TH1F("Graph_Graph_from_plot1044","",100,0,11);
   Graph_Graph_from_plot1044->SetMinimum(-6.210015);
   Graph_Graph_from_plot1044->SetMaximum(8.210015);
   Graph_Graph_from_plot1044->SetDirectory(0);
   Graph_Graph_from_plot1044->SetStats(0);
   Graph_Graph_from_plot1044->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1044->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1044->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1044->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1044->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1044->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1044->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1044->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1044->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1044->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1044);
   
   gre->Draw("2");
   Double_t xAxis189[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__178 = new TH1D("plot__178","",24, xAxis189);
   plot__178->SetBinContent(10,0.8575013);
   plot__178->SetBinContent(11,0.9139261);
   plot__178->SetBinContent(12,0.9870775);
   plot__178->SetBinContent(13,1.013841);
   plot__178->SetBinContent(14,0.9238715);
   plot__178->SetBinContent(15,1.061689);
   plot__178->SetBinContent(16,0.7328004);
   plot__178->SetBinContent(17,0.9073655);
   plot__178->SetBinContent(18,0.4975968);
   plot__178->SetBinContent(19,1.858774);
   plot__178->SetBinContent(20,1.083923);
   plot__178->SetBinError(10,0.03342888);
   plot__178->SetBinError(11,0.05850812);
   plot__178->SetBinError(12,0.09244828);
   plot__178->SetBinError(13,0.1342865);
   plot__178->SetBinError(14,0.1686751);
   plot__178->SetBinError(15,0.1794582);
   plot__178->SetBinError(16,0.3317587);
   plot__178->SetBinError(17,0.5393784);
   plot__178->SetMinimum(0);
   plot__178->SetMaximum(2);
   plot__178->SetEntries(153.0392);

   ci = TColor::GetColor("#000099");
   plot__178->SetLineColor(ci);
   plot__178->SetLineWidth(2);
   plot__178->SetMarkerStyle(20);
   plot__178->SetMarkerSize(1.5);
   plot__178->GetXaxis()->SetRange(1,23);
   plot__178->GetXaxis()->SetLabelFont(42);
   plot__178->GetXaxis()->SetLabelSize(0.12);
   plot__178->GetXaxis()->SetTitleSize(0.035);
   plot__178->GetXaxis()->SetTitleFont(42);
   plot__178->GetYaxis()->SetTitle("Data/MC");
   plot__178->GetYaxis()->SetNdivisions(505);
   plot__178->GetYaxis()->SetLabelFont(42);
   plot__178->GetYaxis()->SetLabelSize(0.11);
   plot__178->GetYaxis()->SetTitleSize(0.1);
   plot__178->GetYaxis()->SetTitleOffset(0.5);
   plot__178->GetYaxis()->SetTitleFont(42);
   plot__178->GetZaxis()->SetLabelFont(42);
   plot__178->GetZaxis()->SetLabelSize(0.035);
   plot__178->GetZaxis()->SetTitleSize(0.035);
   plot__178->GetZaxis()->SetTitleFont(42);
   plot__178->Draw("PSAME");
   d->Modified();
   canvas375_475/AlphaT_3->cd();
   canvas375_475/AlphaT_3->Modified();
   canvas375_475/AlphaT_3->cd();
   canvas375_475/AlphaT_3->SetSelected(canvas375_475/AlphaT_3);
}
