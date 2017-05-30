#DIR=http://www.hep.ph.ic.ac.uk/~sdb15/Analysis/RA1/201705_May/18_TransferFactors/
DIR=http://www.hep.ph.ic.ac.uk/~sdb15/Analysis/RA1/201705_May/30_TransferFactors/
rm ./plots.tar.gz
wgetr ${DIR}/plots/plots.tar.gz 
tar zxvf plots.tar.gz
cd ./plots/
rm tf*.png
rm hist*.png
rm hist*.pdf
rm tf*_gj_*.pdf
rm tf*_mu_Zinv_*.pdf
rm tf*_mu_Ewk_*.pdf
rm tf*_mumu_Ttw_*.pdf
rm tf*_mumu_Ewk_*.pdf
rm tf*1d*.pdf
