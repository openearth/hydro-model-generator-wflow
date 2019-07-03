binding
 State2 = accufraction_State2.map;
 Flux2 = accufraction_Flux2.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
 TransFra = accufraction_TransFra.map;
initial
 report State2, Flux2 = accufractionstate,accufractionflux(Ldd,Material,TransFra);
