void Stacked_AlphaT_3_btag_one_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_one_200_275/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:30 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_one_200_275/AlphaT_3 = new TCanvas("canvasbtag_one_200_275/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_one_200_275/AlphaT_3->SetHighLightColor(2);
   canvasbtag_one_200_275/AlphaT_3->Range(0,0,1,1);
   canvasbtag_one_200_275/AlphaT_3->SetFillColor(0);
   canvasbtag_one_200_275/AlphaT_3->SetBorderMode(0);
   canvasbtag_one_200_275/AlphaT_3->SetBorderSize(2);
   canvasbtag_one_200_275/AlphaT_3->SetTickx(1);
   canvasbtag_one_200_275/AlphaT_3->SetTicky(1);
   canvasbtag_one_200_275/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.521427,3.4875,4.106773);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1960[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1842 = new TH1D("plot__1842","",24, xAxis1960);
   plot__1842->SetBinContent(10,286);
   plot__1842->SetBinContent(11,206);
   plot__1842->SetBinContent(12,110);
   plot__1842->SetBinContent(13,49);
   plot__1842->SetBinContent(14,35);
   plot__1842->SetBinContent(15,12.5);
   plot__1842->SetBinContent(16,4.5);
   plot__1842->SetBinContent(17,2.8);
   plot__1842->SetBinContent(18,1);
   plot__1842->SetBinContent(19,0.2);
   plot__1842->SetBinContent(20,0.2);
   plot__1842->SetBinError(10,16.91153);
   plot__1842->SetBinError(11,14.3527);
   plot__1842->SetBinError(12,10.48809);
   plot__1842->SetBinError(13,7);
   plot__1842->SetBinError(14,5.91608);
   plot__1842->SetBinError(15,2.5);
   plot__1842->SetBinError(16,2.3);
   plot__1842->SetBinError(17,2);
   plot__1842->SetBinError(18,1);
   plot__1842->SetMinimum(0.11);
   plot__1842->SetMaximum(3499.07);
   plot__1842->SetEntries(766);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1842->SetLineColor(ci);
   plot__1842->SetLineWidth(2);
   plot__1842->SetMarkerStyle(20);
   plot__1842->SetMarkerSize(1.5);
   plot__1842->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1842->GetXaxis()->SetRange(1,23);
   plot__1842->GetXaxis()->SetLabelFont(42);
   plot__1842->GetXaxis()->SetLabelSize(0.035);
   plot__1842->GetXaxis()->SetTitleSize(0.035);
   plot__1842->GetXaxis()->SetTitleFont(42);
   plot__1842->GetYaxis()->SetTitle("Events");
   plot__1842->GetYaxis()->SetLabelFont(42);
   plot__1842->GetYaxis()->SetLabelSize(0.035);
   plot__1842->GetYaxis()->SetTitleSize(0.035);
   plot__1842->GetYaxis()->SetTitleOffset(1.3);
   plot__1842->GetYaxis()->SetTitleFont(42);
   plot__1842->GetZaxis()->SetLabelFont(42);
   plot__1842->GetZaxis()->SetLabelSize(0.035);
   plot__1842->GetZaxis()->SetTitleSize(0.035);
   plot__1842->GetZaxis()->SetTitleFont(42);
   plot__1842->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1961[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_119 = new TH1F("_stack_119","",24, xAxis1961);
   _stack_119->SetMinimum(0.1399628);
   _stack_119->SetMaximum(559.8512);
   _stack_119->SetDirectory(0);
   _stack_119->SetStats(0);
   _stack_119->GetXaxis()->SetLabelFont(42);
   _stack_119->GetXaxis()->SetLabelOffset(0.007);
   _stack_119->GetXaxis()->SetLabelSize(0.05);
   _stack_119->GetXaxis()->SetTitleSize(0.05);
   _stack_119->GetYaxis()->SetLabelFont(42);
   _stack_119->GetYaxis()->SetLabelOffset(0.007);
   _stack_119->GetYaxis()->SetLabelSize(0.05);
   _stack_119->GetZaxis()->SetLabelFont(42);
   _stack_119->GetZaxis()->SetLabelOffset(0.007);
   _stack_119->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_119);
   
   Double_t xAxis1962[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1843 = new TH1D("plot__1843","",24, xAxis1962);
   plot__1843->SetEntries(25);
   plot__1843->SetFillColor(7);
   plot__1843->SetLineColor(7);
   plot__1843->SetLineStyle(10);
   plot__1843->SetLineWidth(3);
   plot__1843->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1843->GetXaxis()->SetRange(1,23);
   plot__1843->GetXaxis()->SetLabelFont(42);
   plot__1843->GetXaxis()->SetLabelSize(0.035);
   plot__1843->GetXaxis()->SetTitleSize(0.035);
   plot__1843->GetXaxis()->SetTitleFont(42);
   plot__1843->GetYaxis()->SetTitle("Events/0.025");
   plot__1843->GetYaxis()->SetLabelFont(42);
   plot__1843->GetYaxis()->SetLabelSize(0.035);
   plot__1843->GetYaxis()->SetTitleSize(0.035);
   plot__1843->GetYaxis()->SetTitleFont(42);
   plot__1843->GetZaxis()->SetLabelFont(42);
   plot__1843->GetZaxis()->SetLabelSize(0.035);
   plot__1843->GetZaxis()->SetTitleSize(0.035);
   plot__1843->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1963[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1844 = new TH1D("plot__1844","",24, xAxis1963);
   plot__1844->SetBinContent(10,0.3398861);
   plot__1844->SetBinContent(11,0.1788547);
   plot__1844->SetBinContent(12,0.01303389);
   plot__1844->SetBinContent(14,0.05010938);
   plot__1844->SetBinContent(19,0.003522126);
   plot__1844->SetBinError(10,0.1423793);
   plot__1844->SetBinError(11,0.08465133);
   plot__1844->SetBinError(12,0.01303389);
   plot__1844->SetBinError(14,0.05010938);
   plot__1844->SetBinError(19,0.003522126);
   plot__1844->SetEntries(40);
   plot__1844->SetFillColor(6);
   plot__1844->SetLineColor(6);
   plot__1844->SetLineWidth(3);
   plot__1844->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1844->GetXaxis()->SetRange(1,23);
   plot__1844->GetXaxis()->SetLabelFont(42);
   plot__1844->GetXaxis()->SetLabelSize(0.035);
   plot__1844->GetXaxis()->SetTitleSize(0.035);
   plot__1844->GetXaxis()->SetTitleFont(42);
   plot__1844->GetYaxis()->SetTitle("Events/0.025");
   plot__1844->GetYaxis()->SetLabelFont(42);
   plot__1844->GetYaxis()->SetLabelSize(0.035);
   plot__1844->GetYaxis()->SetTitleSize(0.035);
   plot__1844->GetYaxis()->SetTitleFont(42);
   plot__1844->GetZaxis()->SetLabelFont(42);
   plot__1844->GetZaxis()->SetLabelSize(0.035);
   plot__1844->GetZaxis()->SetTitleSize(0.035);
   plot__1844->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1964[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1845 = new TH1D("plot__1845","",24, xAxis1964);
   plot__1845->SetBinContent(10,1.664244);
   plot__1845->SetBinContent(11,2.09099);
   plot__1845->SetBinContent(12,0.9140592);
   plot__1845->SetBinContent(13,0.4293731);
   plot__1845->SetBinContent(14,0.5178293);
   plot__1845->SetBinContent(15,0.1496123);
   plot__1845->SetBinContent(16,0.1109204);
   plot__1845->SetBinContent(17,0.01658318);
   plot__1845->SetBinContent(18,0.006678728);
   plot__1845->SetBinContent(19,0.01541763);
   plot__1845->SetBinError(10,0.3150874);
   plot__1845->SetBinError(11,0.412154);
   plot__1845->SetBinError(12,0.2452978);
   plot__1845->SetBinError(13,0.1039575);
   plot__1845->SetBinError(14,0.1814721);
   plot__1845->SetBinError(15,0.04524522);
   plot__1845->SetBinError(16,0.07240926);
   plot__1845->SetBinError(17,0.008870957);
   plot__1845->SetBinError(18,0.005046021);
   plot__1845->SetBinError(19,0.008909651);
   plot__1845->SetEntries(245);
   plot__1845->SetFillColor(44);
   plot__1845->SetLineColor(44);
   plot__1845->SetLineWidth(3);
   plot__1845->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1845->GetXaxis()->SetRange(1,23);
   plot__1845->GetXaxis()->SetLabelFont(42);
   plot__1845->GetXaxis()->SetLabelSize(0.035);
   plot__1845->GetXaxis()->SetTitleSize(0.035);
   plot__1845->GetXaxis()->SetTitleFont(42);
   plot__1845->GetYaxis()->SetTitle("Events/0.025");
   plot__1845->GetYaxis()->SetLabelFont(42);
   plot__1845->GetYaxis()->SetLabelSize(0.035);
   plot__1845->GetYaxis()->SetTitleSize(0.035);
   plot__1845->GetYaxis()->SetTitleFont(42);
   plot__1845->GetZaxis()->SetLabelFont(42);
   plot__1845->GetZaxis()->SetLabelSize(0.035);
   plot__1845->GetZaxis()->SetTitleSize(0.035);
   plot__1845->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1965[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1846 = new TH1D("plot__1846","",24, xAxis1965);
   plot__1846->SetBinContent(10,13.04426);
   plot__1846->SetBinContent(11,10.53143);
   plot__1846->SetBinContent(12,5.377311);
   plot__1846->SetBinContent(13,3.318049);
   plot__1846->SetBinContent(14,0.8153171);
   plot__1846->SetBinContent(15,1.281645);
   plot__1846->SetBinContent(17,0.08234619);
   plot__1846->SetBinError(10,2.532522);
   plot__1846->SetBinError(11,2.290075);
   plot__1846->SetBinError(12,1.50262);
   plot__1846->SetBinError(13,1.200219);
   plot__1846->SetBinError(14,0.5767877);
   plot__1846->SetBinError(15,0.5775674);
   plot__1846->SetBinError(17,0.0690939);
   plot__1846->SetEntries(108);
   plot__1846->SetFillColor(40);
   plot__1846->SetLineColor(40);
   plot__1846->SetLineWidth(3);
   plot__1846->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1846->GetXaxis()->SetRange(1,23);
   plot__1846->GetXaxis()->SetLabelFont(42);
   plot__1846->GetXaxis()->SetLabelSize(0.035);
   plot__1846->GetXaxis()->SetTitleSize(0.035);
   plot__1846->GetXaxis()->SetTitleFont(42);
   plot__1846->GetYaxis()->SetTitle("Events/0.025");
   plot__1846->GetYaxis()->SetLabelFont(42);
   plot__1846->GetYaxis()->SetLabelSize(0.035);
   plot__1846->GetYaxis()->SetTitleSize(0.035);
   plot__1846->GetYaxis()->SetTitleFont(42);
   plot__1846->GetZaxis()->SetLabelFont(42);
   plot__1846->GetZaxis()->SetLabelSize(0.035);
   plot__1846->GetZaxis()->SetTitleSize(0.035);
   plot__1846->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1966[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1847 = new TH1D("plot__1847","",24, xAxis1966);
   plot__1847->SetBinContent(10,41.90999);
   plot__1847->SetBinContent(11,26.18516);
   plot__1847->SetBinContent(12,14.91413);
   plot__1847->SetBinContent(13,7.154446);
   plot__1847->SetBinContent(14,3.772792);
   plot__1847->SetBinContent(15,1.977193);
   plot__1847->SetBinContent(16,1.528027);
   plot__1847->SetBinContent(17,0.4371594);
   plot__1847->SetBinContent(18,0.3157669);
   plot__1847->SetBinContent(19,0.03253022);
   plot__1847->SetBinContent(20,0.03061939);
   plot__1847->SetBinContent(21,0.0181257);
   plot__1847->SetBinError(10,2.589651);
   plot__1847->SetBinError(11,2.154864);
   plot__1847->SetBinError(12,1.632431);
   plot__1847->SetBinError(13,1.103143);
   plot__1847->SetBinError(14,0.8048767);
   plot__1847->SetBinError(15,0.4165851);
   plot__1847->SetBinError(16,0.3829187);
   plot__1847->SetBinError(17,0.1187368);
   plot__1847->SetBinError(18,0.1067051);
   plot__1847->SetBinError(19,0.03253022);
   plot__1847->SetBinError(20,0.03061939);
   plot__1847->SetBinError(21,0.0181257);
   plot__1847->SetEntries(748);
   plot__1847->SetFillColor(4);
   plot__1847->SetLineColor(4);
   plot__1847->SetLineWidth(3);
   plot__1847->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1847->GetXaxis()->SetRange(1,23);
   plot__1847->GetXaxis()->SetLabelFont(42);
   plot__1847->GetXaxis()->SetLabelSize(0.035);
   plot__1847->GetXaxis()->SetTitleSize(0.035);
   plot__1847->GetXaxis()->SetTitleFont(42);
   plot__1847->GetYaxis()->SetTitle("Events/0.025");
   plot__1847->GetYaxis()->SetLabelFont(42);
   plot__1847->GetYaxis()->SetLabelSize(0.035);
   plot__1847->GetYaxis()->SetTitleSize(0.035);
   plot__1847->GetYaxis()->SetTitleFont(42);
   plot__1847->GetZaxis()->SetLabelFont(42);
   plot__1847->GetZaxis()->SetLabelSize(0.035);
   plot__1847->GetZaxis()->SetTitleSize(0.035);
   plot__1847->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1967[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1848 = new TH1D("plot__1848","",24, xAxis1967);
   plot__1848->SetBinContent(10,50.27649);
   plot__1848->SetBinContent(11,35.80799);
   plot__1848->SetBinContent(12,21.47143);
   plot__1848->SetBinContent(13,11.2925);
   plot__1848->SetBinContent(14,6.917253);
   plot__1848->SetBinContent(15,3.737873);
   plot__1848->SetBinContent(16,1.839414);
   plot__1848->SetBinContent(17,0.5854784);
   plot__1848->SetBinContent(18,0.3549294);
   plot__1848->SetBinContent(19,0.1363423);
   plot__1848->SetBinContent(20,0.03640386);
   plot__1848->SetBinContent(21,0.0177781);
   plot__1848->SetBinContent(22,0.01135344);
   plot__1848->SetBinError(10,1.626867);
   plot__1848->SetBinError(11,1.550577);
   plot__1848->SetBinError(12,1.215412);
   plot__1848->SetBinError(13,0.91858);
   plot__1848->SetBinError(14,0.677266);
   plot__1848->SetBinError(15,0.3534306);
   plot__1848->SetBinError(16,0.2566472);
   plot__1848->SetBinError(17,0.08712174);
   plot__1848->SetBinError(18,0.0740945);
   plot__1848->SetBinError(19,0.04379884);
   plot__1848->SetBinError(20,0.02574701);
   plot__1848->SetBinError(21,0.009977923);
   plot__1848->SetBinError(22,0.007518498);
   plot__1848->SetEntries(3775);
   plot__1848->SetFillColor(5);
   plot__1848->SetLineColor(5);
   plot__1848->SetLineWidth(3);
   plot__1848->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1848->GetXaxis()->SetRange(1,23);
   plot__1848->GetXaxis()->SetLabelFont(42);
   plot__1848->GetXaxis()->SetLabelSize(0.035);
   plot__1848->GetXaxis()->SetTitleSize(0.035);
   plot__1848->GetXaxis()->SetTitleFont(42);
   plot__1848->GetYaxis()->SetTitle("Events/0.025");
   plot__1848->GetYaxis()->SetLabelFont(42);
   plot__1848->GetYaxis()->SetLabelSize(0.035);
   plot__1848->GetYaxis()->SetTitleSize(0.035);
   plot__1848->GetYaxis()->SetTitleFont(42);
   plot__1848->GetZaxis()->SetLabelFont(42);
   plot__1848->GetZaxis()->SetLabelSize(0.035);
   plot__1848->GetZaxis()->SetTitleSize(0.035);
   plot__1848->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1968[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1849 = new TH1D("plot__1849","",24, xAxis1968);
   plot__1849->SetBinContent(10,242.6721);
   plot__1849->SetBinContent(11,164.9467);
   plot__1849->SetBinContent(12,79.38085);
   plot__1849->SetBinContent(13,34.78383);
   plot__1849->SetBinContent(14,17.17103);
   plot__1849->SetBinContent(15,9.338834);
   plot__1849->SetBinContent(16,3.832702);
   plot__1849->SetBinContent(17,1.261061);
   plot__1849->SetBinContent(18,0.3155438);
   plot__1849->SetBinContent(19,0.06543721);
   plot__1849->SetBinError(10,7.208484);
   plot__1849->SetBinError(11,5.825984);
   plot__1849->SetBinError(12,3.933376);
   plot__1849->SetBinError(13,2.598428);
   plot__1849->SetBinError(14,1.844943);
   plot__1849->SetBinError(15,0.9657119);
   plot__1849->SetBinError(16,0.6218078);
   plot__1849->SetBinError(17,0.2237373);
   plot__1849->SetBinError(18,0.1137596);
   plot__1849->SetBinError(19,0.05140189);
   plot__1849->SetEntries(3127);
   plot__1849->SetFillColor(2);
   plot__1849->SetLineColor(2);
   plot__1849->SetLineWidth(3);
   plot__1849->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1849->GetXaxis()->SetRange(1,23);
   plot__1849->GetXaxis()->SetLabelFont(42);
   plot__1849->GetXaxis()->SetLabelSize(0.035);
   plot__1849->GetXaxis()->SetTitleSize(0.035);
   plot__1849->GetXaxis()->SetTitleFont(42);
   plot__1849->GetYaxis()->SetTitle("Events/0.025");
   plot__1849->GetYaxis()->SetLabelFont(42);
   plot__1849->GetYaxis()->SetLabelSize(0.035);
   plot__1849->GetYaxis()->SetTitleSize(0.035);
   plot__1849->GetYaxis()->SetTitleFont(42);
   plot__1849->GetZaxis()->SetLabelFont(42);
   plot__1849->GetZaxis()->SetLabelSize(0.035);
   plot__1849->GetZaxis()->SetTitleSize(0.035);
   plot__1849->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis1969[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1850 = new TH1D("plot__1850","",24, xAxis1969);
   plot__1850->SetBinContent(10,286);
   plot__1850->SetBinContent(11,206);
   plot__1850->SetBinContent(12,110);
   plot__1850->SetBinContent(13,49);
   plot__1850->SetBinContent(14,35);
   plot__1850->SetBinContent(15,12.5);
   plot__1850->SetBinContent(16,4.5);
   plot__1850->SetBinContent(17,2.8);
   plot__1850->SetBinContent(18,1);
   plot__1850->SetBinContent(19,0.2);
   plot__1850->SetBinContent(20,0.2);
   plot__1850->SetBinError(10,16.91153);
   plot__1850->SetBinError(11,14.3527);
   plot__1850->SetBinError(12,10.48809);
   plot__1850->SetBinError(13,7);
   plot__1850->SetBinError(14,5.91608);
   plot__1850->SetBinError(15,2.5);
   plot__1850->SetBinError(16,2.3);
   plot__1850->SetBinError(17,2);
   plot__1850->SetBinError(18,1);
   plot__1850->SetMinimum(0.11);
   plot__1850->SetMaximum(3499.07);
   plot__1850->SetEntries(766);

   ci = TColor::GetColor("#000099");
   plot__1850->SetLineColor(ci);
   plot__1850->SetLineWidth(2);
   plot__1850->SetMarkerStyle(20);
   plot__1850->SetMarkerSize(1.5);
   plot__1850->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1850->GetXaxis()->SetRange(1,23);
   plot__1850->GetXaxis()->SetLabelFont(42);
   plot__1850->GetXaxis()->SetLabelSize(0.035);
   plot__1850->GetXaxis()->SetTitleSize(0.035);
   plot__1850->GetXaxis()->SetTitleFont(42);
   plot__1850->GetYaxis()->SetTitle("Events");
   plot__1850->GetYaxis()->SetLabelFont(42);
   plot__1850->GetYaxis()->SetLabelSize(0.035);
   plot__1850->GetYaxis()->SetTitleSize(0.035);
   plot__1850->GetYaxis()->SetTitleOffset(1.3);
   plot__1850->GetYaxis()->SetTitleFont(42);
   plot__1850->GetZaxis()->SetLabelFont(42);
   plot__1850->GetZaxis()->SetLabelSize(0.035);
   plot__1850->GetZaxis()->SetTitleSize(0.035);
   plot__1850->GetZaxis()->SetTitleFont(42);
   plot__1850->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_one_200_2    Jet Multiplicity>3");
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
   canvasbtag_one_200_275/AlphaT_3->cd();
  
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
   Double_t xAxis1970[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1851 = new TH1D("plot__1851","",24, xAxis1970);
   plot__1851->SetBinContent(10,0.8173601);
   plot__1851->SetBinContent(11,0.8592602);
   plot__1851->SetBinContent(12,0.9011163);
   plot__1851->SetBinContent(13,0.8599781);
   plot__1851->SetBinContent(14,1.196813);
   plot__1851->SetBinContent(15,0.7582578);
   plot__1851->SetBinContent(16,0.6155056);
   plot__1851->SetBinContent(17,1.175173);
   plot__1851->SetBinContent(18,1.007132);
   plot__1851->SetBinContent(19,0.7897351);
   plot__1851->SetBinContent(20,2.984039);
   plot__1851->SetBinError(10,0.04833152);
   plot__1851->SetBinError(11,0.05986749);
   plot__1851->SetBinError(12,0.08591807);
   plot__1851->SetBinError(13,0.122854);
   plot__1851->SetBinError(14,0.2022984);
   plot__1851->SetBinError(15,0.1516516);
   plot__1851->SetBinError(16,0.3145917);
   plot__1851->SetBinError(17,0.8394091);
   plot__1851->SetBinError(18,1.007132);
   plot__1851->SetMinimum(0);
   plot__1851->SetMaximum(2);
   plot__1851->SetEntries(27.48663);

   ci = TColor::GetColor("#000099");
   plot__1851->SetLineColor(ci);
   plot__1851->SetLineWidth(2);
   plot__1851->SetMarkerStyle(20);
   plot__1851->SetMarkerSize(1.5);
   plot__1851->GetXaxis()->SetRange(1,23);
   plot__1851->GetXaxis()->SetLabelFont(42);
   plot__1851->GetXaxis()->SetLabelSize(0.12);
   plot__1851->GetXaxis()->SetTitleSize(0.035);
   plot__1851->GetXaxis()->SetTitleFont(42);
   plot__1851->GetYaxis()->SetTitle("Data/MC");
   plot__1851->GetYaxis()->SetNdivisions(505);
   plot__1851->GetYaxis()->SetLabelFont(42);
   plot__1851->GetYaxis()->SetLabelSize(0.11);
   plot__1851->GetYaxis()->SetTitleSize(0.1);
   plot__1851->GetYaxis()->SetTitleOffset(0.5);
   plot__1851->GetYaxis()->SetTitleFont(42);
   plot__1851->GetZaxis()->SetLabelFont(42);
   plot__1851->GetZaxis()->SetLabelSize(0.035);
   plot__1851->GetZaxis()->SetTitleSize(0.035);
   plot__1851->GetZaxis()->SetTitleFont(42);
   plot__1851->Draw("p");
   
   Double_t Graph_from_plot_fx1476[24] = {
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
   Double_t Graph_from_plot_fy1476[24] = {
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
   Double_t Graph_from_plot_fex1476[24] = {
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
   Double_t Graph_from_plot_fey1476[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02354059,
   0.02841642,
   0.03836405,
   0.05622728,
   0.07552654,
   0.07592731,
   0.1063348,
   0.1161601,
   0.1739823,
   0.2983928,
   0.5968928,
   0.5762782,
   0.6622218,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1476,Graph_from_plot_fy1476,Graph_from_plot_fex1476,Graph_from_plot_fey1476);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1476 = new TH1F("Graph_Graph_from_plot1476","",100,0,11);
   Graph_Graph_from_plot1476->SetMinimum(0);
   Graph_Graph_from_plot1476->SetMaximum(1.828444);
   Graph_Graph_from_plot1476->SetDirectory(0);
   Graph_Graph_from_plot1476->SetStats(0);
   Graph_Graph_from_plot1476->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1476->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1476->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1476->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1476->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1476->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1476->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1476->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1476->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1476->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1476);
   
   gre->Draw("2");
   Double_t xAxis1971[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1852 = new TH1D("plot__1852","",24, xAxis1971);
   plot__1852->SetBinContent(10,0.8173601);
   plot__1852->SetBinContent(11,0.8592602);
   plot__1852->SetBinContent(12,0.9011163);
   plot__1852->SetBinContent(13,0.8599781);
   plot__1852->SetBinContent(14,1.196813);
   plot__1852->SetBinContent(15,0.7582578);
   plot__1852->SetBinContent(16,0.6155056);
   plot__1852->SetBinContent(17,1.175173);
   plot__1852->SetBinContent(18,1.007132);
   plot__1852->SetBinContent(19,0.7897351);
   plot__1852->SetBinContent(20,2.984039);
   plot__1852->SetBinError(10,0.04833152);
   plot__1852->SetBinError(11,0.05986749);
   plot__1852->SetBinError(12,0.08591807);
   plot__1852->SetBinError(13,0.122854);
   plot__1852->SetBinError(14,0.2022984);
   plot__1852->SetBinError(15,0.1516516);
   plot__1852->SetBinError(16,0.3145917);
   plot__1852->SetBinError(17,0.8394091);
   plot__1852->SetBinError(18,1.007132);
   plot__1852->SetMinimum(0);
   plot__1852->SetMaximum(2);
   plot__1852->SetEntries(27.48663);

   ci = TColor::GetColor("#000099");
   plot__1852->SetLineColor(ci);
   plot__1852->SetLineWidth(2);
   plot__1852->SetMarkerStyle(20);
   plot__1852->SetMarkerSize(1.5);
   plot__1852->GetXaxis()->SetRange(1,23);
   plot__1852->GetXaxis()->SetLabelFont(42);
   plot__1852->GetXaxis()->SetLabelSize(0.12);
   plot__1852->GetXaxis()->SetTitleSize(0.035);
   plot__1852->GetXaxis()->SetTitleFont(42);
   plot__1852->GetYaxis()->SetTitle("Data/MC");
   plot__1852->GetYaxis()->SetNdivisions(505);
   plot__1852->GetYaxis()->SetLabelFont(42);
   plot__1852->GetYaxis()->SetLabelSize(0.11);
   plot__1852->GetYaxis()->SetTitleSize(0.1);
   plot__1852->GetYaxis()->SetTitleOffset(0.5);
   plot__1852->GetYaxis()->SetTitleFont(42);
   plot__1852->GetZaxis()->SetLabelFont(42);
   plot__1852->GetZaxis()->SetLabelSize(0.035);
   plot__1852->GetZaxis()->SetTitleSize(0.035);
   plot__1852->GetZaxis()->SetTitleFont(42);
   plot__1852->Draw("PSAME");
   d->Modified();
   canvasbtag_one_200_275/AlphaT_3->cd();
   canvasbtag_one_200_275/AlphaT_3->Modified();
   canvasbtag_one_200_275/AlphaT_3->cd();
   canvasbtag_one_200_275/AlphaT_3->SetSelected(canvasbtag_one_200_275/AlphaT_3);
}
