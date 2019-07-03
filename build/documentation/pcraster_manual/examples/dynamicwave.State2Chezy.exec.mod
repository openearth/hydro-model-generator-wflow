#! --chezy
binding
 State2Chezy = dynamicwave_State2Chezy.map;
 Flux2Chezy = dynamicwave_Flux2Chezy.map;
 Table = dynamicwave_Table.txt;
 ProfileId2 = dynamicwave_ProfileId2.map;
 Ldd = accu_Ldd.map;
 OldState2 = dynamicwave_OldState2.map;
initial
 report State2Chezy, Flux2Chezy = dynwavestate,dynwaveflux(
Table,
ProfileId2, # with a MV
Ldd,
OldState2,
0,# inflow
0,# bottomLevel
0.1,# roughness
1,# segmentLength
10,# nrTimeSlices
1, # timestepInSecs
0  # constantState
)
;
