binding
 State4_2 = accutraveltimefraction_State4_2.map;
 Flux4_2 = accutraveltimefraction_Flux4_2.map;
 Removed4_2 = accutraveltimefraction_Removed4_2.map;
 Ldd3 = attfTests_Ldd3.map;
 Material4_1 = attfTests_Material4_1.map;
 Velocity4_2 = attfTests_Velocity4_2.map;
initial

State4_2, Flux4_2 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material4_1,Velocity4_2, 0.5);
Removed4_2 = accutraveltimefractionremoved(Ldd3,Material4_1,Velocity4_2, 0.5);
