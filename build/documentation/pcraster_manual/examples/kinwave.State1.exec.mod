binding
 State1 = kinwave_State1.map;
 Flux1 = kinwave_Flux1.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
initial
 report State1, Flux1 = kinwavestate,kinwaveflux(Ldd,Material,0,1.5,0.6,5,15,10);
