void Stacked_AlphaT_3_btag_one_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_one_375_475/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:26 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_one_375_475/AlphaT_3 = new TCanvas("canvasbtag_one_375_475/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_one_375_475/AlphaT_3->SetHighLightColor(2);
   canvasbtag_one_375_475/AlphaT_3->Range(0,0,1,1);
   canvasbtag_one_375_475/AlphaT_3->SetFillColor(0);
   canvasbtag_one_375_475/AlphaT_3->SetBorderMode(0);
   canvasbtag_one_375_475/AlphaT_3->SetBorderSize(2);
   canvasbtag_one_375_475/AlphaT_3->SetTickx(1);
   canvasbtag_one_375_475/AlphaT_3->SetTicky(1);
   canvasbtag_one_375_475/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.492078,3.4875,3.842632);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1762[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1656 = new TH1D("plot__1656","",24, xAxis1762);
   plot__1656->SetBinContent(10,174);
   plot__1656->SetBinContent(11,61);
   plot__1656->SetBinContent(12,25);
   plot__1656->SetBinContent(13,15);
   plot__1656->SetBinContent(14,6);
   plot__1656->SetBinContent(15,3.5);
   plot__1656->SetBinContent(16,2);
   plot__1656->SetBinContent(17,0.8);
   plot__1656->SetBinContent(18,0.2);
   plot__1656->SetBinContent(20,0.2);
   plot__1656->SetBinError(10,13.19091);
   plot__1656->SetBinError(11,7.81025);
   plot__1656->SetBinError(12,5);
   plot__1656->SetBinError(13,3.872983);
   plot__1656->SetBinError(14,2.49);
   plot__1656->SetBinError(15,2.14);
   plot__1656->SetBinError(16,2);
   plot__1656->SetMinimum(0.11);
   plot__1656->SetMaximum(2037.798);
   plot__1656->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1656->SetLineColor(ci);
   plot__1656->SetLineWidth(2);
   plot__1656->SetMarkerStyle(20);
   plot__1656->SetMarkerSize(1.5);
   plot__1656->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1656->GetXaxis()->SetRange(1,23);
   plot__1656->GetXaxis()->SetLabelFont(42);
   plot__1656->GetXaxis()->SetLabelSize(0.035);
   plot__1656->GetXaxis()->SetTitleSize(0.035);
   plot__1656->GetXaxis()->SetTitleFont(42);
   plot__1656->GetYaxis()->SetTitle("Events");
   plot__1656->GetYaxis()->SetLabelFont(42);
   plot__1656->GetYaxis()->SetLabelSize(0.035);
   plot__1656->GetYaxis()->SetTitleSize(0.035);
   plot__1656->GetYaxis()->SetTitleOffset(1.3);
   plot__1656->GetYaxis()->SetTitleFont(42);
   plot__1656->GetZaxis()->SetLabelFont(42);
   plot__1656->GetZaxis()->SetLabelSize(0.035);
   plot__1656->GetZaxis()->SetTitleSize(0.035);
   plot__1656->GetZaxis()->SetTitleFont(42);
   plot__1656->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1763[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_107 = new TH1F("_stack_107","",24, xAxis1763);
   _stack_107->SetMinimum(0.08151191);
   _stack_107->SetMaximum(326.0476);
   _stack_107->SetDirectory(0);
   _stack_107->SetStats(0);
   _stack_107->GetXaxis()->SetLabelFont(42);
   _stack_107->GetXaxis()->SetLabelOffset(0.007);
   _stack_107->GetXaxis()->SetLabelSize(0.05);
   _stack_107->GetXaxis()->SetTitleSize(0.05);
   _stack_107->GetYaxis()->SetLabelFont(42);
   _stack_107->GetYaxis()->SetLabelOffset(0.007);
   _stack_107->GetYaxis()->SetLabelSize(0.05);
   _stack_107->GetZaxis()->SetLabelFont(42);
   _stack_107->GetZaxis()->SetLabelOffset(0.007);
   _stack_107->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_107);
   
   Double_t xAxis1764[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1657 = new TH1D("plot__1657","",24, xAxis1764);
   plot__1657->SetEntries(25);
   plot__1657->SetFillColor(7);
   plot__1657->SetLineColor(7);
   plot__1657->SetLineStyle(10);
   plot__1657->SetLineWidth(3);
   plot__1657->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1657->GetXaxis()->SetRange(1,23);
   plot__1657->GetXaxis()->SetLabelFont(42);
   plot__1657->GetXaxis()->SetLabelSize(0.035);
   plot__1657->GetXaxis()->SetTitleSize(0.035);
   plot__1657->GetXaxis()->SetTitleFont(42);
   plot__1657->GetYaxis()->SetTitle("Events/0.025");
   plot__1657->GetYaxis()->SetLabelFont(42);
   plot__1657->GetYaxis()->SetLabelSize(0.035);
   plot__1657->GetYaxis()->SetTitleSize(0.035);
   plot__1657->GetYaxis()->SetTitleFont(42);
   plot__1657->GetZaxis()->SetLabelFont(42);
   plot__1657->GetZaxis()->SetLabelSize(0.035);
   plot__1657->GetZaxis()->SetTitleSize(0.035);
   plot__1657->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1765[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1658 = new TH1D("plot__1658","",24, xAxis1765);
   plot__1658->SetBinContent(10,0.02449838);
   plot__1658->SetBinContent(11,0.04407127);
   plot__1658->SetBinContent(19,0.003522126);
   plot__1658->SetBinError(10,0.02449838);
   plot__1658->SetBinError(11,0.03124744);
   plot__1658->SetBinError(19,0.003522126);
   plot__1658->SetEntries(29);
   plot__1658->SetFillColor(6);
   plot__1658->SetLineColor(6);
   plot__1658->SetLineWidth(3);
   plot__1658->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1658->GetXaxis()->SetRange(1,23);
   plot__1658->GetXaxis()->SetLabelFont(42);
   plot__1658->GetXaxis()->SetLabelSize(0.035);
   plot__1658->GetXaxis()->SetTitleSize(0.035);
   plot__1658->GetXaxis()->SetTitleFont(42);
   plot__1658->GetYaxis()->SetTitle("Events/0.025");
   plot__1658->GetYaxis()->SetLabelFont(42);
   plot__1658->GetYaxis()->SetLabelSize(0.035);
   plot__1658->GetYaxis()->SetTitleSize(0.035);
   plot__1658->GetYaxis()->SetTitleFont(42);
   plot__1658->GetZaxis()->SetLabelFont(42);
   plot__1658->GetZaxis()->SetLabelSize(0.035);
   plot__1658->GetZaxis()->SetTitleSize(0.035);
   plot__1658->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1766[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1659 = new TH1D("plot__1659","",24, xAxis1766);
   plot__1659->SetBinContent(10,1.17647);
   plot__1659->SetBinContent(11,0.9065733);
   plot__1659->SetBinContent(12,0.3200873);
   plot__1659->SetBinContent(13,0.1163655);
   plot__1659->SetBinContent(14,0.1484016);
   plot__1659->SetBinContent(15,0.06244552);
   plot__1659->SetBinContent(16,0.01100341);
   plot__1659->SetBinContent(18,0.00208246);
   plot__1659->SetBinContent(19,0.005182292);
   plot__1659->SetBinError(10,0.2767309);
   plot__1659->SetBinError(11,0.3236171);
   plot__1659->SetBinError(12,0.1855624);
   plot__1659->SetBinError(13,0.05291164);
   plot__1659->SetBinError(14,0.06250768);
   plot__1659->SetBinError(15,0.0315604);
   plot__1659->SetBinError(16,0.01100341);
   plot__1659->SetBinError(18,0.00208246);
   plot__1659->SetBinError(19,0.005182292);
   plot__1659->SetEntries(115);
   plot__1659->SetFillColor(44);
   plot__1659->SetLineColor(44);
   plot__1659->SetLineWidth(3);
   plot__1659->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1659->GetXaxis()->SetRange(1,23);
   plot__1659->GetXaxis()->SetLabelFont(42);
   plot__1659->GetXaxis()->SetLabelSize(0.035);
   plot__1659->GetXaxis()->SetTitleSize(0.035);
   plot__1659->GetXaxis()->SetTitleFont(42);
   plot__1659->GetYaxis()->SetTitle("Events/0.025");
   plot__1659->GetYaxis()->SetLabelFont(42);
   plot__1659->GetYaxis()->SetLabelSize(0.035);
   plot__1659->GetYaxis()->SetTitleSize(0.035);
   plot__1659->GetYaxis()->SetTitleFont(42);
   plot__1659->GetZaxis()->SetLabelFont(42);
   plot__1659->GetZaxis()->SetLabelSize(0.035);
   plot__1659->GetZaxis()->SetTitleSize(0.035);
   plot__1659->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1767[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1660 = new TH1D("plot__1660","",24, xAxis1767);
   plot__1660->SetBinContent(10,8.817492);
   plot__1660->SetBinContent(11,2.765183);
   plot__1660->SetBinContent(12,1.826917);
   plot__1660->SetBinContent(15,0.2298168);
   plot__1660->SetBinError(10,2.107539);
   plot__1660->SetBinError(11,1.206519);
   plot__1660->SetBinError(12,0.8479571);
   plot__1660->SetBinError(15,0.2298168);
   plot__1660->SetEntries(56);
   plot__1660->SetFillColor(40);
   plot__1660->SetLineColor(40);
   plot__1660->SetLineWidth(3);
   plot__1660->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1660->GetXaxis()->SetRange(1,23);
   plot__1660->GetXaxis()->SetLabelFont(42);
   plot__1660->GetXaxis()->SetLabelSize(0.035);
   plot__1660->GetXaxis()->SetTitleSize(0.035);
   plot__1660->GetXaxis()->SetTitleFont(42);
   plot__1660->GetYaxis()->SetTitle("Events/0.025");
   plot__1660->GetYaxis()->SetLabelFont(42);
   plot__1660->GetYaxis()->SetLabelSize(0.035);
   plot__1660->GetYaxis()->SetTitleSize(0.035);
   plot__1660->GetYaxis()->SetTitleFont(42);
   plot__1660->GetZaxis()->SetLabelFont(42);
   plot__1660->GetZaxis()->SetLabelSize(0.035);
   plot__1660->GetZaxis()->SetTitleSize(0.035);
   plot__1660->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1768[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1661 = new TH1D("plot__1661","",24, xAxis1768);
   plot__1661->SetBinContent(10,25.08238);
   plot__1661->SetBinContent(11,7.428212);
   plot__1661->SetBinContent(12,3.350286);
   plot__1661->SetBinContent(13,1.802669);
   plot__1661->SetBinContent(14,1.133802);
   plot__1661->SetBinContent(15,0.5568825);
   plot__1661->SetBinContent(16,0.04751005);
   plot__1661->SetBinContent(17,0.1380486);
   plot__1661->SetBinContent(18,0.1211321);
   plot__1661->SetBinError(10,1.847669);
   plot__1661->SetBinError(11,1.01236);
   plot__1661->SetBinError(12,0.6796588);
   plot__1661->SetBinError(13,0.4600633);
   plot__1661->SetBinError(14,0.3920567);
   plot__1661->SetBinError(15,0.1889419);
   plot__1661->SetBinError(16,0.04751005);
   plot__1661->SetBinError(17,0.06319113);
   plot__1661->SetBinError(18,0.06718244);
   plot__1661->SetEntries(377);
   plot__1661->SetFillColor(4);
   plot__1661->SetLineColor(4);
   plot__1661->SetLineWidth(3);
   plot__1661->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1661->GetXaxis()->SetRange(1,23);
   plot__1661->GetXaxis()->SetLabelFont(42);
   plot__1661->GetXaxis()->SetLabelSize(0.035);
   plot__1661->GetXaxis()->SetTitleSize(0.035);
   plot__1661->GetXaxis()->SetTitleFont(42);
   plot__1661->GetYaxis()->SetTitle("Events/0.025");
   plot__1661->GetYaxis()->SetLabelFont(42);
   plot__1661->GetYaxis()->SetLabelSize(0.035);
   plot__1661->GetYaxis()->SetTitleSize(0.035);
   plot__1661->GetYaxis()->SetTitleFont(42);
   plot__1661->GetZaxis()->SetLabelFont(42);
   plot__1661->GetZaxis()->SetLabelSize(0.035);
   plot__1661->GetZaxis()->SetTitleSize(0.035);
   plot__1661->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1769[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1662 = new TH1D("plot__1662","",24, xAxis1769);
   plot__1662->SetBinContent(10,34.94914);
   plot__1662->SetBinContent(11,14.25675);
   plot__1662->SetBinContent(12,7.387533);
   plot__1662->SetBinContent(13,3.656759);
   plot__1662->SetBinContent(14,2.556534);
   plot__1662->SetBinContent(15,1.166222);
   plot__1662->SetBinContent(16,0.4180641);
   plot__1662->SetBinContent(17,0.2126775);
   plot__1662->SetBinContent(18,0.06959555);
   plot__1662->SetBinContent(19,0.04987289);
   plot__1662->SetBinContent(20,0.01782246);
   plot__1662->SetBinContent(21,0.009008467);
   plot__1662->SetBinContent(22,0.00206999);
   plot__1662->SetBinError(10,1.114698);
   plot__1662->SetBinError(11,0.7089565);
   plot__1662->SetBinError(12,0.5432667);
   plot__1662->SetBinError(13,0.3027409);
   plot__1662->SetBinError(14,0.3014657);
   plot__1662->SetBinError(15,0.1371493);
   plot__1662->SetBinError(16,0.07222816);
   plot__1662->SetBinError(17,0.03433176);
   plot__1662->SetBinError(18,0.01964898);
   plot__1662->SetBinError(19,0.02176274);
   plot__1662->SetBinError(20,0.01782246);
   plot__1662->SetBinError(21,0.004759465);
   plot__1662->SetBinError(22,0.00206999);
   plot__1662->SetEntries(2713);
   plot__1662->SetFillColor(5);
   plot__1662->SetLineColor(5);
   plot__1662->SetLineWidth(3);
   plot__1662->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1662->GetXaxis()->SetRange(1,23);
   plot__1662->GetXaxis()->SetLabelFont(42);
   plot__1662->GetXaxis()->SetLabelSize(0.035);
   plot__1662->GetXaxis()->SetTitleSize(0.035);
   plot__1662->GetXaxis()->SetTitleFont(42);
   plot__1662->GetYaxis()->SetTitle("Events/0.025");
   plot__1662->GetYaxis()->SetLabelFont(42);
   plot__1662->GetYaxis()->SetLabelSize(0.035);
   plot__1662->GetYaxis()->SetTitleSize(0.035);
   plot__1662->GetYaxis()->SetTitleFont(42);
   plot__1662->GetZaxis()->SetLabelFont(42);
   plot__1662->GetZaxis()->SetLabelSize(0.035);
   plot__1662->GetZaxis()->SetTitleSize(0.035);
   plot__1662->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1770[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1663 = new TH1D("plot__1663","",24, xAxis1770);
   plot__1663->SetBinContent(10,133.7298);
   plot__1663->SetBinContent(11,41.32411);
   plot__1663->SetBinContent(12,15.9829);
   plot__1663->SetBinContent(13,5.35432);
   plot__1663->SetBinContent(14,3.670339);
   plot__1663->SetBinContent(15,1.511585);
   plot__1663->SetBinContent(16,0.6136286);
   plot__1663->SetBinContent(17,0.2848522);
   plot__1663->SetBinContent(18,0.1273797);
   plot__1663->SetBinContent(19,0.04854801);
   plot__1663->SetBinError(10,5.399983);
   plot__1663->SetBinError(11,3.028832);
   plot__1663->SetBinError(12,1.850623);
   plot__1663->SetBinError(13,1.094529);
   plot__1663->SetBinError(14,0.892191);
   plot__1663->SetBinError(15,0.4115939);
   plot__1663->SetBinError(16,0.2606651);
   plot__1663->SetBinError(17,0.1111478);
   plot__1663->SetBinError(18,0.0738745);
   plot__1663->SetBinError(19,0.04854801);
   plot__1663->SetEntries(1079);
   plot__1663->SetFillColor(2);
   plot__1663->SetLineColor(2);
   plot__1663->SetLineWidth(3);
   plot__1663->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1663->GetXaxis()->SetRange(1,23);
   plot__1663->GetXaxis()->SetLabelFont(42);
   plot__1663->GetXaxis()->SetLabelSize(0.035);
   plot__1663->GetXaxis()->SetTitleSize(0.035);
   plot__1663->GetXaxis()->SetTitleFont(42);
   plot__1663->GetYaxis()->SetTitle("Events/0.025");
   plot__1663->GetYaxis()->SetLabelFont(42);
   plot__1663->GetYaxis()->SetLabelSize(0.035);
   plot__1663->GetYaxis()->SetTitleSize(0.035);
   plot__1663->GetYaxis()->SetTitleFont(42);
   plot__1663->GetZaxis()->SetLabelFont(42);
   plot__1663->GetZaxis()->SetLabelSize(0.035);
   plot__1663->GetZaxis()->SetTitleSize(0.035);
   plot__1663->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis1771[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1664 = new TH1D("plot__1664","",24, xAxis1771);
   plot__1664->SetBinContent(10,174);
   plot__1664->SetBinContent(11,61);
   plot__1664->SetBinContent(12,25);
   plot__1664->SetBinContent(13,15);
   plot__1664->SetBinContent(14,6);
   plot__1664->SetBinContent(15,3.5);
   plot__1664->SetBinContent(16,2);
   plot__1664->SetBinContent(17,0.8);
   plot__1664->SetBinContent(18,0.2);
   plot__1664->SetBinContent(20,0.2);
   plot__1664->SetBinError(10,13.19091);
   plot__1664->SetBinError(11,7.81025);
   plot__1664->SetBinError(12,5);
   plot__1664->SetBinError(13,3.872983);
   plot__1664->SetBinError(14,2.49);
   plot__1664->SetBinError(15,2.14);
   plot__1664->SetBinError(16,2);
   plot__1664->SetMinimum(0.11);
   plot__1664->SetMaximum(2037.798);
   plot__1664->SetEntries(323);

   ci = TColor::GetColor("#000099");
   plot__1664->SetLineColor(ci);
   plot__1664->SetLineWidth(2);
   plot__1664->SetMarkerStyle(20);
   plot__1664->SetMarkerSize(1.5);
   plot__1664->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1664->GetXaxis()->SetRange(1,23);
   plot__1664->GetXaxis()->SetLabelFont(42);
   plot__1664->GetXaxis()->SetLabelSize(0.035);
   plot__1664->GetXaxis()->SetTitleSize(0.035);
   plot__1664->GetXaxis()->SetTitleFont(42);
   plot__1664->GetYaxis()->SetTitle("Events");
   plot__1664->GetYaxis()->SetLabelFont(42);
   plot__1664->GetYaxis()->SetLabelSize(0.035);
   plot__1664->GetYaxis()->SetTitleSize(0.035);
   plot__1664->GetYaxis()->SetTitleOffset(1.3);
   plot__1664->GetYaxis()->SetTitleFont(42);
   plot__1664->GetZaxis()->SetLabelFont(42);
   plot__1664->GetZaxis()->SetLabelSize(0.035);
   plot__1664->GetZaxis()->SetTitleSize(0.035);
   plot__1664->GetZaxis()->SetTitleFont(42);
   plot__1664->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_one_375_    Jet Multiplicity>3");
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
   canvasbtag_one_375_475/AlphaT_3->cd();
  
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
   Double_t xAxis1772[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1665 = new TH1D("plot__1665","",24, xAxis1772);
   plot__1665->SetBinContent(10,0.8538629);
   plot__1665->SetBinContent(11,0.9142015);
   plot__1665->SetBinContent(12,0.866019);
   plot__1665->SetBinContent(13,1.372355);
   plot__1665->SetBinContent(14,0.7990329);
   plot__1665->SetBinContent(15,0.9923583);
   plot__1665->SetBinContent(16,1.834515);
   plot__1665->SetBinContent(17,1.258696);
   plot__1665->SetBinContent(18,0.6246296);
   plot__1665->SetBinContent(20,11.22179);
   plot__1665->SetBinError(10,0.06473118);
   plot__1665->SetBinError(11,0.1170515);
   plot__1665->SetBinError(12,0.1732038);
   plot__1665->SetBinError(13,0.3543406);
   plot__1665->SetBinError(14,0.3315987);
   plot__1665->SetBinError(15,0.6067562);
   plot__1665->SetBinError(16,1.834515);
   plot__1665->SetMinimum(0);
   plot__1665->SetMaximum(2);
   plot__1665->SetEntries(3.299575);

   ci = TColor::GetColor("#000099");
   plot__1665->SetLineColor(ci);
   plot__1665->SetLineWidth(2);
   plot__1665->SetMarkerStyle(20);
   plot__1665->SetMarkerSize(1.5);
   plot__1665->GetXaxis()->SetRange(1,23);
   plot__1665->GetXaxis()->SetLabelFont(42);
   plot__1665->GetXaxis()->SetLabelSize(0.12);
   plot__1665->GetXaxis()->SetTitleSize(0.035);
   plot__1665->GetXaxis()->SetTitleFont(42);
   plot__1665->GetYaxis()->SetTitle("Data/MC");
   plot__1665->GetYaxis()->SetNdivisions(505);
   plot__1665->GetYaxis()->SetLabelFont(42);
   plot__1665->GetYaxis()->SetLabelSize(0.11);
   plot__1665->GetYaxis()->SetTitleSize(0.1);
   plot__1665->GetYaxis()->SetTitleOffset(0.5);
   plot__1665->GetYaxis()->SetTitleFont(42);
   plot__1665->GetZaxis()->SetLabelFont(42);
   plot__1665->GetZaxis()->SetLabelSize(0.035);
   plot__1665->GetZaxis()->SetTitleSize(0.035);
   plot__1665->GetZaxis()->SetTitleFont(42);
   plot__1665->Draw("p");
   
   Double_t Graph_from_plot_fx1428[24] = {
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
   Double_t Graph_from_plot_fy1428[24] = {
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
   Double_t Graph_from_plot_fex1428[24] = {
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
   Double_t Graph_from_plot_fey1428[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03038348,
   0.05248139,
   0.07695665,
   0.1122055,
   0.1361031,
   0.1494212,
   0.2521065,
   0.2082896,
   0.3179073,
   0.5000722,
   1,
   0.5283323,
   1,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1428,Graph_from_plot_fy1428,Graph_from_plot_fex1428,Graph_from_plot_fey1428);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1428 = new TH1F("Graph_Graph_from_plot1428","",100,0,11);
   Graph_Graph_from_plot1428->SetMinimum(0);
   Graph_Graph_from_plot1428->SetMaximum(2.2);
   Graph_Graph_from_plot1428->SetDirectory(0);
   Graph_Graph_from_plot1428->SetStats(0);
   Graph_Graph_from_plot1428->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1428->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1428->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1428->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1428->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1428->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1428->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1428->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1428->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1428->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1428);
   
   gre->Draw("2");
   Double_t xAxis1773[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1666 = new TH1D("plot__1666","",24, xAxis1773);
   plot__1666->SetBinContent(10,0.8538629);
   plot__1666->SetBinContent(11,0.9142015);
   plot__1666->SetBinContent(12,0.866019);
   plot__1666->SetBinContent(13,1.372355);
   plot__1666->SetBinContent(14,0.7990329);
   plot__1666->SetBinContent(15,0.9923583);
   plot__1666->SetBinContent(16,1.834515);
   plot__1666->SetBinContent(17,1.258696);
   plot__1666->SetBinContent(18,0.6246296);
   plot__1666->SetBinContent(20,11.22179);
   plot__1666->SetBinError(10,0.06473118);
   plot__1666->SetBinError(11,0.1170515);
   plot__1666->SetBinError(12,0.1732038);
   plot__1666->SetBinError(13,0.3543406);
   plot__1666->SetBinError(14,0.3315987);
   plot__1666->SetBinError(15,0.6067562);
   plot__1666->SetBinError(16,1.834515);
   plot__1666->SetMinimum(0);
   plot__1666->SetMaximum(2);
   plot__1666->SetEntries(3.299575);

   ci = TColor::GetColor("#000099");
   plot__1666->SetLineColor(ci);
   plot__1666->SetLineWidth(2);
   plot__1666->SetMarkerStyle(20);
   plot__1666->SetMarkerSize(1.5);
   plot__1666->GetXaxis()->SetRange(1,23);
   plot__1666->GetXaxis()->SetLabelFont(42);
   plot__1666->GetXaxis()->SetLabelSize(0.12);
   plot__1666->GetXaxis()->SetTitleSize(0.035);
   plot__1666->GetXaxis()->SetTitleFont(42);
   plot__1666->GetYaxis()->SetTitle("Data/MC");
   plot__1666->GetYaxis()->SetNdivisions(505);
   plot__1666->GetYaxis()->SetLabelFont(42);
   plot__1666->GetYaxis()->SetLabelSize(0.11);
   plot__1666->GetYaxis()->SetTitleSize(0.1);
   plot__1666->GetYaxis()->SetTitleOffset(0.5);
   plot__1666->GetYaxis()->SetTitleFont(42);
   plot__1666->GetZaxis()->SetLabelFont(42);
   plot__1666->GetZaxis()->SetLabelSize(0.035);
   plot__1666->GetZaxis()->SetTitleSize(0.035);
   plot__1666->GetZaxis()->SetTitleFont(42);
   plot__1666->Draw("PSAME");
   d->Modified();
   canvasbtag_one_375_475/AlphaT_3->cd();
   canvasbtag_one_375_475/AlphaT_3->Modified();
   canvasbtag_one_375_475/AlphaT_3->cd();
   canvasbtag_one_375_475/AlphaT_3->SetSelected(canvasbtag_one_375_475/AlphaT_3);
}
