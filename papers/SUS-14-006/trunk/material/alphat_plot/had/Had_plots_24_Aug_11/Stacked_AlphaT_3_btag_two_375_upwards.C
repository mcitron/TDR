void Stacked_AlphaT_3_btag_two_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_375_475/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:08 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_375_475/AlphaT_3 = new TCanvas("canvasbtag_two_375_475/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_375_475/AlphaT_3->SetHighLightColor(2);
   canvasbtag_two_375_475/AlphaT_3->Range(0,0,1,1);
   canvasbtag_two_375_475/AlphaT_3->SetFillColor(0);
   canvasbtag_two_375_475/AlphaT_3->SetBorderMode(0);
   canvasbtag_two_375_475/AlphaT_3->SetBorderSize(2);
   canvasbtag_two_375_475/AlphaT_3->SetTickx(1);
   canvasbtag_two_375_475/AlphaT_3->SetTicky(1);
   canvasbtag_two_375_475/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.453193,3.4875,3.492666);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis970[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__912 = new TH1D("plot__912","",24, xAxis970);
   plot__912->SetBinContent(10,86);
   plot__912->SetBinContent(11,25);
   plot__912->SetBinContent(12,9);
   plot__912->SetBinContent(13,3);
   plot__912->SetBinContent(14,2);
   plot__912->SetBinContent(15,0.5);
   plot__912->SetBinContent(16,0.5);
   plot__912->SetBinContent(17,0.2);
   plot__912->SetBinError(10,9.273618);
   plot__912->SetBinError(11,5);
   plot__912->SetBinError(12,3.19);
   plot__912->SetBinError(13,2);
   plot__912->SetBinError(14,1);
   plot__912->SetMinimum(0.11);
   plot__912->SetMaximum(995.5884);
   plot__912->SetEntries(153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__912->SetLineColor(ci);
   plot__912->SetLineWidth(2);
   plot__912->SetMarkerStyle(20);
   plot__912->SetMarkerSize(1.5);
   plot__912->GetXaxis()->SetTitle("#alpha_{T}");
   plot__912->GetXaxis()->SetRange(1,23);
   plot__912->GetXaxis()->SetLabelFont(42);
   plot__912->GetXaxis()->SetLabelSize(0.035);
   plot__912->GetXaxis()->SetTitleSize(0.035);
   plot__912->GetXaxis()->SetTitleFont(42);
   plot__912->GetYaxis()->SetTitle("Events");
   plot__912->GetYaxis()->SetLabelFont(42);
   plot__912->GetYaxis()->SetLabelSize(0.035);
   plot__912->GetYaxis()->SetTitleSize(0.035);
   plot__912->GetYaxis()->SetTitleOffset(1.3);
   plot__912->GetYaxis()->SetTitleFont(42);
   plot__912->GetZaxis()->SetLabelFont(42);
   plot__912->GetZaxis()->SetLabelSize(0.035);
   plot__912->GetZaxis()->SetTitleSize(0.035);
   plot__912->GetZaxis()->SetTitleFont(42);
   plot__912->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis971[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_59 = new TH1F("_stack_59","",24, xAxis971);
   _stack_59->SetMinimum(0.03982353);
   _stack_59->SetMaximum(159.2941);
   _stack_59->SetDirectory(0);
   _stack_59->SetStats(0);
   _stack_59->GetXaxis()->SetLabelFont(42);
   _stack_59->GetXaxis()->SetLabelOffset(0.007);
   _stack_59->GetXaxis()->SetLabelSize(0.05);
   _stack_59->GetXaxis()->SetTitleSize(0.05);
   _stack_59->GetYaxis()->SetLabelFont(42);
   _stack_59->GetYaxis()->SetLabelOffset(0.007);
   _stack_59->GetYaxis()->SetLabelSize(0.05);
   _stack_59->GetZaxis()->SetLabelFont(42);
   _stack_59->GetZaxis()->SetLabelOffset(0.007);
   _stack_59->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_59);
   
   Double_t xAxis972[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__913 = new TH1D("plot__913","",24, xAxis972);
   plot__913->SetEntries(25);
   plot__913->SetFillColor(7);
   plot__913->SetLineColor(7);
   plot__913->SetLineStyle(10);
   plot__913->SetLineWidth(3);
   plot__913->GetXaxis()->SetTitle("#alpha_{T}");
   plot__913->GetXaxis()->SetRange(1,23);
   plot__913->GetXaxis()->SetLabelFont(42);
   plot__913->GetXaxis()->SetLabelSize(0.035);
   plot__913->GetXaxis()->SetTitleSize(0.035);
   plot__913->GetXaxis()->SetTitleFont(42);
   plot__913->GetYaxis()->SetTitle("Events/0.025");
   plot__913->GetYaxis()->SetLabelFont(42);
   plot__913->GetYaxis()->SetLabelSize(0.035);
   plot__913->GetYaxis()->SetTitleSize(0.035);
   plot__913->GetYaxis()->SetTitleFont(42);
   plot__913->GetZaxis()->SetLabelFont(42);
   plot__913->GetZaxis()->SetLabelSize(0.035);
   plot__913->GetZaxis()->SetTitleSize(0.035);
   plot__913->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis973[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__914 = new TH1D("plot__914","",24, xAxis973);
   plot__914->SetBinContent(11,0.02320805);
   plot__914->SetBinContent(12,0.02265738);
   plot__914->SetBinError(11,0.02320805);
   plot__914->SetBinError(12,0.02265738);
   plot__914->SetEntries(27);
   plot__914->SetFillColor(6);
   plot__914->SetLineColor(6);
   plot__914->SetLineWidth(3);
   plot__914->GetXaxis()->SetTitle("#alpha_{T}");
   plot__914->GetXaxis()->SetRange(1,23);
   plot__914->GetXaxis()->SetLabelFont(42);
   plot__914->GetXaxis()->SetLabelSize(0.035);
   plot__914->GetXaxis()->SetTitleSize(0.035);
   plot__914->GetXaxis()->SetTitleFont(42);
   plot__914->GetYaxis()->SetTitle("Events/0.025");
   plot__914->GetYaxis()->SetLabelFont(42);
   plot__914->GetYaxis()->SetLabelSize(0.035);
   plot__914->GetYaxis()->SetTitleSize(0.035);
   plot__914->GetYaxis()->SetTitleFont(42);
   plot__914->GetZaxis()->SetLabelFont(42);
   plot__914->GetZaxis()->SetLabelSize(0.035);
   plot__914->GetZaxis()->SetTitleSize(0.035);
   plot__914->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis974[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__915 = new TH1D("plot__915","",24, xAxis974);
   plot__915->SetBinContent(10,0.2569378);
   plot__915->SetBinContent(11,0.1047207);
   plot__915->SetBinContent(12,0.004782516);
   plot__915->SetBinContent(13,0.0214092);
   plot__915->SetBinContent(14,0.05625754);
   plot__915->SetBinContent(15,0.008298182);
   plot__915->SetBinError(10,0.07669516);
   plot__915->SetBinError(11,0.04904876);
   plot__915->SetBinError(12,0.004782516);
   plot__915->SetBinError(13,0.0214092);
   plot__915->SetBinError(14,0.0404366);
   plot__915->SetBinError(15,0.008298182);
   plot__915->SetEntries(49);
   plot__915->SetFillColor(44);
   plot__915->SetLineColor(44);
   plot__915->SetLineWidth(3);
   plot__915->GetXaxis()->SetTitle("#alpha_{T}");
   plot__915->GetXaxis()->SetRange(1,23);
   plot__915->GetXaxis()->SetLabelFont(42);
   plot__915->GetXaxis()->SetLabelSize(0.035);
   plot__915->GetXaxis()->SetTitleSize(0.035);
   plot__915->GetXaxis()->SetTitleFont(42);
   plot__915->GetYaxis()->SetTitle("Events/0.025");
   plot__915->GetYaxis()->SetLabelFont(42);
   plot__915->GetYaxis()->SetLabelSize(0.035);
   plot__915->GetYaxis()->SetTitleSize(0.035);
   plot__915->GetYaxis()->SetTitleFont(42);
   plot__915->GetZaxis()->SetLabelFont(42);
   plot__915->GetZaxis()->SetLabelSize(0.035);
   plot__915->GetZaxis()->SetTitleSize(0.035);
   plot__915->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis975[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__916 = new TH1D("plot__916","",24, xAxis975);
   plot__916->SetBinContent(10,3.320841);
   plot__916->SetBinContent(11,1.122498);
   plot__916->SetBinContent(12,0.4358348);
   plot__916->SetBinContent(13,0.1140856);
   plot__916->SetBinContent(15,0.08018483);
   plot__916->SetBinContent(16,0.09706669);
   plot__916->SetBinContent(17,0.06328941);
   plot__916->SetBinError(10,0.6580649);
   plot__916->SetBinError(11,0.3656948);
   plot__916->SetBinError(12,0.2168249);
   plot__916->SetBinError(13,0.1140856);
   plot__916->SetBinError(15,0.08018483);
   plot__916->SetBinError(16,0.07184825);
   plot__916->SetBinError(17,0.04539314);
   plot__916->SetEntries(76);
   plot__916->SetFillColor(4);
   plot__916->SetLineColor(4);
   plot__916->SetLineWidth(3);
   plot__916->GetXaxis()->SetTitle("#alpha_{T}");
   plot__916->GetXaxis()->SetRange(1,23);
   plot__916->GetXaxis()->SetLabelFont(42);
   plot__916->GetXaxis()->SetLabelSize(0.035);
   plot__916->GetXaxis()->SetTitleSize(0.035);
   plot__916->GetXaxis()->SetTitleFont(42);
   plot__916->GetYaxis()->SetTitle("Events/0.025");
   plot__916->GetYaxis()->SetLabelFont(42);
   plot__916->GetYaxis()->SetLabelSize(0.035);
   plot__916->GetYaxis()->SetTitleSize(0.035);
   plot__916->GetYaxis()->SetTitleFont(42);
   plot__916->GetZaxis()->SetLabelFont(42);
   plot__916->GetZaxis()->SetLabelSize(0.035);
   plot__916->GetZaxis()->SetTitleSize(0.035);
   plot__916->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis976[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__917 = new TH1D("plot__917","",24, xAxis976);
   plot__917->SetBinContent(10,4.113193);
   plot__917->SetBinContent(11,0.9054544);
   plot__917->SetBinContent(13,0.5842133);
   plot__917->SetBinContent(14,0.3195099);
   plot__917->SetBinError(10,1.449914);
   plot__917->SetBinError(11,0.6448612);
   plot__917->SetBinError(13,0.5842133);
   plot__917->SetBinError(14,0.3195099);
   plot__917->SetEntries(39);
   plot__917->SetFillColor(40);
   plot__917->SetLineColor(40);
   plot__917->SetLineWidth(3);
   plot__917->GetXaxis()->SetTitle("#alpha_{T}");
   plot__917->GetXaxis()->SetRange(1,23);
   plot__917->GetXaxis()->SetLabelFont(42);
   plot__917->GetXaxis()->SetLabelSize(0.035);
   plot__917->GetXaxis()->SetTitleSize(0.035);
   plot__917->GetXaxis()->SetTitleFont(42);
   plot__917->GetYaxis()->SetTitle("Events/0.025");
   plot__917->GetYaxis()->SetLabelFont(42);
   plot__917->GetYaxis()->SetLabelSize(0.035);
   plot__917->GetYaxis()->SetTitleSize(0.035);
   plot__917->GetYaxis()->SetTitleFont(42);
   plot__917->GetZaxis()->SetLabelFont(42);
   plot__917->GetZaxis()->SetLabelSize(0.035);
   plot__917->GetZaxis()->SetTitleSize(0.035);
   plot__917->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis977[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__918 = new TH1D("plot__918","",24, xAxis977);
   plot__918->SetBinContent(10,6.520881);
   plot__918->SetBinContent(11,2.231555);
   plot__918->SetBinContent(12,0.9809066);
   plot__918->SetBinContent(13,0.5205167);
   plot__918->SetBinContent(14,0.3868592);
   plot__918->SetBinContent(15,0.2024057);
   plot__918->SetBinContent(16,0.127063);
   plot__918->SetBinContent(17,0.04261986);
   plot__918->SetBinContent(18,0.01995046);
   plot__918->SetBinContent(19,0.008918245);
   plot__918->SetBinContent(20,0.005173888);
   plot__918->SetBinError(10,0.4481998);
   plot__918->SetBinError(11,0.2538882);
   plot__918->SetBinError(12,0.1673916);
   plot__918->SetBinError(13,0.1066939);
   plot__918->SetBinError(14,0.1119887);
   plot__918->SetBinError(15,0.04673868);
   plot__918->SetBinError(16,0.05951511);
   plot__918->SetBinError(17,0.01435738);
   plot__918->SetBinError(18,0.01016058);
   plot__918->SetBinError(19,0.00636291);
   plot__918->SetBinError(20,0.005173888);
   plot__918->SetEntries(526);
   plot__918->SetFillColor(5);
   plot__918->SetLineColor(5);
   plot__918->SetLineWidth(3);
   plot__918->GetXaxis()->SetTitle("#alpha_{T}");
   plot__918->GetXaxis()->SetRange(1,23);
   plot__918->GetXaxis()->SetLabelFont(42);
   plot__918->GetXaxis()->SetLabelSize(0.035);
   plot__918->GetXaxis()->SetTitleSize(0.035);
   plot__918->GetXaxis()->SetTitleFont(42);
   plot__918->GetYaxis()->SetTitle("Events/0.025");
   plot__918->GetYaxis()->SetLabelFont(42);
   plot__918->GetYaxis()->SetLabelSize(0.035);
   plot__918->GetYaxis()->SetTitleSize(0.035);
   plot__918->GetYaxis()->SetTitleFont(42);
   plot__918->GetZaxis()->SetLabelFont(42);
   plot__918->GetZaxis()->SetLabelSize(0.035);
   plot__918->GetZaxis()->SetTitleSize(0.035);
   plot__918->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis978[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__919 = new TH1D("plot__919","",24, xAxis978);
   plot__919->SetBinContent(10,85.34698);
   plot__919->SetBinContent(11,22.64479);
   plot__919->SetBinContent(12,10.54778);
   plot__919->SetBinContent(13,3.122728);
   plot__919->SetBinContent(14,2.343373);
   plot__919->SetBinContent(15,0.5567921);
   plot__919->SetBinContent(16,0.08565999);
   plot__919->SetBinContent(17,0.08550646);
   plot__919->SetBinContent(18,0.06882089);
   plot__919->SetBinContent(19,0.04145886);
   plot__919->SetBinError(10,4.186287);
   plot__919->SetBinError(11,2.178924);
   plot__919->SetBinError(12,1.481196);
   plot__919->SetBinError(13,0.7963332);
   plot__919->SetBinError(14,0.7297837);
   plot__919->SetBinError(15,0.2278862);
   plot__919->SetBinError(16,0.08565999);
   plot__919->SetBinError(17,0.06049738);
   plot__919->SetBinError(18,0.06882089);
   plot__919->SetBinError(19,0.04145886);
   plot__919->SetEntries(693);
   plot__919->SetFillColor(2);
   plot__919->SetLineColor(2);
   plot__919->SetLineWidth(3);
   plot__919->GetXaxis()->SetTitle("#alpha_{T}");
   plot__919->GetXaxis()->SetRange(1,23);
   plot__919->GetXaxis()->SetLabelFont(42);
   plot__919->GetXaxis()->SetLabelSize(0.035);
   plot__919->GetXaxis()->SetTitleSize(0.035);
   plot__919->GetXaxis()->SetTitleFont(42);
   plot__919->GetYaxis()->SetTitle("Events/0.025");
   plot__919->GetYaxis()->SetLabelFont(42);
   plot__919->GetYaxis()->SetLabelSize(0.035);
   plot__919->GetYaxis()->SetTitleSize(0.035);
   plot__919->GetYaxis()->SetTitleFont(42);
   plot__919->GetZaxis()->SetLabelFont(42);
   plot__919->GetZaxis()->SetLabelSize(0.035);
   plot__919->GetZaxis()->SetTitleSize(0.035);
   plot__919->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis979[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__920 = new TH1D("plot__920","",24, xAxis979);
   plot__920->SetBinContent(10,86);
   plot__920->SetBinContent(11,25);
   plot__920->SetBinContent(12,9);
   plot__920->SetBinContent(13,3);
   plot__920->SetBinContent(14,2);
   plot__920->SetBinContent(15,0.5);
   plot__920->SetBinContent(16,0.5);
   plot__920->SetBinContent(17,0.2);
   plot__920->SetBinError(10,9.273618);
   plot__920->SetBinError(11,5);
   plot__920->SetBinError(12,3.19);
   plot__920->SetBinError(13,2);
   plot__920->SetBinError(14,1);
   plot__920->SetMinimum(0.11);
   plot__920->SetMaximum(995.5884);
   plot__920->SetEntries(153);

   ci = TColor::GetColor("#000099");
   plot__920->SetLineColor(ci);
   plot__920->SetLineWidth(2);
   plot__920->SetMarkerStyle(20);
   plot__920->SetMarkerSize(1.5);
   plot__920->GetXaxis()->SetTitle("#alpha_{T}");
   plot__920->GetXaxis()->SetRange(1,23);
   plot__920->GetXaxis()->SetLabelFont(42);
   plot__920->GetXaxis()->SetLabelSize(0.035);
   plot__920->GetXaxis()->SetTitleSize(0.035);
   plot__920->GetXaxis()->SetTitleFont(42);
   plot__920->GetYaxis()->SetTitle("Events");
   plot__920->GetYaxis()->SetLabelFont(42);
   plot__920->GetYaxis()->SetLabelSize(0.035);
   plot__920->GetYaxis()->SetTitleSize(0.035);
   plot__920->GetYaxis()->SetTitleOffset(1.3);
   plot__920->GetYaxis()->SetTitleFont(42);
   plot__920->GetZaxis()->SetLabelFont(42);
   plot__920->GetZaxis()->SetLabelSize(0.035);
   plot__920->GetZaxis()->SetTitleSize(0.035);
   plot__920->GetZaxis()->SetTitleFont(42);
   plot__920->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_375_    Jet Multiplicity>3");
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
   canvasbtag_two_375_475/AlphaT_3->cd();
  
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
   Double_t xAxis980[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__921 = new TH1D("plot__921","",24, xAxis980);
   plot__921->SetBinContent(10,0.8638108);
   plot__921->SetBinContent(11,0.9248222);
   plot__921->SetBinContent(12,0.750503);
   plot__921->SetBinContent(13,0.6876077);
   plot__921->SetBinContent(14,0.6439151);
   plot__921->SetBinContent(15,0.5898446);
   plot__921->SetBinContent(16,1.613998);
   plot__921->SetBinContent(17,1.044846);
   plot__921->SetBinError(10,0.09314712);
   plot__921->SetBinError(11,0.1849644);
   plot__921->SetBinError(12,0.2660116);
   plot__921->SetBinError(13,0.4584052);
   plot__921->SetBinError(14,0.3219576);
   plot__921->SetMinimum(0);
   plot__921->SetMaximum(2);
   plot__921->SetEntries(44.5293);

   ci = TColor::GetColor("#000099");
   plot__921->SetLineColor(ci);
   plot__921->SetLineWidth(2);
   plot__921->SetMarkerStyle(20);
   plot__921->SetMarkerSize(1.5);
   plot__921->GetXaxis()->SetRange(1,23);
   plot__921->GetXaxis()->SetLabelFont(42);
   plot__921->GetXaxis()->SetLabelSize(0.12);
   plot__921->GetXaxis()->SetTitleSize(0.035);
   plot__921->GetXaxis()->SetTitleFont(42);
   plot__921->GetYaxis()->SetTitle("Data/MC");
   plot__921->GetYaxis()->SetNdivisions(505);
   plot__921->GetYaxis()->SetLabelFont(42);
   plot__921->GetYaxis()->SetLabelSize(0.11);
   plot__921->GetYaxis()->SetTitleSize(0.1);
   plot__921->GetYaxis()->SetTitleOffset(0.5);
   plot__921->GetYaxis()->SetTitleFont(42);
   plot__921->GetZaxis()->SetLabelFont(42);
   plot__921->GetZaxis()->SetLabelSize(0.035);
   plot__921->GetZaxis()->SetTitleSize(0.035);
   plot__921->GetZaxis()->SetTitleFont(42);
   plot__921->Draw("p");
   
   Double_t Graph_from_plot_fx1236[24] = {
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
   Double_t Graph_from_plot_fy1236[24] = {
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
   Double_t Graph_from_plot_fex1236[24] = {
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
   Double_t Graph_from_plot_fey1236[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.04521845,
   0.08568222,
   0.125625,
   0.229238,
   0.2593403,
   0.290441,
   0.4088465,
   0.4021845,
   0.7836638,
   0.8326063,
   1,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1236,Graph_from_plot_fy1236,Graph_from_plot_fex1236,Graph_from_plot_fey1236);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1236 = new TH1F("Graph_Graph_from_plot1236","",100,0,11);
   Graph_Graph_from_plot1236->SetMinimum(0);
   Graph_Graph_from_plot1236->SetMaximum(2.2);
   Graph_Graph_from_plot1236->SetDirectory(0);
   Graph_Graph_from_plot1236->SetStats(0);
   Graph_Graph_from_plot1236->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1236->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1236->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1236->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1236->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1236->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1236->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1236->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1236->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1236->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1236);
   
   gre->Draw("2");
   Double_t xAxis981[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__922 = new TH1D("plot__922","",24, xAxis981);
   plot__922->SetBinContent(10,0.8638108);
   plot__922->SetBinContent(11,0.9248222);
   plot__922->SetBinContent(12,0.750503);
   plot__922->SetBinContent(13,0.6876077);
   plot__922->SetBinContent(14,0.6439151);
   plot__922->SetBinContent(15,0.5898446);
   plot__922->SetBinContent(16,1.613998);
   plot__922->SetBinContent(17,1.044846);
   plot__922->SetBinError(10,0.09314712);
   plot__922->SetBinError(11,0.1849644);
   plot__922->SetBinError(12,0.2660116);
   plot__922->SetBinError(13,0.4584052);
   plot__922->SetBinError(14,0.3219576);
   plot__922->SetMinimum(0);
   plot__922->SetMaximum(2);
   plot__922->SetEntries(44.5293);

   ci = TColor::GetColor("#000099");
   plot__922->SetLineColor(ci);
   plot__922->SetLineWidth(2);
   plot__922->SetMarkerStyle(20);
   plot__922->SetMarkerSize(1.5);
   plot__922->GetXaxis()->SetRange(1,23);
   plot__922->GetXaxis()->SetLabelFont(42);
   plot__922->GetXaxis()->SetLabelSize(0.12);
   plot__922->GetXaxis()->SetTitleSize(0.035);
   plot__922->GetXaxis()->SetTitleFont(42);
   plot__922->GetYaxis()->SetTitle("Data/MC");
   plot__922->GetYaxis()->SetNdivisions(505);
   plot__922->GetYaxis()->SetLabelFont(42);
   plot__922->GetYaxis()->SetLabelSize(0.11);
   plot__922->GetYaxis()->SetTitleSize(0.1);
   plot__922->GetYaxis()->SetTitleOffset(0.5);
   plot__922->GetYaxis()->SetTitleFont(42);
   plot__922->GetZaxis()->SetLabelFont(42);
   plot__922->GetZaxis()->SetLabelSize(0.035);
   plot__922->GetZaxis()->SetTitleSize(0.035);
   plot__922->GetZaxis()->SetTitleFont(42);
   plot__922->Draw("PSAME");
   d->Modified();
   canvasbtag_two_375_475/AlphaT_3->cd();
   canvasbtag_two_375_475/AlphaT_3->Modified();
   canvasbtag_two_375_475/AlphaT_3->cd();
   canvasbtag_two_375_475/AlphaT_3->SetSelected(canvasbtag_two_375_475/AlphaT_3);
}
