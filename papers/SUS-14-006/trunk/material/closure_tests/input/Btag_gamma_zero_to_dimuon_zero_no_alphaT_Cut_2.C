{
//=========Macro generated from canvas: Yields/Yields
//=========  (Sat Jul 26 19:52:55 2014) by ROOT version5.34/09
   TCanvas *Yields = new TCanvas("Yields", "Yields",1,1,900,576);
   gStyle->SetOptFit(1);
   Yields->SetHighLightColor(2);
   Yields->Range(270.7031,-1.25,1276.172,1.25);
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
   grae->SetPoint(1,0,0);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,0,0);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,0,0);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,425,0.01687509);
   grae->SetPointError(4,0,0,0.04320377,0.04320377);
   grae->SetPoint(5,525,-0.05900505);
   grae->SetPointError(5,0,0,0.06781727,0.06781727);
   grae->SetPoint(6,625,0.01634534);
   grae->SetPointError(6,0,0,0.1045902,0.1045902);
   grae->SetPoint(7,725,0.04171136);
   grae->SetPointError(7,0,0,0.1655015,0.1655015);
   grae->SetPoint(8,825,0.180489);
   grae->SetPointError(8,0,0,0.2611569,0.2611569);
   grae->SetPoint(9,925,-0.05230291);
   grae->SetPointError(9,0,0,0.360888,0.360888);
   grae->SetPoint(10,1025,0.2332007);
   grae->SetPointError(10,0,0,0.5168033,0.5168033);
   grae->SetPoint(11,1125,-0.2317234);
   grae->SetPointError(11,0,0,0.467553,0.467553);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","",100,0,1237.5);
   Graph_Graph10->SetMinimum(-1);
   Graph_Graph10->SetMaximum(1);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetTitle("H_{T} (GeV)");
   Graph_Graph10->GetXaxis()->SetRange(31,95);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetTitle("(N_{obs} - N_{pred}) / N_{pred}");
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.1);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.01);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph10);
   
   
   TF1 *fit = new TF1("fit","pol0",375,1175);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetLineColor(2);
   fit->SetLineWidth(2);
   fit->SetChisquare(1.943579);
   fit->SetNDF(7);
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
   fit->SetParameter(0,0.001410657);
   fit->SetParError(0,0.03311774);
   fit->SetParLimits(0,0,0);
   grae->GetListOfFunctions()->Add(fit);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.815,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("#chi^{2} / ndf = 1.944 / 7");
   text = ptstats->AddText("p0       = 0.001411 #pm 0.03312 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   grae->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(grae->GetListOfFunctions());
   grae->Draw("ap");
   
   TF1 *fit = new TF1("fit","pol0",375,1175);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetLineColor(2);
   fit->SetLineWidth(2);
   fit->SetChisquare(1.943579);
   fit->SetNDF(7);
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
   fit->SetParameter(0,0.001410657);
   fit->SetParError(0,0.03311774);
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
   text = pt->AddText("#gamma + jets (0-b-tag) #rightarrow #mu#mu + jets (0-b-tag) ");
   pt->Draw();
   Yields->Modified();
   Yields->cd();
   Yields->SetSelected(Yields);
}
