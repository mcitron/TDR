void Stacked_AlphaT_3_btag_morethanzero_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:05 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_morethanzero_375_475/AlphaT_3 = new TCanvas("canvasbtag_morethanzero_375_475/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetHighLightColor(2);
   canvasbtag_morethanzero_375_475/AlphaT_3->Range(0,0,1,1);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetFillColor(0);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetBorderMode(0);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetBorderSize(2);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetTickx(1);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetTicky(1);
   canvasbtag_morethanzero_375_475/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.514982,3.4875,4.048765);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis772[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__726 = new TH1D("plot__726","",24, xAxis772);
   plot__726->SetBinContent(10,269);
   plot__726->SetBinContent(11,92);
   plot__726->SetBinContent(12,34);
   plot__726->SetBinContent(13,18);
   plot__726->SetBinContent(14,8);
   plot__726->SetBinContent(15,4);
   plot__726->SetBinContent(16,2.5);
   plot__726->SetBinContent(17,1);
   plot__726->SetBinContent(18,0.2);
   plot__726->SetBinContent(20,0.2);
   plot__726->SetBinError(10,16.40122);
   plot__726->SetBinError(11,9.591663);
   plot__726->SetBinError(12,5.830952);
   plot__726->SetBinError(13,4.242641);
   plot__726->SetBinError(14,2.86);
   plot__726->SetBinError(15,2.3);
   plot__726->SetBinError(16,2);
   plot__726->SetBinError(17,1);
   plot__726->SetMinimum(0.11);
   plot__726->SetMaximum(3107.348);
   plot__726->SetEntries(466);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__726->SetLineColor(ci);
   plot__726->SetLineWidth(2);
   plot__726->SetMarkerStyle(20);
   plot__726->SetMarkerSize(1.5);
   plot__726->GetXaxis()->SetTitle("#alpha_{T}");
   plot__726->GetXaxis()->SetRange(1,23);
   plot__726->GetXaxis()->SetLabelFont(42);
   plot__726->GetXaxis()->SetLabelSize(0.035);
   plot__726->GetXaxis()->SetTitleSize(0.035);
   plot__726->GetXaxis()->SetTitleFont(42);
   plot__726->GetYaxis()->SetTitle("Events");
   plot__726->GetYaxis()->SetLabelFont(42);
   plot__726->GetYaxis()->SetLabelSize(0.035);
   plot__726->GetYaxis()->SetTitleSize(0.035);
   plot__726->GetYaxis()->SetTitleOffset(1.3);
   plot__726->GetYaxis()->SetTitleFont(42);
   plot__726->GetZaxis()->SetLabelFont(42);
   plot__726->GetZaxis()->SetLabelSize(0.035);
   plot__726->GetZaxis()->SetTitleSize(0.035);
   plot__726->GetZaxis()->SetTitleFont(42);
   plot__726->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis773[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_47 = new TH1F("_stack_47","",24, xAxis773);
   _stack_47->SetMinimum(0.1242939);
   _stack_47->SetMaximum(497.1758);
   _stack_47->SetDirectory(0);
   _stack_47->SetStats(0);
   _stack_47->GetXaxis()->SetLabelFont(42);
   _stack_47->GetXaxis()->SetLabelOffset(0.007);
   _stack_47->GetXaxis()->SetLabelSize(0.05);
   _stack_47->GetXaxis()->SetTitleSize(0.05);
   _stack_47->GetYaxis()->SetLabelFont(42);
   _stack_47->GetYaxis()->SetLabelOffset(0.007);
   _stack_47->GetYaxis()->SetLabelSize(0.05);
   _stack_47->GetZaxis()->SetLabelFont(42);
   _stack_47->GetZaxis()->SetLabelOffset(0.007);
   _stack_47->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_47);
   
   Double_t xAxis774[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__727 = new TH1D("plot__727","",24, xAxis774);
   plot__727->SetEntries(25);
   plot__727->SetFillColor(7);
   plot__727->SetLineColor(7);
   plot__727->SetLineStyle(10);
   plot__727->SetLineWidth(3);
   plot__727->GetXaxis()->SetTitle("#alpha_{T}");
   plot__727->GetXaxis()->SetRange(1,23);
   plot__727->GetXaxis()->SetLabelFont(42);
   plot__727->GetXaxis()->SetLabelSize(0.035);
   plot__727->GetXaxis()->SetTitleSize(0.035);
   plot__727->GetXaxis()->SetTitleFont(42);
   plot__727->GetYaxis()->SetTitle("Events/0.025");
   plot__727->GetYaxis()->SetLabelFont(42);
   plot__727->GetYaxis()->SetLabelSize(0.035);
   plot__727->GetYaxis()->SetTitleSize(0.035);
   plot__727->GetYaxis()->SetTitleFont(42);
   plot__727->GetZaxis()->SetLabelFont(42);
   plot__727->GetZaxis()->SetLabelSize(0.035);
   plot__727->GetZaxis()->SetTitleSize(0.035);
   plot__727->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis775[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__728 = new TH1D("plot__728","",24, xAxis775);
   plot__728->SetBinContent(10,0.02449838);
   plot__728->SetBinContent(11,0.06727932);
   plot__728->SetBinContent(12,0.02265738);
   plot__728->SetBinContent(19,0.003522126);
   plot__728->SetBinError(10,0.02449838);
   plot__728->SetBinError(11,0.03892321);
   plot__728->SetBinError(12,0.02265738);
   plot__728->SetBinError(19,0.003522126);
   plot__728->SetEntries(31);
   plot__728->SetFillColor(6);
   plot__728->SetLineColor(6);
   plot__728->SetLineWidth(3);
   plot__728->GetXaxis()->SetTitle("#alpha_{T}");
   plot__728->GetXaxis()->SetRange(1,23);
   plot__728->GetXaxis()->SetLabelFont(42);
   plot__728->GetXaxis()->SetLabelSize(0.035);
   plot__728->GetXaxis()->SetTitleSize(0.035);
   plot__728->GetXaxis()->SetTitleFont(42);
   plot__728->GetYaxis()->SetTitle("Events/0.025");
   plot__728->GetYaxis()->SetLabelFont(42);
   plot__728->GetYaxis()->SetLabelSize(0.035);
   plot__728->GetYaxis()->SetTitleSize(0.035);
   plot__728->GetYaxis()->SetTitleFont(42);
   plot__728->GetZaxis()->SetLabelFont(42);
   plot__728->GetZaxis()->SetLabelSize(0.035);
   plot__728->GetZaxis()->SetTitleSize(0.035);
   plot__728->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis776[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__729 = new TH1D("plot__729","",24, xAxis776);
   plot__729->SetBinContent(10,1.471143);
   plot__729->SetBinContent(11,1.011294);
   plot__729->SetBinContent(12,0.3248698);
   plot__729->SetBinContent(13,0.1377747);
   plot__729->SetBinContent(14,0.2046591);
   plot__729->SetBinContent(15,0.08155499);
   plot__729->SetBinContent(16,0.01100341);
   plot__729->SetBinContent(18,0.00208246);
   plot__729->SetBinContent(19,0.005182292);
   plot__729->SetBinError(10,0.2884002);
   plot__729->SetBinError(11,0.327313);
   plot__729->SetBinError(12,0.185624);
   plot__729->SetBinError(13,0.05707885);
   plot__729->SetBinError(14,0.07444682);
   plot__729->SetBinError(15,0.03437736);
   plot__729->SetBinError(16,0.01100341);
   plot__729->SetBinError(18,0.00208246);
   plot__729->SetBinError(19,0.005182292);
   plot__729->SetEntries(142);
   plot__729->SetFillColor(44);
   plot__729->SetLineColor(44);
   plot__729->SetLineWidth(3);
   plot__729->GetXaxis()->SetTitle("#alpha_{T}");
   plot__729->GetXaxis()->SetRange(1,23);
   plot__729->GetXaxis()->SetLabelFont(42);
   plot__729->GetXaxis()->SetLabelSize(0.035);
   plot__729->GetXaxis()->SetTitleSize(0.035);
   plot__729->GetXaxis()->SetTitleFont(42);
   plot__729->GetYaxis()->SetTitle("Events/0.025");
   plot__729->GetYaxis()->SetLabelFont(42);
   plot__729->GetYaxis()->SetLabelSize(0.035);
   plot__729->GetYaxis()->SetTitleSize(0.035);
   plot__729->GetYaxis()->SetTitleFont(42);
   plot__729->GetZaxis()->SetLabelFont(42);
   plot__729->GetZaxis()->SetLabelSize(0.035);
   plot__729->GetZaxis()->SetTitleSize(0.035);
   plot__729->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis777[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__730 = new TH1D("plot__730","",24, xAxis777);
   plot__730->SetBinContent(10,13.32943);
   plot__730->SetBinContent(11,3.670638);
   plot__730->SetBinContent(12,1.826917);
   plot__730->SetBinContent(13,0.5842133);
   plot__730->SetBinContent(14,0.3195099);
   plot__730->SetBinContent(15,0.2298168);
   plot__730->SetBinError(10,2.589009);
   plot__730->SetBinError(11,1.36804);
   plot__730->SetBinError(12,0.8479571);
   plot__730->SetBinError(13,0.5842133);
   plot__730->SetBinError(14,0.3195099);
   plot__730->SetBinError(15,0.2298168);
   plot__730->SetEntries(71);
   plot__730->SetFillColor(40);
   plot__730->SetLineColor(40);
   plot__730->SetLineWidth(3);
   plot__730->GetXaxis()->SetTitle("#alpha_{T}");
   plot__730->GetXaxis()->SetRange(1,23);
   plot__730->GetXaxis()->SetLabelFont(42);
   plot__730->GetXaxis()->SetLabelSize(0.035);
   plot__730->GetXaxis()->SetTitleSize(0.035);
   plot__730->GetXaxis()->SetTitleFont(42);
   plot__730->GetYaxis()->SetTitle("Events/0.025");
   plot__730->GetYaxis()->SetLabelFont(42);
   plot__730->GetYaxis()->SetLabelSize(0.035);
   plot__730->GetYaxis()->SetTitleSize(0.035);
   plot__730->GetYaxis()->SetTitleFont(42);
   plot__730->GetZaxis()->SetLabelFont(42);
   plot__730->GetZaxis()->SetLabelSize(0.035);
   plot__730->GetZaxis()->SetTitleSize(0.035);
   plot__730->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis778[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__731 = new TH1D("plot__731","",24, xAxis778);
   plot__731->SetBinContent(10,28.44177);
   plot__731->SetBinContent(11,8.65847);
   plot__731->SetBinContent(12,3.786121);
   plot__731->SetBinContent(13,1.916754);
   plot__731->SetBinContent(14,1.133802);
   plot__731->SetBinContent(15,0.6370674);
   plot__731->SetBinContent(16,0.1445767);
   plot__731->SetBinContent(17,0.201338);
   plot__731->SetBinContent(18,0.1211321);
   plot__731->SetBinError(10,1.961739);
   plot__731->SetBinError(11,1.081766);
   plot__731->SetBinError(12,0.7134067);
   plot__731->SetBinError(13,0.4739976);
   plot__731->SetBinError(14,0.3920567);
   plot__731->SetBinError(15,0.2052527);
   plot__731->SetBinError(16,0.0861358);
   plot__731->SetBinError(17,0.07780525);
   plot__731->SetBinError(18,0.06718244);
   plot__731->SetEntries(430);
   plot__731->SetFillColor(4);
   plot__731->SetLineColor(4);
   plot__731->SetLineWidth(3);
   plot__731->GetXaxis()->SetTitle("#alpha_{T}");
   plot__731->GetXaxis()->SetRange(1,23);
   plot__731->GetXaxis()->SetLabelFont(42);
   plot__731->GetXaxis()->SetLabelSize(0.035);
   plot__731->GetXaxis()->SetTitleSize(0.035);
   plot__731->GetXaxis()->SetTitleFont(42);
   plot__731->GetYaxis()->SetTitle("Events/0.025");
   plot__731->GetYaxis()->SetLabelFont(42);
   plot__731->GetYaxis()->SetLabelSize(0.035);
   plot__731->GetYaxis()->SetTitleSize(0.035);
   plot__731->GetYaxis()->SetTitleFont(42);
   plot__731->GetZaxis()->SetLabelFont(42);
   plot__731->GetZaxis()->SetLabelSize(0.035);
   plot__731->GetZaxis()->SetTitleSize(0.035);
   plot__731->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis779[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__732 = new TH1D("plot__732","",24, xAxis779);
   plot__732->SetBinContent(10,41.77495);
   plot__732->SetBinContent(11,16.55388);
   plot__732->SetBinContent(12,8.392298);
   plot__732->SetBinContent(13,4.200949);
   plot__732->SetBinContent(14,2.995186);
   plot__732->SetBinContent(15,1.377344);
   plot__732->SetBinContent(16,0.5451271);
   plot__732->SetBinContent(17,0.2552974);
   plot__732->SetBinContent(18,0.089546);
   plot__732->SetBinContent(19,0.05879114);
   plot__732->SetBinContent(20,0.02299635);
   plot__732->SetBinContent(21,0.009008467);
   plot__732->SetBinContent(22,0.00206999);
   plot__732->SetBinError(10,1.204585);
   plot__732->SetBinError(11,0.7542255);
   plot__732->SetBinError(12,0.5689709);
   plot__732->SetBinError(13,0.3218634);
   plot__732->SetBinError(14,0.3237045);
   plot__732->SetBinError(15,0.1451564);
   plot__732->SetBinError(16,0.09358929);
   plot__732->SetBinError(17,0.03721296);
   plot__732->SetBinError(18,0.02212057);
   plot__732->SetBinError(19,0.02267385);
   plot__732->SetBinError(20,0.01855827);
   plot__732->SetBinError(21,0.004759465);
   plot__732->SetBinError(22,0.00206999);
   plot__732->SetEntries(3235);
   plot__732->SetFillColor(5);
   plot__732->SetLineColor(5);
   plot__732->SetLineWidth(3);
   plot__732->GetXaxis()->SetTitle("#alpha_{T}");
   plot__732->GetXaxis()->SetRange(1,23);
   plot__732->GetXaxis()->SetLabelFont(42);
   plot__732->GetXaxis()->SetLabelSize(0.035);
   plot__732->GetXaxis()->SetTitleSize(0.035);
   plot__732->GetXaxis()->SetTitleFont(42);
   plot__732->GetYaxis()->SetTitle("Events/0.025");
   plot__732->GetYaxis()->SetLabelFont(42);
   plot__732->GetYaxis()->SetLabelSize(0.035);
   plot__732->GetYaxis()->SetTitleSize(0.035);
   plot__732->GetYaxis()->SetTitleFont(42);
   plot__732->GetZaxis()->SetLabelFont(42);
   plot__732->GetZaxis()->SetLabelSize(0.035);
   plot__732->GetZaxis()->SetTitleSize(0.035);
   plot__732->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis780[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__733 = new TH1D("plot__733","",24, xAxis780);
   plot__733->SetBinContent(10,225.693);
   plot__733->SetBinContent(11,66.79846);
   plot__733->SetBinContent(12,27.50855);
   plot__733->SetBinContent(13,8.648254);
   plot__733->SetBinContent(14,6.013712);
   plot__733->SetBinContent(15,2.202362);
   plot__733->SetBinContent(16,0.6992886);
   plot__733->SetBinContent(17,0.4313708);
   plot__733->SetBinContent(18,0.1962005);
   plot__733->SetBinContent(19,0.09000687);
   plot__733->SetBinError(10,6.924842);
   plot__733->SetBinError(11,3.815636);
   plot__733->SetBinError(12,2.410761);
   plot__733->SetBinError(13,1.36435);
   plot__733->SetBinError(14,1.152644);
   plot__733->SetBinError(15,0.4891765);
   plot__733->SetBinError(16,0.2743791);
   plot__733->SetBinError(17,0.1404857);
   plot__733->SetBinError(18,0.1009641);
   plot__733->SetBinError(19,0.06384157);
   plot__733->SetEntries(1807);
   plot__733->SetFillColor(2);
   plot__733->SetLineColor(2);
   plot__733->SetLineWidth(3);
   plot__733->GetXaxis()->SetTitle("#alpha_{T}");
   plot__733->GetXaxis()->SetRange(1,23);
   plot__733->GetXaxis()->SetLabelFont(42);
   plot__733->GetXaxis()->SetLabelSize(0.035);
   plot__733->GetXaxis()->SetTitleSize(0.035);
   plot__733->GetXaxis()->SetTitleFont(42);
   plot__733->GetYaxis()->SetTitle("Events/0.025");
   plot__733->GetYaxis()->SetLabelFont(42);
   plot__733->GetYaxis()->SetLabelSize(0.035);
   plot__733->GetYaxis()->SetTitleSize(0.035);
   plot__733->GetYaxis()->SetTitleFont(42);
   plot__733->GetZaxis()->SetLabelFont(42);
   plot__733->GetZaxis()->SetLabelSize(0.035);
   plot__733->GetZaxis()->SetTitleSize(0.035);
   plot__733->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis781[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__734 = new TH1D("plot__734","",24, xAxis781);
   plot__734->SetBinContent(10,269);
   plot__734->SetBinContent(11,92);
   plot__734->SetBinContent(12,34);
   plot__734->SetBinContent(13,18);
   plot__734->SetBinContent(14,8);
   plot__734->SetBinContent(15,4);
   plot__734->SetBinContent(16,2.5);
   plot__734->SetBinContent(17,1);
   plot__734->SetBinContent(18,0.2);
   plot__734->SetBinContent(20,0.2);
   plot__734->SetBinError(10,16.40122);
   plot__734->SetBinError(11,9.591663);
   plot__734->SetBinError(12,5.830952);
   plot__734->SetBinError(13,4.242641);
   plot__734->SetBinError(14,2.86);
   plot__734->SetBinError(15,2.3);
   plot__734->SetBinError(16,2);
   plot__734->SetBinError(17,1);
   plot__734->SetMinimum(0.11);
   plot__734->SetMaximum(3107.348);
   plot__734->SetEntries(466);

   ci = TColor::GetColor("#000099");
   plot__734->SetLineColor(ci);
   plot__734->SetLineWidth(2);
   plot__734->SetMarkerStyle(20);
   plot__734->SetMarkerSize(1.5);
   plot__734->GetXaxis()->SetTitle("#alpha_{T}");
   plot__734->GetXaxis()->SetRange(1,23);
   plot__734->GetXaxis()->SetLabelFont(42);
   plot__734->GetXaxis()->SetLabelSize(0.035);
   plot__734->GetXaxis()->SetTitleSize(0.035);
   plot__734->GetXaxis()->SetTitleFont(42);
   plot__734->GetYaxis()->SetTitle("Events");
   plot__734->GetYaxis()->SetLabelFont(42);
   plot__734->GetYaxis()->SetLabelSize(0.035);
   plot__734->GetYaxis()->SetTitleSize(0.035);
   plot__734->GetYaxis()->SetTitleOffset(1.3);
   plot__734->GetYaxis()->SetTitleFont(42);
   plot__734->GetZaxis()->SetLabelFont(42);
   plot__734->GetZaxis()->SetLabelSize(0.035);
   plot__734->GetZaxis()->SetTitleSize(0.035);
   plot__734->GetZaxis()->SetTitleFont(42);
   plot__734->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_    Jet Multiplicity>3");
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
   canvasbtag_morethanzero_375_475/AlphaT_3->cd();
  
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
   Double_t xAxis782[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__735 = new TH1D("plot__735","",24, xAxis782);
   plot__735->SetBinContent(10,0.8656898);
   plot__735->SetBinContent(11,0.9508059);
   plot__735->SetBinContent(12,0.8122038);
   plot__735->SetBinContent(13,1.162194);
   plot__735->SetBinContent(14,0.7499858);
   plot__735->SetBinContent(15,0.883364);
   plot__735->SetBinContent(16,1.78572);
   plot__735->SetBinContent(17,1.126118);
   plot__735->SetBinContent(18,0.4890441);
   plot__735->SetBinContent(20,8.697032);
   plot__735->SetBinError(10,0.05278204);
   plot__735->SetBinError(11,0.09912837);
   plot__735->SetBinError(12,0.1392918);
   plot__735->SetBinError(13,0.2739318);
   plot__735->SetBinError(14,0.2681199);
   plot__735->SetBinError(15,0.5079343);
   plot__735->SetBinError(16,1.428576);
   plot__735->SetBinError(17,1.126118);
   plot__735->SetMinimum(0);
   plot__735->SetMaximum(2);
   plot__735->SetEntries(5.764434);

   ci = TColor::GetColor("#000099");
   plot__735->SetLineColor(ci);
   plot__735->SetLineWidth(2);
   plot__735->SetMarkerStyle(20);
   plot__735->SetMarkerSize(1.5);
   plot__735->GetXaxis()->SetRange(1,23);
   plot__735->GetXaxis()->SetLabelFont(42);
   plot__735->GetXaxis()->SetLabelSize(0.12);
   plot__735->GetXaxis()->SetTitleSize(0.035);
   plot__735->GetXaxis()->SetTitleFont(42);
   plot__735->GetYaxis()->SetTitle("Data/MC");
   plot__735->GetYaxis()->SetNdivisions(505);
   plot__735->GetYaxis()->SetLabelFont(42);
   plot__735->GetYaxis()->SetLabelSize(0.11);
   plot__735->GetYaxis()->SetTitleSize(0.1);
   plot__735->GetYaxis()->SetTitleOffset(0.5);
   plot__735->GetYaxis()->SetTitleFont(42);
   plot__735->GetZaxis()->SetLabelFont(42);
   plot__735->GetZaxis()->SetLabelSize(0.035);
   plot__735->GetZaxis()->SetTitleSize(0.035);
   plot__735->GetZaxis()->SetTitleFont(42);
   plot__735->Draw("p");
   
   Double_t Graph_from_plot_fx1188[24] = {
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
   Double_t Graph_from_plot_fy1188[24] = {
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
   Double_t Graph_from_plot_fex1188[24] = {
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
   Double_t Graph_from_plot_fey1188[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02493613,
   0.04418475,
   0.06497652,
   0.102786,
   0.1220424,
   0.1318571,
   0.216163,
   0.1856378,
   0.3014759,
   0.4319779,
   0.8070093,
   0.5283323,
   1,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1188,Graph_from_plot_fy1188,Graph_from_plot_fex1188,Graph_from_plot_fey1188);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1188 = new TH1F("Graph_Graph_from_plot1188","",100,0,11);
   Graph_Graph_from_plot1188->SetMinimum(0);
   Graph_Graph_from_plot1188->SetMaximum(2.2);
   Graph_Graph_from_plot1188->SetDirectory(0);
   Graph_Graph_from_plot1188->SetStats(0);
   Graph_Graph_from_plot1188->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1188->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1188->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1188->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1188->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1188->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1188->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1188->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1188->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1188->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1188);
   
   gre->Draw("2");
   Double_t xAxis783[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__736 = new TH1D("plot__736","",24, xAxis783);
   plot__736->SetBinContent(10,0.8656898);
   plot__736->SetBinContent(11,0.9508059);
   plot__736->SetBinContent(12,0.8122038);
   plot__736->SetBinContent(13,1.162194);
   plot__736->SetBinContent(14,0.7499858);
   plot__736->SetBinContent(15,0.883364);
   plot__736->SetBinContent(16,1.78572);
   plot__736->SetBinContent(17,1.126118);
   plot__736->SetBinContent(18,0.4890441);
   plot__736->SetBinContent(20,8.697032);
   plot__736->SetBinError(10,0.05278204);
   plot__736->SetBinError(11,0.09912837);
   plot__736->SetBinError(12,0.1392918);
   plot__736->SetBinError(13,0.2739318);
   plot__736->SetBinError(14,0.2681199);
   plot__736->SetBinError(15,0.5079343);
   plot__736->SetBinError(16,1.428576);
   plot__736->SetBinError(17,1.126118);
   plot__736->SetMinimum(0);
   plot__736->SetMaximum(2);
   plot__736->SetEntries(5.764434);

   ci = TColor::GetColor("#000099");
   plot__736->SetLineColor(ci);
   plot__736->SetLineWidth(2);
   plot__736->SetMarkerStyle(20);
   plot__736->SetMarkerSize(1.5);
   plot__736->GetXaxis()->SetRange(1,23);
   plot__736->GetXaxis()->SetLabelFont(42);
   plot__736->GetXaxis()->SetLabelSize(0.12);
   plot__736->GetXaxis()->SetTitleSize(0.035);
   plot__736->GetXaxis()->SetTitleFont(42);
   plot__736->GetYaxis()->SetTitle("Data/MC");
   plot__736->GetYaxis()->SetNdivisions(505);
   plot__736->GetYaxis()->SetLabelFont(42);
   plot__736->GetYaxis()->SetLabelSize(0.11);
   plot__736->GetYaxis()->SetTitleSize(0.1);
   plot__736->GetYaxis()->SetTitleOffset(0.5);
   plot__736->GetYaxis()->SetTitleFont(42);
   plot__736->GetZaxis()->SetLabelFont(42);
   plot__736->GetZaxis()->SetLabelSize(0.035);
   plot__736->GetZaxis()->SetTitleSize(0.035);
   plot__736->GetZaxis()->SetTitleFont(42);
   plot__736->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_3->cd();
   canvasbtag_morethanzero_375_475/AlphaT_3->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_3->cd();
   canvasbtag_morethanzero_375_475/AlphaT_3->SetSelected(canvasbtag_morethanzero_375_475/AlphaT_3);
}
