binding
 State1 = accucapacity_State1.map;
 Flux1 = accucapacity_Flux1.map;
 Ldd = accu_Ldd.map;
 Material = accu_Material.map;
initial
 report State1, Flux1 = accucapacitystate,accucapacityflux(Ldd,Material,1.5);
