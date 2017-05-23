DIR=http://www.hep.ph.ic.ac.uk/~sdb15/Analysis/RA1/201705_May/18_TransferFactors/
rm ./plots.tar.gz
wgetr ${DIR}/plots.tar.gz 
tar zxvf plots.tar.gz
cd ./plots/
rm tf*.png
rm hist*.png
rm hist*.pdf
rm tf*_gj_*.pdf
rm tf*_mu_Zinv_*.pdf
rm tf*_mu_Ewk_*.pdf
rm tf*_mumu_Ttw_*.pdf
