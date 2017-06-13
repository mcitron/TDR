#alias wgetr='wget -e robots=off --no-parent -nH -nd -N --no-use-server-timestamps -c -r -l1 -R index.html*'
alias wgetr='wget -N'
DIR="http://www.hep.ph.ic.ac.uk/~sdb15/Analysis/RA1/201706_Jun/01_Fit_QcdEstimation/plots/"

cd sb_mhtmet/
wgetr ${DIR}/Estimation/QcdSb/obsYields_QcdSb.pdf	   
wgetr ${DIR}/Estimation/QcdSb/postFitEwkYields_QcdSb.pdf 
wgetr ${DIR}/Estimation/QcdSb/postFitQcdYields_QcdSb.pdf 
wgetr ${DIR}/Estimation/QcdSb/rateParsQcd_QcdSb.pdf
cd ../

cd sb_bdphi/
wgetr ${DIR}/Estimation/BDPhiSb/obsYields_QcdSb.pdf
wgetr ${DIR}/Estimation/BDPhiSb/postFitEwkYields_QcdSb.pdf 
wgetr ${DIR}/Estimation/BDPhiSb/postFitQcdYields_QcdSb.pdf 
wgetr ${DIR}/Estimation/BDPhiSb/rateParsQcd_QcdSb.pdf
cd ../

cd sb_double/
wgetr ${DIR}/Estimation/DoubleSb/obsYields_QcdSb.pdf	   
wgetr ${DIR}/Estimation/DoubleSb/postFitEwkYields_QcdSb.pdf 
wgetr ${DIR}/Estimation/DoubleSb/postFitQcdYields_QcdSb.pdf 
wgetr ${DIR}/Estimation/DoubleSb/rateParsQcd_QcdSb.pdf
cd ../

cd pred/
wgetr ${DIR}/Estimation/Combined/meanPredQcdYields.pdf
#wgetr ${DIR}/Estimation/QcdSb/predictedEwkYields_Signal.pdf
wgetr ${DIR}/Estimation/Combined/meanPredQcdDivEwk.pdf
cd ../

cd val_njet_ht/
wgetr ${DIR}/Validation/Combined/rateParRatioMhtMetDivDouble1d.pdf
wgetr ${DIR}/Validation/Combined/rateParRatioBDPhiDivDoubleSb1d.pdf
cd ../

unalias wgetr
