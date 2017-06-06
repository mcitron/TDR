# need to install the "tabulate" package (pip install tabulate)

from tabulate import tabulate

# Cells in table: [ selection, efficiency for sample 1, efficiency for sample 2 ],

table = [
    [ "-", "100", "100" ],
    [ "Trigger selection", "/", "/" ],
    [ "n_jet >= 2 (pT^j > 40 GeV)", "/", "/" ],
    [ "pT^j1 > 100 GeV", "/", "/" ],
    [ "|eta^j1| < 2.5", "/", "/" ],
    [ "CHF^j1", "/", "/" ],
    [ "pT^j2 > 100 GeV", "/", "/" ],
    [ "HT^miss > 130 GeV (pT^j > 40 GeV)", "/", "/" ],
    [ "bDPhi > 0.5", "/", "/" ],
    [ "Alpha_T H_T-dependent cuts", "/", "/" ],
    [ "HT^miss / E_T^miss < 1.25", "/", "/" ],
    [ "Forward jet veto", "/", "/" ],
    [ "Photon veto", "/", "/" ],
    [ "Lepton vetoes", "/", "/" ],
    [ "Isolated track veto", "/", "/" ],
    [ "n_jet >= 5", "/", "/" ],
    [ "HT > 800 GeV (pT^j > 40 GeV)", "/", "/" ],
    [ "HT^miss > 800 GeV (pT^j > 40 GeV)", "/", "/" ],
    [ "n_b-jet >= 1 (pT^j > 40 GeV)", "/", "/" ],
    [ "n_b-jet >= 2 (pT^j > 40 GeV)", "/", "/" ],
]

headers = [ "Event selection", "T1tttt (1300, 100)", "T1tttt (800, 400)"]

print tabulate( table, headers, numalign="decimal", floatfmt=".2f", tablefmt="latex" )

# Figure out how to get proper latex symbols for event selections
