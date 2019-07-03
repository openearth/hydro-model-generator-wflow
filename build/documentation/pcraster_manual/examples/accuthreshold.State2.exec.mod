binding
 State2 = accuthreshold_State2.map;
 Flux2 = accuthreshold_Flux2.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
 TransTH = accuthreshold_TransTH.map;
initial
 report State2, Flux2 = accuthresholdstate,accuthresholdflux(Ldd,Material,TransTH);
