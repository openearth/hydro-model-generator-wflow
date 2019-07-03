#! --manning
binding
 State2Manning = dynamicwave_State2Manning.map;
 Flux2Manning = dynamicwave_Flux2Manning.map;
 Table = dynamicwave_Table.txt;
 ProfileId2 = dynamicwave_ProfileId2.map;
 Ldd = accu_Ldd.map;
 OldState2 = dynamicwave_OldState2.map;
initial
 report State2Manning, Flux2Manning = dynwavestate,dynwaveflux(
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
);
