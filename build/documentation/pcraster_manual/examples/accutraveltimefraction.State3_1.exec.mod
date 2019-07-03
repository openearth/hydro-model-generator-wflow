binding
 State3_1 = accutraveltimefraction_State3_1.map;
 Flux3_1 = accutraveltimefraction_Flux3_1.map;
 Removed3_1 = accutraveltimefraction_Removed3_1.map;
 Ldd3 = attfTests_Ldd3.map;
 Material3_1 = attfTests_Material3_1.map;
 Velocity3_1 = attfTests_Velocity3_1.map;
initial

State3_1, Flux3_1 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material3_1,Velocity3_1, 0.5);
Removed3_1 = accutraveltimefractionremoved(Ldd3,Material3_1,Velocity3_1, 0.5);
