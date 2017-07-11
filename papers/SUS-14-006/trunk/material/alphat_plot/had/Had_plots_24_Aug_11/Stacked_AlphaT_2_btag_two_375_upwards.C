void Stacked_AlphaT_2_btag_two_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_two_375_475/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:08 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_two_375_475/AlphaT_2 = new TCanvas("canvasbtag_two_375_475/AlphaT_2", "cannameAlphaT_2",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_two_375_475/AlphaT_2->SetHighLightColor(2);
   canvasbtag_two_375_475/AlphaT_2->Range(0,0,1,1);
   canvasbtag_two_375_475/AlphaT_2->SetFillColor(0);
   canvasbtag_two_375_475/AlphaT_2->SetBorderMode(0);
   canvasbtag_two_375_475/AlphaT_2->SetBorderSize(2);
   canvasbtag_two_375_475/AlphaT_2->SetTickx(1);
   canvasbtag_two_375_475/AlphaT_2->SetTicky(1);
   canvasbtag_two_375_475/AlphaT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.412075,3.4875,3.122601);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis937[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__881 = new TH1D("plot__881","",24, xAxis937);
   plot__881->SetBinContent(10,31);
   plot__881->SetBinContent(11,18);
   plot__881->SetBinContent(12,11);
   plot__881->SetBinContent(13,3);
   plot__881->SetBinContent(14,2);
   plot__881->SetBinContent(15,1);
   plot__881->SetBinContent(16,0.5);
   plot__881->SetBinContent(17,1);
   plot__881->SetBinContent(18,0.2);
   plot__881->SetBinContent(19,0.4);
   plot__881->SetBinContent(20,0.2);
   plot__881->SetBinContent(21,0.1);
   plot__881->SetBinContent(23,1);
   plot__881->SetBinContent(24,0.01449275);
   plot__881->SetBinError(10,5.567764);
   plot__881->SetBinError(11,4.242641);
   plot__881->SetBinError(12,3.316625);
   plot__881->SetBinError(13,2);
   plot__881->SetBinError(14,1);
   plot__881->SetBinError(15,1);
   plot__881->SetBinError(17,1);
   plot__881->SetBinError(24,0.01024792);
   plot__881->SetMinimum(0.11);
   plot__881->SetMaximum(466.8024);
   plot__881->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__881->SetLineColor(ci);
   plot__881->SetLineWidth(2);
   plot__881->SetMarkerStyle(20);
   plot__881->SetMarkerSize(1.5);
   plot__881->GetXaxis()->SetTitle("#alpha_{T}");
   plot__881->GetXaxis()->SetRange(1,23);
   plot__881->GetXaxis()->SetLabelFont(42);
   plot__881->GetXaxis()->SetLabelSize(0.035);
   plot__881->GetXaxis()->SetTitleSize(0.035);
   plot__881->GetXaxis()->SetTitleFont(42);
   plot__881->GetYaxis()->SetTitle("Events");
   plot__881->GetYaxis()->SetLabelFont(42);
   plot__881->GetYaxis()->SetLabelSize(0.035);
   plot__881->GetYaxis()->SetTitleSize(0.035);
   plot__881->GetYaxis()->SetTitleOffset(1.3);
   plot__881->GetYaxis()->SetTitleFont(42);
   plot__881->GetZaxis()->SetLabelFont(42);
   plot__881->GetZaxis()->SetLabelSize(0.035);
   plot__881->GetZaxis()->SetTitleSize(0.035);
   plot__881->GetZaxis()->SetTitleFont(42);
   plot__881->Draw("");
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis938[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_57 = new TH1F("_stack_57","",24, xAxis938);
   _stack_57->SetMinimum(0.0186721);
   _stack_57->SetMaximum(74.68839);
   _stack_57->SetDirectory(0);
   _stack_57->SetStats(0);
   _stack_57->GetXaxis()->SetLabelFont(42);
   _stack_57->GetXaxis()->SetLabelOffset(0.007);
   _stack_57->GetXaxis()->SetLabelSize(0.05);
   _stack_57->GetXaxis()->SetTitleSize(0.05);
   _stack_57->GetYaxis()->SetLabelFont(42);
   _stack_57->GetYaxis()->SetLabelOffset(0.007);
   _stack_57->GetYaxis()->SetLabelSize(0.05);
   _stack_57->GetZaxis()->SetLabelFont(42);
   _stack_57->GetZaxis()->SetLabelOffset(0.007);
   _stack_57->GetZaxis()->SetLabelSize(0.05);
   ->SetHistogram(_stack_57);
   
   Double_t xAxis939[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__882 = new TH1D("plot__882","",24, xAxis939);
   plot__882->SetEntries(25);
   plot__882->SetFillColor(7);
   plot__882->SetLineColor(7);
   plot__882->SetLineStyle(10);
   plot__882->SetLineWidth(3);
   plot__882->GetXaxis()->SetTitle("#alpha_{T}");
   plot__882->GetXaxis()->SetRange(1,23);
   plot__882->GetXaxis()->SetLabelFont(42);
   plot__882->GetXaxis()->SetLabelSize(0.035);
   plot__882->GetXaxis()->SetTitleSize(0.035);
   plot__882->GetXaxis()->SetTitleFont(42);
   plot__882->GetYaxis()->SetTitle("Events/0.025");
   plot__882->GetYaxis()->SetLabelFont(42);
   plot__882->GetYaxis()->SetLabelSize(0.035);
   plot__882->GetYaxis()->SetTitleSize(0.035);
   plot__882->GetYaxis()->SetTitleFont(42);
   plot__882->GetZaxis()->SetLabelFont(42);
   plot__882->GetZaxis()->SetLabelSize(0.035);
   plot__882->GetZaxis()->SetTitleSize(0.035);
   plot__882->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis940[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__883 = new TH1D("plot__883","",24, xAxis940);
   plot__883->SetBinContent(18,0.01539052);
   plot__883->SetBinError(18,0.01539052);
   plot__883->SetEntries(26);
   plot__883->SetFillColor(6);
   plot__883->SetLineColor(6);
   plot__883->SetLineWidth(3);
   plot__883->GetXaxis()->SetTitle("#alpha_{T}");
   plot__883->GetXaxis()->SetRange(1,23);
   plot__883->GetXaxis()->SetLabelFont(42);
   plot__883->GetXaxis()->SetLabelSize(0.035);
   plot__883->GetXaxis()->SetTitleSize(0.035);
   plot__883->GetXaxis()->SetTitleFont(42);
   plot__883->GetYaxis()->SetTitle("Events/0.025");
   plot__883->GetYaxis()->SetLabelFont(42);
   plot__883->GetYaxis()->SetLabelSize(0.035);
   plot__883->GetYaxis()->SetTitleSize(0.035);
   plot__883->GetYaxis()->SetTitleFont(42);
   plot__883->GetZaxis()->SetLabelFont(42);
   plot__883->GetZaxis()->SetLabelSize(0.035);
   plot__883->GetZaxis()->SetTitleSize(0.035);
   plot__883->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis941[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__884 = new TH1D("plot__884","",24, xAxis941);
   plot__884->SetBinContent(10,0.1756145);
   plot__884->SetBinContent(11,0.1110084);
   plot__884->SetBinContent(12,0.08126167);
   plot__884->SetBinContent(13,0.2368705);
   plot__884->SetBinContent(14,0.1132523);
   plot__884->SetBinContent(15,0.05784776);
   plot__884->SetBinContent(16,0.04351769);
   plot__884->SetBinContent(17,0.03718138);
   plot__884->SetBinContent(18,0.01161723);
   plot__884->SetBinContent(19,0.01289156);
   plot__884->SetBinContent(20,0.01001743);
   plot__884->SetBinContent(21,0.01009333);
   plot__884->SetBinContent(22,0.001681306);
   plot__884->SetBinError(10,0.05859248);
   plot__884->SetBinError(11,0.04796745);
   plot__884->SetBinError(12,0.03866076);
   plot__884->SetBinError(13,0.1337559);
   plot__884->SetBinError(14,0.04733997);
   plot__884->SetBinError(15,0.02522151);
   plot__884->SetBinError(16,0.0217707);
   plot__884->SetBinError(17,0.01231222);
   plot__884->SetBinError(18,0.006802844);
   plot__884->SetBinError(19,0.006733396);
   plot__884->SetBinError(20,0.007385638);
   plot__884->SetBinError(21,0.005234385);
   plot__884->SetBinError(22,0.001681306);
   plot__884->SetEntries(94);
   plot__884->SetFillColor(44);
   plot__884->SetLineColor(44);
   plot__884->SetLineWidth(3);
   plot__884->GetXaxis()->SetTitle("#alpha_{T}");
   plot__884->GetXaxis()->SetRange(1,23);
   plot__884->GetXaxis()->SetLabelFont(42);
   plot__884->GetXaxis()->SetLabelSize(0.035);
   plot__884->GetXaxis()->SetTitleSize(0.035);
   plot__884->GetXaxis()->SetTitleFont(42);
   plot__884->GetYaxis()->SetTitle("Events/0.025");
   plot__884->GetYaxis()->SetLabelFont(42);
   plot__884->GetYaxis()->SetLabelSize(0.035);
   plot__884->GetYaxis()->SetTitleSize(0.035);
   plot__884->GetYaxis()->SetTitleFont(42);
   plot__884->GetZaxis()->SetLabelFont(42);
   plot__884->GetZaxis()->SetLabelSize(0.035);
   plot__884->GetZaxis()->SetTitleSize(0.035);
   plot__884->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis942[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__885 = new TH1D("plot__885","",24, xAxis942);
   plot__885->SetBinContent(10,1.465661);
   plot__885->SetBinContent(11,0.9131893);
   plot__885->SetBinContent(12,0.4596367);
   plot__885->SetBinContent(13,0.4983307);
   plot__885->SetBinContent(17,0.1016493);
   plot__885->SetBinError(10,0.7265669);
   plot__885->SetBinError(11,0.5497036);
   plot__885->SetBinError(12,0.4596367);
   plot__885->SetBinError(13,0.4983307);
   plot__885->SetBinError(17,0.1016493);
   plot__885->SetEntries(37);
   plot__885->SetFillColor(40);
   plot__885->SetLineColor(40);
   plot__885->SetLineWidth(3);
   plot__885->GetXaxis()->SetTitle("#alpha_{T}");
   plot__885->GetXaxis()->SetRange(1,23);
   plot__885->GetXaxis()->SetLabelFont(42);
   plot__885->GetXaxis()->SetLabelSize(0.035);
   plot__885->GetXaxis()->SetTitleSize(0.035);
   plot__885->GetXaxis()->SetTitleFont(42);
   plot__885->GetYaxis()->SetTitle("Events/0.025");
   plot__885->GetYaxis()->SetLabelFont(42);
   plot__885->GetYaxis()->SetLabelSize(0.035);
   plot__885->GetYaxis()->SetTitleSize(0.035);
   plot__885->GetYaxis()->SetTitleFont(42);
   plot__885->GetZaxis()->SetLabelFont(42);
   plot__885->GetZaxis()->SetLabelSize(0.035);
   plot__885->GetZaxis()->SetTitleSize(0.035);
   plot__885->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis943[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__886 = new TH1D("plot__886","",24, xAxis943);
   plot__886->SetBinContent(10,3.033895);
   plot__886->SetBinContent(11,1.129344);
   plot__886->SetBinContent(12,0.9336487);
   plot__886->SetBinContent(13,0.435388);
   plot__886->SetBinContent(14,0.1588226);
   plot__886->SetBinContent(15,0.3170216);
   plot__886->SetBinContent(16,0.2422917);
   plot__886->SetBinContent(17,0.07407269);
   plot__886->SetBinContent(18,0.0003002666);
   plot__886->SetBinContent(23,0.05775371);
   plot__886->SetBinContent(24,0.0008370103);
   plot__886->SetBinError(10,0.726293);
   plot__886->SetBinError(11,0.3615859);
   plot__886->SetBinError(12,0.3399232);
   plot__886->SetBinError(13,0.2035223);
   plot__886->SetBinError(14,0.1588226);
   plot__886->SetBinError(15,0.1437172);
   plot__886->SetBinError(16,0.1282419);
   plot__886->SetBinError(17,0.0433486);
   plot__886->SetBinError(18,0.0003002666);
   plot__886->SetBinError(23,0.1699319);
   plot__886->SetBinError(24,0.0008370103);
   plot__886->SetEntries(89);
   plot__886->SetFillColor(4);
   plot__886->SetLineColor(4);
   plot__886->SetLineWidth(3);
   plot__886->GetXaxis()->SetTitle("#alpha_{T}");
   plot__886->GetXaxis()->SetRange(1,23);
   plot__886->GetXaxis()->SetLabelFont(42);
   plot__886->GetXaxis()->SetLabelSize(0.035);
   plot__886->GetXaxis()->SetTitleSize(0.035);
   plot__886->GetXaxis()->SetTitleFont(42);
   plot__886->GetYaxis()->SetTitle("Events/0.025");
   plot__886->GetYaxis()->SetLabelFont(42);
   plot__886->GetYaxis()->SetLabelSize(0.035);
   plot__886->GetYaxis()->SetTitleSize(0.035);
   plot__886->GetYaxis()->SetTitleFont(42);
   plot__886->GetZaxis()->SetLabelFont(42);
   plot__886->GetZaxis()->SetLabelSize(0.035);
   plot__886->GetZaxis()->SetTitleSize(0.035);
   plot__886->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis944[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__887 = new TH1D("plot__887","",24, xAxis944);
   plot__887->SetBinContent(10,7.675544);
   plot__887->SetBinContent(11,3.820424);
   plot__887->SetBinContent(12,1.864468);
   plot__887->SetBinContent(13,1.089361);
   plot__887->SetBinContent(14,0.999323);
   plot__887->SetBinContent(15,0.6654477);
   plot__887->SetBinContent(16,0.397498);
   plot__887->SetBinContent(17,0.2729743);
   plot__887->SetBinContent(18,0.1520008);
   plot__887->SetBinContent(19,0.07192497);
   plot__887->SetBinContent(20,0.08898046);
   plot__887->SetBinContent(21,0.03001038);
   plot__887->SetBinContent(22,0.02043996);
   plot__887->SetBinContent(23,0.06946895);
   plot__887->SetBinContent(24,0.0009701795);
   plot__887->SetBinError(10,0.5164263);
   plot__887->SetBinError(11,0.3792352);
   plot__887->SetBinError(12,0.2694208);
   plot__887->SetBinError(13,0.1809977);
   plot__887->SetBinError(14,0.2052328);
   plot__887->SetBinError(15,0.1171389);
   plot__887->SetBinError(16,0.1187223);
   plot__887->SetBinError(17,0.04033356);
   plot__887->SetBinError(18,0.02717874);
   plot__887->SetBinError(19,0.01890348);
   plot__887->SetBinError(20,0.0242686);
   plot__887->SetBinError(21,0.01069878);
   plot__887->SetBinError(22,0.01101938);
   plot__887->SetBinError(23,0.1863719);
   plot__887->SetBinError(24,0.0003735284);
   plot__887->SetEntries(888);
   plot__887->SetFillColor(5);
   plot__887->SetLineColor(5);
   plot__887->SetLineWidth(3);
   plot__887->GetXaxis()->SetTitle("#alpha_{T}");
   plot__887->GetXaxis()->SetRange(1,23);
   plot__887->GetXaxis()->SetLabelFont(42);
   plot__887->GetXaxis()->SetLabelSize(0.035);
   plot__887->GetXaxis()->SetTitleSize(0.035);
   plot__887->GetXaxis()->SetTitleFont(42);
   plot__887->GetYaxis()->SetTitle("Events/0.025");
   plot__887->GetYaxis()->SetLabelFont(42);
   plot__887->GetYaxis()->SetLabelSize(0.035);
   plot__887->GetYaxis()->SetTitleSize(0.035);
   plot__887->GetYaxis()->SetTitleFont(42);
   plot__887->GetZaxis()->SetLabelFont(42);
   plot__887->GetZaxis()->SetLabelSize(0.035);
   plot__887->GetZaxis()->SetTitleSize(0.035);
   plot__887->GetZaxis()->SetTitleFont(42);
   ->Add(plot,"");
   Double_t xAxis945[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__888 = new TH1D("plot__888","",24, xAxis945);
   plot__888->SetBinContent(10,34.32953);
   plot__888->SetBinContent(11,11.07748);
   plot__888->SetBinContent(12,6.186603);
   plot__888->SetBinContent(13,2.199483);
   plot__888->SetBinContent(14,0.716542);
   plot__888->SetBinContent(15,0.4096696);
   plot__888->SetBinContent(16,0.2160721);
   plot__888->SetBinContent(17,0.207317);
   plot__888->SetBinContent(18,0.1423206);
   plot__888->SetBinContent(19,0.09960196);
   plot__888->SetBinContent(20,0.03755476);
   plot__888->SetBinContent(21,0.01801305);
   plot__888->SetBinContent(23,0.1095435);
   plot__888->SetBinContent(24,0.001587587);
   plot__888->SetBinError(10,2.624894);
   plot__888->SetBinError(11,1.503379);
   plot__888->SetBinError(12,1.120722);
   plot__888->SetBinError(13,0.6589255);
   plot__888->SetBinError(14,0.3424399);
   plot__888->SetBinError(15,0.2059381);
   plot__888->SetBinError(16,0.1529831);
   plot__888->SetBinError(17,0.08856684);
   plot__888->SetBinError(18,0.0734568);
   plot__888->SetBinError(19,0.05962105);
   plot__888->SetBinError(20,0.03755476);
   plot__888->SetBinError(21,0.01801305);
   plot__888->SetBinError(23,0.2340336);
   plot__888->SetBinError(24,0.001587587);
   plot__888->SetEntries(351);
   plot__888->SetFillColor(2);
   plot__888->SetLineColor(2);
   plot__888->SetLineWidth(3);
   plot__888->GetXaxis()->SetTitle("#alpha_{T}");
   plot__888->GetXaxis()->SetRange(1,23);
   plot__888->GetXaxis()->SetLabelFont(42);
   plot__888->GetXaxis()->SetLabelSize(0.035);
   plot__888->GetXaxis()->SetTitleSize(0.035);
   plot__888->GetXaxis()->SetTitleFont(42);
   plot__888->GetYaxis()->SetTitle("Events/0.025");
   plot__888->GetYaxis()->SetLabelFont(42);
   plot__888->GetYaxis()->SetLabelSize(0.035);
   plot__888->GetYaxis()->SetTitleSize(0.035);
   plot__888->GetYaxis()->SetTitleFont(42);
   plot__888->GetZaxis()->SetLabelFont(42);
   plot__888->GetZaxis()->SetLabelSize(0.035);
   plot__888->GetZaxis()->SetTitleSize(0.035);
   plot__888->GetZaxis()->SetTitleFont(42);
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
   TLegendEntry *entry=leg->AddEntry("AlphaT_2","W + Jets","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","t\bar{t}","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","Z\rightarrow \nu\bar{\nu}","L");
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","DY + Jets","L");
   entry->SetLineColor(6);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("AlphaT_2","QCD","L");
   entry->SetLineColor(7);
   entry->SetLineStyle(10);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   Double_t xAxis946[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__889 = new TH1D("plot__889","",24, xAxis946);
   plot__889->SetBinContent(10,31);
   plot__889->SetBinContent(11,18);
   plot__889->SetBinContent(12,11);
   plot__889->SetBinContent(13,3);
   plot__889->SetBinContent(14,2);
   plot__889->SetBinContent(15,1);
   plot__889->SetBinContent(16,0.5);
   plot__889->SetBinContent(17,1);
   plot__889->SetBinContent(18,0.2);
   plot__889->SetBinContent(19,0.4);
   plot__889->SetBinContent(20,0.2);
   plot__889->SetBinContent(21,0.1);
   plot__889->SetBinContent(23,1);
   plot__889->SetBinContent(24,0.01449275);
   plot__889->SetBinError(10,5.567764);
   plot__889->SetBinError(11,4.242641);
   plot__889->SetBinError(12,3.316625);
   plot__889->SetBinError(13,2);
   plot__889->SetBinError(14,1);
   plot__889->SetBinError(15,1);
   plot__889->SetBinError(17,1);
   plot__889->SetBinError(24,0.01024792);
   plot__889->SetMinimum(0.11);
   plot__889->SetMaximum(466.8024);
   plot__889->SetEntries(105);

   ci = TColor::GetColor("#000099");
   plot__889->SetLineColor(ci);
   plot__889->SetLineWidth(2);
   plot__889->SetMarkerStyle(20);
   plot__889->SetMarkerSize(1.5);
   plot__889->GetXaxis()->SetTitle("#alpha_{T}");
   plot__889->GetXaxis()->SetRange(1,23);
   plot__889->GetXaxis()->SetLabelFont(42);
   plot__889->GetXaxis()->SetLabelSize(0.035);
   plot__889->GetXaxis()->SetTitleSize(0.035);
   plot__889->GetXaxis()->SetTitleFont(42);
   plot__889->GetYaxis()->SetTitle("Events");
   plot__889->GetYaxis()->SetLabelFont(42);
   plot__889->GetYaxis()->SetLabelSize(0.035);
   plot__889->GetYaxis()->SetTitleSize(0.035);
   plot__889->GetYaxis()->SetTitleOffset(1.3);
   plot__889->GetYaxis()->SetTitleFont(42);
   plot__889->GetZaxis()->SetLabelFont(42);
   plot__889->GetZaxis()->SetLabelSize(0.035);
   plot__889->GetZaxis()->SetTitleSize(0.035);
   plot__889->GetZaxis()->SetTitleFont(42);
   plot__889->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"btag_two_375_    Jet Multiplicity=2,3");
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
   canvasbtag_two_375_475/AlphaT_2->cd();
  
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
   Double_t xAxis947[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__890 = new TH1D("plot__890","",24, xAxis947);
   plot__890->SetBinContent(10,0.6640925);
   plot__890->SetBinContent(11,1.055629);
   plot__890->SetBinContent(12,1.154781);
   plot__890->SetBinContent(13,0.6727311);
   plot__890->SetBinContent(14,1.006067);
   plot__890->SetBinContent(15,0.6896615);
   plot__890->SetBinContent(16,0.5559388);
   plot__890->SetBinContent(17,1.442596);
   plot__890->SetBinContent(18,0.6218337);
   plot__890->SetBinContent(19,2.16898);
   plot__890->SetBinContent(20,1.464636);
   plot__890->SetBinContent(21,1.720674);
   plot__890->SetBinContent(23,4.223577);
   plot__890->SetBinContent(24,4.269134);
   plot__890->SetBinError(10,0.1192745);
   plot__890->SetBinError(11,0.2488142);
   plot__890->SetBinError(12,0.3481795);
   plot__890->SetBinError(13,0.4484874);
   plot__890->SetBinError(14,0.5030333);
   plot__890->SetBinError(15,0.6896615);
   plot__890->SetBinError(17,1.442596);
   plot__890->SetBinError(24,3.018733);
   plot__890->SetMinimum(0);
   plot__890->SetMaximum(2);
   plot__890->SetEntries(7.186058);

   ci = TColor::GetColor("#000099");
   plot__890->SetLineColor(ci);
   plot__890->SetLineWidth(2);
   plot__890->SetMarkerStyle(20);
   plot__890->SetMarkerSize(1.5);
   plot__890->GetXaxis()->SetRange(1,23);
   plot__890->GetXaxis()->SetLabelFont(42);
   plot__890->GetXaxis()->SetLabelSize(0.12);
   plot__890->GetXaxis()->SetTitleSize(0.035);
   plot__890->GetXaxis()->SetTitleFont(42);
   plot__890->GetYaxis()->SetTitle("Data/MC");
   plot__890->GetYaxis()->SetNdivisions(505);
   plot__890->GetYaxis()->SetLabelFont(42);
   plot__890->GetYaxis()->SetLabelSize(0.11);
   plot__890->GetYaxis()->SetTitleSize(0.1);
   plot__890->GetYaxis()->SetTitleOffset(0.5);
   plot__890->GetYaxis()->SetTitleFont(42);
   plot__890->GetZaxis()->SetLabelFont(42);
   plot__890->GetZaxis()->SetLabelSize(0.035);
   plot__890->GetZaxis()->SetTitleSize(0.035);
   plot__890->GetZaxis()->SetTitleFont(42);
   plot__890->Draw("p");
   
   Double_t Graph_from_plot_fx1228[24] = {
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
   Double_t Graph_from_plot_fy1228[24] = {
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
   Double_t Graph_from_plot_fex1228[24] = {
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
   Double_t Graph_from_plot_fey1228[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.06140257,
   0.09881797,
   0.1351316,
   0.1973585,
   0.2174427,
   0.191898,
   0.2593769,
   0.2131635,
   0.2490796,
   0.3411126,
   0.3318842,
   0.371575,
   0.5038999,
   1.453199,
   0.5399996};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1228,Graph_from_plot_fy1228,Graph_from_plot_fex1228,Graph_from_plot_fey1228);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1228 = new TH1F("Graph_Graph_from_plot1228","",100,0,11);
   Graph_Graph_from_plot1228->SetMinimum(-0.9794327);
   Graph_Graph_from_plot1228->SetMaximum(5.335366);
   Graph_Graph_from_plot1228->SetDirectory(0);
   Graph_Graph_from_plot1228->SetStats(0);
   Graph_Graph_from_plot1228->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1228->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1228->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1228->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1228->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1228->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1228->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1228->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1228->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1228->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1228);
   
   gre->Draw("2");
   Double_t xAxis948[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__891 = new TH1D("plot__891","",24, xAxis948);
   plot__891->SetBinContent(10,0.6640925);
   plot__891->SetBinContent(11,1.055629);
   plot__891->SetBinContent(12,1.154781);
   plot__891->SetBinContent(13,0.6727311);
   plot__891->SetBinContent(14,1.006067);
   plot__891->SetBinContent(15,0.6896615);
   plot__891->SetBinContent(16,0.5559388);
   plot__891->SetBinContent(17,1.442596);
   plot__891->SetBinContent(18,0.6218337);
   plot__891->SetBinContent(19,2.16898);
   plot__891->SetBinContent(20,1.464636);
   plot__891->SetBinContent(21,1.720674);
   plot__891->SetBinContent(23,4.223577);
   plot__891->SetBinContent(24,4.269134);
   plot__891->SetBinError(10,0.1192745);
   plot__891->SetBinError(11,0.2488142);
   plot__891->SetBinError(12,0.3481795);
   plot__891->SetBinError(13,0.4484874);
   plot__891->SetBinError(14,0.5030333);
   plot__891->SetBinError(15,0.6896615);
   plot__891->SetBinError(17,1.442596);
   plot__891->SetBinError(24,3.018733);
   plot__891->SetMinimum(0);
   plot__891->SetMaximum(2);
   plot__891->SetEntries(7.186058);

   ci = TColor::GetColor("#000099");
   plot__891->SetLineColor(ci);
   plot__891->SetLineWidth(2);
   plot__891->SetMarkerStyle(20);
   plot__891->SetMarkerSize(1.5);
   plot__891->GetXaxis()->SetRange(1,23);
   plot__891->GetXaxis()->SetLabelFont(42);
   plot__891->GetXaxis()->SetLabelSize(0.12);
   plot__891->GetXaxis()->SetTitleSize(0.035);
   plot__891->GetXaxis()->SetTitleFont(42);
   plot__891->GetYaxis()->SetTitle("Data/MC");
   plot__891->GetYaxis()->SetNdivisions(505);
   plot__891->GetYaxis()->SetLabelFont(42);
   plot__891->GetYaxis()->SetLabelSize(0.11);
   plot__891->GetYaxis()->SetTitleSize(0.1);
   plot__891->GetYaxis()->SetTitleOffset(0.5);
   plot__891->GetYaxis()->SetTitleFont(42);
   plot__891->GetZaxis()->SetLabelFont(42);
   plot__891->GetZaxis()->SetLabelSize(0.035);
   plot__891->GetZaxis()->SetTitleSize(0.035);
   plot__891->GetZaxis()->SetTitleFont(42);
   plot__891->Draw("PSAME");
   d->Modified();
   canvasbtag_two_375_475/AlphaT_2->cd();
   canvasbtag_two_375_475/AlphaT_2->Modified();
   canvasbtag_two_375_475/AlphaT_2->cd();
   canvasbtag_two_375_475/AlphaT_2->SetSelected(canvasbtag_two_375_475/AlphaT_2);
}
