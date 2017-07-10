void Stacked_AlphaT_3_btag_two_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_200_275/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:12 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_200_275/AlphaT_3 = new TCanvas("canvasbtag_two_200_275/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
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
   Double_t xAxis1168[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1098 = new TH1D("plot__1098","",24, xAxis1168);
   plot__1098->SetBinContent(10,148);
   plot__1098->SetBinContent(11,97);
   plot__1098->SetBinContent(12,36);
   plot__1098->SetBinContent(13,16);
   plot__1098->SetBinContent(14,5);
   plot__1098->SetBinContent(15,3);
   plot__1098->SetBinContent(16,1);
   plot__1098->SetBinContent(17,0.4);
   plot__1098->SetBinContent(18,0.2);
   plot__1098->SetBinError(10,12.16553);
   plot__1098->SetBinError(11,9.848858);
   plot__1098->SetBinError(12,6);
   plot__1098->SetBinError(13,4);
   plot__1098->SetBinError(14,2.3);
   plot__1098->SetBinError(15,2.14);
   plot__1098->SetBinError(16,1);
   plot__1098->SetMinimum(0.11);
   plot__1098->SetMaximum(1765.726);
   plot__1098->SetEntries(338);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1098->SetLineColor(ci);
   plot__1098->SetLineWidth(2);
   plot__1098->SetMarkerStyle(20);
   plot__1098->SetMarkerSize(1.5);
   plot__1098->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1098->GetXaxis()->SetRange(1,23);
   plot__1098->GetXaxis()->SetLabelFont(42);
   plot__1098->GetXaxis()->SetLabelSize(0.035);
   plot__1098->GetXaxis()->SetTitleSize(0.035);
   plot__1098->GetXaxis()->SetTitleFont(42);
   plot__1098->GetYaxis()->SetTitle("Events");
   plot__1098->GetYaxis()->SetLabelFont(42);
   plot__1098->GetYaxis()->SetLabelSize(0.035);
   plot__1098->GetYaxis()->SetTitleSize(0.035);
   plot__1098->GetYaxis()->SetTitleOffset(1.3);
   plot__1098->GetYaxis()->SetTitleFont(42);
   plot__1098->GetZaxis()->SetLabelFont(42);
   plot__1098->GetZaxis()->SetLabelSize(0.035);
   plot__1098->GetZaxis()->SetTitleSize(0.035);
   plot__1098->GetZaxis()->SetTitleFont(42);
   plot__1098->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1169[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_71 = new TH1F("_stack_71","",24, xAxis1169);
   _stack_71->SetMinimum(0.07062904);
   _stack_71->SetMaximum(282.5161);
   _stack_71->SetDirectory(0);
   _stack_71->SetStats(0);
   _stack_71->GetXaxis()->SetLabelFont(42);
   _stack_71->GetXaxis()->SetLabelOffset(0.007);
   _stack_71->GetXaxis()->SetLabelSize(0.05);
   _stack_71->GetXaxis()->SetTitleSize(0.05);
   _stack_71->GetYaxis()->SetLabelFont(42);
   _stack_71->GetYaxis()->SetLabelOffset(0.007);
   _stack_71->GetYaxis()->SetLabelSize(0.05);
   _stack_71->GetZaxis()->SetLabelFont(42);
   _stack_71->GetZaxis()->SetLabelOffset(0.007);
   _stack_71->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_71);
   
   Double_t xAxis1170[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1099 = new TH1D("plot__1099","",24, xAxis1170);
   plot__1099->SetEntries(25);
   plot__1099->SetFillColor(7);
   plot__1099->SetLineColor(7);
   plot__1099->SetLineStyle(10);
   plot__1099->SetLineWidth(3);
   plot__1099->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1099->GetXaxis()->SetRange(1,23);
   plot__1099->GetXaxis()->SetLabelFont(42);
   plot__1099->GetXaxis()->SetLabelSize(0.035);
   plot__1099->GetXaxis()->SetTitleSize(0.035);
   plot__1099->GetXaxis()->SetTitleFont(42);
   plot__1099->GetYaxis()->SetTitle("Events/0.025");
   plot__1099->GetYaxis()->SetLabelFont(42);
   plot__1099->GetYaxis()->SetLabelSize(0.035);
   plot__1099->GetYaxis()->SetTitleSize(0.035);
   plot__1099->GetYaxis()->SetTitleFont(42);
   plot__1099->GetZaxis()->SetLabelFont(42);
   plot__1099->GetZaxis()->SetLabelSize(0.035);
   plot__1099->GetZaxis()->SetTitleSize(0.035);
   plot__1099->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1171[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1100 = new TH1D("plot__1100","",24, xAxis1171);
   plot__1100->SetBinContent(10,0.02728206);
   plot__1100->SetBinContent(11,0.08586722);
   plot__1100->SetBinContent(12,0.105423);
   plot__1100->SetBinError(10,0.02728206);
   plot__1100->SetBinError(11,0.06681905);
   plot__1100->SetBinError(12,0.0858109);
   plot__1100->SetEntries(30);
   plot__1100->SetFillColor(6);
   plot__1100->SetLineColor(6);
   plot__1100->SetLineWidth(3);
   plot__1100->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1100->GetXaxis()->SetRange(1,23);
   plot__1100->GetXaxis()->SetLabelFont(42);
   plot__1100->GetXaxis()->SetLabelSize(0.035);
   plot__1100->GetXaxis()->SetTitleSize(0.035);
   plot__1100->GetXaxis()->SetTitleFont(42);
   plot__1100->GetYaxis()->SetTitle("Events/0.025");
   plot__1100->GetYaxis()->SetLabelFont(42);
   plot__1100->GetYaxis()->SetLabelSize(0.035);
   plot__1100->GetYaxis()->SetTitleSize(0.035);
   plot__1100->GetYaxis()->SetTitleFont(42);
   plot__1100->GetZaxis()->SetLabelFont(42);
   plot__1100->GetZaxis()->SetLabelSize(0.035);
   plot__1100->GetZaxis()->SetTitleSize(0.035);
   plot__1100->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1172[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1101 = new TH1D("plot__1101","",24, xAxis1172);
   plot__1101->SetBinContent(10,0.4058298);
   plot__1101->SetBinContent(11,0.2494901);
   plot__1101->SetBinContent(12,0.1344893);
   plot__1101->SetBinContent(13,0.2469616);
   plot__1101->SetBinContent(14,0.1190414);
   plot__1101->SetBinContent(15,0.03046178);
   plot__1101->SetBinContent(17,0.006598688);
   plot__1101->SetBinContent(18,0.005305513);
   plot__1101->SetBinError(10,0.09248172);
   plot__1101->SetBinError(11,0.07710061);
   plot__1101->SetBinError(12,0.04976757);
   plot__1101->SetBinError(13,0.1257488);
   plot__1101->SetBinError(14,0.05644959);
   plot__1101->SetBinError(15,0.01773574);
   plot__1101->SetBinError(17,0.004786534);
   plot__1101->SetBinError(18,0.003806532);
   plot__1101->SetEntries(90);
   plot__1101->SetFillColor(44);
   plot__1101->SetLineColor(44);
   plot__1101->SetLineWidth(3);
   plot__1101->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1101->GetXaxis()->SetRange(1,23);
   plot__1101->GetXaxis()->SetLabelFont(42);
   plot__1101->GetXaxis()->SetLabelSize(0.035);
   plot__1101->GetXaxis()->SetTitleSize(0.035);
   plot__1101->GetXaxis()->SetTitleFont(42);
   plot__1101->GetYaxis()->SetTitle("Events/0.025");
   plot__1101->GetYaxis()->SetLabelFont(42);
   plot__1101->GetYaxis()->SetLabelSize(0.035);
   plot__1101->GetYaxis()->SetTitleSize(0.035);
   plot__1101->GetYaxis()->SetTitleFont(42);
   plot__1101->GetZaxis()->SetLabelFont(42);
   plot__1101->GetZaxis()->SetLabelSize(0.035);
   plot__1101->GetZaxis()->SetTitleSize(0.035);
   plot__1101->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1173[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1102 = new TH1D("plot__1102","",24, xAxis1173);
   plot__1102->SetBinContent(10,4.386244);
   plot__1102->SetBinContent(11,3.089164);
   plot__1102->SetBinContent(12,1.948783);
   plot__1102->SetBinContent(13,0.6246388);
   plot__1102->SetBinContent(14,0.5316585);
   plot__1102->SetBinContent(15,0.2567242);
   plot__1102->SetBinContent(16,0.3053395);
   plot__1102->SetBinContent(17,0.1253586);
   plot__1102->SetBinContent(18,0.0251289);
   plot__1102->SetBinError(10,0.7744114);
   plot__1102->SetBinError(11,0.7061483);
   plot__1102->SetBinError(12,0.560994);
   plot__1102->SetBinError(13,0.3172855);
   plot__1102->SetBinError(14,0.3095655);
   plot__1102->SetBinError(15,0.1500639);
   plot__1102->SetBinError(16,0.1422258);
   plot__1102->SetBinError(17,0.06319344);
   plot__1102->SetBinError(18,0.0251289);
   plot__1102->SetEntries(122);
   plot__1102->SetFillColor(4);
   plot__1102->SetLineColor(4);
   plot__1102->SetLineWidth(3);
   plot__1102->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1102->GetXaxis()->SetRange(1,23);
   plot__1102->GetXaxis()->SetLabelFont(42);
   plot__1102->GetXaxis()->SetLabelSize(0.035);
   plot__1102->GetXaxis()->SetTitleSize(0.035);
   plot__1102->GetXaxis()->SetTitleFont(42);
   plot__1102->GetYaxis()->SetTitle("Events/0.025");
   plot__1102->GetYaxis()->SetLabelFont(42);
   plot__1102->GetYaxis()->SetLabelSize(0.035);
   plot__1102->GetYaxis()->SetTitleSize(0.035);
   plot__1102->GetYaxis()->SetTitleFont(42);
   plot__1102->GetZaxis()->SetLabelFont(42);
   plot__1102->GetZaxis()->SetLabelSize(0.035);
   plot__1102->GetZaxis()->SetTitleSize(0.035);
   plot__1102->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1174[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1103 = new TH1D("plot__1103","",24, xAxis1174);
   plot__1103->SetBinContent(10,6.917945);
   plot__1103->SetBinContent(11,3.365584);
   plot__1103->SetBinContent(12,1.15645);
   plot__1103->SetBinContent(13,1.772242);
   plot__1103->SetBinContent(14,1.178223);
   plot__1103->SetBinContent(15,0.358161);
   plot__1103->SetBinContent(17,0.09956399);
   plot__1103->SetBinError(10,1.777567);
   plot__1103->SetBinError(11,1.145975);
   plot__1103->SetBinError(12,0.6730211);
   plot__1103->SetBinError(13,0.9130609);
   plot__1103->SetBinError(14,0.7072199);
   plot__1103->SetBinError(15,0.2650544);
   plot__1103->SetBinError(17,0.09956399);
   plot__1103->SetEntries(66);
   plot__1103->SetFillColor(40);
   plot__1103->SetLineColor(40);
   plot__1103->SetLineWidth(3);
   plot__1103->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1103->GetXaxis()->SetRange(1,23);
   plot__1103->GetXaxis()->SetLabelFont(42);
   plot__1103->GetXaxis()->SetLabelSize(0.035);
   plot__1103->GetXaxis()->SetTitleSize(0.035);
   plot__1103->GetXaxis()->SetTitleFont(42);
   plot__1103->GetYaxis()->SetTitle("Events/0.025");
   plot__1103->GetYaxis()->SetLabelFont(42);
   plot__1103->GetYaxis()->SetLabelSize(0.035);
   plot__1103->GetYaxis()->SetTitleSize(0.035);
   plot__1103->GetYaxis()->SetTitleFont(42);
   plot__1103->GetZaxis()->SetLabelFont(42);
   plot__1103->GetZaxis()->SetLabelSize(0.035);
   plot__1103->GetZaxis()->SetTitleSize(0.035);
   plot__1103->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1175[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1104 = new TH1D("plot__1104","",24, xAxis1175);
   plot__1104->SetBinContent(10,9.473746);
   plot__1104->SetBinContent(11,5.163056);
   plot__1104->SetBinContent(12,2.825645);
   plot__1104->SetBinContent(13,2.26564);
   plot__1104->SetBinContent(14,0.7374074);
   plot__1104->SetBinContent(15,0.4233788);
   plot__1104->SetBinContent(16,0.2476112);
   plot__1104->SetBinContent(17,0.13215);
   plot__1104->SetBinContent(18,0.0699251);
   plot__1104->SetBinContent(19,0.05869729);
   plot__1104->SetBinContent(20,0.005173888);
   plot__1104->SetBinError(10,0.6563566);
   plot__1104->SetBinError(11,0.5494438);
   plot__1104->SetBinError(12,0.4044101);
   plot__1104->SetBinError(13,0.3799106);
   plot__1104->SetBinError(14,0.1942397);
   plot__1104->SetBinError(15,0.1029133);
   plot__1104->SetBinError(16,0.08855097);
   plot__1104->SetBinError(17,0.04183168);
   plot__1104->SetBinError(18,0.03060085);
   plot__1104->SetBinError(19,0.0264695);
   plot__1104->SetBinError(20,0.005173888);
   plot__1104->SetEntries(717);
   plot__1104->SetFillColor(5);
   plot__1104->SetLineColor(5);
   plot__1104->SetLineWidth(3);
   plot__1104->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1104->GetXaxis()->SetRange(1,23);
   plot__1104->GetXaxis()->SetLabelFont(42);
   plot__1104->GetXaxis()->SetLabelSize(0.035);
   plot__1104->GetXaxis()->SetTitleSize(0.035);
   plot__1104->GetXaxis()->SetTitleFont(42);
   plot__1104->GetYaxis()->SetTitle("Events/0.025");
   plot__1104->GetYaxis()->SetLabelFont(42);
   plot__1104->GetYaxis()->SetLabelSize(0.035);
   plot__1104->GetYaxis()->SetTitleSize(0.035);
   plot__1104->GetYaxis()->SetTitleFont(42);
   plot__1104->GetZaxis()->SetLabelFont(42);
   plot__1104->GetZaxis()->SetLabelSize(0.035);
   plot__1104->GetZaxis()->SetTitleSize(0.035);
   plot__1104->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1176[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1105 = new TH1D("plot__1105","",24, xAxis1176);
   plot__1105->SetBinContent(10,155.3615);
   plot__1105->SetBinContent(11,91.16549);
   plot__1105->SetBinContent(12,39.93203);
   plot__1105->SetBinContent(13,11.41811);
   plot__1105->SetBinContent(14,7.473554);
   plot__1105->SetBinContent(15,2.07376);
   plot__1105->SetBinContent(16,0.4991202);
   plot__1105->SetBinContent(17,0.2641163);
   plot__1105->SetBinContent(18,0.06882089);
   plot__1105->SetBinContent(19,0.04145886);
   plot__1105->SetBinError(10,5.5897);
   plot__1105->SetBinError(11,4.227259);
   plot__1105->SetBinError(12,2.740247);
   plot__1105->SetBinError(13,1.430868);
   plot__1105->SetBinError(14,1.19604);
   plot__1105->SetBinError(15,0.4402512);
   plot__1105->SetBinError(16,0.2139835);
   plot__1105->SetBinError(17,0.1010942);
   plot__1105->SetBinError(18,0.06882089);
   plot__1105->SetBinError(19,0.04145886);
   plot__1105->SetEntries(1773);
   plot__1105->SetFillColor(2);
   plot__1105->SetLineColor(2);
   plot__1105->SetLineWidth(3);
   plot__1105->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1105->GetXaxis()->SetRange(1,23);
   plot__1105->GetXaxis()->SetLabelFont(42);
   plot__1105->GetXaxis()->SetLabelSize(0.035);
   plot__1105->GetXaxis()->SetTitleSize(0.035);
   plot__1105->GetXaxis()->SetTitleFont(42);
   plot__1105->GetYaxis()->SetTitle("Events/0.025");
   plot__1105->GetYaxis()->SetLabelFont(42);
   plot__1105->GetYaxis()->SetLabelSize(0.035);
   plot__1105->GetYaxis()->SetTitleSize(0.035);
   plot__1105->GetYaxis()->SetTitleFont(42);
   plot__1105->GetZaxis()->SetLabelFont(42);
   plot__1105->GetZaxis()->SetLabelSize(0.035);
   plot__1105->GetZaxis()->SetTitleSize(0.035);
   plot__1105->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis1177[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1106 = new TH1D("plot__1106","",24, xAxis1177);
   plot__1106->SetBinContent(10,148);
   plot__1106->SetBinContent(11,97);
   plot__1106->SetBinContent(12,36);
   plot__1106->SetBinContent(13,16);
   plot__1106->SetBinContent(14,5);
   plot__1106->SetBinContent(15,3);
   plot__1106->SetBinContent(16,1);
   plot__1106->SetBinContent(17,0.4);
   plot__1106->SetBinContent(18,0.2);
   plot__1106->SetBinError(10,12.16553);
   plot__1106->SetBinError(11,9.848858);
   plot__1106->SetBinError(12,6);
   plot__1106->SetBinError(13,4);
   plot__1106->SetBinError(14,2.3);
   plot__1106->SetBinError(15,2.14);
   plot__1106->SetBinError(16,1);
   plot__1106->SetMinimum(0.11);
   plot__1106->SetMaximum(1765.726);
   plot__1106->SetEntries(338);

   ci = TColor::GetColor("#000099");
   plot__1106->SetLineColor(ci);
   plot__1106->SetLineWidth(2);
   plot__1106->SetMarkerStyle(20);
   plot__1106->SetMarkerSize(1.5);
   plot__1106->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1106->GetXaxis()->SetRange(1,23);
   plot__1106->GetXaxis()->SetLabelFont(42);
   plot__1106->GetXaxis()->SetLabelSize(0.035);
   plot__1106->GetXaxis()->SetTitleSize(0.035);
   plot__1106->GetXaxis()->SetTitleFont(42);
   plot__1106->GetYaxis()->SetTitle("Events");
   plot__1106->GetYaxis()->SetLabelFont(42);
   plot__1106->GetYaxis()->SetLabelSize(0.035);
   plot__1106->GetYaxis()->SetTitleSize(0.035);
   plot__1106->GetYaxis()->SetTitleOffset(1.3);
   plot__1106->GetYaxis()->SetTitleFont(42);
   plot__1106->GetZaxis()->SetLabelFont(42);
   plot__1106->GetZaxis()->SetLabelSize(0.035);
   plot__1106->GetZaxis()->SetTitleSize(0.035);
   plot__1106->GetZaxis()->SetTitleFont(42);
   plot__1106->Draw("PSAME");
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
   Double_t xAxis1178[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1107 = new TH1D("plot__1107","",24, xAxis1178);
   plot__1107->SetBinContent(10,0.8381822);
   plot__1107->SetBinContent(11,0.9406639);
   plot__1107->SetBinContent(12,0.7808632);
   plot__1107->SetBinContent(13,0.9799364);
   plot__1107->SetBinContent(14,0.4980137);
   plot__1107->SetBinContent(15,0.9546582);
   plot__1107->SetBinContent(16,0.9505063);
   plot__1107->SetBinContent(17,0.6371581);
   plot__1107->SetBinContent(18,1.18217);
   plot__1107->SetBinError(10,0.06889815);
   plot__1107->SetBinError(11,0.09550995);
   plot__1107->SetBinError(12,0.1301439);
   plot__1107->SetBinError(13,0.2449841);
   plot__1107->SetBinError(14,0.2290863);
   plot__1107->SetBinError(15,0.6809895);
   plot__1107->SetBinError(16,0.9505063);
   plot__1107->SetMinimum(0);
   plot__1107->SetMaximum(2);
   plot__1107->SetEntries(30.82293);

   ci = TColor::GetColor("#000099");
   plot__1107->SetLineColor(ci);
   plot__1107->SetLineWidth(2);
   plot__1107->SetMarkerStyle(20);
   plot__1107->SetMarkerSize(1.5);
   plot__1107->GetXaxis()->SetRange(1,23);
   plot__1107->GetXaxis()->SetLabelFont(42);
   plot__1107->GetXaxis()->SetLabelSize(0.12);
   plot__1107->GetXaxis()->SetTitleSize(0.035);
   plot__1107->GetXaxis()->SetTitleFont(42);
   plot__1107->GetYaxis()->SetTitle("Data/MC");
   plot__1107->GetYaxis()->SetNdivisions(505);
   plot__1107->GetYaxis()->SetLabelFont(42);
   plot__1107->GetYaxis()->SetLabelSize(0.11);
   plot__1107->GetYaxis()->SetTitleSize(0.1);
   plot__1107->GetYaxis()->SetTitleOffset(0.5);
   plot__1107->GetYaxis()->SetTitleFont(42);
   plot__1107->GetZaxis()->SetLabelFont(42);
   plot__1107->GetZaxis()->SetLabelSize(0.035);
   plot__1107->GetZaxis()->SetTitleSize(0.035);
   plot__1107->GetZaxis()->SetTitleFont(42);
   plot__1107->Draw("p");
   
   Double_t Graph_from_plot_fx1284[24] = {
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
   Double_t Graph_from_plot_fy1284[24] = {
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
   Double_t Graph_from_plot_fex1284[24] = {
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
   Double_t Graph_from_plot_fey1284[24] = {
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
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1284,Graph_from_plot_fy1284,Graph_from_plot_fex1284,Graph_from_plot_fey1284);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1284 = new TH1F("Graph_Graph_from_plot1284","",100,0,11);
   Graph_Graph_from_plot1284->SetMinimum(0);
   Graph_Graph_from_plot1284->SetMaximum(2.2);
   Graph_Graph_from_plot1284->SetDirectory(0);
   Graph_Graph_from_plot1284->SetStats(0);
   Graph_Graph_from_plot1284->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1284->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1284->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1284->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1284->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1284->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1284->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1284->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1284->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1284->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1284);
   
   gre->Draw("2");
   Double_t xAxis1179[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1108 = new TH1D("plot__1108","",24, xAxis1179);
   plot__1108->SetBinContent(10,0.8381822);
   plot__1108->SetBinContent(11,0.9406639);
   plot__1108->SetBinContent(12,0.7808632);
   plot__1108->SetBinContent(13,0.9799364);
   plot__1108->SetBinContent(14,0.4980137);
   plot__1108->SetBinContent(15,0.9546582);
   plot__1108->SetBinContent(16,0.9505063);
   plot__1108->SetBinContent(17,0.6371581);
   plot__1108->SetBinContent(18,1.18217);
   plot__1108->SetBinError(10,0.06889815);
   plot__1108->SetBinError(11,0.09550995);
   plot__1108->SetBinError(12,0.1301439);
   plot__1108->SetBinError(13,0.2449841);
   plot__1108->SetBinError(14,0.2290863);
   plot__1108->SetBinError(15,0.6809895);
   plot__1108->SetBinError(16,0.9505063);
   plot__1108->SetMinimum(0);
   plot__1108->SetMaximum(2);
   plot__1108->SetEntries(30.82293);

   ci = TColor::GetColor("#000099");
   plot__1108->SetLineColor(ci);
   plot__1108->SetLineWidth(2);
   plot__1108->SetMarkerStyle(20);
   plot__1108->SetMarkerSize(1.5);
   plot__1108->GetXaxis()->SetRange(1,23);
   plot__1108->GetXaxis()->SetLabelFont(42);
   plot__1108->GetXaxis()->SetLabelSize(0.12);
   plot__1108->GetXaxis()->SetTitleSize(0.035);
   plot__1108->GetXaxis()->SetTitleFont(42);
   plot__1108->GetYaxis()->SetTitle("Data/MC");
   plot__1108->GetYaxis()->SetNdivisions(505);
   plot__1108->GetYaxis()->SetLabelFont(42);
   plot__1108->GetYaxis()->SetLabelSize(0.11);
   plot__1108->GetYaxis()->SetTitleSize(0.1);
   plot__1108->GetYaxis()->SetTitleOffset(0.5);
   plot__1108->GetYaxis()->SetTitleFont(42);
   plot__1108->GetZaxis()->SetLabelFont(42);
   plot__1108->GetZaxis()->SetLabelSize(0.035);
   plot__1108->GetZaxis()->SetTitleSize(0.035);
   plot__1108->GetZaxis()->SetTitleFont(42);
   plot__1108->Draw("PSAME");
   d->Modified();
   canvasbtag_two_200_275/AlphaT_3->cd();
   canvasbtag_two_200_275/AlphaT_3->Modified();
   canvasbtag_two_200_275/AlphaT_3->cd();
   canvasbtag_two_200_275/AlphaT_3->SetSelected(canvasbtag_two_200_275/AlphaT_3);
}
