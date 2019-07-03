binding
 State3_2 = accutraveltimefraction_State3_2.map;
 Flux3_2 = accutraveltimefraction_Flux3_2.map;
 Removed3_2 = accutraveltimefraction_Removed3_2.map;
 Ldd3 = attfTests_Ldd3.map;
 Material3_1 = attfTests_Material3_1.map;
 Velocity3_2 = attfTests_Velocity3_2.map;
initial

State3_2, Flux3_2 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material3_1,Velocity3_2, 0.5);
Removed3_2 = accutraveltimefractionremoved(Ldd3,Material3_1,Velocity3_2, 0.5);
