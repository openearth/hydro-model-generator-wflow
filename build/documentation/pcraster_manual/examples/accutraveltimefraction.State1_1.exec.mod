binding
 State1_1 = accutraveltimefraction_State1_1.map;
 Flux1_1 = accutraveltimefraction_Flux1_1.map;
 Removed1_1 = accutraveltimefraction_Removed1_1.map;
 Ldd1 = attfTests_Ldd1.map;
 Material1_2 = attfTests_Material1_2.map;
 Velocity1_1 = attfTests_Velocity1_1.map;
initial

State1_1, Flux1_1 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_2,Velocity1_1, 0.5);
Removed1_1 = accutraveltimefractionremoved(Ldd1,Material1_2,Velocity1_1, 0.5);
