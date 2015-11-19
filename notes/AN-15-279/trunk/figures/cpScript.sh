output550=/Users/matthewcitron/Work/AlphaTDR2/notes/AN-15-004/trunk/figures/template13TeV/550pb/
output1p2=/Users/matthewcitron/Work/AlphaTDR2/notes/AN-15-004/trunk/figures/template13TeV/1p2fb/
output3=/Users/matthewcitron/Work/AlphaTDR2/notes/AN-15-004/trunk/figures/template13TeV/3fb/
output8TeV=/Users/matthewcitron/Work/AlphaTDR2/notes/AN-15-004/trunk/figures/template/linear/
input8TeV=/Users/matthewcitron/Work/shapeStuff/test8TeVProductionFull/scale_ht_variable_mht/
input13TeVExp=/Users/matthewcitron/Work/shapeStuff/test13TeVExpectedLumi3/scale_ht_variable_mht/
input1p2=/Users/matthewcitron/Work/shapeStuff/20151106_htBinnedTTbar_full/scale_ht_variable_mht/

cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/SingleMu/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_SingleMu.pdf $output550
#cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/DoubleMu/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_DoubleMu.pdf $output550
cp  ~/Work/shapeStuff/newTreesNewSkimGoodCat/2015_10_14_REV_4/scale_ht_variable_mht/DoubleMu/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_DoubleMu.pdf $output550
cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/SinglePhoton/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_SinglePhoton.pdf $output550
cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/SingleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SingleMu.pdf $output550
cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/DoubleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_DoubleMu.pdf $output550
cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/SinglePhoton/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SinglePhoton.pdf $output550

cp  ${input1p2}/SingleMu/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_SingleMu.pdf $output1p2
#cp  ~/Work/shapeStuff/test13TeVObserved/scale_ht_variable_mht/DoubleMu/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_DoubleMu.pdf $output1p2
cp  ${input1p2}/DoubleMu/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_DoubleMu.pdf $output1p2
cp  ${input1p2}/SinglePhoton/fitOut/Linear2DShiftMean/pull_Linear2DShiftMean_p1_SinglePhoton.pdf $output1p2
cp  ${input1p2}/SingleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SingleMu.pdf $output1p2
cp  ${input1p2}/DoubleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_DoubleMu.pdf $output1p2
cp  ${input1p2}/SinglePhoton/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SinglePhoton.pdf $output1p2


cp ${input8TeV}/SingleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SingleMu.pdf $output8TeV
cp ${input8TeV}/DoubleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_DoubleMu.pdf $output8TeV
cp ${input8TeV}/SinglePhoton/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SinglePhoton.pdf $output8TeV
cp ${input8TeV}/SingleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SingleMu.pdf $output8TeV
cp ${input8TeV}/DoubleMu/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_DoubleMu.pdf $output8TeV
cp ${input8TeV}/SinglePhoton/fitOut/Linear2DShiftMean/frenchFlagPull_Linear2DShiftMean_p1_SinglePhoton.pdf $output8TeV
cp ${input13TeVExp}/Ttw/fitOut/Linear2DShiftMean/frenchFlagErrComplete_Linear2DShiftMean_p1_Ttw.pdf $output3
cp ${input13TeVExp}/Zinv/fitOut/Linear2DShiftMean/frenchFlagErrComplete_Linear2DShiftMean_p1_Zinv.pdf $output3
