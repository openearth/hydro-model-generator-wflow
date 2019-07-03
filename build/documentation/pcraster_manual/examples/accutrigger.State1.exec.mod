binding
 State1 = accutrigger_State1.map;
 Flux1 = accutrigger_Flux1.map;
 Ldd = accu_Ldd.map;
 Material = accu_Material.map;
initial
 report State1, Flux1 = accutriggerstate,accutriggerflux(Ldd,Material,1.5);
