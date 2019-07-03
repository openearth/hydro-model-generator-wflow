binding
 State1 = accufraction_State1.map;
 Flux1 = accufraction_Flux1.map;
 Ldd = accu_Ldd.map;
 Material = accu_Material.map;
initial
 report State1, Flux1 = accufractionstate,accufractionflux(Ldd,Material,0.5);
