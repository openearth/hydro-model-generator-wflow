#! --manning
binding
 StateManning = dynamicwave_StateManning.map;
 FluxManning = dynamicwave_FluxManning.map;
 Table = dynamicwave_Table.txt;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
initial
 report StateManning, FluxManning = dynwavestate,dynwaveflux(
Table,
 14,# profileId
Ldd,
Material, # oldState
0,# inflow
0,# bottomLevel
0.1,# roughness
1,# segmentLength
10,# nrTimeSlices
1, # timestepInSecs
0  # constantState
)
;
