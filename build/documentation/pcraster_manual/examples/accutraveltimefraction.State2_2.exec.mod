binding
 State2_2 = accutraveltimefraction_State2_2.map;
 Flux2_2 = accutraveltimefraction_Flux2_2.map;
 Removed2_2 = accutraveltimefraction_Removed2_2.map;
 Ldd2 = attfTests_Ldd2.map;
 Material2_2 = attfTests_Material2_2.map;
 Velocity2_2 = attfTests_Velocity2_2.map;
initial

State2_2, Flux2_2 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_2, 0.5);
Removed2_2 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_2, 0.5)
