{
//=========Macro generated from canvas: Yields/Yields
//=========  (Sat Jul 26 19:54:09 2014) by ROOT version5.34/09
   TCanvas *Yields = new TCanvas("Yields", "Yields",1,1,900,576);
   gStyle->SetOptFit(1);
   Yields->SetHighLightColor(2);
   Yields->Range(75.79687,-1.25,1297.828,1.25);
   Yields->SetFillColor(0);
   Yields->SetBorderMode(0);
   Yields->SetBorderSize(2);
   Yields->SetTickx(1);
   Yields->SetTicky(1);
   Yields->SetFrameBorderMode(0);
   Yields->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12);
   grae->SetName("Graph");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   grae->SetPoint(0,0,0);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,237.5,0.03226659);
   grae->SetPointError(1,0,0,0.189799,0.189799);
   grae->SetPoint(2,300,0.00867259);
   grae->SetPointError(2,0,0,0.100284,0.100284);
   grae->SetPoint(3,350,0.01244384);
   grae->SetPointError(3,0,0,0.1499279,0.1499279);
   grae->SetPoint(4,425,0.159759);
   grae->SetPointError(4,0,0,0.1433272,0.1433272);
   grae->SetPoint(5,525,0.1994906);
   grae->SetPointError(5,0,0,0.1516745,0.1516745);
   grae->SetPoint(6,625,0.12721);
   grae->SetPointError(6,0,0,0.2125178,0.2125178);
   grae->SetPoint(7,725,0.01161466);
   grae->SetPointError(7,0,0,0.2687072,0.2687072);
   grae->SetPoint(8,825,-0.1723709);
   grae->SetPointError(8,0,0,0.3909233,0.3909233);
   grae->SetPoint(9,925,0.5093714);
   grae->SetPointError(9,0,0,0.5833076,0.5833076);
   grae->SetPoint(10,1025,-0.1096441);
   grae->SetPointError(10,0,0,0.6991838,0.6991838);
   grae->SetPoint(11,1125,-0.3443607);
   grae->SetPointError(11,0,0,0.6342252,0.6342252);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,0,1237.5);
   Graph_Graph4->SetMinimum(-1);
   Graph_Graph4->SetMaximum(1);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetTitle("H_{T} (GeV)");
   Graph_Graph4->GetXaxis()->SetRange(17,95);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetTitle("(N_{obs} - N_{pred}) / N_{pred}");
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph4);
   
   
   TF1 *fit = new TF1("fit","pol0",200,1175);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetLineColor(2);
   fit->SetLineWidth(2);
   fit->SetChisquare(3.243421);
   fit->SetNDF(10);
   fit->GetXaxis()->SetLabelFont(42);
   fit->GetXaxis()->SetLabelOffset(0.01);
   fit->GetXaxis()->SetLabelSize(0.05);
   fit->GetXaxis()->SetTitleSize(0.06);
   fit->GetXaxis()->SetTitleFont(42);
   fit->GetYaxis()->SetLabelFont(42);
   fit->GetYaxis()->SetLabelOffset(0.01);
   fit->GetYaxis()->SetLabelSize(0.05);
   fit->GetYaxis()->SetTitleSize(0.035);
   fit->GetYaxis()->SetTitleFont(42);
   fit->SetParameter(0,0.06699834);
   fit->SetParError(0,0.05644815);
   fit->SetParLimits(0,0,0);
   grae->GetListOfFunctions()->Add(fit);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.815,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("#chi^{2} / ndf = 3.243 / 10");
   text = ptstats->AddText("p0       = 0.067 #pm 0.05645 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   grae->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(grae->GetListOfFunctions());
   grae->Draw("ap");
   
   TF1 *fit = new TF1("fit","pol0",200,1175);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetLineColor(2);
   fit->SetLineWidth(2);
   fit->SetChisquare(3.243421);
   fit->SetNDF(10);
   fit->GetXaxis()->SetLabelFont(42);
   fit->GetXaxis()->SetLabelOffset(0.01);
   fit->GetXaxis()->SetLabelSize(0.05);
   fit->GetXaxis()->SetTitleSize(0.06);
   fit->GetXaxis()->SetTitleFont(42);
   fit->GetYaxis()->SetLabelFont(42);
   fit->GetYaxis()->SetLabelOffset(0.01);
   fit->GetYaxis()->SetLabelSize(0.05);
   fit->GetYaxis()->SetTitleSize(0.035);
   fit->GetYaxis()->SetTitleFont(42);
   fit->SetParameter(0,0.06699834);
   fit->SetParError(0,0.05644815);
   fit->SetParLimits(0,0,0);
   fit->Draw("SAME");
      tex = new TLatex(0.12,0.84,"CMS, 18.493 fb^{-1}, #sqrt{s} = 8 TeV");
tex->SetNDC();
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TPaveText *pt = new TPaveText(0.12,0.9,0.5,0.95,"blNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextSize(0.04);
   text = pt->AddText("#mu + jets (>=1-btag) #rightarrow #mu#mu + jets (0-btag)(no #alphaT) ");
   pt->Draw();
   Yields->Modified();
   Yields->cd();
   Yields->SetSelected(Yields);
}
