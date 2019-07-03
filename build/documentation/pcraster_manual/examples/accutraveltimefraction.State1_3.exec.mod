binding
 State1_3 = accutraveltimefraction_State1_3.map;
 Flux1_3 = accutraveltimefraction_Flux1_3.map;
 Removed1_3 = accutraveltimefraction_Removed1_3.map;
 Ldd1 = attfTests_Ldd1.map;
 Material1_3 = attfTests_Material1_3.map;
 Velocity1_3 = attfTests_Velocity1_3.map;
 Fraction1_3 = attfTests_Fraction1_3.map;
initial

State1_3, Flux1_3 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_3, Fraction1_3);
Removed1_3 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_3, Fraction1_3);
