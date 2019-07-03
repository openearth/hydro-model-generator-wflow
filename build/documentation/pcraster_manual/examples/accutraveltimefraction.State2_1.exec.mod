binding
 State2_1 = accutraveltimefraction_State2_1.map;
 Flux2_1 = accutraveltimefraction_Flux2_1.map;
 Removed2_1 = accutraveltimefraction_Removed2_1.map;
 Ldd2 = attfTests_Ldd2.map;
 Material2_1 = attfTests_Material2_1.map;
 Velocity2_1 = attfTests_Velocity2_1.map;
initial

State2_1, Flux2_1 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd2,Material2_1,Velocity2_1, 0.5);
Removed2_1 = accutraveltimefractionremoved(Ldd2,Material2_1,Velocity2_1, 0.5)
