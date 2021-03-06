{
//=========Macro generated from canvas: canvasOneMuon_200_275/AlphaT_all/cannameAlphaT_all
//=========  (Thu Sep  4 16:12:28 2014) by ROOT version5.34/18
   TCanvas *AlphaT_all = new TCanvas("AlphaT_all", "cannameAlphaT_all",1,1,1200,976);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   AlphaT_all->SetHighLightColor(2);
   AlphaT_all->Range(0,0,1,1);
   AlphaT_all->SetFillColor(0);
   AlphaT_all->SetBorderMode(0);
   AlphaT_all->SetBorderSize(2);
   AlphaT_all->SetTickx(1);
   AlphaT_all->SetTicky(1);
   AlphaT_all->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: u
   TPad *u = new TPad("u", "u",0.01,0.25,0.99,0.99);
   u->Draw();
   u->cd();
   u->Range(-0.3875,-1.784087,3.4875,6.47071);
   u->SetFillColor(0);
   u->SetBorderMode(0);
   u->SetBorderSize(2);
   u->SetLogy();
   u->SetTickx(1);
   u->SetTicky(1);
   u->SetFrameBorderMode(0);
   u->SetFrameBorderMode(0);
   Double_t xAxis3462[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3462);
   plot->SetBinContent(3,15.5);
   plot->SetBinContent(4,350);
   plot->SetBinContent(5,3025);
   plot->SetBinContent(6,11405);
   plot->SetBinContent(7,26449);
   plot->SetBinContent(8,40423);
   plot->SetBinContent(9,21969);
   plot->SetBinContent(10,7253);
   plot->SetBinContent(11,3732);
   plot->SetBinContent(12,2276);
   plot->SetBinContent(13,1611);
   plot->SetBinContent(14,1187);
   plot->SetBinContent(15,821);
   plot->SetBinContent(16,628.5);
   plot->SetBinContent(17,394);
   plot->SetBinContent(18,210.8);
   plot->SetBinContent(19,122.6);
   plot->SetBinContent(20,86.4);
   plot->SetBinContent(21,57.3);
   plot->SetBinContent(22,36.7);
   plot->SetBinContent(23,293.5);
   plot->SetBinContent(24,3.84058);
   plot->SetBinContent(25,1);
   plot->SetBinError(3,2.783882);
   plot->SetBinError(4,18.70829);
   plot->SetBinError(5,55);
   plot->SetBinError(6,106.7942);
   plot->SetBinError(7,162.6315);
   plot->SetBinError(8,201.0547);
   plot->SetBinError(9,148.2194);
   plot->SetBinError(10,85.16455);
   plot->SetBinError(11,61.0901);
   plot->SetBinError(12,47.70744);
   plot->SetBinError(13,40.13726);
   plot->SetBinError(14,34.45287);
   plot->SetBinError(15,20.2608);
   plot->SetBinError(16,17.7271);
   plot->SetBinError(17,8.876936);
   plot->SetBinError(18,6.493073);
   plot->SetBinError(19,4.951767);
   plot->SetBinError(20,4.156922);
   plot->SetBinError(21,2.393742);
   plot->SetBinError(22,1.915724);
   plot->SetBinError(23,12.11404);
   plot->SetBinError(24,0.1668241);
   plot->SetBinError(25,1);
   plot->SetMinimum(0.11);
   plot->SetMaximum(441804.8);
   plot->SetEntries(128232);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   plot->SetLineColor(ci);
   plot->SetLineWidth(2);
   plot->SetMarkerStyle(20);
   plot->SetMarkerSize(1.5);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleOffset(1.3);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   plot->Draw("");
   
   THStack *tmp = new THStack();
   tmp->SetName("");
   tmp->SetTitle("");
   Double_t xAxis3463[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1F *_stack_231 = new TH1F("_stack_231","",24, xAxis3463);
   _stack_231->SetMinimum(17.67219);
   _stack_231->SetMaximum(70688.77);
   _stack_231->SetDirectory(0);
   _stack_231->SetStats(0);
   _stack_231->GetXaxis()->SetLabelFont(42);
   _stack_231->GetXaxis()->SetLabelOffset(0.007);
   _stack_231->GetXaxis()->SetLabelSize(0.05);
   _stack_231->GetXaxis()->SetTitleSize(0.05);
   _stack_231->GetYaxis()->SetLabelFont(42);
   _stack_231->GetYaxis()->SetLabelOffset(0.007);
   _stack_231->GetYaxis()->SetLabelSize(0.05);
   _stack_231->GetZaxis()->SetLabelFont(42);
   _stack_231->GetZaxis()->SetLabelOffset(0.007);
   _stack_231->GetZaxis()->SetLabelSize(0.05);
   tmp->SetHistogram(_stack_231);
   
   Double_t xAxis3464[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3464);
   plot->SetBinContent(8,0.02065581);
   plot->SetBinError(8,0.02065581);
   plot->SetEntries(26);
   plot->SetFillColor(5);
   plot->SetLineColor(5);
   plot->SetLineWidth(3);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events/0.025");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   tmp->Add(plot,"");
   Double_t xAxis3465[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3465);
   plot->SetBinContent(3,0.2414657);
   plot->SetBinContent(4,4.158443);
   plot->SetBinContent(5,21.6278);
   plot->SetBinContent(6,71.0919);
   plot->SetBinContent(7,185.8206);
   plot->SetBinContent(8,282.1062);
   plot->SetBinContent(9,182.0122);
   plot->SetBinContent(10,76.04884);
   plot->SetBinContent(11,51.53353);
   plot->SetBinContent(12,32.00733);
   plot->SetBinContent(13,24.88695);
   plot->SetBinContent(14,19.45042);
   plot->SetBinContent(15,17.72627);
   plot->SetBinContent(16,19.23716);
   plot->SetBinContent(17,15.4383);
   plot->SetBinContent(18,9.554451);
   plot->SetBinContent(19,6.031349);
   plot->SetBinContent(20,3.611134);
   plot->SetBinContent(21,2.11436);
   plot->SetBinContent(22,1.368294);
   plot->SetBinContent(23,12.92615);
   plot->SetBinContent(24,0.1666244);
   plot->SetBinError(3,0.1235277);
   plot->SetBinError(4,0.7261546);
   plot->SetBinError(5,1.590611);
   plot->SetBinError(6,2.879789);
   plot->SetBinError(7,4.612524);
   plot->SetBinError(8,5.70523);
   plot->SetBinError(9,4.570049);
   plot->SetBinError(10,2.970573);
   plot->SetBinError(11,2.453521);
   plot->SetBinError(12,1.911375);
   plot->SetBinError(13,1.716914);
   plot->SetBinError(14,1.497709);
   plot->SetBinError(15,1.004595);
   plot->SetBinError(16,1.053693);
   plot->SetBinError(17,0.5992032);
   plot->SetBinError(18,0.4634665);
   plot->SetBinError(19,0.3722269);
   plot->SetBinError(20,0.2865288);
   plot->SetBinError(21,0.1554518);
   plot->SetBinError(22,0.12439);
   plot->SetBinError(23,2.542258);
   plot->SetBinError(24,0.01176006);
   plot->SetEntries(16571);
   plot->SetFillColor(44);
   plot->SetLineColor(44);
   plot->SetLineWidth(3);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events/0.025");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   tmp->Add(plot,"");
   Double_t xAxis3466[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3466);
   plot->SetBinContent(3,0.1083508);
   plot->SetBinContent(4,6.838009);
   plot->SetBinContent(5,81.36621);
   plot->SetBinContent(6,335.1057);
   plot->SetBinContent(7,831.0515);
   plot->SetBinContent(8,1263.405);
   plot->SetBinContent(9,551.9007);
   plot->SetBinContent(10,146.7799);
   plot->SetBinContent(11,59.73182);
   plot->SetBinContent(12,38.06043);
   plot->SetBinContent(13,24.66819);
   plot->SetBinContent(14,21.49263);
   plot->SetBinContent(15,13.01347);
   plot->SetBinContent(16,9.94713);
   plot->SetBinContent(17,4.914844);
   plot->SetBinContent(18,3.266614);
   plot->SetBinContent(19,2.517153);
   plot->SetBinContent(20,0.9814729);
   plot->SetBinContent(21,0.9745265);
   plot->SetBinContent(22,0.4319124);
   plot->SetBinContent(23,6.019057);
   plot->SetBinContent(24,0.08191483);
   plot->SetBinContent(25,0.05423444);
   plot->SetBinError(3,0.03398012);
   plot->SetBinError(4,0.5305053);
   plot->SetBinError(5,2.140232);
   plot->SetBinError(6,7.876418);
   plot->SetBinError(7,15.20221);
   plot->SetBinError(8,17.60197);
   plot->SetBinError(9,9.143445);
   plot->SetBinError(10,5.655914);
   plot->SetBinError(11,1.861079);
   plot->SetBinError(12,2.716361);
   plot->SetBinError(13,3.023877);
   plot->SetBinError(14,3.754722);
   plot->SetBinError(15,1.45854);
   plot->SetBinError(16,2.009246);
   plot->SetBinError(17,0.2488632);
   plot->SetBinError(18,0.4848259);
   plot->SetBinError(19,0.6370661);
   plot->SetBinError(20,0.1073531);
   plot->SetBinError(21,0.1930642);
   plot->SetBinError(22,0.05058337);
   plot->SetBinError(23,1.734799);
   plot->SetBinError(24,0.0243787);
   plot->SetBinError(25,0.05423444);
   plot->SetEntries(77254);
   plot->SetFillColor(6);
   plot->SetLineColor(6);
   plot->SetLineWidth(3);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events/0.025");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   tmp->Add(plot,"");
   Double_t xAxis3467[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3467);
   plot->SetBinContent(3,0.6164004);
   plot->SetBinContent(4,13.23775);
   plot->SetBinContent(5,135.2249);
   plot->SetBinContent(6,440.5295);
   plot->SetBinContent(7,1096.315);
   plot->SetBinContent(8,1605.606);
   plot->SetBinContent(9,819.4626);
   plot->SetBinContent(10,278.5656);
   plot->SetBinContent(11,146.2554);
   plot->SetBinContent(12,112.2506);
   plot->SetBinContent(13,89.82859);
   plot->SetBinContent(14,60.24597);
   plot->SetBinContent(15,44.4328);
   plot->SetBinContent(16,33.52791);
   plot->SetBinContent(17,16.83816);
   plot->SetBinContent(18,9.49518);
   plot->SetBinContent(19,5.952217);
   plot->SetBinContent(20,2.960419);
   plot->SetBinContent(21,1.937553);
   plot->SetBinContent(22,1.193917);
   plot->SetBinContent(23,8.738548);
   plot->SetBinContent(24,0.1084207);
   plot->SetBinError(3,0.3240257);
   plot->SetBinError(4,2.33132);
   plot->SetBinError(5,7.147717);
   plot->SetBinError(6,13.06296);
   plot->SetBinError(7,20.88758);
   plot->SetBinError(8,25.52182);
   plot->SetBinError(9,18.78323);
   plot->SetBinError(10,11.29752);
   plot->SetBinError(11,8.317503);
   plot->SetBinError(12,7.309784);
   plot->SetBinError(13,6.605378);
   plot->SetBinError(14,5.427314);
   plot->SetBinError(15,3.302165);
   plot->SetBinError(16,2.863444);
   plot->SetBinError(17,1.284663);
   plot->SetBinError(18,0.9790048);
   plot->SetBinError(19,0.7679726);
   plot->SetBinError(20,0.5408736);
   plot->SetBinError(21,0.305312);
   plot->SetBinError(22,0.2420265);
   plot->SetBinError(23,2.090281);
   plot->SetBinError(24,0.01947048);
   plot->SetEntries(14414);
   plot->SetFillColor(40);
   plot->SetLineColor(40);
   plot->SetLineWidth(3);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events/0.025");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   tmp->Add(plot,"");
   Double_t xAxis3468[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3468);
   plot->SetBinContent(3,3.568245);
   plot->SetBinContent(4,53.65485);
   plot->SetBinContent(5,273.4986);
   plot->SetBinContent(6,2169.652);
   plot->SetBinContent(7,5944.551);
   plot->SetBinContent(8,11464.65);
   plot->SetBinContent(9,8759.682);
   plot->SetBinContent(10,2789.538);
   plot->SetBinContent(11,1402.512);
   plot->SetBinContent(12,809.2284);
   plot->SetBinContent(13,516.387);
   plot->SetBinContent(14,374.0831);
   plot->SetBinContent(15,266.8452);
   plot->SetBinContent(16,177.848);
   plot->SetBinContent(17,108.2227);
   plot->SetBinContent(18,49.75082);
   plot->SetBinContent(19,27.74049);
   plot->SetBinContent(20,15.91002);
   plot->SetBinContent(21,9.185214);
   plot->SetBinContent(22,5.105289);
   plot->SetBinContent(23,45.34893);
   plot->SetBinContent(24,0.5980707);
   plot->SetBinContent(25,0.2065544);
   plot->SetBinError(3,0.5991609);
   plot->SetBinError(4,3.296993);
   plot->SetBinError(5,7.354654);
   plot->SetBinError(6,20.77383);
   plot->SetBinError(7,34.32929);
   plot->SetBinError(8,47.76462);
   plot->SetBinError(9,41.75709);
   plot->SetBinError(10,23.56137);
   plot->SetBinError(11,16.67598);
   plot->SetBinError(12,12.70835);
   plot->SetBinError(13,10.14158);
   plot->SetBinError(14,8.629971);
   plot->SetBinError(15,5.154082);
   plot->SetBinError(16,4.194547);
   plot->SetBinError(17,2.072574);
   plot->SetBinError(18,1.400991);
   plot->SetBinError(19,1.053495);
   plot->SetBinError(20,0.7963403);
   plot->SetBinError(21,0.4242384);
   plot->SetBinError(22,0.3172104);
   plot->SetBinError(23,4.761771);
   plot->SetBinError(24,0.02930156);
   plot->SetBinError(25,0.2065544);
   plot->SetEntries(208247);
   plot->SetFillColor(2);
   plot->SetLineColor(2);
   plot->SetLineWidth(3);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events/0.025");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   tmp->Add(plot,"");
   Double_t xAxis3469[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3469);
   plot->SetBinContent(3,15.44829);
   plot->SetBinContent(4,378.8927);
   plot->SetBinContent(5,2902.788);
   plot->SetBinContent(6,9501.07);
   plot->SetBinContent(7,20066.67);
   plot->SetBinContent(8,29564.69);
   plot->SetBinContent(9,14176.09);
   plot->SetBinContent(10,4573.238);
   plot->SetBinContent(11,2422.19);
   plot->SetBinContent(12,1546.566);
   plot->SetBinContent(13,1060.752);
   plot->SetBinContent(14,799.4861);
   plot->SetBinContent(15,573.6542);
   plot->SetBinContent(16,419.8196);
   plot->SetBinContent(17,279.2031);
   plot->SetBinContent(18,165.1116);
   plot->SetBinContent(19,102.6865);
   plot->SetBinContent(20,68.67142);
   plot->SetBinContent(21,46.90894);
   plot->SetBinContent(22,28.8406);
   plot->SetBinContent(23,249.1102);
   plot->SetBinContent(24,3.295349);
   plot->SetBinContent(25,2.360299);
   plot->SetBinError(3,0.9056927);
   plot->SetBinError(4,14.79526);
   plot->SetBinError(5,21.50985);
   plot->SetBinError(6,50.11503);
   plot->SetBinError(7,77.52092);
   plot->SetBinError(8,88.62513);
   plot->SetBinError(9,54.97418);
   plot->SetBinError(10,28.68219);
   plot->SetBinError(11,22.95368);
   plot->SetBinError(12,16.6568);
   plot->SetBinError(13,13.81759);
   plot->SetBinError(14,12.05697);
   plot->SetBinError(15,7.20657);
   plot->SetBinError(16,6.162582);
   plot->SetBinError(17,3.211453);
   plot->SetBinError(18,2.466212);
   plot->SetBinError(19,1.943531);
   plot->SetBinError(20,1.595166);
   plot->SetBinError(21,0.9317594);
   plot->SetBinError(22,0.7314367);
   plot->SetBinError(23,11.16043);
   plot->SetBinError(24,0.06681684);
   plot->SetBinError(25,0.6491194);
   plot->SetEntries(641910);
   plot->SetFillColor(4);
   plot->SetLineColor(4);
   plot->SetLineWidth(3);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events/0.025");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   tmp->Add(plot,"");
   tmp->Draw("histsame");
   
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
   entry=leg->AddEntry("AlphaT_all","WW/ZZ/WZ","L");
   entry->SetLineColor(44);
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
   leg->Draw();
   Double_t xAxis3470[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3470);
   plot->SetBinContent(3,15.5);
   plot->SetBinContent(4,350);
   plot->SetBinContent(5,3025);
   plot->SetBinContent(6,11405);
   plot->SetBinContent(7,26449);
   plot->SetBinContent(8,40423);
   plot->SetBinContent(9,21969);
   plot->SetBinContent(10,7253);
   plot->SetBinContent(11,3732);
   plot->SetBinContent(12,2276);
   plot->SetBinContent(13,1611);
   plot->SetBinContent(14,1187);
   plot->SetBinContent(15,821);
   plot->SetBinContent(16,628.5);
   plot->SetBinContent(17,394);
   plot->SetBinContent(18,210.8);
   plot->SetBinContent(19,122.6);
   plot->SetBinContent(20,86.4);
   plot->SetBinContent(21,57.3);
   plot->SetBinContent(22,36.7);
   plot->SetBinContent(23,293.5);
   plot->SetBinContent(24,3.84058);
   plot->SetBinContent(25,1);
   plot->SetBinError(3,2.783882);
   plot->SetBinError(4,18.70829);
   plot->SetBinError(5,55);
   plot->SetBinError(6,106.7942);
   plot->SetBinError(7,162.6315);
   plot->SetBinError(8,201.0547);
   plot->SetBinError(9,148.2194);
   plot->SetBinError(10,85.16455);
   plot->SetBinError(11,61.0901);
   plot->SetBinError(12,47.70744);
   plot->SetBinError(13,40.13726);
   plot->SetBinError(14,34.45287);
   plot->SetBinError(15,20.2608);
   plot->SetBinError(16,17.7271);
   plot->SetBinError(17,8.876936);
   plot->SetBinError(18,6.493073);
   plot->SetBinError(19,4.951767);
   plot->SetBinError(20,4.156922);
   plot->SetBinError(21,2.393742);
   plot->SetBinError(22,1.915724);
   plot->SetBinError(23,12.11404);
   plot->SetBinError(24,0.1668241);
   plot->SetBinError(25,1);
   plot->SetMinimum(0.11);
   plot->SetMaximum(441804.8);
   plot->SetEntries(128232);

   ci = TColor::GetColor("#000099");
   plot->SetLineColor(ci);
   plot->SetLineWidth(2);
   plot->SetMarkerStyle(20);
   plot->SetMarkerSize(1.5);
   plot->GetXaxis()->SetTitle("#alpha_{T}");
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.035);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Events");
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.035);
   plot->GetYaxis()->SetTitleSize(0.035);
   plot->GetYaxis()->SetTitleOffset(1.3);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   plot->Draw("PSAME");
   TLatex *   tex = new TLatex(0.1,0.95,"OneMuon_200_2    Jet Multiplicity=all");
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
      tex = new TLatex(0.7,0.79,"\\int L dt = 19.131 fb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.03);
   tex->SetLineWidth(2);
   tex->Draw();
   u->Modified();
   AlphaT_all->cd();
  
// ------------>Primitives in pad: d
   d = new TPad("d", "d",0.01,0.01,0.99,0.25);
   d->Draw();
   d->cd();
   d->Range(-0.3875,0.375,3.4875,1.625);
   d->SetFillColor(0);
   d->SetBorderMode(0);
   d->SetBorderSize(2);
   d->SetTickx(1);
   d->SetTicky(1);
   d->SetFrameBorderMode(0);
   d->SetFrameBorderMode(0);
   Double_t xAxis3471[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3471);
   plot->SetBinContent(3,0.7756689);
   plot->SetBinContent(4,0.7662303);
   plot->SetBinContent(5,0.8859262);
   plot->SetBinContent(6,0.9111281);
   plot->SetBinContent(7,0.9404287);
   plot->SetBinContent(8,0.9149516);
   plot->SetBinContent(9,0.8970911);
   plot->SetBinContent(10,0.9222842);
   plot->SetBinContent(11,0.914208);
   plot->SetBinContent(12,0.8967294);
   plot->SetBinContent(13,0.9385252);
   plot->SetBinContent(14,0.9311569);
   plot->SetBinContent(15,0.8966093);
   plot->SetBinContent(16,0.951725);
   plot->SetBinContent(17,0.9278948);
   plot->SetBinContent(18,0.8887816);
   plot->SetBinContent(19,0.8459388);
   plot->SetBinContent(20,0.9377598);
   plot->SetBinContent(21,0.9374909);
   plot->SetBinContent(22,0.9935026);
   plot->SetBinContent(23,0.9110864);
   plot->SetBinContent(24,0.9035852);
   plot->SetBinContent(25,0.381521);
   plot->SetBinError(3,0.1393143);
   plot->SetBinError(4,0.04095673);
   plot->SetBinError(5,0.01610775);
   plot->SetBinError(6,0.008531626);
   plot->SetBinError(7,0.005782575);
   plot->SetBinError(8,0.004550759);
   plot->SetBinError(9,0.006052453);
   plot->SetBinError(10,0.01082944);
   plot->SetBinError(11,0.01496491);
   plot->SetBinError(12,0.01879643);
   plot->SetBinError(13,0.02338289);
   plot->SetBinError(14,0.02702698);
   plot->SetBinError(15,0.0221267);
   plot->SetBinError(16,0.02684379);
   plot->SetBinError(17,0.02090574);
   plot->SetBinError(18,0.0273763);
   plot->SetBinError(19,0.03416715);
   plot->SetBinError(20,0.04511799);
   plot->SetBinError(21,0.03916424);
   plot->SetBinError(22,0.05186041);
   plot->SetBinError(23,0.03760456);
   plot->SetBinError(24,0.03924923);
   plot->SetBinError(25,0.3942739);
   plot->SetMinimum(0.5);
   plot->SetMaximum(1.5);
   plot->SetEntries(8813.052);
   
   TF1 *fit = new TF1("fit","pol0",0,3.1);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetLineWidth(3);
   fit->SetChisquare(59.31009);
   fit->SetNDF(20);
   fit->GetXaxis()->SetLabelFont(42);
   fit->GetXaxis()->SetLabelOffset(0.007);
   fit->GetXaxis()->SetLabelSize(0.05);
   fit->GetXaxis()->SetTitleSize(0.05);
   fit->GetYaxis()->SetLabelFont(42);
   fit->GetYaxis()->SetLabelOffset(0.007);
   fit->GetYaxis()->SetLabelSize(0.05);
   fit->SetParameter(0,0.9155309);
   fit->SetParError(0,0.002557522);
   fit->SetParLimits(0,0,0);
   plot->GetListOfFunctions()->Add(fit);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.875,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   text = ptstats->AddText("#chi^{2} / ndf = 59.31 / 20");
   text = ptstats->AddText("p0       = 0.9155 #pm 0.0026 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   plot->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(plot);

   ci = TColor::GetColor("#000099");
   plot->SetLineColor(ci);
   plot->SetLineWidth(2);
   plot->SetMarkerStyle(20);
   plot->SetMarkerSize(1.5);
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.12);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Data/MC");
   plot->GetYaxis()->SetNdivisions(505);
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.11);
   plot->GetYaxis()->SetTitleSize(0.1);
   plot->GetYaxis()->SetTitleOffset(0.5);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   plot->Draw("p");
   
   TGraphErrors *gre = new TGraphErrors(24);
   gre->SetName("Graph_from_plot");
   gre->SetTitle("");
   gre->SetFillColor(17);
   gre->SetFillStyle(3244);

   ci = TColor::GetColor("#000099");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(1.5);
   gre->SetPoint(0,0.05,1);
   gre->SetPointError(0,0.05,0);
   gre->SetPoint(1,0.125,1);
   gre->SetPointError(1,0.025,0);
   gre->SetPoint(2,0.2,1);
   gre->SetPointError(2,0.05,0.05707289);
   gre->SetPoint(3,0.275,1);
   gre->SetPointError(3,0.025,0.03363256);
   gre->SetPoint(4,0.325,1);
   gre->SetPointError(4,0.025,0.007022517);
   gre->SetPoint(5,0.375,1);
   gre->SetPointError(5,0.025,0.004507891);
   gre->SetPoint(6,0.425,1);
   gre->SetPointError(6,0.025,0.003155643);
   gre->SetPoint(7,0.475,1);
   gre->SetPointError(7,0.025,0.002387864);
   gre->SetPoint(8,0.525,1);
   gre->SetPointError(8,0.025,0.002951148);
   gre->SetPoint(9,0.575,1);
   gre->SetPointError(9,0.025,0.005000201);
   gre->SetPoint(10,0.625,1);
   gre->SetPointError(10,0.025,0.007281773);
   gre->SetPoint(11,0.675,1);
   gre->SetPointError(11,0.025,0.008840008);
   gre->SetPoint(12,0.725,1);
   gre->SetPointError(12,0.025,0.01089116);
   gre->SetPoint(13,0.775,1);
   gre->SetPointError(13,0.025,0.01278562);
   gre->SetPoint(14,0.85,1);
   gre->SetPointError(14,0.05,0.0105057);
   gre->SetPoint(15,0.95,1);
   gre->SetPointError(15,0.05,0.01257111);
   gre->SetPoint(16,1.125,1);
   gre->SetPointError(16,0.125,0.009618446);
   gre->SetPoint(17,1.375,1);
   gre->SetPointError(17,0.125,0.01296331);
   gre->SetPoint(18,1.625,1);
   gre->SetPointError(18,0.125,0.0169315);
   gre->SetPoint(19,1.875,1);
   gre->SetPointError(19,0.125,0.02049275);
   gre->SetPoint(20,2.25,1);
   gre->SetPointError(20,0.25,0.01794364);
   gre->SetPoint(21,2.75,1);
   gre->SetPointError(21,0.25,0.02284616);
   gre->SetPoint(22,3.05,1);
   gre->SetPointError(22,0.05,0.03939678);
   gre->SetPoint(23,6.55,0.9035852);
   gre->SetPointError(23,3.45,0.01887294);
   
   TH1F *Graph_Graph_from_plot693 = new TH1F("Graph_Graph_from_plot693","",100,0,11);
   Graph_Graph_from_plot693->SetMinimum(0.8674762);
   Graph_Graph_from_plot693->SetMaximum(1.074309);
   Graph_Graph_from_plot693->SetDirectory(0);
   Graph_Graph_from_plot693->SetStats(0);
   Graph_Graph_from_plot693->GetXaxis()->SetLabelFont(42);
   Graph_Graph_from_plot693->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot693->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot693->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_from_plot693->GetYaxis()->SetLabelFont(42);
   Graph_Graph_from_plot693->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot693->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_from_plot693->GetZaxis()->SetLabelFont(42);
   Graph_Graph_from_plot693->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_from_plot693->GetZaxis()->SetLabelSize(0.05);
   gre->SetHistogram(Graph_Graph_from_plot693);
   
   gre->Draw("2");
   TLine *line = new TLine(0,1,3.1,1);
   line->SetLineWidth(3);
   line->Draw();
   Double_t xAxis3472[25] = {0, 0.1, 0.15, 0.25, 0.3, 0.35, 0.4, 0.45, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.9, 1, 1.25, 1.5, 1.75, 2, 2.5, 3, 3.1, 10}; 
   
   TH1D *plot = new TH1D("plot","",24, xAxis3472);
   plot->SetBinContent(3,0.7756689);
   plot->SetBinContent(4,0.7662303);
   plot->SetBinContent(5,0.8859262);
   plot->SetBinContent(6,0.9111281);
   plot->SetBinContent(7,0.9404287);
   plot->SetBinContent(8,0.9149516);
   plot->SetBinContent(9,0.8970911);
   plot->SetBinContent(10,0.9222842);
   plot->SetBinContent(11,0.914208);
   plot->SetBinContent(12,0.8967294);
   plot->SetBinContent(13,0.9385252);
   plot->SetBinContent(14,0.9311569);
   plot->SetBinContent(15,0.8966093);
   plot->SetBinContent(16,0.951725);
   plot->SetBinContent(17,0.9278948);
   plot->SetBinContent(18,0.8887816);
   plot->SetBinContent(19,0.8459388);
   plot->SetBinContent(20,0.9377598);
   plot->SetBinContent(21,0.9374909);
   plot->SetBinContent(22,0.9935026);
   plot->SetBinContent(23,0.9110864);
   plot->SetBinContent(24,0.9035852);
   plot->SetBinContent(25,0.381521);
   plot->SetBinError(3,0.1393143);
   plot->SetBinError(4,0.04095673);
   plot->SetBinError(5,0.01610775);
   plot->SetBinError(6,0.008531626);
   plot->SetBinError(7,0.005782575);
   plot->SetBinError(8,0.004550759);
   plot->SetBinError(9,0.006052453);
   plot->SetBinError(10,0.01082944);
   plot->SetBinError(11,0.01496491);
   plot->SetBinError(12,0.01879643);
   plot->SetBinError(13,0.02338289);
   plot->SetBinError(14,0.02702698);
   plot->SetBinError(15,0.0221267);
   plot->SetBinError(16,0.02684379);
   plot->SetBinError(17,0.02090574);
   plot->SetBinError(18,0.0273763);
   plot->SetBinError(19,0.03416715);
   plot->SetBinError(20,0.04511799);
   plot->SetBinError(21,0.03916424);
   plot->SetBinError(22,0.05186041);
   plot->SetBinError(23,0.03760456);
   plot->SetBinError(24,0.03924923);
   plot->SetBinError(25,0.3942739);
   plot->SetMinimum(0.5);
   plot->SetMaximum(1.5);
   plot->SetEntries(8813.052);
   
   TF1 *fit = new TF1("fit","pol0",0,3.1);
   fit->SetFillColor(19);
   fit->SetFillStyle(0);
   fit->SetLineWidth(3);
   fit->SetChisquare(59.31009);
   fit->SetNDF(20);
   fit->GetXaxis()->SetLabelFont(42);
   fit->GetXaxis()->SetLabelOffset(0.007);
   fit->GetXaxis()->SetLabelSize(0.05);
   fit->GetXaxis()->SetTitleSize(0.05);
   fit->GetYaxis()->SetLabelFont(42);
   fit->GetYaxis()->SetLabelOffset(0.007);
   fit->GetYaxis()->SetLabelSize(0.05);
   fit->SetParameter(0,0.9155309);
   fit->SetParError(0,0.002557522);
   fit->SetParLimits(0,0,0);
   plot->GetListOfFunctions()->Add(fit);
   
   ptstats = new TPaveStats(0.62,0.875,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   text = ptstats->AddText("#chi^{2} / ndf = 59.31 / 20");
   text = ptstats->AddText("p0       = 0.9155 #pm 0.0026 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   plot->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(plot);

   ci = TColor::GetColor("#000099");
   plot->SetLineColor(ci);
   plot->SetLineWidth(2);
   plot->SetMarkerStyle(20);
   plot->SetMarkerSize(1.5);
   plot->GetXaxis()->SetRange(1,23);
   plot->GetXaxis()->SetLabelFont(42);
   plot->GetXaxis()->SetLabelSize(0.12);
   plot->GetXaxis()->SetTitleSize(0.035);
   plot->GetXaxis()->SetTitleFont(42);
   plot->GetYaxis()->SetTitle("Data/MC");
   plot->GetYaxis()->SetNdivisions(505);
   plot->GetYaxis()->SetLabelFont(42);
   plot->GetYaxis()->SetLabelSize(0.11);
   plot->GetYaxis()->SetTitleSize(0.1);
   plot->GetYaxis()->SetTitleOffset(0.5);
   plot->GetYaxis()->SetTitleFont(42);
   plot->GetZaxis()->SetLabelFont(42);
   plot->GetZaxis()->SetLabelSize(0.035);
   plot->GetZaxis()->SetTitleSize(0.035);
   plot->GetZaxis()->SetTitleFont(42);
   plot->Draw("PSAME");
   d->Modified();
   AlphaT_all->cd();
   AlphaT_all->Modified();
   AlphaT_all->cd();
   AlphaT_all->SetSelected(AlphaT_all);
}

