binding
 State2 = accucapacity_State2.map;
 Flux2 = accucapacity_Flux2.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
 TransCap = accucapacity_TransCap.map;
initial
 report State2, Flux2 = accucapacitystate,accucapacityflux(Ldd,Material,TransCap);
