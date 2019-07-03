binding
 State1 = accutraveltime_State1.map;
 Flux1 = accutraveltime_Flux1.map;
 Ldd = accutraveltime_Ldd.map;
 Material = accutraveltime_Material.map;
 Velocity = accutraveltime_Velocity.map;
initial
 report State1, Flux1 = accutraveltimestate,accutraveltimeflux(Ldd,Material,Velocity);
