void AlphaT_2_btag_morethanzero_375_upwards()
{
//=========Macro generated from canvas: canvasbtag_morethanzero_375_475/AlphaT_2/cannameAlphaT_2
//=========  (Wed Aug 24 11:54:04 2016) by ROOT version6.06/06
   TCanvas *canvasbtag_morethanzero_375_475/AlphaT_2 = new TCanvas("canvasbtag_morethanzero_375_475/AlphaT_2", "cannameAlphaT_2",0,0,1200,1000);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetHighLightColor(2);
   canvasbtag_morethanzero_375_475/AlphaT_2->Range(0,0,1,1);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetFillColor(0);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetBorderMode(0);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetBorderSize(2);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetTickx(1);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetTicky(1);
   canvasbtag_morethanzero_375_475/AlphaT_2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.504077,3.4875,3.950623);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis727[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__683 = new TH1D("plot__683","",24, xAxis727);
   plot__683->SetBinContent(10,215);
   plot__683->SetBinContent(11,105);
   plot__683->SetBinContent(12,60);
   plot__683->SetBinContent(13,25);
   plot__683->SetBinContent(14,21);
   plot__683->SetBinContent(15,11);
   plot__683->SetBinContent(16,7);
   plot__683->SetBinContent(17,9);
   plot__683->SetBinContent(18,4.4);
   plot__683->SetBinContent(19,2.6);
   plot__683->SetBinContent(20,1.4);
   plot__683->SetBinContent(21,0.8);
   plot__683->SetBinContent(22,0.6);
   plot__683->SetBinContent(23,4);
   plot__683->SetBinContent(24,0.05072464);
   plot__683->SetBinError(10,14.66288);
   plot__683->SetBinError(11,10.24695);
   plot__683->SetBinError(12,7.745967);
   plot__683->SetBinError(13,5);
   plot__683->SetBinError(14,4.582576);
   plot__683->SetBinError(15,2.345208);
   plot__683->SetBinError(16,2.86);
   plot__683->SetBinError(17,3.19);
   plot__683->SetBinError(18,2.3);
   plot__683->SetBinError(19,2);
   plot__683->SetBinError(20,1);
   plot__683->SetBinError(23,2.14);
   plot__683->SetBinError(24,0.01917211);
   plot__683->SetMinimum(0.11);
   plot__683->SetMaximum(2541.87);
   plot__683->SetEntries(596);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   plot__683->SetLineColor(ci);
   plot__683->SetLineWidth(2);
   plot__683->SetMarkerStyle(20);
   plot__683->SetMarkerSize(1.5);
   plot__683->GetXaxis()->SetTitle("#alpha_{T}");
   plot__683->GetXaxis()->SetRange(1,23);
   plot__683->GetXaxis()->SetLabelFont(42);
   plot__683->GetXaxis()->SetLabelSize(0.035);
   plot__683->GetXaxis()->SetTitleSize(0.035);
   plot__683->GetXaxis()->SetTitleFont(42);
   plot__683->GetYaxis()->SetTitle("Events");
   plot__683->GetYaxis()->SetLabelFont(42);
   plot__683->GetYaxis()->SetLabelSize(0.035);
   plot__683->GetYaxis()->SetTitleSize(0.035);
   plot__683->GetYaxis()->SetTitleOffset(1.3);
   plot__683->GetYaxis()->SetTitleFont(42);
   plot__683->GetZaxis()->SetLabelFont(42);
   plot__683->GetZaxis()->SetLabelSize(0.035);
   plot__683->GetZaxis()->SetTitleSize(0.035);
   plot__683->GetZaxis()->SetTitleFont(42);
   plot__683->Draw("PE0");
   Double_t xAxis728[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__684 = new TH1D("plot__684","",24, xAxis728);
   plot__684->SetBinContent(10,49.75838);
   plot__684->SetBinContent(11,18.63753);
   plot__684->SetBinContent(12,10.28317);
   plot__684->SetBinContent(13,6.882685);
   plot__684->SetBinContent(14,5.154516);
   plot__684->SetBinContent(15,3.077248);
   plot__684->SetBinContent(16,1.559172);
   plot__684->SetBinContent(17,1.17546);
   plot__684->SetBinContent(18,0.7105375);
   plot__684->SetBinContent(19,0.234259);
   plot__684->SetBinContent(20,0.40216);
   plot__684->SetBinContent(21,0.1736472);
   plot__684->SetBinContent(22,0.06795249);
   plot__684->SetBinContent(23,0.6583106);
   plot__684->SetBinContent(24,0.008220937);
   plot__684->SetBinError(10,2.712764);
   plot__684->SetBinError(11,1.605679);
   plot__684->SetBinError(12,1.277037);
   plot__684->SetBinError(13,0.9817028);
   plot__684->SetBinError(14,0.8622011);
   plot__684->SetBinError(15,0.4772845);
   plot__684->SetBinError(16,0.3125135);
   plot__684->SetBinError(17,0.1852096);
   plot__684->SetBinError(18,0.1466482);
   plot__684->SetBinError(19,0.080115);
   plot__684->SetBinError(20,0.1161277);
   plot__684->SetBinError(21,0.04697121);
   plot__684->SetBinError(22,0.0317881);
   plot__684->SetBinError(23,0.5737206);
   plot__684->SetBinError(24,0.002907525);
   plot__684->SetEntries(980);
   plot__684->SetLineColor(4);
   plot__684->SetLineWidth(3);
   plot__684->GetXaxis()->SetTitle("#alpha_{T}");
   plot__684->GetXaxis()->SetRange(1,23);
   plot__684->GetXaxis()->SetLabelFont(42);
   plot__684->GetXaxis()->SetLabelSize(0.035);
   plot__684->GetXaxis()->SetTitleSize(0.035);
   plot__684->GetXaxis()->SetTitleFont(42);
   plot__684->GetYaxis()->SetTitle("Events/0.025");
   plot__684->GetYaxis()->SetLabelFont(42);
   plot__684->GetYaxis()->SetLabelSize(0.035);
   plot__684->GetYaxis()->SetTitleSize(0.035);
   plot__684->GetYaxis()->SetTitleFont(42);
   plot__684->GetZaxis()->SetLabelFont(42);
   plot__684->GetZaxis()->SetLabelSize(0.035);
   plot__684->GetZaxis()->SetTitleSize(0.035);
   plot__684->GetZaxis()->SetTitleFont(42);
   plot__684->Draw("HISTSAME");
   Double_t xAxis729[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__685 = new TH1D("plot__685","",24, xAxis729);
   plot__685->SetBinContent(10,101.8041);
   plot__685->SetBinContent(11,38.31079);
   plot__685->SetBinContent(12,21.19188);
   plot__685->SetBinContent(13,11.94979);
   plot__685->SetBinContent(14,5.893378);
   plot__685->SetBinContent(15,4.843215);
   plot__685->SetBinContent(16,3.252882);
   plot__685->SetBinContent(17,2.175924);
   plot__685->SetBinContent(18,1.789364);
   plot__685->SetBinContent(19,1.233124);
   plot__685->SetBinContent(20,0.3448852);
   plot__685->SetBinContent(21,0.1979495);
   plot__685->SetBinContent(22,0.08774615);
   plot__685->SetBinContent(23,0.69137);
   plot__685->SetBinContent(24,0.01001985);
   plot__685->SetBinError(10,4.636396);
   plot__685->SetBinError(11,2.830847);
   plot__685->SetBinError(12,2.134971);
   plot__685->SetBinError(13,1.578127);
   plot__685->SetBinError(14,1.113191);
   plot__685->SetBinError(15,0.7130994);
   plot__685->SetBinError(16,0.5854524);
   plot__685->SetBinError(17,0.302474);
   plot__685->SetBinError(18,0.2658179);
   plot__685->SetBinError(19,0.2282583);
   plot__685->SetBinError(20,0.1224591);
   plot__685->SetBinError(21,0.06407418);
   plot__685->SetBinError(22,0.04289132);
   plot__685->SetBinError(23,0.5879498);
   plot__685->SetBinError(24,0.003920978);
   plot__685->SetEntries(1223);
   plot__685->SetLineColor(2);
   plot__685->SetLineWidth(3);
   plot__685->GetXaxis()->SetTitle("#alpha_{T}");
   plot__685->GetXaxis()->SetRange(1,23);
   plot__685->GetXaxis()->SetLabelFont(42);
   plot__685->GetXaxis()->SetLabelSize(0.035);
   plot__685->GetXaxis()->SetTitleSize(0.035);
   plot__685->GetXaxis()->SetTitleFont(42);
   plot__685->GetYaxis()->SetTitle("Events/0.025");
   plot__685->GetYaxis()->SetLabelFont(42);
   plot__685->GetYaxis()->SetLabelSize(0.035);
   plot__685->GetYaxis()->SetTitleSize(0.035);
   plot__685->GetYaxis()->SetTitleFont(42);
   plot__685->GetZaxis()->SetLabelFont(42);
   plot__685->GetZaxis()->SetLabelSize(0.035);
   plot__685->GetZaxis()->SetTitleSize(0.035);
   plot__685->GetZaxis()->SetTitleFont(42);
   plot__685->Draw("HISTSAME");
   Double_t xAxis730[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__686 = new TH1D("plot__686","",24, xAxis730);
   plot__686->SetBinContent(10,88.03419);
   plot__686->SetBinContent(11,41.02629);
   plot__686->SetBinContent(12,24.18533);
   plot__686->SetBinContent(13,15.01476);
   plot__686->SetBinContent(14,11.86495);
   plot__686->SetBinContent(15,7.898762);
   plot__686->SetBinContent(16,5.57863);
   plot__686->SetBinContent(17,3.482772);
   plot__686->SetBinContent(18,1.740809);
   plot__686->SetBinContent(19,1.15137);
   plot__686->SetBinContent(20,0.8993583);
   plot__686->SetBinContent(21,0.4246715);
   plot__686->SetBinContent(22,0.2393137);
   plot__686->SetBinContent(23,2.080853);
   plot__686->SetBinContent(24,0.0245784);
   plot__686->SetBinError(10,1.824582);
   plot__686->SetBinError(11,1.233965);
   plot__686->SetBinError(12,0.9494899);
   plot__686->SetBinError(13,0.7737958);
   plot__686->SetBinError(14,0.691619);
   plot__686->SetBinError(15,0.3971533);
   plot__686->SetBinError(16,0.3427881);
   plot__686->SetBinError(17,0.1638968);
   plot__686->SetBinError(18,0.115545);
   plot__686->SetBinError(19,0.08715308);
   plot__686->SetBinError(20,0.0778853);
   plot__686->SetBinError(21,0.03890268);
   plot__686->SetBinError(22,0.03348239);
   plot__686->SetBinError(23,1.020013);
   plot__686->SetBinError(24,0.002576555);
   plot__686->SetEntries(9782);
   plot__686->SetLineColor(5);
   plot__686->SetLineWidth(3);
   plot__686->GetXaxis()->SetTitle("#alpha_{T}");
   plot__686->GetXaxis()->SetRange(1,23);
   plot__686->GetXaxis()->SetLabelFont(42);
   plot__686->GetXaxis()->SetLabelSize(0.035);
   plot__686->GetXaxis()->SetTitleSize(0.035);
   plot__686->GetXaxis()->SetTitleFont(42);
   plot__686->GetYaxis()->SetTitle("Events/0.025");
   plot__686->GetYaxis()->SetLabelFont(42);
   plot__686->GetYaxis()->SetLabelSize(0.035);
   plot__686->GetYaxis()->SetTitleSize(0.035);
   plot__686->GetYaxis()->SetTitleFont(42);
   plot__686->GetZaxis()->SetLabelFont(42);
   plot__686->GetZaxis()->SetLabelSize(0.035);
   plot__686->GetZaxis()->SetTitleSize(0.035);
   plot__686->GetZaxis()->SetTitleFont(42);
   plot__686->Draw("HISTSAME");
   Double_t xAxis731[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__687 = new TH1D("plot__687","",24, xAxis731);
   plot__687->SetBinContent(10,0.4100202);
   plot__687->SetBinContent(11,0.04102613);
   plot__687->SetBinContent(12,0.0666919);
   plot__687->SetBinContent(13,0.0355547);
   plot__687->SetBinContent(15,0.01248167);
   plot__687->SetBinContent(17,0.03128044);
   plot__687->SetBinContent(18,0.02555897);
   plot__687->SetBinContent(21,0.00204036);
   plot__687->SetBinError(10,0.1276132);
   plot__687->SetBinError(11,0.0314455);
   plot__687->SetBinError(12,0.03956586);
   plot__687->SetBinError(13,0.0254593);
   plot__687->SetBinError(15,0.01248167);
   plot__687->SetBinError(17,0.0177228);
   plot__687->SetBinError(18,0.01699089);
   plot__687->SetBinError(21,0.00204036);
   plot__687->SetEntries(54);
   plot__687->SetLineColor(6);
   plot__687->SetLineWidth(3);
   plot__687->GetXaxis()->SetTitle("#alpha_{T}");
   plot__687->GetXaxis()->SetRange(1,23);
   plot__687->GetXaxis()->SetLabelFont(42);
   plot__687->GetXaxis()->SetLabelSize(0.035);
   plot__687->GetXaxis()->SetTitleSize(0.035);
   plot__687->GetXaxis()->SetTitleFont(42);
   plot__687->GetYaxis()->SetTitle("Events/0.025");
   plot__687->GetYaxis()->SetLabelFont(42);
   plot__687->GetYaxis()->SetLabelSize(0.035);
   plot__687->GetYaxis()->SetTitleSize(0.035);
   plot__687->GetYaxis()->SetTitleFont(42);
   plot__687->GetZaxis()->SetLabelFont(42);
   plot__687->GetZaxis()->SetLabelSize(0.035);
   plot__687->GetZaxis()->SetTitleSize(0.035);
   plot__687->GetZaxis()->SetTitleFont(42);
   plot__687->Draw("HISTSAME");
   Double_t xAxis732[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__688 = new TH1D("plot__688","",24, xAxis732);
   plot__688->SetBinContent(10,2.524717);
   plot__688->SetBinContent(11,1.255865);
   plot__688->SetBinContent(12,0.7731317);
   plot__688->SetBinContent(13,0.7542726);
   plot__688->SetBinContent(14,0.3201226);
   plot__688->SetBinContent(15,0.3467446);
   plot__688->SetBinContent(16,0.2038551);
   plot__688->SetBinContent(17,0.1050644);
   plot__688->SetBinContent(18,0.1089961);
   plot__688->SetBinContent(19,0.03980196);
   plot__688->SetBinContent(20,0.03887824);
   plot__688->SetBinContent(21,0.06013343);
   plot__688->SetBinContent(22,0.007710741);
   plot__688->SetBinContent(23,0.01989904);
   plot__688->SetBinContent(24,0.0002883919);
   plot__688->SetBinError(10,0.4551086);
   plot__688->SetBinError(11,0.2284135);
   plot__688->SetBinError(12,0.2085736);
   plot__688->SetBinError(13,0.2033281);
   plot__688->SetBinError(14,0.08540038);
   plot__688->SetBinError(15,0.06427539);
   plot__688->SetBinError(16,0.07392728);
   plot__688->SetBinError(17,0.02103506);
   plot__688->SetBinError(18,0.03300031);
   plot__688->SetBinError(19,0.01333474);
   plot__688->SetBinError(20,0.01490382);
   plot__688->SetBinError(21,0.02301132);
   plot__688->SetBinError(22,0.00397576);
   plot__688->SetBinError(23,0.09974729);
   plot__688->SetBinError(24,0.0002045899);
   plot__688->SetEntries(360);
   plot__688->SetLineColor(44);
   plot__688->SetLineWidth(3);
   plot__688->GetXaxis()->SetTitle("#alpha_{T}");
   plot__688->GetXaxis()->SetRange(1,23);
   plot__688->GetXaxis()->SetLabelFont(42);
   plot__688->GetXaxis()->SetLabelSize(0.035);
   plot__688->GetXaxis()->SetTitleSize(0.035);
   plot__688->GetXaxis()->SetTitleFont(42);
   plot__688->GetYaxis()->SetTitle("Events/0.025");
   plot__688->GetYaxis()->SetLabelFont(42);
   plot__688->GetYaxis()->SetLabelSize(0.035);
   plot__688->GetYaxis()->SetTitleSize(0.035);
   plot__688->GetYaxis()->SetTitleFont(42);
   plot__688->GetZaxis()->SetLabelFont(42);
   plot__688->GetZaxis()->SetLabelSize(0.035);
   plot__688->GetZaxis()->SetTitleSize(0.035);
   plot__688->GetZaxis()->SetTitleFont(42);
   plot__688->Draw("HISTSAME");
   Double_t xAxis733[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__689 = new TH1D("plot__689","",24, xAxis733);
   plot__689->SetEntries(25);
   plot__689->SetLineColor(7);
   plot__689->SetLineStyle(10);
   plot__689->SetLineWidth(3);
   plot__689->GetXaxis()->SetTitle("#alpha_{T}");
   plot__689->GetXaxis()->SetRange(1,23);
   plot__689->GetXaxis()->SetLabelFont(42);
   plot__689->GetXaxis()->SetLabelSize(0.035);
   plot__689->GetXaxis()->SetTitleSize(0.035);
   plot__689->GetXaxis()->SetTitleFont(42);
   plot__689->GetYaxis()->SetTitle("Events/0.025");
   plot__689->GetYaxis()->SetLabelFont(42);
   plot__689->GetYaxis()->SetLabelSize(0.035);
   plot__689->GetYaxis()->SetTitleSize(0.035);
   plot__689->GetYaxis()->SetTitleFont(42);
   plot__689->GetZaxis()->SetLabelFont(42);
   plot__689->GetZaxis()->SetLabelSize(0.035);
   plot__689->GetZaxis()->SetTitleSize(0.035);
   plot__689->GetZaxis()->SetTitleFont(42);
   plot__689->Draw("HISTSAME");
   Double_t xAxis734[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__690 = new TH1D("plot__690","",24, xAxis734);
   plot__690->SetBinContent(10,11.65563);
   plot__690->SetBinContent(11,2.223279);
   plot__690->SetBinContent(12,2.620793);
   plot__690->SetBinContent(13,1.603423);
   plot__690->SetBinContent(15,0.2583122);
   plot__690->SetBinContent(16,0.2605135);
   plot__690->SetBinContent(17,0.205021);
   plot__690->SetBinContent(19,0.1115777);
   plot__690->SetBinContent(21,0.1149339);
   plot__690->SetBinContent(22,0.06160481);
   plot__690->SetBinContent(23,0.07343113);
   plot__690->SetBinContent(24,0.001064219);
   plot__690->SetBinError(10,2.271572);
   plot__690->SetBinError(11,1.017981);
   plot__690->SetBinError(12,1.186325);
   plot__690->SetBinError(13,0.9280877);
   plot__690->SetBinError(15,0.2583122);
   plot__690->SetBinError(16,0.2605135);
   plot__690->SetBinError(17,0.1449769);
   plot__690->SetBinError(19,0.08940111);
   plot__690->SetBinError(21,0.08145432);
   plot__690->SetBinError(22,0.06160481);
   plot__690->SetBinError(23,0.1916131);
   plot__690->SetBinError(24,0.001064219);
   plot__690->SetEntries(79);
   plot__690->SetLineColor(40);
   plot__690->SetLineWidth(3);
   plot__690->GetXaxis()->SetTitle("#alpha_{T}");
   plot__690->GetXaxis()->SetRange(1,23);
   plot__690->GetXaxis()->SetLabelFont(42);
   plot__690->GetXaxis()->SetLabelSize(0.035);
   plot__690->GetXaxis()->SetTitleSize(0.035);
   plot__690->GetXaxis()->SetTitleFont(42);
   plot__690->GetYaxis()->SetTitle("Events/0.025");
   plot__690->GetYaxis()->SetLabelFont(42);
   plot__690->GetYaxis()->SetLabelSize(0.035);
   plot__690->GetYaxis()->SetTitleSize(0.035);
   plot__690->GetYaxis()->SetTitleFont(42);
   plot__690->GetZaxis()->SetLabelFont(42);
   plot__690->GetZaxis()->SetLabelSize(0.035);
   plot__690->GetZaxis()->SetTitleSize(0.035);
   plot__690->GetZaxis()->SetTitleFont(42);
   plot__690->Draw("HISTSAME");
   Double_t xAxis735[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__691 = new TH1D("plot__691","",24, xAxis735);
   plot__691->SetBinContent(10,254.187);
   plot__691->SetBinContent(11,101.4948);
   plot__691->SetBinContent(12,59.121);
   plot__691->SetBinContent(13,36.24049);
   plot__691->SetBinContent(14,23.23296);
   plot__691->SetBinContent(15,16.43676);
   plot__691->SetBinContent(16,10.85505);
   plot__691->SetBinContent(17,7.175521);
   plot__691->SetBinContent(18,4.375266);
   plot__691->SetBinContent(19,2.770132);
   plot__691->SetBinContent(20,1.685282);
   plot__691->SetBinContent(21,0.973376);
   plot__691->SetBinContent(22,0.4643279);
   plot__691->SetBinContent(23,3.523864);
   plot__691->SetBinContent(24,0.04417181);
   plot__691->SetBinError(10,6.129258);
   plot__691->SetBinError(11,3.633733);
   plot__691->SetBinError(12,2.922822);
   plot__691->SetBinError(13,2.22628);
   plot__691->SetBinError(14,1.571055);
   plot__691->SetBinError(15,0.9823718);
   plot__691->SetBinError(16,0.7945158);
   plot__691->SetBinError(17,0.4176483);
   plot__691->SetBinError(18,0.3269452);
   plot__691->SetBinError(19,0.2725552);
   plot__691->SetBinError(20,0.1864675);
   plot__691->SetBinError(21,0.1224488);
   plot__691->SetBinError(22,0.08821666);
   plot__691->SetBinError(23,1.327378);
   plot__691->SetBinError(24,0.005625018);
   plot__691->SetEntries(12503);
   plot__691->SetLineColor(3);
   plot__691->SetLineWidth(3);
   plot__691->GetXaxis()->SetTitle("#alpha_{T}");
   plot__691->GetXaxis()->SetRange(1,23);
   plot__691->GetXaxis()->SetLabelFont(42);
   plot__691->GetXaxis()->SetLabelSize(0.035);
   plot__691->GetXaxis()->SetTitleSize(0.035);
   plot__691->GetXaxis()->SetTitleFont(42);
   plot__691->GetYaxis()->SetTitle("Events/0.025");
   plot__691->GetYaxis()->SetLabelFont(42);
   plot__691->GetYaxis()->SetLabelSize(0.035);
   plot__691->GetYaxis()->SetTitleSize(0.035);
   plot__691->GetYaxis()->SetTitleFont(42);
   plot__691->GetZaxis()->SetLabelFont(42);
   plot__691->GetZaxis()->SetLabelSize(0.035);
   plot__691->GetZaxis()->SetTitleSize(0.035);
   plot__691->GetZaxis()->SetTitleFont(42);
   plot__691->Draw("HISTSAME");
   
   Double_t Graph_from_plot_fx1177[24] = {
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
   Double_t Graph_from_plot_fy1177[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_from_plot_fex1177[24] = {
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
   Double_t Graph_from_plot_fey1177[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(24,Graph_from_plot_fx1177,Graph_from_plot_fy1177,Graph_from_plot_fex1177,Graph_from_plot_fey1177);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(7);
   gre->SetFillStyle(3008);
   gre->SetLineColor(7);
   gre->SetLineStyle(10);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1177 = new TH1F("Graph_Graph_from_plot1177","",100,0,11);
   Graph_Graph_from_plot1177->SetMinimum(0.0011);
   Graph_Graph_from_plot1177->SetMaximum(1.1);
   Graph_Graph_from_plot1177->SetDirectory(0);
   Graph_Graph_from_plot1177->SetStats(0);
   Graph_Graph_from_plot1177->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1177->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1177->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1177->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1177->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1177->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1177->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1177->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1177->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1177->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1177);
   
   gre->Draw("2");
   
   Double_t Graph_from_plot_fx1178[24] = {
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
   Double_t Graph_from_plot_fy1178[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   254.187,
   101.4948,
   59.121,
   36.24049,
   23.23296,
   16.43676,
   10.85505,
   7.175521,
   4.375266,
   2.770132,
   1.685282,
   0.973376,
   0.4643279,
   3.523864,
   0.04417181};
   Double_t Graph_from_plot_fex1178[24] = {
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
   Double_t Graph_from_plot_fey1178[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   6.129258,
   3.633733,
   2.922822,
   2.22628,
   1.571055,
   0.9823718,
   0.7945158,
   0.4176483,
   0.3269452,
   0.2725552,
   0.1864675,
   0.1224488,
   0.08821666,
   1.327378,
   0.005625018};
   gre = new TGraphErrors(24,Graph_from_plot_fx1178,Graph_from_plot_fy1178,Graph_from_plot_fex1178,Graph_from_plot_fey1178);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(3);
   gre->SetFillStyle(3008);
   gre->SetLineColor(4);
   gre->SetLineWidth(3);
   
   TH1F *Graph_Graph_from_plot1178 = new TH1F("Graph_Graph_from_plot1178","",100,0,11);
   Graph_Graph_from_plot1178->SetMinimum(0.2863479);
   Graph_Graph_from_plot1178->SetMaximum(286.3479);
   Graph_Graph_from_plot1178->SetDirectory(0);
   Graph_Graph_from_plot1178->SetStats(0);
   Graph_Graph_from_plot1178->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1178->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1178->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1178->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1178->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1178->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1178->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1178->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1178->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1178->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1178);
   
   gre->Draw("2");
   
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
   entry=leg->AddEntry("AlphaT_2","Single Top","L");
   entry->SetLineColor(40);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("plot","Combined SM","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.1,0.95,"btag_morethanzero_375_    Jet Multiplicity=2,3");
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
   Double_t xAxis736[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__692 = new TH1D("plot__692","",24, xAxis736);
   plot__692->SetBinContent(10,215);
   plot__692->SetBinContent(11,105);
   plot__692->SetBinContent(12,60);
   plot__692->SetBinContent(13,25);
   plot__692->SetBinContent(14,21);
   plot__692->SetBinContent(15,11);
   plot__692->SetBinContent(16,7);
   plot__692->SetBinContent(17,9);
   plot__692->SetBinContent(18,4.4);
   plot__692->SetBinContent(19,2.6);
   plot__692->SetBinContent(20,1.4);
   plot__692->SetBinContent(21,0.8);
   plot__692->SetBinContent(22,0.6);
   plot__692->SetBinContent(23,4);
   plot__692->SetBinContent(24,0.05072464);
   plot__692->SetBinError(10,14.66288);
   plot__692->SetBinError(11,10.24695);
   plot__692->SetBinError(12,7.745967);
   plot__692->SetBinError(13,5);
   plot__692->SetBinError(14,4.582576);
   plot__692->SetBinError(15,2.345208);
   plot__692->SetBinError(16,2.86);
   plot__692->SetBinError(17,3.19);
   plot__692->SetBinError(18,2.3);
   plot__692->SetBinError(19,2);
   plot__692->SetBinError(20,1);
   plot__692->SetBinError(23,2.14);
   plot__692->SetBinError(24,0.01917211);
   plot__692->SetMinimum(0.11);
   plot__692->SetMaximum(2541.87);
   plot__692->SetEntries(596);

   ci = TColor::GetColor("#000099");
   plot__692->SetLineColor(ci);
   plot__692->SetLineWidth(2);
   plot__692->SetMarkerStyle(20);
   plot__692->SetMarkerSize(1.5);
   plot__692->GetXaxis()->SetTitle("#alpha_{T}");
   plot__692->GetXaxis()->SetRange(1,23);
   plot__692->GetXaxis()->SetLabelFont(42);
   plot__692->GetXaxis()->SetLabelSize(0.035);
   plot__692->GetXaxis()->SetTitleSize(0.035);
   plot__692->GetXaxis()->SetTitleFont(42);
   plot__692->GetYaxis()->SetTitle("Events");
   plot__692->GetYaxis()->SetLabelFont(42);
   plot__692->GetYaxis()->SetLabelSize(0.035);
   plot__692->GetYaxis()->SetTitleSize(0.035);
   plot__692->GetYaxis()->SetTitleOffset(1.3);
   plot__692->GetYaxis()->SetTitleFont(42);
   plot__692->GetZaxis()->SetLabelFont(42);
   plot__692->GetZaxis()->SetLabelSize(0.035);
   plot__692->GetZaxis()->SetTitleSize(0.035);
   plot__692->GetZaxis()->SetTitleFont(42);
   plot__692->Draw("PSAME");
   u->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_2->cd();
  
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
   Double_t xAxis737[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__693 = new TH1D("plot__693","",24, xAxis737);
   plot__693->SetBinContent(10,0.845834);
   plot__693->SetBinContent(11,1.034536);
   plot__693->SetBinContent(12,1.014868);
   plot__693->SetBinContent(13,0.6898362);
   plot__693->SetBinContent(14,0.9038881);
   plot__693->SetBinContent(15,0.6692315);
   plot__693->SetBinContent(16,0.644861);
   plot__693->SetBinContent(17,1.254264);
   plot__693->SetBinContent(18,1.005653);
   plot__693->SetBinContent(19,0.9385834);
   plot__693->SetBinContent(20,0.8307216);
   plot__693->SetBinContent(21,0.8218818);
   plot__693->SetBinContent(22,1.29219);
   plot__693->SetBinContent(23,1.135118);
   plot__693->SetBinContent(24,1.148349);
   plot__693->SetBinError(10,0.0576854);
   plot__693->SetBinError(11,0.1009604);
   plot__693->SetBinError(12,0.1310189);
   plot__693->SetBinError(13,0.1379672);
   plot__693->SetBinError(14,0.1972446);
   plot__693->SetBinError(15,0.1426806);
   plot__693->SetBinError(16,0.2634718);
   plot__693->SetBinError(17,0.444567);
   plot__693->SetBinError(18,0.5256824);
   plot__693->SetBinError(19,0.7219872);
   plot__693->SetBinError(20,0.5933726);
   plot__693->SetBinError(23,0.6072879);
   plot__693->SetBinError(24,0.434035);
   plot__693->SetMinimum(0);
   plot__693->SetMaximum(2);
   plot__693->SetEntries(78.14128);

   ci = TColor::GetColor("#000099");
   plot__693->SetLineColor(ci);
   plot__693->SetLineWidth(2);
   plot__693->SetMarkerStyle(20);
   plot__693->SetMarkerSize(1.5);
   plot__693->GetXaxis()->SetRange(1,23);
   plot__693->GetXaxis()->SetLabelFont(42);
   plot__693->GetXaxis()->SetLabelSize(0.12);
   plot__693->GetXaxis()->SetTitleSize(0.035);
   plot__693->GetXaxis()->SetTitleFont(42);
   plot__693->GetYaxis()->SetTitle("Data/MC");
   plot__693->GetYaxis()->SetNdivisions(505);
   plot__693->GetYaxis()->SetLabelFont(42);
   plot__693->GetYaxis()->SetLabelSize(0.11);
   plot__693->GetYaxis()->SetTitleSize(0.1);
   plot__693->GetYaxis()->SetTitleOffset(0.5);
   plot__693->GetYaxis()->SetTitleFont(42);
   plot__693->GetZaxis()->SetLabelFont(42);
   plot__693->GetZaxis()->SetLabelSize(0.035);
   plot__693->GetZaxis()->SetTitleSize(0.035);
   plot__693->GetZaxis()->SetTitleFont(42);
   plot__693->Draw("p");
   
   Double_t Graph_from_plot_fx1179[24] = {
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
   Double_t Graph_from_plot_fy1179[24] = {
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
   1.148349};
   Double_t Graph_from_plot_fex1179[24] = {
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
   Double_t Graph_from_plot_fey1179[24] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0.02411319,
   0.03580217,
   0.04943797,
   0.06143074,
   0.06762181,
   0.05976674,
   0.07319318,
   0.0582046,
   0.0747258,
   0.09839066,
   0.1106447,
   0.125798,
   0.1899878,
   0.3766825,
   0.1273441};
   gre = new TGraphErrors(24,Graph_from_plot_fx1179,Graph_from_plot_fy1179,Graph_from_plot_fex1179,Graph_from_plot_fey1179);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph_from_plot1179 = new TH1F("Graph_Graph_from_plot1179","",100,0,11);
   Graph_Graph_from_plot1179->SetMinimum(0.547981);
   Graph_Graph_from_plot1179->SetMaximum(1.452019);
   Graph_Graph_from_plot1179->SetDirectory(0);
   Graph_Graph_from_plot1179->SetStats(0);
   Graph_Graph_from_plot1179->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1179->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1179->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1179->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot1179->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1179->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1179->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot1179->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot1179->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot1179->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot1179);
   
   gre->Draw("2");
   Double_t xAxis738[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot__694 = new TH1D("plot__694","",24, xAxis738);
   plot__694->SetBinContent(10,0.845834);
   plot__694->SetBinContent(11,1.034536);
   plot__694->SetBinContent(12,1.014868);
   plot__694->SetBinContent(13,0.6898362);
   plot__694->SetBinContent(14,0.9038881);
   plot__694->SetBinContent(15,0.6692315);
   plot__694->SetBinContent(16,0.644861);
   plot__694->SetBinContent(17,1.254264);
   plot__694->SetBinContent(18,1.005653);
   plot__694->SetBinContent(19,0.9385834);
   plot__694->SetBinContent(20,0.8307216);
   plot__694->SetBinContent(21,0.8218818);
   plot__694->SetBinContent(22,1.29219);
   plot__694->SetBinContent(23,1.135118);
   plot__694->SetBinContent(24,1.148349);
   plot__694->SetBinError(10,0.0576854);
   plot__694->SetBinError(11,0.1009604);
   plot__694->SetBinError(12,0.1310189);
   plot__694->SetBinError(13,0.1379672);
   plot__694->SetBinError(14,0.1972446);
   plot__694->SetBinError(15,0.1426806);
   plot__694->SetBinError(16,0.2634718);
   plot__694->SetBinError(17,0.444567);
   plot__694->SetBinError(18,0.5256824);
   plot__694->SetBinError(19,0.7219872);
   plot__694->SetBinError(20,0.5933726);
   plot__694->SetBinError(23,0.6072879);
   plot__694->SetBinError(24,0.434035);
   plot__694->SetMinimum(0);
   plot__694->SetMaximum(2);
   plot__694->SetEntries(78.14128);

   ci = TColor::GetColor("#000099");
   plot__694->SetLineColor(ci);
   plot__694->SetLineWidth(2);
   plot__694->SetMarkerStyle(20);
   plot__694->SetMarkerSize(1.5);
   plot__694->GetXaxis()->SetRange(1,23);
   plot__694->GetXaxis()->SetLabelFont(42);
   plot__694->GetXaxis()->SetLabelSize(0.12);
   plot__694->GetXaxis()->SetTitleSize(0.035);
   plot__694->GetXaxis()->SetTitleFont(42);
   plot__694->GetYaxis()->SetTitle("Data/MC");
   plot__694->GetYaxis()->SetNdivisions(505);
   plot__694->GetYaxis()->SetLabelFont(42);
   plot__694->GetYaxis()->SetLabelSize(0.11);
   plot__694->GetYaxis()->SetTitleSize(0.1);
   plot__694->GetYaxis()->SetTitleOffset(0.5);
   plot__694->GetYaxis()->SetTitleFont(42);
   plot__694->GetZaxis()->SetLabelFont(42);
   plot__694->GetZaxis()->SetLabelSize(0.035);
   plot__694->GetZaxis()->SetTitleSize(0.035);
   plot__694->GetZaxis()->SetTitleFont(42);
   plot__694->Draw("PSAME");
   d->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_2->cd();
   canvasbtag_morethanzero_375_475/AlphaT_2->Modified();
   canvasbtag_morethanzero_375_475/AlphaT_2->cd();
   canvasbtag_morethanzero_375_475/AlphaT_2->SetSelected(canvasbtag_morethanzero_375_475/AlphaT_2);
}
