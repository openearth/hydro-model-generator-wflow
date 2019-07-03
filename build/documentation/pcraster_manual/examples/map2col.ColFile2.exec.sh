/opt/wflow/pcraster/pcraster-4.2.0/pcraster-4.2.0/build/bin/map2col --coorcentre -M -m -9999 -f 5.0f -g -c map2asc_PCRmap.map map2col_ColFile2.txt
sed -i 's/map2asc.//g' map2col_ColFile2.txt
