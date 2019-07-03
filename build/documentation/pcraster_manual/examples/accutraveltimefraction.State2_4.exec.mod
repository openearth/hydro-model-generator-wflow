binding
 State2_4 = accutraveltimefraction_State2_4.map;
 Flux2_4 = accutraveltimefraction_Flux2_4.map;
 Removed2_4 = accutraveltimefraction_Removed2_4.map;
 Ldd2 = attfTests_Ldd2.map;
 Material2_2 = attfTests_Material2_2.map;
 Velocity2_4 = attfTests_Velocity2_4.map;
 Fraction2_3 = attfTests_Fraction2_3.map;
initial

State2_4, Flux2_4 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_4, Fraction2_3);
Removed2_4 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_4, Fraction2_3);
