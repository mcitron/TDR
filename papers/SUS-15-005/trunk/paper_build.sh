eval `../../tdr runtime -sh` 
tdr --style=paper -aps=- b SUS-15-005 # no numbered sections, easily read
#tdr --style=paper -plb=- b SUS-15-005 # numbered sections, easily read, reference formatting screwed 
#tdr --style=paper -epjc=- b SUS-15-005 # numbered sections, but dense text
cp ../../tmp/SUS-15-005_temp.pdf ~/www/
