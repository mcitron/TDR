void Stacked_AlphaT_3_btag_morethanzero_200_upwards()
{
//=========Macro generated from canvas: canvasbtag_morethanzero_200_275/AlphaT_3/cannameAlphaT_3
//=========  (Wed Aug 24 11:54:01 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_morethanzero_200_275/AlphaT_3 = new TCanvas("canvasbtag_morethanzero_200_275/AlphaT_3", "cannameAlphaT_3",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetHighLightColor(2);
   canvasbtag_morethanzero_200_275/AlphaT_3->Range(0,0,1,1);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetFillColor(0);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetBorderMode(0);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetBorderSize(2);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetTickx(1);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetTicky(1);
   canvasbtag_morethanzero_200_275/AlphaT_3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.545118,3.4875,4.319993);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis574[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__540 = new TH1D("plot__540","",24, xAxis574);
   plot__540->SetBinContent(10,446);
   plot__540->SetBinContent(11,314);
   plot__540->SetBinContent(12,149);
   plot__540->SetBinContent(13,65);
   plot__540->SetBinContent(14,41);
   plot__540->SetBinContent(15,15.5);
   plot__540->SetBinContent(16,5.5);
   plot__540->SetBinContent(17,3.2);
   plot__540->SetBinContent(18,1.2);
   plot__540->SetBinContent(19,0.2);
   plot__540->SetBinContent(20,0.2);
   plot__540->SetBinError(10,21.11871);
   plot__540->SetBinError(11,17.72005);
   plot__540->SetBinError(12,12.20656);
   plot__540->SetBinError(13,8.062258);
   plot__540->SetBinError(14,6.403124);
   plot__540->SetBinError(15,2.783882);
   plot__540->SetBinError(16,2.49);
   plot__540->SetBinError(17,2.14);
   plot__540->SetBinError(18,1);
   plot__540->SetMinimum(0.11);
   plot__540->SetMaximum(5413.543);
   plot__540->SetEntries(1106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__540->SetLineColor(ci);
   plot__540->SetLineWidth(2);
   plot__540->SetMarkerStyle(20);
   plot__540->SetMarkerSize(1.5);
   plot__540->GetXaxis()->SetTitle("#alpha_{T}");
   plot__540->GetXaxis()->SetRange(1,23);
   plot__540->GetXaxis()->SetLabelFont(42);
   plot__540->GetXaxis()->SetLabelSize(0.035);
   plot__540->GetXaxis()->SetTitleSize(0.035);
   plot__540->GetXaxis()->SetTitleFont(42);
   plot__540->GetYaxis()->SetTitle("Events");
   plot__540->GetYaxis()->SetLabelFont(42);
   plot__540->GetYaxis()->SetLabelSize(0.035);
   plot__540->GetYaxis()->SetTitleSize(0.035);
   plot__540->GetYaxis()->SetTitleOffset(1.3);
   plot__540->GetYaxis()->SetTitleFont(42);
   plot__540->GetZaxis()->SetLabelFont(42);
   plot__540->GetZaxis()->SetLabelSize(0.035);
   plot__540->GetZaxis()->SetTitleSize(0.035);
   plot__540->GetZaxis()->SetTitleFont(42);
   plot__540->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis575[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_35 = new TH1F("_stack_35","",24, xAxis575);
   _stack_35->SetMinimum(0.2165417);
   _stack_35->SetMaximum(866.1669);
   _stack_35->SetDirectory(0);
   _stack_35->SetStats(0);
   _stack_35->GetXaxis()->SetLabelFont(42);
   _stack_35->GetXaxis()->SetLabelOffset(0.007);
   _stack_35->GetXaxis()->SetLabelSize(0.05);
   _stack_35->GetXaxis()->SetTitleSize(0.05);
   _stack_35->GetYaxis()->SetLabelFont(42);
   _stack_35->GetYaxis()->SetLabelOffset(0.007);
   _stack_35->GetYaxis()->SetLabelSize(0.05);
   _stack_35->GetZaxis()->SetLabelFont(42);
   _stack_35->GetZaxis()->SetLabelOffset(0.007);
   _stack_35->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_35);
   
   Double_t xAxis576[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__541 = new TH1D("plot__541","",24, xAxis576);
   plot__541->SetEntries(25);
   plot__541->SetFillColor(7);
   plot__541->SetLineColor(7);
   plot__541->SetLineStyle(10);
   plot__541->SetLineWidth(3);
   plot__541->GetXaxis()->SetTitle("#alpha_{T}");
   plot__541->GetXaxis()->SetRange(1,23);
   plot__541->GetXaxis()->SetLabelFont(42);
   plot__541->GetXaxis()->SetLabelSize(0.035);
   plot__541->GetXaxis()->SetTitleSize(0.035);
   plot__541->GetXaxis()->SetTitleFont(42);
   plot__541->GetYaxis()->SetTitle("Events/0.025");
   plot__541->GetYaxis()->SetLabelFont(42);
   plot__541->GetYaxis()->SetLabelSize(0.035);
   plot__541->GetYaxis()->SetTitleSize(0.035);
   plot__541->GetYaxis()->SetTitleFont(42);
   plot__541->GetZaxis()->SetLabelFont(42);
   plot__541->GetZaxis()->SetLabelSize(0.035);
   plot__541->GetZaxis()->SetTitleSize(0.035);
   plot__541->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis577[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__542 = new TH1D("plot__542","",24, xAxis577);
   plot__542->SetBinContent(10,0.3671682);
   plot__542->SetBinContent(11,0.2647219);
   plot__542->SetBinContent(12,0.1184569);
   plot__542->SetBinContent(14,0.05010938);
   plot__542->SetBinContent(19,0.003522126);
   plot__542->SetBinError(10,0.1449696);
   plot__542->SetBinError(11,0.1078454);
   plot__542->SetBinError(12,0.08679512);
   plot__542->SetBinError(14,0.05010938);
   plot__542->SetBinError(19,0.003522126);
   plot__542->SetEntries(45);
   plot__542->SetFillColor(6);
   plot__542->SetLineColor(6);
   plot__542->SetLineWidth(3);
   plot__542->GetXaxis()->SetTitle("#alpha_{T}");
   plot__542->GetXaxis()->SetRange(1,23);
   plot__542->GetXaxis()->SetLabelFont(42);
   plot__542->GetXaxis()->SetLabelSize(0.035);
   plot__542->GetXaxis()->SetTitleSize(0.035);
   plot__542->GetXaxis()->SetTitleFont(42);
   plot__542->GetYaxis()->SetTitle("Events/0.025");
   plot__542->GetYaxis()->SetLabelFont(42);
   plot__542->GetYaxis()->SetLabelSize(0.035);
   plot__542->GetYaxis()->SetTitleSize(0.035);
   plot__542->GetYaxis()->SetTitleFont(42);
   plot__542->GetZaxis()->SetLabelFont(42);
   plot__542->GetZaxis()->SetLabelSize(0.035);
   plot__542->GetZaxis()->SetTitleSize(0.035);
   plot__542->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis578[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__543 = new TH1D("plot__543","",24, xAxis578);
   plot__543->SetBinContent(10,2.107808);
   plot__543->SetBinContent(11,2.362228);
   plot__543->SetBinContent(12,1.062693);
   plot__543->SetBinContent(13,0.6763347);
   plot__543->SetBinContent(14,0.6368707);
   plot__543->SetBinContent(15,0.2055031);
   plot__543->SetBinContent(16,0.1109204);
   plot__543->SetBinContent(17,0.02318187);
   plot__543->SetBinContent(18,0.01198424);
   plot__543->SetBinContent(19,0.01541763);
   plot__543->SetBinError(10,0.3294625);
   plot__543->SetBinError(11,0.4198671);
   plot__543->SetBinError(12,0.2506948);
   plot__543->SetBinError(13,0.1631561);
   plot__543->SetBinError(14,0.1900491);
   plot__543->SetBinError(15,0.05188688);
   plot__543->SetBinError(16,0.07240926);
   plot__543->SetBinError(17,0.01007992);
   plot__543->SetBinError(18,0.00632076);
   plot__543->SetBinError(19,0.008909651);
   plot__543->SetEntries(316);
   plot__543->SetFillColor(44);
   plot__543->SetLineColor(44);
   plot__543->SetLineWidth(3);
   plot__543->GetXaxis()->SetTitle("#alpha_{T}");
   plot__543->GetXaxis()->SetRange(1,23);
   plot__543->GetXaxis()->SetLabelFont(42);
   plot__543->GetXaxis()->SetLabelSize(0.035);
   plot__543->GetXaxis()->SetTitleSize(0.035);
   plot__543->GetXaxis()->SetTitleFont(42);
   plot__543->GetYaxis()->SetTitle("Events/0.025");
   plot__543->GetYaxis()->SetLabelFont(42);
   plot__543->GetYaxis()->SetLabelSize(0.035);
   plot__543->GetYaxis()->SetTitleSize(0.035);
   plot__543->GetYaxis()->SetTitleFont(42);
   plot__543->GetZaxis()->SetLabelFont(42);
   plot__543->GetZaxis()->SetLabelSize(0.035);
   plot__543->GetZaxis()->SetTitleSize(0.035);
   plot__543->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis579[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__544 = new TH1D("plot__544","",24, xAxis579);
   plot__544->SetBinContent(10,20.78259);
   plot__544->SetBinContent(11,14.39215);
   plot__544->SetBinContent(12,6.636342);
   plot__544->SetBinContent(13,5.090291);
   plot__544->SetBinContent(14,1.99354);
   plot__544->SetBinContent(15,1.639806);
   plot__544->SetBinContent(17,0.1819102);
   plot__544->SetBinError(10,3.148046);
   plot__544->SetBinError(11,2.608231);
   plot__544->SetBinError(12,1.649651);
   plot__544->SetBinError(13,1.508047);
   plot__544->SetBinError(14,0.9126029);
   plot__544->SetBinError(15,0.6354824);
   plot__544->SetBinError(17,0.1211897);
   plot__544->SetEntries(153);
   plot__544->SetFillColor(40);
   plot__544->SetLineColor(40);
   plot__544->SetLineWidth(3);
   plot__544->GetXaxis()->SetTitle("#alpha_{T}");
   plot__544->GetXaxis()->SetRange(1,23);
   plot__544->GetXaxis()->SetLabelFont(42);
   plot__544->GetXaxis()->SetLabelSize(0.035);
   plot__544->GetXaxis()->SetTitleSize(0.035);
   plot__544->GetXaxis()->SetTitleFont(42);
   plot__544->GetYaxis()->SetTitle("Events/0.025");
   plot__544->GetYaxis()->SetLabelFont(42);
   plot__544->GetYaxis()->SetLabelSize(0.035);
   plot__544->GetYaxis()->SetTitleSize(0.035);
   plot__544->GetYaxis()->SetTitleFont(42);
   plot__544->GetZaxis()->SetLabelFont(42);
   plot__544->GetZaxis()->SetLabelSize(0.035);
   plot__544->GetZaxis()->SetTitleSize(0.035);
   plot__544->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis580[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__545 = new TH1D("plot__545","",24, xAxis580);
   plot__545->SetBinContent(10,46.99938);
   plot__545->SetBinContent(11,29.55285);
   plot__545->SetBinContent(12,16.9997);
   plot__545->SetBinContent(13,7.779085);
   plot__545->SetBinContent(14,4.304451);
   plot__545->SetBinContent(15,2.233917);
   plot__545->SetBinContent(16,1.833367);
   plot__545->SetBinContent(17,0.5625181);
   plot__545->SetBinContent(18,0.3408958);
   plot__545->SetBinContent(19,0.03253022);
   plot__545->SetBinContent(20,0.03061939);
   plot__545->SetBinContent(21,0.0181257);
   plot__545->SetBinError(10,2.73042);
   plot__545->SetBinError(11,2.276589);
   plot__545->SetBinError(12,1.731547);
   plot__545->SetBinError(13,1.147866);
   plot__545->SetBinError(14,0.8623557);
   plot__545->SetBinError(15,0.4427892);
   plot__545->SetBinError(16,0.4084787);
   plot__545->SetBinError(17,0.1345059);
   plot__545->SetBinError(18,0.1096241);
   plot__545->SetBinError(19,0.03253022);
   plot__545->SetBinError(20,0.03061939);
   plot__545->SetBinError(21,0.0181257);
   plot__545->SetEntries(852);
   plot__545->SetFillColor(4);
   plot__545->SetLineColor(4);
   plot__545->SetLineWidth(3);
   plot__545->GetXaxis()->SetTitle("#alpha_{T}");
   plot__545->GetXaxis()->SetRange(1,23);
   plot__545->GetXaxis()->SetLabelFont(42);
   plot__545->GetXaxis()->SetLabelSize(0.035);
   plot__545->GetXaxis()->SetTitleSize(0.035);
   plot__545->GetXaxis()->SetTitleFont(42);
   plot__545->GetYaxis()->SetTitle("Events/0.025");
   plot__545->GetYaxis()->SetLabelFont(42);
   plot__545->GetYaxis()->SetLabelSize(0.035);
   plot__545->GetYaxis()->SetTitleSize(0.035);
   plot__545->GetYaxis()->SetTitleFont(42);
   plot__545->GetZaxis()->SetLabelFont(42);
   plot__545->GetZaxis()->SetLabelSize(0.035);
   plot__545->GetZaxis()->SetTitleSize(0.035);
   plot__545->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis581[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__546 = new TH1D("plot__546","",24, xAxis581);
   plot__546->SetBinContent(10,60.30835);
   plot__546->SetBinContent(11,41.24065);
   plot__546->SetBinContent(12,24.40383);
   plot__546->SetBinContent(13,13.58181);
   plot__546->SetBinContent(14,7.887218);
   plot__546->SetBinContent(15,4.169967);
   plot__546->SetBinContent(16,2.087025);
   plot__546->SetBinContent(17,0.7176284);
   plot__546->SetBinContent(18,0.4401834);
   plot__546->SetBinContent(19,0.1950396);
   plot__546->SetBinContent(20,0.04157775);
   plot__546->SetBinContent(21,0.0177781);
   plot__546->SetBinContent(22,0.01135344);
   plot__546->SetBinError(10,1.762582);
   plot__546->SetBinError(11,1.649917);
   plot__546->SetBinError(12,1.283828);
   plot__546->SetBinError(13,0.9943247);
   plot__546->SetBinError(14,0.7172299);
   plot__546->SetBinError(15,0.3682123);
   plot__546->SetBinError(16,0.2714941);
   plot__546->SetBinError(17,0.09664413);
   plot__546->SetBinError(18,0.08161728);
   plot__546->SetBinError(19,0.0511759);
   plot__546->SetBinError(20,0.02626171);
   plot__546->SetBinError(21,0.009977923);
   plot__546->SetBinError(22,0.007518498);
   plot__546->SetEntries(4498);
   plot__546->SetFillColor(5);
   plot__546->SetLineColor(5);
   plot__546->SetLineWidth(3);
   plot__546->GetXaxis()->SetTitle("#alpha_{T}");
   plot__546->GetXaxis()->SetRange(1,23);
   plot__546->GetXaxis()->SetLabelFont(42);
   plot__546->GetXaxis()->SetLabelSize(0.035);
   plot__546->GetXaxis()->SetTitleSize(0.035);
   plot__546->GetXaxis()->SetTitleFont(42);
   plot__546->GetYaxis()->SetTitle("Events/0.025");
   plot__546->GetYaxis()->SetLabelFont(42);
   plot__546->GetYaxis()->SetLabelSize(0.035);
   plot__546->GetYaxis()->SetTitleSize(0.035);
   plot__546->GetYaxis()->SetTitleFont(42);
   plot__546->GetZaxis()->SetLabelFont(42);
   plot__546->GetZaxis()->SetLabelSize(0.035);
   plot__546->GetZaxis()->SetTitleSize(0.035);
   plot__546->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis582[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__547 = new TH1D("plot__547","",24, xAxis582);
   plot__547->SetBinContent(10,410.789);
   plot__547->SetBinContent(11,265.8755);
   plot__547->SetBinContent(12,121.2761);
   plot__547->SetBinContent(13,46.70781);
   plot__547->SetBinContent(14,24.86194);
   plot__547->SetBinContent(15,11.63755);
   plot__547->SetBinContent(16,4.549215);
   plot__547->SetBinContent(17,1.58619);
   plot__547->SetBinContent(18,0.3843647);
   plot__547->SetBinContent(19,0.1068961);
   plot__547->SetBinError(10,9.255263);
   plot__547->SetBinError(11,7.329386);
   plot__547->SetBinError(12,4.832358);
   plot__547->SetBinError(13,2.980836);
   plot__547->SetBinError(14,2.207391);
   plot__547->SetBinError(15,1.073615);
   plot__547->SetBinError(16,0.6759949);
   plot__547->SetBinError(17,0.2529839);
   plot__547->SetBinError(18,0.132957);
   plot__547->SetBinError(19,0.0660378);
   plot__547->SetEntries(5028);
   plot__547->SetFillColor(2);
   plot__547->SetLineColor(2);
   plot__547->SetLineWidth(3);
   plot__547->GetXaxis()->SetTitle("#alpha_{T}");
   plot__547->GetXaxis()->SetRange(1,23);
   plot__547->GetXaxis()->SetLabelFont(42);
   plot__547->GetXaxis()->SetLabelSize(0.035);
   plot__547->GetXaxis()->SetTitleSize(0.035);
   plot__547->GetXaxis()->SetTitleFont(42);
   plot__547->GetYaxis()->SetTitle("Events/0.025");
   plot__547->GetYaxis()->SetLabelFont(42);
   plot__547->GetYaxis()->SetLabelSize(0.035);
   plot__547->GetYaxis()->SetTitleSize(0.035);
   plot__547->GetYaxis()->SetTitleFont(42);
   plot__547->GetZaxis()->SetLabelFont(42);
   plot__547->GetZaxis()->SetLabelSize(0.035);
   plot__547->GetZaxis()->SetTitleSize(0.035);
   plot__547->GetZaxis()->SetTitleFont(42);
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
   Double_t xAxis583[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__548 = new TH1D("plot__548","",24, xAxis583);
   plot__548->SetBinContent(10,446);
   plot__548->SetBinContent(11,314);
   plot__548->SetBinContent(12,149);
   plot__548->SetBinContent(13,65);
   plot__548->SetBinContent(14,41);
   plot__548->SetBinContent(15,15.5);
   plot__548->SetBinContent(16,5.5);
   plot__548->SetBinContent(17,3.2);
   plot__548->SetBinContent(18,1.2);
   plot__548->SetBinContent(19,0.2);
   plot__548->SetBinContent(20,0.2);
   plot__548->SetBinError(10,21.11871);
   plot__548->SetBinError(11,17.72005);
   plot__548->SetBinError(12,12.20656);
   plot__548->SetBinError(13,8.062258);
   plot__548->SetBinError(14,6.403124);
   plot__548->SetBinError(15,2.783882);
   plot__548->SetBinError(16,2.49);
   plot__548->SetBinError(17,2.14);
   plot__548->SetBinError(18,1);
   plot__548->SetMinimum(0.11);
   plot__548->SetMaximum(5413.543);
   plot__548->SetEntries(1106);

   ci = TColor::GetColor("#000099");
   plot__548->SetLineColor(ci);
   plot__548->SetLineWidth(2);
   plot__548->SetMarkerStyle(20);
   plot__548->SetMarkerSize(1.5);
   plot__548->GetXaxis()->SetTitle("#alpha_{T}");
   plot__548->GetXaxis()->SetRange(1,23);
   plot__548->GetXaxis()->SetLabelFont(42);
   plot__548->GetXaxis()->SetLabelSize(0.035);
   plot__548->GetXaxis()->SetTitleSize(0.035);
   plot__548->GetXaxis()->SetTitleFont(42);
   plot__548->GetYaxis()->SetTitle("Events");
   plot__548->GetYaxis()->SetLabelFont(42);
   plot__548->GetYaxis()->SetLabelSize(0.035);
   plot__548->GetYaxis()->SetTitleSize(0.035);
   plot__548->GetYaxis()->SetTitleOffset(1.3);
   plot__548->GetYaxis()->SetTitleFont(42);
   plot__548->GetZaxis()->SetLabelFont(42);
   plot__548->GetZaxis()->SetLabelSize(0.035);
   plot__548->GetZaxis()->SetTitleSize(0.035);
   plot__548->GetZaxis()->SetTitleFont(42);
   plot__548->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_200_2    Jet Multiplicity>3");
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
   canvasbtag_morethanzero_200_275/AlphaT_3->cd();
  
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
   Double_t xAxis584[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__549 = new TH1D("plot__549","",24, xAxis584);
   plot__549->SetBinContent(10,0.8238597);
   plot__549->SetBinContent(11,0.887788);
   plot__549->SetBinContent(12,0.8739149);
   plot__549->SetBinContent(13,0.8803374);
   plot__549->SetBinContent(14,1.031858);
   plot__549->SetBinContent(15,0.7794136);
   plot__549->SetBinContent(16,0.6409862);
   plot__549->SetBinContent(17,1.041861);
   plot__549->SetBinContent(18,1.01917);
   plot__549->SetBinContent(19,0.5659219);
   plot__549->SetBinContent(20,2.770193);
   plot__549->SetBinError(10,0.03901089);
   plot__549->SetBinError(11,0.05010077);
   plot__549->SetBinError(12,0.0715939);
   plot__549->SetBinError(13,0.1091924);
   plot__549->SetBinError(14,0.1611492);
   plot__549->SetBinError(15,0.1399868);
   plot__549->SetBinError(16,0.2901919);
   plot__549->SetBinError(17,0.6967443);
   plot__549->SetBinError(18,0.8493087);
   plot__549->SetMinimum(0);
   plot__549->SetMaximum(2);
   plot__549->SetEntries(33.442);

   ci = TColor::GetColor("#000099");
   plot__549->SetLineColor(ci);
   plot__549->SetLineWidth(2);
   plot__549->SetMarkerStyle(20);
   plot__549->SetMarkerSize(1.5);
   plot__549->GetXaxis()->SetRange(1,23);
   plot__549->GetXaxis()->SetLabelFont(42);
   plot__549->GetXaxis()->SetLabelSize(0.12);
   plot__549->GetXaxis()->SetTitleSize(0.035);
   plot__549->GetXaxis()->SetTitleFont(42);
   plot__549->GetYaxis()->SetTitle("Data/MC");
   plot__549->GetYaxis()->SetNdivisions(505);
   plot__549->GetYaxis()->SetLabelFont(42);
   plot__549->GetYaxis()->SetLabelSize(0.11);
   plot__549->GetYaxis()->SetTitleSize(0.1);
   plot__549->GetYaxis()->SetTitleOffset(0.5);
   plot__549->GetYaxis()->SetTitleFont(42);
   plot__549->GetZaxis()->SetLabelFont(42);
   plot__549->GetZaxis()->SetLabelSize(0.035);
   plot__549->GetZaxis()->SetTitleSize(0.035);
   plot__549->GetZaxis()->SetTitleFont(42);
   plot__549->Draw("p");
   
   Double_t Graph_from_plot_fx1140[24] = {
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
   Double_t Graph_from_plot_fy1140[24] = {
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
   Double_t Graph_from_plot_fex1140[24] = {
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
   Double_t Graph_from_plot_fey1140[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.01904173,
   0.02342025,
   0.0325452,
   0.0497487,
   0.06659647,
   0.06914512,
   0.09769999,
   0.1061123,
   0.1620296,
   0.2551355,
   0.5587323,
   0.5762782,
   0.6622218,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1140,Graph_from_plot_fy1140,Graph_from_plot_fex1140,Graph_from_plot_fey1140);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1140 = new TH1F("Graph_Graph_from_plot1140","",100,0,11);
   Graph_Graph_from_plot1140->SetMinimum(0);
   Graph_Graph_from_plot1140->SetMaximum(1.828444);
   Graph_Graph_from_plot1140->SetDirectory(0);
   Graph_Graph_from_plot1140->SetStats(0);
   Graph_Graph_from_plot1140->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1140->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1140->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1140->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1140->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1140->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1140->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1140->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1140->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1140->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1140);
   
   gre->Draw("2");
   Double_t xAxis585[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__550 = new TH1D("plot__550","",24, xAxis585);
   plot__550->SetBinContent(10,0.8238597);
   plot__550->SetBinContent(11,0.887788);
   plot__550->SetBinContent(12,0.8739149);
   plot__550->SetBinContent(13,0.8803374);
   plot__550->SetBinContent(14,1.031858);
   plot__550->SetBinContent(15,0.7794136);
   plot__550->SetBinContent(16,0.6409862);
   plot__550->SetBinContent(17,1.041861);
   plot__550->SetBinContent(18,1.01917);
   plot__550->SetBinContent(19,0.5659219);
   plot__550->SetBinContent(20,2.770193);
   plot__550->SetBinError(10,0.03901089);
   plot__550->SetBinError(11,0.05010077);
   plot__550->SetBinError(12,0.0715939);
   plot__550->SetBinError(13,0.1091924);
   plot__550->SetBinError(14,0.1611492);
   plot__550->SetBinError(15,0.1399868);
   plot__550->SetBinError(16,0.2901919);
   plot__550->SetBinError(17,0.6967443);
   plot__550->SetBinError(18,0.8493087);
   plot__550->SetMinimum(0);
   plot__550->SetMaximum(2);
   plot__550->SetEntries(33.442);

   ci = TColor::GetColor("#000099");
   plot__550->SetLineColor(ci);
   plot__550->SetLineWidth(2);
   plot__550->SetMarkerStyle(20);
   plot__550->SetMarkerSize(1.5);
   plot__550->GetXaxis()->SetRange(1,23);
   plot__550->GetXaxis()->SetLabelFont(42);
   plot__550->GetXaxis()->SetLabelSize(0.12);
   plot__550->GetXaxis()->SetTitleSize(0.035);
   plot__550->GetXaxis()->SetTitleFont(42);
   plot__550->GetYaxis()->SetTitle("Data/MC");
   plot__550->GetYaxis()->SetNdivisions(505);
   plot__550->GetYaxis()->SetLabelFont(42);
   plot__550->GetYaxis()->SetLabelSize(0.11);
   plot__550->GetYaxis()->SetTitleSize(0.1);
   plot__550->GetYaxis()->SetTitleOffset(0.5);
   plot__550->GetYaxis()->SetTitleFont(42);
   plot__550->GetZaxis()->SetLabelFont(42);
   plot__550->GetZaxis()->SetLabelSize(0.035);
   plot__550->GetZaxis()->SetTitleSize(0.035);
   plot__550->GetZaxis()->SetTitleFont(42);
   plot__550->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_200_275/AlphaT_3->cd();
   canvasbtag_morethanzero_200_275/AlphaT_3->Modified();
   canvasbtag_morethanzero_200_275/AlphaT_3->cd();
   canvasbtag_morethanzero_200_275/AlphaT_3->SetSelected(canvasbtag_morethanzero_200_275/AlphaT_3);
}
