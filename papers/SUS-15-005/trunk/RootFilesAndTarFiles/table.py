import csv

values = {}

with open('RootFilesAndTarFiles/aggregated_results_crfit.csv') as csvfile:
    spamreader = csv.reader(csvfile, delimiter=',')#, quotechar='|')
    for row in spamreader:
        if "njet" in row[0] : continue 
        #print row
        values[ row[0], row[1], int(row[4]) ] = ( int(row[8]), float(row[6]), float(row[7]) )

print len( values.keys() )
for key,val in values.items() :
    print key,val[0],val[1],val[2]

cats = [ 
    ("le2j","eq0b"),
    ("le2j","ge1b"),
    ("ge3a","le1b"),
    ("ge3a","ge2b"),
    ("ge3j","le1b"),
    ("ge3j","ge2b"),
    ("ge5j","le1b"),
    ("ge5j","ge2b"),
    ]

labels = {
    "le2j":"mono.",
    "ge3a":"asym.",
    "ge3j":"low",
    "ge5j":"high",
    "eq0b":"low",
    "ge1b":"high",
    "le1b":"low",
    "ge2b":"high",
    }

mht_bins = [130,200,300,400,500,600,700,800]

str = ""

for cat in cats :
    
    njet = cat[0]
    nb = cat[1]

    # Data
    str += "Data & "
    str += labels[njet]
    str += " & "
    str += labels[nb]
    for mht in mht_bins :
        key = (njet,nb,mht)
        if key not in values.keys() : 
            print 
            continue
        data = values[key][0]
        str += " & "
        str += "{:.0f}".format(data) 
    str += " \\\\"
    str += "\n"

    # SM CR-only fit
    str += "SM & "
    str += labels[njet]
    str += " & "
    str += labels[nb]
    for mht in mht_bins :
        key = (njet,nb,mht)
        if key not in values.keys() : continue
        val = values[key][1]
        err = values[key][2]
        str += " & "
        str += "${:.1f} \pm {:.1f}$".format(val,err)  
    str += " \\\\"
    str += "\n"

print str



