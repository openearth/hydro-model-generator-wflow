binding
 State2 = accutrigger_State2.map;
 Flux2 = accutrigger_Flux2.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
 TransTH = accuthreshold_TransTH.map;
initial
 report State2, Flux2 = accutriggerstate,accutriggerflux(Ldd,Material,TransTH);
