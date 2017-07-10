void Stacked_AlphaT_3_btag_zero_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_zero_200_275/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:22 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_zero_200_275/AlphaT_3 = new TCanvas("canvasbtag_zero_200_275/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_zero_200_275/AlphaT_3->SetHighLightColor(2);
   canvasbtag_zero_200_275/AlphaT_3->Range(0,0,1,1);
   canvasbtag_zero_200_275/AlphaT_3->SetFillColor(0);
   canvasbtag_zero_200_275/AlphaT_3->SetBorderMode(0);
   canvasbtag_zero_200_275/AlphaT_3->SetBorderSize(2);
   canvasbtag_zero_200_275/AlphaT_3->SetTickx(1);
   canvasbtag_zero_200_275/AlphaT_3->SetTicky(1);
   canvasbtag_zero_200_275/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.561015,3.4875,4.463058);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis1564[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1470 = new TH1D("plot__1470","",24, xAxis1564);
   plot__1470->SetBinContent(10,616);
   plot__1470->SetBinContent(11,480);
   plot__1470->SetBinContent(12,266);
   plot__1470->SetBinContent(13,147);
   plot__1470->SetBinContent(14,81);
   plot__1470->SetBinContent(15,46.5);
   plot__1470->SetBinContent(16,23);
   plot__1470->SetBinContent(17,10.4);
   plot__1470->SetBinContent(18,3.2);
   plot__1470->SetBinContent(19,1.6);
   plot__1470->SetBinContent(20,0.6);
   plot__1470->SetBinContent(21,0.1);
   plot__1470->SetBinError(10,24.81935);
   plot__1470->SetBinError(11,21.9089);
   plot__1470->SetBinError(12,16.30951);
   plot__1470->SetBinError(13,12.12436);
   plot__1470->SetBinError(14,9);
   plot__1470->SetBinError(15,4.821825);
   plot__1470->SetBinError(16,3.391165);
   plot__1470->SetBinError(17,1.442221);
   plot__1470->SetBinError(18,2.14);
   plot__1470->SetBinError(19,1);
   plot__1470->SetMinimum(0.11);
   plot__1470->SetMaximum(7255.217);
   plot__1470->SetEntries(1834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__1470->SetLineColor(ci);
   plot__1470->SetLineWidth(2);
   plot__1470->SetMarkerStyle(20);
   plot__1470->SetMarkerSize(1.5);
   plot__1470->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1470->GetXaxis()->SetRange(1,23);
   plot__1470->GetXaxis()->SetLabelFont(42);
   plot__1470->GetXaxis()->SetLabelSize(0.035);
   plot__1470->GetXaxis()->SetTitleSize(0.035);
   plot__1470->GetXaxis()->SetTitleFont(42);
   plot__1470->GetYaxis()->SetTitle("Events");
   plot__1470->GetYaxis()->SetLabelFont(42);
   plot__1470->GetYaxis()->SetLabelSize(0.035);
   plot__1470->GetYaxis()->SetTitleSize(0.035);
   plot__1470->GetYaxis()->SetTitleOffset(1.3);
   plot__1470->GetYaxis()->SetTitleFont(42);
   plot__1470->GetZaxis()->SetLabelFont(42);
   plot__1470->GetZaxis()->SetLabelSize(0.035);
   plot__1470->GetZaxis()->SetTitleSize(0.035);
   plot__1470->GetZaxis()->SetTitleFont(42);
   plot__1470->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis1565[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_95 = new TH1F("_stack_95","",24, xAxis1565);
   _stack_95->SetMinimum(0.2902087);
   _stack_95->SetMaximum(1160.835);
   _stack_95->SetDirectory(0);
   _stack_95->SetStats(0);
   _stack_95->GetXaxis()->SetLabelFont(42);
   _stack_95->GetXaxis()->SetLabelOffset(0.007);
   _stack_95->GetXaxis()->SetLabelSize(0.05);
   _stack_95->GetXaxis()->SetTitleSize(0.05);
   _stack_95->GetYaxis()->SetLabelFont(42);
   _stack_95->GetYaxis()->SetLabelOffset(0.007);
   _stack_95->GetYaxis()->SetLabelSize(0.05);
   _stack_95->GetZaxis()->SetLabelFont(42);
   _stack_95->GetZaxis()->SetLabelOffset(0.007);
   _stack_95->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_95);
   
   Double_t xAxis1566[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1471 = new TH1D("plot__1471","",24, xAxis1566);
   plot__1471->SetBinContent(11,7.30815);
   plot__1471->SetBinError(11,7.30815);
   plot__1471->SetEntries(26);
   plot__1471->SetFillColor(7);
   plot__1471->SetLineColor(7);
   plot__1471->SetLineStyle(10);
   plot__1471->SetLineWidth(3);
   plot__1471->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1471->GetXaxis()->SetRange(1,23);
   plot__1471->GetXaxis()->SetLabelFont(42);
   plot__1471->GetXaxis()->SetLabelSize(0.035);
   plot__1471->GetXaxis()->SetTitleSize(0.035);
   plot__1471->GetXaxis()->SetTitleFont(42);
   plot__1471->GetYaxis()->SetTitle("Events/0.025");
   plot__1471->GetYaxis()->SetLabelFont(42);
   plot__1471->GetYaxis()->SetLabelSize(0.035);
   plot__1471->GetYaxis()->SetTitleSize(0.035);
   plot__1471->GetYaxis()->SetTitleFont(42);
   plot__1471->GetZaxis()->SetLabelFont(42);
   plot__1471->GetZaxis()->SetLabelSize(0.035);
   plot__1471->GetZaxis()->SetTitleSize(0.035);
   plot__1471->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1567[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1472 = new TH1D("plot__1472","",24, xAxis1567);
   plot__1472->SetBinContent(10,2.186213);
   plot__1472->SetBinContent(11,1.559633);
   plot__1472->SetBinContent(12,0.8985098);
   plot__1472->SetBinContent(13,2.783011);
   plot__1472->SetBinContent(14,0.2606132);
   plot__1472->SetBinContent(15,0.1153756);
   plot__1472->SetBinContent(16,0.05557868);
   plot__1472->SetBinContent(17,0.009372507);
   plot__1472->SetBinContent(18,0.02531563);
   plot__1472->SetBinError(10,0.309937);
   plot__1472->SetBinError(11,0.2953563);
   plot__1472->SetBinError(12,0.2247977);
   plot__1472->SetBinError(13,2.368808);
   plot__1472->SetBinError(14,0.1119264);
   plot__1472->SetBinError(15,0.05512561);
   plot__1472->SetBinError(16,0.03933067);
   plot__1472->SetBinError(17,0.009372507);
   plot__1472->SetBinError(18,0.01812652);
   plot__1472->SetEntries(178);
   plot__1472->SetFillColor(6);
   plot__1472->SetLineColor(6);
   plot__1472->SetLineWidth(3);
   plot__1472->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1472->GetXaxis()->SetRange(1,23);
   plot__1472->GetXaxis()->SetLabelFont(42);
   plot__1472->GetXaxis()->SetLabelSize(0.035);
   plot__1472->GetXaxis()->SetTitleSize(0.035);
   plot__1472->GetXaxis()->SetTitleFont(42);
   plot__1472->GetYaxis()->SetTitle("Events/0.025");
   plot__1472->GetYaxis()->SetLabelFont(42);
   plot__1472->GetYaxis()->SetLabelSize(0.035);
   plot__1472->GetYaxis()->SetTitleSize(0.035);
   plot__1472->GetYaxis()->SetTitleFont(42);
   plot__1472->GetZaxis()->SetLabelFont(42);
   plot__1472->GetZaxis()->SetLabelSize(0.035);
   plot__1472->GetZaxis()->SetTitleSize(0.035);
   plot__1472->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1568[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1473 = new TH1D("plot__1473","",24, xAxis1568);
   plot__1473->SetBinContent(10,8.278574);
   plot__1473->SetBinContent(11,4.856893);
   plot__1473->SetBinContent(12,1.237013);
   plot__1473->SetBinContent(13,1.396411);
   plot__1473->SetBinContent(14,0.1789701);
   plot__1473->SetBinContent(15,0.425052);
   plot__1473->SetBinContent(17,0.1170312);
   plot__1473->SetBinError(10,2.159914);
   plot__1473->SetBinError(11,1.574563);
   plot__1473->SetBinError(12,0.7297533);
   plot__1473->SetBinError(13,0.8118607);
   plot__1473->SetBinError(14,0.1789701);
   plot__1473->SetBinError(15,0.3039944);
   plot__1473->SetBinError(17,0.1170312);
   plot__1473->SetEntries(64);
   plot__1473->SetFillColor(40);
   plot__1473->SetLineColor(40);
   plot__1473->SetLineWidth(3);
   plot__1473->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1473->GetXaxis()->SetRange(1,23);
   plot__1473->GetXaxis()->SetLabelFont(42);
   plot__1473->GetXaxis()->SetLabelSize(0.035);
   plot__1473->GetXaxis()->SetTitleSize(0.035);
   plot__1473->GetXaxis()->SetTitleFont(42);
   plot__1473->GetYaxis()->SetTitle("Events/0.025");
   plot__1473->GetYaxis()->SetLabelFont(42);
   plot__1473->GetYaxis()->SetLabelSize(0.035);
   plot__1473->GetYaxis()->SetTitleSize(0.035);
   plot__1473->GetYaxis()->SetTitleFont(42);
   plot__1473->GetZaxis()->SetLabelFont(42);
   plot__1473->GetZaxis()->SetLabelSize(0.035);
   plot__1473->GetZaxis()->SetTitleSize(0.035);
   plot__1473->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1569[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1474 = new TH1D("plot__1474","",24, xAxis1569);
   plot__1474->SetBinContent(10,8.741749);
   plot__1474->SetBinContent(11,7.287906);
   plot__1474->SetBinContent(12,3.323431);
   plot__1474->SetBinContent(13,2.618514);
   plot__1474->SetBinContent(14,1.326172);
   plot__1474->SetBinContent(15,1.021592);
   plot__1474->SetBinContent(16,0.4903895);
   plot__1474->SetBinContent(17,0.1674869);
   plot__1474->SetBinContent(18,0.06478629);
   plot__1474->SetBinContent(19,0.02480432);
   plot__1474->SetBinContent(20,0.01900583);
   plot__1474->SetBinContent(21,0.006232822);
   plot__1474->SetBinError(10,0.776401);
   plot__1474->SetBinError(11,0.6785699);
   plot__1474->SetBinError(12,0.3954904);
   plot__1474->SetBinError(13,0.3914002);
   plot__1474->SetBinError(14,0.290844);
   plot__1474->SetBinError(15,0.1753531);
   plot__1474->SetBinError(16,0.1054734);
   plot__1474->SetBinError(17,0.03315443);
   plot__1474->SetBinError(18,0.02423959);
   plot__1474->SetBinError(19,0.01116524);
   plot__1474->SetBinError(20,0.009897784);
   plot__1474->SetBinError(21,0.003670837);
   plot__1474->SetEntries(957);
   plot__1474->SetFillColor(44);
   plot__1474->SetLineColor(44);
   plot__1474->SetLineWidth(3);
   plot__1474->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1474->GetXaxis()->SetRange(1,23);
   plot__1474->GetXaxis()->SetLabelFont(42);
   plot__1474->GetXaxis()->SetLabelSize(0.035);
   plot__1474->GetXaxis()->SetTitleSize(0.035);
   plot__1474->GetXaxis()->SetTitleFont(42);
   plot__1474->GetYaxis()->SetTitle("Events/0.025");
   plot__1474->GetYaxis()->SetLabelFont(42);
   plot__1474->GetYaxis()->SetLabelSize(0.035);
   plot__1474->GetYaxis()->SetTitleSize(0.035);
   plot__1474->GetYaxis()->SetTitleFont(42);
   plot__1474->GetZaxis()->SetLabelFont(42);
   plot__1474->GetZaxis()->SetLabelSize(0.035);
   plot__1474->GetZaxis()->SetTitleSize(0.035);
   plot__1474->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1570[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1475 = new TH1D("plot__1475","",24, xAxis1570);
   plot__1475->SetBinContent(10,104.7274);
   plot__1475->SetBinContent(11,85.9878);
   plot__1475->SetBinContent(12,37.05555);
   plot__1475->SetBinContent(13,18.69263);
   plot__1475->SetBinContent(14,9.247018);
   plot__1475->SetBinContent(15,4.783309);
   plot__1475->SetBinContent(16,1.674834);
   plot__1475->SetBinContent(17,1.018054);
   plot__1475->SetBinContent(18,0.2199417);
   plot__1475->SetBinContent(19,0.136633);
   plot__1475->SetBinContent(20,0.06307558);
   plot__1475->SetBinError(10,4.982408);
   plot__1475->SetBinError(11,4.420402);
   plot__1475->SetBinError(12,2.801696);
   plot__1475->SetBinError(13,2.023345);
   plot__1475->SetBinError(14,1.338405);
   plot__1475->SetBinError(15,0.6928364);
   plot__1475->SetBinError(16,0.4045385);
   plot__1475->SetBinError(17,0.2090505);
   plot__1475->SetBinError(18,0.09756073);
   plot__1475->SetBinError(19,0.07927325);
   plot__1475->SetBinError(20,0.04460118);
   plot__1475->SetEntries(1401);
   plot__1475->SetFillColor(2);
   plot__1475->SetLineColor(2);
   plot__1475->SetLineWidth(3);
   plot__1475->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1475->GetXaxis()->SetRange(1,23);
   plot__1475->GetXaxis()->SetLabelFont(42);
   plot__1475->GetXaxis()->SetLabelSize(0.035);
   plot__1475->GetXaxis()->SetTitleSize(0.035);
   plot__1475->GetXaxis()->SetTitleFont(42);
   plot__1475->GetYaxis()->SetTitle("Events/0.025");
   plot__1475->GetYaxis()->SetLabelFont(42);
   plot__1475->GetYaxis()->SetLabelSize(0.035);
   plot__1475->GetYaxis()->SetTitleSize(0.035);
   plot__1475->GetYaxis()->SetTitleFont(42);
   plot__1475->GetZaxis()->SetLabelFont(42);
   plot__1475->GetZaxis()->SetLabelSize(0.035);
   plot__1475->GetZaxis()->SetTitleSize(0.035);
   plot__1475->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1571[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1476 = new TH1D("plot__1476","",24, xAxis1571);
   plot__1476->SetBinContent(10,261.1267);
   plot__1476->SetBinContent(11,178.1529);
   plot__1476->SetBinContent(12,95.61474);
   plot__1476->SetBinContent(13,46.21405);
   plot__1476->SetBinContent(14,27.94805);
   plot__1476->SetBinContent(15,16.85687);
   plot__1476->SetBinContent(16,6.705316);
   plot__1476->SetBinContent(17,2.609288);
   plot__1476->SetBinContent(18,0.6609319);
   plot__1476->SetBinContent(19,0.3905042);
   plot__1476->SetBinContent(20,0.2500841);
   plot__1476->SetBinContent(21,0.06499795);
   plot__1476->SetBinContent(22,0.04285901);
   plot__1476->SetBinContent(23,0.07654273);
   plot__1476->SetBinContent(24,0.001109315);
   plot__1476->SetBinError(10,6.142418);
   plot__1476->SetBinError(11,5.439704);
   plot__1476->SetBinError(12,3.986239);
   plot__1476->SetBinError(13,2.783269);
   plot__1476->SetBinError(14,2.164599);
   plot__1476->SetBinError(15,1.191743);
   plot__1476->SetBinError(16,0.7424301);
   plot__1476->SetBinError(17,0.2912474);
   plot__1476->SetBinError(18,0.1429687);
   plot__1476->SetBinError(19,0.1164806);
   plot__1476->SetBinError(20,0.08647588);
   plot__1476->SetBinError(21,0.03300488);
   plot__1476->SetBinError(22,0.03037722);
   plot__1476->SetBinError(23,0.1956307);
   plot__1476->SetBinError(24,0.001109315);
   plot__1476->SetEntries(5026);
   plot__1476->SetFillColor(4);
   plot__1476->SetLineColor(4);
   plot__1476->SetLineWidth(3);
   plot__1476->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1476->GetXaxis()->SetRange(1,23);
   plot__1476->GetXaxis()->SetLabelFont(42);
   plot__1476->GetXaxis()->SetLabelSize(0.035);
   plot__1476->GetXaxis()->SetTitleSize(0.035);
   plot__1476->GetXaxis()->SetTitleFont(42);
   plot__1476->GetYaxis()->SetTitle("Events/0.025");
   plot__1476->GetYaxis()->SetLabelFont(42);
   plot__1476->GetYaxis()->SetLabelSize(0.035);
   plot__1476->GetYaxis()->SetTitleSize(0.035);
   plot__1476->GetYaxis()->SetTitleFont(42);
   plot__1476->GetZaxis()->SetLabelFont(42);
   plot__1476->GetZaxis()->SetLabelSize(0.035);
   plot__1476->GetZaxis()->SetTitleSize(0.035);
   plot__1476->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis1572[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1477 = new TH1D("plot__1477","",24, xAxis1572);
   plot__1477->SetBinContent(10,340.4611);
   plot__1477->SetBinContent(11,241.5993);
   plot__1477->SetBinContent(12,136.9384);
   plot__1477->SetBinContent(13,78.88108);
   plot__1477->SetBinContent(14,45.60065);
   plot__1477->SetBinContent(15,26.53263);
   plot__1477->SetBinContent(16,13.77177);
   plot__1477->SetBinContent(17,5.998229);
   plot__1477->SetBinContent(18,1.994452);
   plot__1477->SetBinContent(19,0.6953129);
   plot__1477->SetBinContent(20,0.3773227);
   plot__1477->SetBinContent(21,0.08987747);
   plot__1477->SetBinContent(22,0.06244812);
   plot__1477->SetBinContent(23,0.01385033);
   plot__1477->SetBinError(10,4.192318);
   plot__1477->SetBinError(11,4.048148);
   plot__1477->SetBinError(12,3.094761);
   plot__1477->SetBinError(13,2.328008);
   plot__1477->SetBinError(14,1.802426);
   plot__1477->SetBinError(15,0.942712);
   plot__1477->SetBinError(16,0.7322588);
   plot__1477->SetBinError(17,0.2853509);
   plot__1477->SetBinError(18,0.1623226);
   plot__1477->SetBinError(19,0.09704128);
   plot__1477->SetBinError(20,0.07288068);
   plot__1477->SetBinError(21,0.02330694);
   plot__1477->SetBinError(22,0.0206511);
   plot__1477->SetBinError(23,0.08321758);
   plot__1477->SetEntries(25766);
   plot__1477->SetFillColor(5);
   plot__1477->SetLineColor(5);
   plot__1477->SetLineWidth(3);
   plot__1477->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1477->GetXaxis()->SetRange(1,23);
   plot__1477->GetXaxis()->SetLabelFont(42);
   plot__1477->GetXaxis()->SetLabelSize(0.035);
   plot__1477->GetXaxis()->SetTitleSize(0.035);
   plot__1477->GetXaxis()->SetTitleFont(42);
   plot__1477->GetYaxis()->SetTitle("Events/0.025");
   plot__1477->GetYaxis()->SetLabelFont(42);
   plot__1477->GetYaxis()->SetLabelSize(0.035);
   plot__1477->GetYaxis()->SetTitleSize(0.035);
   plot__1477->GetYaxis()->SetTitleFont(42);
   plot__1477->GetZaxis()->SetLabelFont(42);
   plot__1477->GetZaxis()->SetLabelSize(0.035);
   plot__1477->GetZaxis()->SetTitleSize(0.035);
   plot__1477->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis1573[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1478 = new TH1D("plot__1478","",24, xAxis1573);
   plot__1478->SetBinContent(10,616);
   plot__1478->SetBinContent(11,480);
   plot__1478->SetBinContent(12,266);
   plot__1478->SetBinContent(13,147);
   plot__1478->SetBinContent(14,81);
   plot__1478->SetBinContent(15,46.5);
   plot__1478->SetBinContent(16,23);
   plot__1478->SetBinContent(17,10.4);
   plot__1478->SetBinContent(18,3.2);
   plot__1478->SetBinContent(19,1.6);
   plot__1478->SetBinContent(20,0.6);
   plot__1478->SetBinContent(21,0.1);
   plot__1478->SetBinError(10,24.81935);
   plot__1478->SetBinError(11,21.9089);
   plot__1478->SetBinError(12,16.30951);
   plot__1478->SetBinError(13,12.12436);
   plot__1478->SetBinError(14,9);
   plot__1478->SetBinError(15,4.821825);
   plot__1478->SetBinError(16,3.391165);
   plot__1478->SetBinError(17,1.442221);
   plot__1478->SetBinError(18,2.14);
   plot__1478->SetBinError(19,1);
   plot__1478->SetMinimum(0.11);
   plot__1478->SetMaximum(7255.217);
   plot__1478->SetEntries(1834);

   ci = TColor::GetColor("#000099");
   plot__1478->SetLineColor(ci);
   plot__1478->SetLineWidth(2);
   plot__1478->SetMarkerStyle(20);
   plot__1478->SetMarkerSize(1.5);
   plot__1478->GetXaxis()->SetTitle("#alpha_{T}");
   plot__1478->GetXaxis()->SetRange(1,23);
   plot__1478->GetXaxis()->SetLabelFont(42);
   plot__1478->GetXaxis()->SetLabelSize(0.035);
   plot__1478->GetXaxis()->SetTitleSize(0.035);
   plot__1478->GetXaxis()->SetTitleFont(42);
   plot__1478->GetYaxis()->SetTitle("Events");
   plot__1478->GetYaxis()->SetLabelFont(42);
   plot__1478->GetYaxis()->SetLabelSize(0.035);
   plot__1478->GetYaxis()->SetTitleSize(0.035);
   plot__1478->GetYaxis()->SetTitleOffset(1.3);
   plot__1478->GetYaxis()->SetTitleFont(42);
   plot__1478->GetZaxis()->SetLabelFont(42);
   plot__1478->GetZaxis()->SetLabelSize(0.035);
   plot__1478->GetZaxis()->SetTitleSize(0.035);
   plot__1478->GetZaxis()->SetTitleFont(42);
   plot__1478->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_zero_200_2    Jet Multiplicity>3");
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
   canvasbtag_zero_200_275/AlphaT_3->cd();
  
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
   Double_t xAxis1574[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1479 = new TH1D("plot__1479","",24, xAxis1574);
   plot__1479->SetBinContent(10,0.8490442);
   plot__1479->SetBinContent(11,0.9112437);
   plot__1479->SetBinContent(12,0.9670349);
   plot__1479->SetBinContent(13,0.9761883);
   plot__1479->SetBinContent(14,0.957883);
   plot__1479->SetBinContent(15,0.9349585);
   plot__1479->SetBinContent(16,1.01331);
   plot__1479->SetBinContent(17,1.048444);
   plot__1479->SetBinContent(18,1.079103);
   plot__1479->SetBinContent(19,1.282818);
   plot__1479->SetBinContent(20,0.84568);
   plot__1479->SetBinContent(21,0.6207007);
   plot__1479->SetBinError(10,0.03420897);
   plot__1479->SetBinError(11,0.04159239);
   plot__1479->SetBinError(12,0.05929271);
   plot__1479->SetBinError(13,0.08051466);
   plot__1479->SetBinError(14,0.1064314);
   plot__1479->SetBinError(15,0.09695068);
   plot__1479->SetBinError(16,0.1494044);
   plot__1479->SetBinError(17,0.145393);
   plot__1479->SetBinError(18,0.7216498);
   plot__1479->SetBinError(19,0.8017611);
   plot__1479->SetMinimum(0);
   plot__1479->SetMaximum(2);
   plot__1479->SetEntries(98.89268);

   ci = TColor::GetColor("#000099");
   plot__1479->SetLineColor(ci);
   plot__1479->SetLineWidth(2);
   plot__1479->SetMarkerStyle(20);
   plot__1479->SetMarkerSize(1.5);
   plot__1479->GetXaxis()->SetRange(1,23);
   plot__1479->GetXaxis()->SetLabelFont(42);
   plot__1479->GetXaxis()->SetLabelSize(0.12);
   plot__1479->GetXaxis()->SetTitleSize(0.035);
   plot__1479->GetXaxis()->SetTitleFont(42);
   plot__1479->GetYaxis()->SetTitle("Data/MC");
   plot__1479->GetYaxis()->SetNdivisions(505);
   plot__1479->GetYaxis()->SetLabelFont(42);
   plot__1479->GetYaxis()->SetLabelSize(0.11);
   plot__1479->GetYaxis()->SetTitleSize(0.1);
   plot__1479->GetYaxis()->SetTitleOffset(0.5);
   plot__1479->GetYaxis()->SetTitleFont(42);
   plot__1479->GetZaxis()->SetLabelFont(42);
   plot__1479->GetZaxis()->SetLabelSize(0.035);
   plot__1479->GetZaxis()->SetTitleSize(0.035);
   plot__1479->GetZaxis()->SetTitleFont(42);
   plot__1479->Draw("p");
   
   Double_t Graph_from_plot_fx1380[24] = {
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
   Double_t Graph_from_plot_fy1380[24] = {
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
   Double_t Graph_from_plot_fex1380[24] = {
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
   Double_t Graph_from_plot_fey1380[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01274429,
   0.02096481,
   0.0212159,
   0.03231774,
   0.03712353,
   0.03432986,
   0.04952693,
   0.04780183,
   0.08066731,
   0.1374586,
   0.1719139,
   0.2518249,
   0.3488088,
   2.351892,
   1};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1380,Graph_from_plot_fy1380,Graph_from_plot_fex1380,Graph_from_plot_fey1380);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1380 = new TH1F("Graph_Graph_from_plot1380","",100,0,11);
   Graph_Graph_from_plot1380->SetMinimum(-1.822271);
   Graph_Graph_from_plot1380->SetMaximum(3.822271);
   Graph_Graph_from_plot1380->SetDirectory(0);
   Graph_Graph_from_plot1380->SetStats(0);
   Graph_Graph_from_plot1380->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1380->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1380->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1380->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1380->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1380->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1380->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1380->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1380->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1380->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1380);
   
   gre->Draw("2");
   Double_t xAxis1575[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__1480 = new TH1D("plot__1480","",24, xAxis1575);
   plot__1480->SetBinContent(10,0.8490442);
   plot__1480->SetBinContent(11,0.9112437);
   plot__1480->SetBinContent(12,0.9670349);
   plot__1480->SetBinContent(13,0.9761883);
   plot__1480->SetBinContent(14,0.957883);
   plot__1480->SetBinContent(15,0.9349585);
   plot__1480->SetBinContent(16,1.01331);
   plot__1480->SetBinContent(17,1.048444);
   plot__1480->SetBinContent(18,1.079103);
   plot__1480->SetBinContent(19,1.282818);
   plot__1480->SetBinContent(20,0.84568);
   plot__1480->SetBinContent(21,0.6207007);
   plot__1480->SetBinError(10,0.03420897);
   plot__1480->SetBinError(11,0.04159239);
   plot__1480->SetBinError(12,0.05929271);
   plot__1480->SetBinError(13,0.08051466);
   plot__1480->SetBinError(14,0.1064314);
   plot__1480->SetBinError(15,0.09695068);
   plot__1480->SetBinError(16,0.1494044);
   plot__1480->SetBinError(17,0.145393);
   plot__1480->SetBinError(18,0.7216498);
   plot__1480->SetBinError(19,0.8017611);
   plot__1480->SetMinimum(0);
   plot__1480->SetMaximum(2);
   plot__1480->SetEntries(98.89268);

   ci = TColor::GetColor("#000099");
   plot__1480->SetLineColor(ci);
   plot__1480->SetLineWidth(2);
   plot__1480->SetMarkerStyle(20);
   plot__1480->SetMarkerSize(1.5);
   plot__1480->GetXaxis()->SetRange(1,23);
   plot__1480->GetXaxis()->SetLabelFont(42);
   plot__1480->GetXaxis()->SetLabelSize(0.12);
   plot__1480->GetXaxis()->SetTitleSize(0.035);
   plot__1480->GetXaxis()->SetTitleFont(42);
   plot__1480->GetYaxis()->SetTitle("Data/MC");
   plot__1480->GetYaxis()->SetNdivisions(505);
   plot__1480->GetYaxis()->SetLabelFont(42);
   plot__1480->GetYaxis()->SetLabelSize(0.11);
   plot__1480->GetYaxis()->SetTitleSize(0.1);
   plot__1480->GetYaxis()->SetTitleOffset(0.5);
   plot__1480->GetYaxis()->SetTitleFont(42);
   plot__1480->GetZaxis()->SetLabelFont(42);
   plot__1480->GetZaxis()->SetLabelSize(0.035);
   plot__1480->GetZaxis()->SetTitleSize(0.035);
   plot__1480->GetZaxis()->SetTitleFont(42);
   plot__1480->Draw("PSAME");
   d->Modified();
   canvasbtag_zero_200_275/AlphaT_3->cd();
   canvasbtag_zero_200_275/AlphaT_3->Modified();
   canvasbtag_zero_200_275/AlphaT_3->cd();
   canvasbtag_zero_200_275/AlphaT_3->SetSelected(canvasbtag_zero_200_275/AlphaT_3);
}
