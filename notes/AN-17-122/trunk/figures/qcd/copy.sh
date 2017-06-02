alias wget='wget -e robots=off --no-parent -nH -nd -N --no-use-server-timestamps -c -r -l1 -R index.html*'
DIR="http://www.hep.ph.ic.ac.uk/~sdb15/Analysis/RA1/201706_Jun/01_Fit_QcdEstimation/plots/"

cd sb_mhtmet/
wget ${DIR}/Estimation/QcdSb/obsYields_QcdSb.pdf	   
wget ${DIR}/Estimation/QcdSb/postFitEwkYields_QcdSb.pdf 
wget ${DIR}/Estimation/QcdSb/postFitQcdYields_QcdSb.pdf 
wget ${DIR}/Estimation/QcdSb/qcdSbEwk_MC.pdf		   
wget ${DIR}/Estimation/QcdSb/rateParsQcd_QcdSb.pdf
cd ../

cd sb_bdphi/
wget ${DIR}/Estimation/BDPhiSb/obsYields_QcdSb.pdf	   
wget ${DIR}/Estimation/BDPhiSb/postFitEwkYields_QcdSb.pdf 
wget ${DIR}/Estimation/BDPhiSb/postFitQcdYields_QcdSb.pdf 
wget ${DIR}/Estimation/BDPhiSb/qcdSbEwk_MC.pdf		   
wget ${DIR}/Estimation/BDPhiSb/rateParsQcd_QcdSb.pdf
cd ../

cd sb_double/
wget ${DIR}/Estimation/DoubleSb/obsYields_QcdSb.pdf	   
wget ${DIR}/Estimation/DoubleSb/postFitEwkYields_QcdSb.pdf 
wget ${DIR}/Estimation/DoubleSb/postFitQcdYields_QcdSb.pdf 
wget ${DIR}/Estimation/DoubleSb/qcdSbEwk_MC.pdf		   
wget ${DIR}/Estimation/DoubleSb/rateParsQcd_QcdSb.pdf
cd ../

cd pred/
wget ${DIR}/Estimation/QcdSb/predictedQcdYields_Signal.pdf
wget ${DIR}/Estimation/QcdSb/predictedEwkYields_Signal.pdf
wget ${DIR}/Estimation/QcdSb/predictedQcdDivEwk_Signal.pdf
cd ../

cd val_njet_ht/
wget ${DIR}/Validation/Combined/rateParRatioMhtMetDivDouble1d.pdf
wget ${DIR}/Validation/Combined/rateParRatioBDPhiDivDoubleSb1d.pdf
cd ../

unalias wget
