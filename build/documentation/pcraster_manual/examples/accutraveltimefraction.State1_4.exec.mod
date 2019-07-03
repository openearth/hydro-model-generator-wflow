binding
 State1_4 = accutraveltimefraction_State1_4.map;
 Flux1_4 = accutraveltimefraction_Flux1_4.map;
 Removed1_4 = accutraveltimefraction_Removed1_4.map;
 Ldd1 = attfTests_Ldd1.map;
 Material1_3 = attfTests_Material1_3.map;
 Velocity1_4 = attfTests_Velocity1_4.map;
 Fraction1_3 = attfTests_Fraction1_3.map;
initial

State1_4, Flux1_4 =
accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_4, Fraction1_3);
Removed1_4 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_4, Fraction1_3);
