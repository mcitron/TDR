#DIR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/MhtValidation/MhtValid_FS_nlonisr_SRBinning/"
#DIR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/MhtValidation/MhtValid_FS_nlonisr/"
#DIR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/MhtValidation/MhtValid_FS_nlonisr_correlateNJet/"
DIR="https://www.hep.ph.ic.ac.uk/~cl4010/RA1/MhtValidation/MhtValid_FS_nlonisr_correlateHt/"
wgetr $DIR
cd fits/Mu/
wgetr ${DIR}/fits/Mu/
cd ../MuMu/
wgetr ${DIR}/fits/MuMu/
cd ../../
