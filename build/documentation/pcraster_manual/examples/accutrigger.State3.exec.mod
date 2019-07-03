binding
 State3 = accutrigger_State3.map;
 Flux3 = accutrigger_Flux3.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
 TransTHMV = accuthreshold_TransTHMV.map;
initial
 report State3, Flux3 = accutriggerstate,accutriggerflux(Ldd,Material,TransTHMV);
