binding
 State2_3 = accutraveltimefraction_State2_3.map;
 Flux2_3 = accutraveltimefraction_Flux2_3.map;
 Removed2_3 = accutraveltimefraction_Removed2_3.map;
 Ldd2 = attfTests_Ldd2.map;
 Material2_2 = attfTests_Material2_2.map;
 Velocity2_3 = attfTests_Velocity2_3.map;
 Fraction2_3 = attfTests_Fraction2_3.map;
initial

State2_3 = accutraveltimefractionstate(Ldd2,Material2_2,Velocity2_3, Fraction2_3);
Flux2_3 = accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_3, Fraction2_3);
Removed2_3 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_3, Fraction2_3);
