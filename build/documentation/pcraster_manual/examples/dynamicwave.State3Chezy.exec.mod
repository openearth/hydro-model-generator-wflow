#! --chezy
binding
 State3Chezy = dynamicwave_State3Chezy.map;
 Flux3Chezy = dynamicwave_Flux3Chezy.map;
 Table = dynamicwave_Table.txt;
 Ldd = accu_Ldd.map;
 OldState3 = dynamicwave_OldState3.map;
initial
 report State3Chezy, Flux3Chezy = dynwavestate,dynwaveflux(
Table,
 14,# profileId 
Ldd,
OldState3,
0,# inflow 
0,# bottomLevel 
0.1,# roughness 
1,# segmentLength 
10,# nrTimeSlices 
1, # timestepInSecs
0  # constantState
)
;
