alias wget='wget -e robots=off --no-parent -nH --cut-dirs=4 -r -R index.html*,*.png,*.root,*.txt,*.csv,*.pkl'
#alias wget='wget -e robots=off -nH -r -R index.html*'
#alias wget='wget -e robots=off --no-parent -nH -c -r -R index.html*'

MR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Mountain/"
NUIS_PRE="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys1_nuisances-prefit/"
NUIS_POST="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys1_nuisances-postfit/"
SHAPE_PRE="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-prefit/"
SHAPE_POST="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-postfit/"
SHAPE_CR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-CRfit/"

#cd mono/
#wget ${MR}/summaryPlot_Monojet_prefit.pdf
#wget ${MR}/summaryPlot_Monojet_fit_b.pdf
#wget ${MR}/summaryPlot_Monojet_prefit_overlay_fit_b.pdf	
#cd ../
#
#cd asym/
#wget ${MR}/summaryPlot_Asymmetric_prefit.pdf
#wget ${MR}/summaryPlot_Asymmetric_fit_b.pdf
#wget ${MR}/summaryPlot_Asymmetric_prefit_overlay_fit_b.pdf	
#cd ../
#
#cd symm/
#wget ${MR}/summaryPlot_Symmetric_prefit.pdf
#wget ${MR}/summaryPlot_Symmetric_fit_b.pdf
#wget ${MR}/summaryPlot_Symmetric_prefit_overlay_fit_b.pdf	
#cd ../
#
#cd all/
#wget ${MR}/ratios_all_prefit.pdf
#wget ${MR}/pulls_all_prefit.pdf
#cd ../
#
#cd prefit/nuis/
#wget ${NUIS_PRE}/
#rm *.png
#cd ../../
#
#cd postfit/nuis/
#wget ${NUIS_POST}/
#rm *.png
#cd ../../
#
#cd prefit/shapes/
#wget ${SHAPE_PRE}/
#rm *.png
#cd ../../

cd crfit/shapes/
wget ${SHAPE_CR}/
rm *.png
cd ../../

#cd postfit/shapes/
#wget ${SHAPE_POST}/
#rm *.png
#cd ../../

unalias wget
