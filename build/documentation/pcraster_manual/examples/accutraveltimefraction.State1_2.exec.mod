binding
 State1_2 = accutraveltimefraction_State1_2.map;
 Flux1_2 = accutraveltimefraction_Flux1_2.map;
 Removed1_2 = accutraveltimefraction_Removed1_2.map;
 Ldd1 = attfTests_Ldd1.map;
 Material1_2 = attfTests_Material1_2.map;
 Velocity1_2 = attfTests_Velocity1_2.map;
initial

State1_2, Flux1_2 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_2,Velocity1_2, 0.5);
Removed1_2 = accutraveltimefractionremoved(Ldd1,Material1_2,Velocity1_2, 0.5);
