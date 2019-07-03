binding
 State1_5 = accutraveltimefraction_State1_5.map;
 Flux1_5 = accutraveltimefraction_Flux1_5.map;
 Removed1_5 = accutraveltimefraction_Removed1_5.map;
 Ldd1 = attfTests_Ldd1.map;
 Material1_3 = attfTests_Material1_3.map;
 Velocity1_5 = attfTests_Velocity1_5.map;
initial

State1_5, Flux1_5 = accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_5, 1);
Removed1_5 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_5, 1);
