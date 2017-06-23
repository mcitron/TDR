alias wget='wget -e robots=off --no-parent -nH -r -R index.html*,*.png,*.root,*.txt,*.csv,*.pkl -nd'
# --cut-dirs=5'

# 1 in 8
#BASE="1in8/"
#MR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Mountain/"
#NUIS_PRE="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys1_nuisances-prefit/"
#NUIS_POST="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys1_nuisances-postfit/"
#SHAPE_PRE="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-prefit/"
#SHAPE_CR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-CRfit/"
#SHAPE_POST="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/Stats/Fit_wMHT_1in8_noQcdMono_toys200_Shapes-postfit/"

# Unblinded 
#BASE="36invfb/"
#MR="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_IncMht_formulaSyst/postFitNorm/"
#NUIS_PRE="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_IncMht_formulaSyst/postFitNuisance/" #@@
#NUIS_POST="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_formulaSyst/postFitNuisance/"
#SHAPE_PRE="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_formulaSyst/postCRFitShape/" #@@
#SHAPE_CR="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_formulaSyst/postCRFitShape/"
#SHAPE_POST="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_formulaSyst/postFitShape/"

# Freeze 
BASE="36invfb_freeze/"
MR="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170623/Unblinding36fb2017_v5_formulaSyst/postFitNorm/"
#NUIS_PRE="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_IncMht_formulaSyst/postFitNuisance/" #@@
NUIS_POST="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170623/Unblinding36fb2017_v5_formulaSyst/postFitNuisance/"
#SHAPE_PRE="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_formulaSyst/postCRFitShape/" #@@
SHAPE_CR="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170623/Unblinding36fb2017_v5_formulaSyst/postCRFitShape/"
SHAPE_POST="http://www.hep.ph.ic.ac.uk/~klo2/RA1/BTagFormula/FullFit/Log/20170616/Unblinding36fb2017_v3_formulaSyst/postFitShape/"

mkdir ${BASE}/mono/
mkdir ${BASE}/asym/
mkdir ${BASE}/sym/
mkdir ${BASE}/all/
mkdir ${BASE}/postfit/nuis/
mkdir ${BASE}/crfit/shapes/
mkdir ${BASE}/pstfit/shapes/

wget -O ${BASE}/mono/summaryPlot_Monojet_prefit.pdf               ${MR}/summaryPlot_Monojet_prefit.pdf
wget -O ${BASE}/mono/summaryPlot_Monojet_fit_b.pdf                ${MR}/summaryPlot_Monojet_fit_b.pdf
wget -O ${BASE}/mono/summaryPlot_Monojet_prefit_overlay_fit_b.pdf ${MR}/summaryPlot_Monojet_prefit_overlay_fit_b.pdf

wget -O ${BASE}/asym/summaryPlot_Asymmetric_prefit.pdf		     ${MR}/summaryPlot_Asymmetric_prefit.pdf
wget -O ${BASE}/asym/summaryPlot_Asymmetric_fit_b.pdf		     ${MR}/summaryPlot_Asymmetric_fit_b.pdf
wget -O ${BASE}/asym/summaryPlot_Asymmetric_prefit_overlay_fit_b.pdf ${MR}/summaryPlot_Asymmetric_prefit_overlay_fit_b.pdf

wget -O ${BASE}/symm/summaryPlot_Symmetric_prefit.pdf		    ${MR}/summaryPlot_Symmetric_prefit.pdf
wget -O ${BASE}/symm/summaryPlot_Symmetric_fit_b.pdf		    ${MR}/summaryPlot_Symmetric_fit_b.pdf
wget -O ${BASE}/symm/summaryPlot_Symmetric_prefit_overlay_fit_b.pdf ${MR}/summaryPlot_Symmetric_prefit_overlay_fit_b.pdf

wget -O ${BASE}/all/ratios_all_prefit.pdf ${MR}/ratios_all_prefit.pdf
wget -O ${BASE}/all/pulls_all_prefit.pdf ${MR}/pulls_all_prefit.pdf

#wget -P ${BASE}/prefit/nuis/ ${NUIS_PRE}/
wget -P ${BASE}/postfit/nuis/ ${NUIS_POST}/

#wget -P ${BASE}/prefit/shapes/ ${SHAPE_PRE}/
wget -P ${BASE}/crfit/shapes/ ${SHAPE_CR}/
wget -P ${BASE}/postfit/shapes/ ${SHAPE_POST}/

unalias wget
