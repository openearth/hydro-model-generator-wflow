binding
 State4_1 = accutraveltimefraction_State4_1.map;
 Flux4_1 = accutraveltimefraction_Flux4_1.map;
 Removed4_1 = accutraveltimefraction_Removed4_1.map;
 Ldd3 = attfTests_Ldd3.map;
 Material4_1 = attfTests_Material4_1.map;
 Velocity4_1 = attfTests_Velocity4_1.map;
initial

State4_1, Flux4_1 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material4_1,Velocity4_1, 0.5);
Removed4_1 = accutraveltimefractionremoved(Ldd3,Material4_1,Velocity4_1, 0.5);
