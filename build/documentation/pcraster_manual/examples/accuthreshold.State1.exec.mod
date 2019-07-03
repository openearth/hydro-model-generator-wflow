binding
 State1 = accuthreshold_State1.map;
 Flux1 = accuthreshold_Flux1.map;
 Ldd = accu_Ldd.map;
 Material = accu_Material.map;
initial
 report State1, Flux1 = accuthresholdstate,accuthresholdflux(Ldd,Material,1.5);
