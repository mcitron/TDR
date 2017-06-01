MR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Mountain/"
NUIS_PRE="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys1_nuisances-prefit/"
NUIS_POST="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys1_nuisances-postfit/"
SHAPE_PRE="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-prefit/"
SHAPE_POST="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-postfit/"

cd mono/
wgetr ${MR}/summaryPlot_Monojet_prefit.pdf
wgetr ${MR}/summaryPlot_Monojet_fit_b.pdf
wgetr ${MR}/summaryPlot_Monojet_prefit_overlay_fit_b.pdf	
cd ../

cd asym/
wgetr ${MR}/summaryPlot_Asymmetric_prefit.pdf
wgetr ${MR}/summaryPlot_Asymmetric_fit_b.pdf
wgetr ${MR}/summaryPlot_Asymmetric_prefit_overlay_fit_b.pdf	
cd ../

cd symm/
wgetr ${MR}/summaryPlot_Symmetric_prefit.pdf
wgetr ${MR}/summaryPlot_Symmetric_fit_b.pdf
wgetr ${MR}/summaryPlot_Symmetric_prefit_overlay_fit_b.pdf	
cd ../

cd all/
wgetr ${MR}/ratios_all_prefit.pdf
wgetr ${MR}/pulls_all_prefit.pdf
cd ../

cd prefit/nuis/
wgetr ${NUIS_PRE}/
rm *.png
cd ../../

cd prefit/shapes/
wgetr ${SHAPE_PRE}/
rm *.png
cd ../../

cd postfit/nuis/
wgetr ${NUIS_POST}/
rm *.png
cd ../../

cd postfit/shapes/
wgetr ${SHAPE_POST}/
rm *.png
cd ../../



