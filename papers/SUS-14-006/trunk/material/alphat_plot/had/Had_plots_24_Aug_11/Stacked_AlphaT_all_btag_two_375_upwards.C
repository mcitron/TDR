void Stacked_AlphaT_all_btag_two_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_375_475/AlphaT_all/cannameAlphaT_all
//=========  (Wed Aug 24 11:54:07 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_375_475/AlphaT_all = new TCanvas("canvasbtag_two_375_475/AlphaT_all", "cannameAlphaT_all",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_375_475/AlphaT_all->SetHighLightColor(2);
   canvasbtag_two_375_475/AlphaT_all->Range(0,0,1,1);
   canvasbtag_two_375_475/AlphaT_all->SetFillColor(0);
   canvasbtag_two_375_475/AlphaT_all->SetBorderMode(0);
   canvasbtag_two_375_475/AlphaT_all->SetBorderSize(2);
   canvasbtag_two_375_475/AlphaT_all->SetTickx(1);
   canvasbtag_two_375_475/AlphaT_all->SetTicky(1);
   canvasbtag_two_375_475/AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.474188,3.4875,3.681622);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis904[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__850 = new TH1D("plot__850","",24, xAxis904);
   plot__850->SetBinContent(10,117);
   plot__850->SetBinContent(11,43);
   plot__850->SetBinContent(12,20);
   plot__850->SetBinContent(13,6);
   plot__850->SetBinContent(14,4);
   plot__850->SetBinContent(15,1.5);
   plot__850->SetBinContent(16,1);
   plot__850->SetBinContent(17,1.2);
   plot__850->SetBinContent(18,0.2);
   plot__850->SetBinContent(19,0.4);
   plot__850->SetBinContent(20,0.2);
   plot__850->SetBinContent(21,0.1);
   plot__850->SetBinContent(23,1);
   plot__850->SetBinContent(24,0.01449275);
   plot__850->SetBinError(10,10.81665);
   plot__850->SetBinError(11,6.557439);
   plot__850->SetBinError(12,4.472136);
   plot__850->SetBinError(13,2.49);
   plot__850->SetBinError(14,2.14);
   plot__850->SetBinError(15,1);
   plot__850->SetBinError(16,1);
   plot__850->SetBinError(17,1);
   plot__850->SetBinError(24,0.01024792);
   plot__850->SetMinimum(0.11);
   plot__850->SetMaximum(1465.685);
   plot__850->SetEntries(233);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__850->SetLineColor(ci);
   plot__850->SetLineWidth(2);
   plot__850->SetMarkerStyle(20);
   plot__850->SetMarkerSize(1.5);
   plot__850->GetXaxis()->SetTitle("#alpha_{T}");
   plot__850->GetXaxis()->SetRange(1,23);
   plot__850->GetXaxis()->SetLabelFont(42);
   plot__850->GetXaxis()->SetLabelSize(0.035);
   plot__850->GetXaxis()->SetTitleSize(0.035);
   plot__850->GetXaxis()->SetTitleFont(42);
   plot__850->GetYaxis()->SetTitle("Events");
   plot__850->GetYaxis()->SetLabelFont(42);
   plot__850->GetYaxis()->SetLabelSize(0.035);
   plot__850->GetYaxis()->SetTitleSize(0.035);
   plot__850->GetYaxis()->SetTitleOffset(1.3);
   plot__850->GetYaxis()->SetTitleFont(42);
   plot__850->GetZaxis()->SetLabelFont(42);
   plot__850->GetZaxis()->SetLabelSize(0.035);
   plot__850->GetZaxis()->SetTitleSize(0.035);
   plot__850->GetZaxis()->SetTitleFont(42);
   plot__850->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis905[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_55 = new TH1F("_stack_55","",24, xAxis905);
   _stack_55->SetMinimum(0.05862742);
   _stack_55->SetMaximum(234.5097);
   _stack_55->SetDirectory(0);
   _stack_55->SetStats(0);
   _stack_55->GetXaxis()->SetLabelFont(42);
   _stack_55->GetXaxis()->SetLabelOffset(0.007);
   _stack_55->GetXaxis()->SetLabelSize(0.05);
   _stack_55->GetXaxis()->SetTitleSize(0.05);
   _stack_55->GetYaxis()->SetLabelFont(42);
   _stack_55->GetYaxis()->SetLabelOffset(0.007);
   _stack_55->GetYaxis()->SetLabelSize(0.05);
   _stack_55->GetZaxis()->SetLabelFont(42);
   _stack_55->GetZaxis()->SetLabelOffset(0.007);
   _stack_55->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_55);
   
   Double_t xAxis906[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__851 = new TH1D("plot__851","",24, xAxis906);
   plot__851->SetEntries(25);
   plot__851->SetFillColor(7);
   plot__851->SetLineColor(7);
   plot__851->SetLineStyle(10);
   plot__851->SetLineWidth(3);
   plot__851->GetXaxis()->SetTitle("#alpha_{T}");
   plot__851->GetXaxis()->SetRange(1,23);
   plot__851->GetXaxis()->SetLabelFont(42);
   plot__851->GetXaxis()->SetLabelSize(0.035);
   plot__851->GetXaxis()->SetTitleSize(0.035);
   plot__851->GetXaxis()->SetTitleFont(42);
   plot__851->GetYaxis()->SetTitle("Events/0.025");
   plot__851->GetYaxis()->SetLabelFont(42);
   plot__851->GetYaxis()->SetLabelSize(0.035);
   plot__851->GetYaxis()->SetTitleSize(0.035);
   plot__851->GetYaxis()->SetTitleFont(42);
   plot__851->GetZaxis()->SetLabelFont(42);
   plot__851->GetZaxis()->SetLabelSize(0.035);
   plot__851->GetZaxis()->SetTitleSize(0.035);
   plot__851->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis907[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__852 = new TH1D("plot__852","",24, xAxis907);
   plot__852->SetBinContent(11,0.02325465);
   plot__852->SetBinContent(12,0.02265738);
   plot__852->SetBinContent(18,0.01539052);
   plot__852->SetBinError(11,0.02325465);
   plot__852->SetBinError(12,0.02265738);
   plot__852->SetBinError(18,0.01539052);
   plot__852->SetEntries(28);
   plot__852->SetFillColor(6);
   plot__852->SetLineColor(6);
   plot__852->SetLineWidth(3);
   plot__852->GetXaxis()->SetTitle("#alpha_{T}");
   plot__852->GetXaxis()->SetRange(1,23);
   plot__852->GetXaxis()->SetLabelFont(42);
   plot__852->GetXaxis()->SetLabelSize(0.035);
   plot__852->GetXaxis()->SetTitleSize(0.035);
   plot__852->GetXaxis()->SetTitleFont(42);
   plot__852->GetYaxis()->SetTitle("Events/0.025");
   plot__852->GetYaxis()->SetLabelFont(42);
   plot__852->GetYaxis()->SetLabelSize(0.035);
   plot__852->GetYaxis()->SetTitleSize(0.035);
   plot__852->GetYaxis()->SetTitleFont(42);
   plot__852->GetZaxis()->SetLabelFont(42);
   plot__852->GetZaxis()->SetLabelSize(0.035);
   plot__852->GetZaxis()->SetTitleSize(0.035);
   plot__852->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis908[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__853 = new TH1D("plot__853","",24, xAxis908);
   plot__853->SetBinContent(10,0.4334203);
   plot__853->SetBinContent(11,0.2159882);
   plot__853->SetBinContent(12,0.08606841);
   plot__853->SetBinContent(13,0.2583882);
   plot__853->SetBinContent(14,0.1695766);
   plot__853->SetBinContent(15,0.0661626);
   plot__853->SetBinContent(16,0.04351769);
   plot__853->SetBinContent(17,0.03718138);
   plot__853->SetBinContent(18,0.01161723);
   plot__853->SetBinContent(19,0.01289156);
   plot__853->SetBinContent(20,0.01001743);
   plot__853->SetBinContent(21,0.01009333);
   plot__853->SetBinContent(22,0.001681306);
   plot__853->SetBinError(10,0.0967157);
   plot__853->SetBinError(11,0.06869555);
   plot__853->SetBinError(12,0.03895843);
   plot__853->SetBinError(13,0.1354757);
   plot__853->SetBinError(14,0.06229477);
   plot__853->SetBinError(15,0.02655675);
   plot__853->SetBinError(16,0.0217707);
   plot__853->SetBinError(17,0.01231222);
   plot__853->SetBinError(18,0.006802844);
   plot__853->SetBinError(19,0.006733396);
   plot__853->SetBinError(20,0.007385638);
   plot__853->SetBinError(21,0.005234385);
   plot__853->SetBinError(22,0.001681306);
   plot__853->SetEntries(118);
   plot__853->SetFillColor(44);
   plot__853->SetLineColor(44);
   plot__853->SetLineWidth(3);
   plot__853->GetXaxis()->SetTitle("#alpha_{T}");
   plot__853->GetXaxis()->SetRange(1,23);
   plot__853->GetXaxis()->SetLabelFont(42);
   plot__853->GetXaxis()->SetLabelSize(0.035);
   plot__853->GetXaxis()->SetTitleSize(0.035);
   plot__853->GetXaxis()->SetTitleFont(42);
   plot__853->GetYaxis()->SetTitle("Events/0.025");
   plot__853->GetYaxis()->SetLabelFont(42);
   plot__853->GetYaxis()->SetLabelSize(0.035);
   plot__853->GetYaxis()->SetTitleSize(0.035);
   plot__853->GetYaxis()->SetTitleFont(42);
   plot__853->GetZaxis()->SetLabelFont(42);
   plot__853->GetZaxis()->SetLabelSize(0.035);
   plot__853->GetZaxis()->SetTitleSize(0.035);
   plot__853->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis909[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__854 = new TH1D("plot__854","",24, xAxis909);
   plot__854->SetBinContent(10,5.59339);
   plot__854->SetBinContent(11,1.820462);
   plot__854->SetBinContent(12,0.4596367);
   plot__854->SetBinContent(13,1.082544);
   plot__854->SetBinContent(14,0.3195099);
   plot__854->SetBinContent(17,0.1016493);
   plot__854->SetBinError(10,1.626697);
   plot__854->SetBinError(11,0.8483464);
   plot__854->SetBinError(12,0.4596367);
   plot__854->SetBinError(13,0.7678794);
   plot__854->SetBinError(14,0.3195099);
   plot__854->SetBinError(17,0.1016493);
   plot__854->SetEntries(51);
   plot__854->SetFillColor(40);
   plot__854->SetLineColor(40);
   plot__854->SetLineWidth(3);
   plot__854->GetXaxis()->SetTitle("#alpha_{T}");
   plot__854->GetXaxis()->SetRange(1,23);
   plot__854->GetXaxis()->SetLabelFont(42);
   plot__854->GetXaxis()->SetLabelSize(0.035);
   plot__854->GetXaxis()->SetTitleSize(0.035);
   plot__854->GetXaxis()->SetTitleFont(42);
   plot__854->GetYaxis()->SetTitle("Events/0.025");
   plot__854->GetYaxis()->SetLabelFont(42);
   plot__854->GetYaxis()->SetLabelSize(0.035);
   plot__854->GetYaxis()->SetTitleSize(0.035);
   plot__854->GetYaxis()->SetTitleFont(42);
   plot__854->GetZaxis()->SetLabelFont(42);
   plot__854->GetZaxis()->SetLabelSize(0.035);
   plot__854->GetZaxis()->SetTitleSize(0.035);
   plot__854->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis910[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__855 = new TH1D("plot__855","",24, xAxis910);
   plot__855->SetBinContent(10,6.365133);
   plot__855->SetBinContent(11,2.253975);
   plot__855->SetBinContent(12,1.371345);
   plot__855->SetBinContent(13,0.5500516);
   plot__855->SetBinContent(14,0.1588226);
   plot__855->SetBinContent(15,0.3976126);
   plot__855->SetBinContent(16,0.3397477);
   plot__855->SetBinContent(17,0.1376827);
   plot__855->SetBinContent(18,0.0003002666);
   plot__855->SetBinContent(23,0.05775371);
   plot__855->SetBinContent(24,0.0008370103);
   plot__855->SetBinError(10,0.9814117);
   plot__855->SetBinError(11,0.5147703);
   plot__855->SetBinError(12,0.4037211);
   plot__855->SetBinError(13,0.2336002);
   plot__855->SetBinError(14,0.1588226);
   plot__855->SetBinError(15,0.1647712);
   plot__855->SetBinError(16,0.1471519);
   plot__855->SetBinError(17,0.06293305);
   plot__855->SetBinError(18,0.0003002666);
   plot__855->SetBinError(23,0.1699319);
   plot__855->SetBinError(24,0.0008370103);
   plot__855->SetEntries(140);
   plot__855->SetFillColor(4);
   plot__855->SetLineColor(4);
   plot__855->SetLineWidth(3);
   plot__855->GetXaxis()->SetTitle("#alpha_{T}");
   plot__855->GetXaxis()->SetRange(1,23);
   plot__855->GetXaxis()->SetLabelFont(42);
   plot__855->GetXaxis()->SetLabelSize(0.035);
   plot__855->GetXaxis()->SetTitleSize(0.035);
   plot__855->GetXaxis()->SetTitleFont(42);
   plot__855->GetYaxis()->SetTitle("Events/0.025");
   plot__855->GetYaxis()->SetLabelFont(42);
   plot__855->GetYaxis()->SetLabelSize(0.035);
   plot__855->GetYaxis()->SetTitleSize(0.035);
   plot__855->GetYaxis()->SetTitleFont(42);
   plot__855->GetZaxis()->SetLabelFont(42);
   plot__855->GetZaxis()->SetLabelSize(0.035);
   plot__855->GetZaxis()->SetTitleSize(0.035);
   plot__855->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis911[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__856 = new TH1D("plot__856","",24, xAxis911);
   plot__856->SetBinContent(10,14.21351);
   plot__856->SetBinContent(11,6.058431);
   plot__856->SetBinContent(12,2.84784);
   plot__856->SetBinContent(13,1.611295);
   plot__856->SetBinContent(14,1.387445);
   plot__856->SetBinContent(15,0.8684334);
   plot__856->SetBinContent(16,0.5249515);
   plot__856->SetBinContent(17,0.31569);
   plot__856->SetBinContent(18,0.1720198);
   plot__856->SetBinContent(19,0.08084321);
   plot__856->SetBinContent(20,0.09415435);
   plot__856->SetBinContent(21,0.03001038);
   plot__856->SetBinContent(22,0.02043996);
   plot__856->SetBinContent(23,0.06946895);
   plot__856->SetBinContent(24,0.0009701795);
   plot__856->SetBinError(10,0.6847331);
   plot__856->SetBinError(11,0.4568418);
   plot__856->SetBinError(12,0.3174287);
   plot__856->SetBinError(13,0.210255);
   plot__856->SetBinError(14,0.2340009);
   plot__856->SetBinError(15,0.1261674);
   plot__856->SetBinError(16,0.1329188);
   plot__856->SetBinError(17,0.04282296);
   plot__856->SetBinError(18,0.02902676);
   plot__856->SetBinError(19,0.01994563);
   plot__856->SetBinError(20,0.02481399);
   plot__856->SetBinError(21,0.01069878);
   plot__856->SetBinError(22,0.01101938);
   plot__856->SetBinError(23,0.1863719);
   plot__856->SetBinError(24,0.0003735284);
   plot__856->SetEntries(1389);
   plot__856->SetFillColor(5);
   plot__856->SetLineColor(5);
   plot__856->SetLineWidth(3);
   plot__856->GetXaxis()->SetTitle("#alpha_{T}");
   plot__856->GetXaxis()->SetRange(1,23);
   plot__856->GetXaxis()->SetLabelFont(42);
   plot__856->GetXaxis()->SetLabelSize(0.035);
   plot__856->GetXaxis()->SetTitleSize(0.035);
   plot__856->GetXaxis()->SetTitleFont(42);
   plot__856->GetYaxis()->SetTitle("Events/0.025");
   plot__856->GetYaxis()->SetLabelFont(42);
   plot__856->GetYaxis()->SetLabelSize(0.035);
   plot__856->GetYaxis()->SetTitleSize(0.035);
   plot__856->GetYaxis()->SetTitleFont(42);
   plot__856->GetZaxis()->SetLabelFont(42);
   plot__856->GetZaxis()->SetLabelSize(0.035);
   plot__856->GetZaxis()->SetTitleSize(0.035);
   plot__856->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis912[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__857 = new TH1D("plot__857","",24, xAxis912);
   plot__857->SetBinContent(10,119.9631);
   plot__857->SetBinContent(11,33.80664);
   plot__857->SetBinContent(12,16.77249);
   plot__857->SetBinContent(13,5.332528);
   plot__857->SetBinContent(14,3.067957);
   plot__857->SetBinContent(15,0.9681989);
   plot__857->SetBinContent(16,0.3021661);
   plot__857->SetBinContent(17,0.2931214);
   plot__857->SetBinContent(18,0.2114901);
   plot__857->SetBinContent(19,0.1411441);
   plot__857->SetBinContent(20,0.03755476);
   plot__857->SetBinContent(21,0.01801305);
   plot__857->SetBinContent(23,0.1095435);
   plot__857->SetBinContent(24,0.001587587);
   plot__857->SetBinError(10,4.95305);
   plot__857->SetBinError(11,2.653935);
   plot__857->SetBinError(12,1.861655);
   plot__857->SetBinError(13,1.035651);
   plot__857->SetBinError(14,0.8084251);
   plot__857->SetBinError(15,0.3076665);
   plot__857->SetBinError(16,0.1755449);
   plot__857->SetBinError(17,0.1073741);
   plot__857->SetBinError(18,0.1008976);
   plot__857->SetBinError(19,0.07266648);
   plot__857->SetBinError(20,0.03755476);
   plot__857->SetBinError(21,0.01801305);
   plot__857->SetBinError(23,0.2340336);
   plot__857->SetBinError(24,0.001587587);
   plot__857->SetEntries(1019);
   plot__857->SetFillColor(2);
   plot__857->SetLineColor(2);
   plot__857->SetLineWidth(3);
   plot__857->GetXaxis()->SetTitle("#alpha_{T}");
   plot__857->GetXaxis()->SetRange(1,23);
   plot__857->GetXaxis()->SetLabelFont(42);
   plot__857->GetXaxis()->SetLabelSize(0.035);
   plot__857->GetXaxis()->SetTitleSize(0.035);
   plot__857->GetXaxis()->SetTitleFont(42);
   plot__857->GetYaxis()->SetTitle("Events/0.025");
   plot__857->GetYaxis()->SetLabelFont(42);
   plot__857->GetYaxis()->SetLabelSize(0.035);
   plot__857->GetYaxis()->SetTitleSize(0.035);
   plot__857->GetYaxis()->SetTitleFont(42);
   plot__857->GetZaxis()->SetLabelFont(42);
   plot__857->GetZaxis()->SetLabelSize(0.035);
   plot__857->GetZaxis()->SetTitleSize(0.035);
   plot__857->GetZaxis()->SetTitleFont(42);
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_all","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_all","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   Double_t xAxis913[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__858 = new TH1D("plot__858","",24, xAxis913);
   plot__858->SetBinContent(10,117);
   plot__858->SetBinContent(11,43);
   plot__858->SetBinContent(12,20);
   plot__858->SetBinContent(13,6);
   plot__858->SetBinContent(14,4);
   plot__858->SetBinContent(15,1.5);
   plot__858->SetBinContent(16,1);
   plot__858->SetBinContent(17,1.2);
   plot__858->SetBinContent(18,0.2);
   plot__858->SetBinContent(19,0.4);
   plot__858->SetBinContent(20,0.2);
   plot__858->SetBinContent(21,0.1);
   plot__858->SetBinContent(23,1);
   plot__858->SetBinContent(24,0.01449275);
   plot__858->SetBinError(10,10.81665);
   plot__858->SetBinError(11,6.557439);
   plot__858->SetBinError(12,4.472136);
   plot__858->SetBinError(13,2.49);
   plot__858->SetBinError(14,2.14);
   plot__858->SetBinError(15,1);
   plot__858->SetBinError(16,1);
   plot__858->SetBinError(17,1);
   plot__858->SetBinError(24,0.01024792);
   plot__858->SetMinimum(0.11);
   plot__858->SetMaximum(1465.685);
   plot__858->SetEntries(233);

   ci = TColor::GetColor("#000099");
   plot__858->SetLineColor(ci);
   plot__858->SetLineWidth(2);
   plot__858->SetMarkerStyle(20);
   plot__858->SetMarkerSize(1.5);
   plot__858->GetXaxis()->SetTitle("#alpha_{T}");
   plot__858->GetXaxis()->SetRange(1,23);
   plot__858->GetXaxis()->SetLabelFont(42);
   plot__858->GetXaxis()->SetLabelSize(0.035);
   plot__858->GetXaxis()->SetTitleSize(0.035);
   plot__858->GetXaxis()->SetTitleFont(42);
   plot__858->GetYaxis()->SetTitle("Events");
   plot__858->GetYaxis()->SetLabelFont(42);
   plot__858->GetYaxis()->SetLabelSize(0.035);
   plot__858->GetYaxis()->SetTitleSize(0.035);
   plot__858->GetYaxis()->SetTitleOffset(1.3);
   plot__858->GetYaxis()->SetTitleFont(42);
   plot__858->GetZaxis()->SetLabelFont(42);
   plot__858->GetZaxis()->SetLabelSize(0.035);
   plot__858->GetZaxis()->SetTitleSize(0.035);
   plot__858->GetZaxis()->SetTitleFont(42);
   plot__858->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_375_    Jet Multiplicity=all");
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
   canvasbtag_two_375_475/AlphaT_all->cd();
  
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
   Double_t xAxis914[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__859 = new TH1D("plot__859","",24, xAxis914);
   plot__859->SetBinContent(10,0.7982613);
   plot__859->SetBinContent(11,0.9733187);
   plot__859->SetBinContent(12,0.927642);
   plot__859->SetBinContent(13,0.679132);
   plot__859->SetBinContent(14,0.7838049);
   plot__859->SetBinContent(15,0.6520584);
   plot__859->SetBinContent(16,0.8261848);
   plot__859->SetBinContent(17,1.355435);
   plot__859->SetBinContent(18,0.4868336);
   plot__859->SetBinContent(19,1.703006);
   plot__859->SetBinContent(20,1.411168);
   plot__859->SetBinContent(21,1.720674);
   plot__859->SetBinContent(23,4.223577);
   plot__859->SetBinContent(24,4.269134);
   plot__859->SetBinError(10,0.07379928);
   plot__859->SetBinError(11,0.1484297);
   plot__859->SetBinError(12,0.2074271);
   plot__859->SetBinError(13,0.2818398);
   plot__859->SetBinError(14,0.4193356);
   plot__859->SetBinError(15,0.4347056);
   plot__859->SetBinError(16,0.8261848);
   plot__859->SetBinError(17,1.129529);
   plot__859->SetBinError(24,3.018733);
   plot__859->SetMinimum(0);
   plot__859->SetMaximum(2);
   plot__859->SetEntries(6.636454);

   ci = TColor::GetColor("#000099");
   plot__859->SetLineColor(ci);
   plot__859->SetLineWidth(2);
   plot__859->SetMarkerStyle(20);
   plot__859->SetMarkerSize(1.5);
   plot__859->GetXaxis()->SetRange(1,23);
   plot__859->GetXaxis()->SetLabelFont(42);
   plot__859->GetXaxis()->SetLabelSize(0.12);
   plot__859->GetXaxis()->SetTitleSize(0.035);
   plot__859->GetXaxis()->SetTitleFont(42);
   plot__859->GetYaxis()->SetTitle("Data/MC");
   plot__859->GetYaxis()->SetNdivisions(505);
   plot__859->GetYaxis()->SetLabelFont(42);
   plot__859->GetYaxis()->SetLabelSize(0.11);
   plot__859->GetYaxis()->SetTitleSize(0.1);
   plot__859->GetYaxis()->SetTitleOffset(0.5);
   plot__859->GetYaxis()->SetTitleFont(42);
   plot__859->GetZaxis()->SetLabelFont(42);
   plot__859->GetZaxis()->SetLabelSize(0.035);
   plot__859->GetZaxis()->SetTitleSize(0.035);
   plot__859->GetZaxis()->SetTitleFont(42);
   plot__859->Draw("p");
   
   Double_t Graph_from_plot_fx1220[24] = {
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
   Double_t Graph_from_plot_fy1220[24] = {
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
   4.269134};
   Double_t Graph_from_plot_fex1220[24] = {
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
   Double_t Graph_from_plot_fey1220[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.03650024,
   0.06498352,
   0.09209863,
   0.1509846,
   0.1795387,
   0.1617383,
   0.21954,
   0.1883563,
   0.2588256,
   0.3220995,
   0.3218455,
   0.371575,
   0.5038999,
   1.453199,
   0.5399996};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1220,Graph_from_plot_fy1220,Graph_from_plot_fex1220,Graph_from_plot_fey1220);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1220 = new TH1F("Graph_Graph_from_plot1220","",100,0,11);
   Graph_Graph_from_plot1220->SetMinimum(-0.9794327);
   Graph_Graph_from_plot1220->SetMaximum(5.335366);
   Graph_Graph_from_plot1220->SetDirectory(0);
   Graph_Graph_from_plot1220->SetStats(0);
   Graph_Graph_from_plot1220->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1220->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1220->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1220->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1220->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1220->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1220->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1220->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1220->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1220->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1220);
   
   gre->Draw("2");
   Double_t xAxis915[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__860 = new TH1D("plot__860","",24, xAxis915);
   plot__860->SetBinContent(10,0.7982613);
   plot__860->SetBinContent(11,0.9733187);
   plot__860->SetBinContent(12,0.927642);
   plot__860->SetBinContent(13,0.679132);
   plot__860->SetBinContent(14,0.7838049);
   plot__860->SetBinContent(15,0.6520584);
   plot__860->SetBinContent(16,0.8261848);
   plot__860->SetBinContent(17,1.355435);
   plot__860->SetBinContent(18,0.4868336);
   plot__860->SetBinContent(19,1.703006);
   plot__860->SetBinContent(20,1.411168);
   plot__860->SetBinContent(21,1.720674);
   plot__860->SetBinContent(23,4.223577);
   plot__860->SetBinContent(24,4.269134);
   plot__860->SetBinError(10,0.07379928);
   plot__860->SetBinError(11,0.1484297);
   plot__860->SetBinError(12,0.2074271);
   plot__860->SetBinError(13,0.2818398);
   plot__860->SetBinError(14,0.4193356);
   plot__860->SetBinError(15,0.4347056);
   plot__860->SetBinError(16,0.8261848);
   plot__860->SetBinError(17,1.129529);
   plot__860->SetBinError(24,3.018733);
   plot__860->SetMinimum(0);
   plot__860->SetMaximum(2);
   plot__860->SetEntries(6.636454);

   ci = TColor::GetColor("#000099");
   plot__860->SetLineColor(ci);
   plot__860->SetLineWidth(2);
   plot__860->SetMarkerStyle(20);
   plot__860->SetMarkerSize(1.5);
   plot__860->GetXaxis()->SetRange(1,23);
   plot__860->GetXaxis()->SetLabelFont(42);
   plot__860->GetXaxis()->SetLabelSize(0.12);
   plot__860->GetXaxis()->SetTitleSize(0.035);
   plot__860->GetXaxis()->SetTitleFont(42);
   plot__860->GetYaxis()->SetTitle("Data/MC");
   plot__860->GetYaxis()->SetNdivisions(505);
   plot__860->GetYaxis()->SetLabelFont(42);
   plot__860->GetYaxis()->SetLabelSize(0.11);
   plot__860->GetYaxis()->SetTitleSize(0.1);
   plot__860->GetYaxis()->SetTitleOffset(0.5);
   plot__860->GetYaxis()->SetTitleFont(42);
   plot__860->GetZaxis()->SetLabelFont(42);
   plot__860->GetZaxis()->SetLabelSize(0.035);
   plot__860->GetZaxis()->SetTitleSize(0.035);
   plot__860->GetZaxis()->SetTitleFont(42);
   plot__860->Draw("PSAME");
   d->Modified();
   canvasbtag_two_375_475/AlphaT_all->cd();
   canvasbtag_two_375_475/AlphaT_all->Modified();
   canvasbtag_two_375_475/AlphaT_all->cd();
   canvasbtag_two_375_475/AlphaT_all->SetSelected(canvasbtag_two_375_475/AlphaT_all);
}
