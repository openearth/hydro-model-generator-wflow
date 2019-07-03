#! --chezy
binding
 StateChezy = dynamicwave_StateChezy.map;
 FluxChezy = dynamicwave_FluxChezy.map;
 Table = dynamicwave_Table.txt;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
initial
 report StateChezy, FluxChezy = dynwavestate,dynwaveflux(
Table,
 14, # profileId
Ldd,
Material, # oldState
0, # inflow
0, # bottomLevel
0.1, # roughness
1,# segmentLength
10,# nrTimeSlices
1, # timestepInSecs
0  # constantState
)
;
