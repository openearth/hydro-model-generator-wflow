// DO NOT EDIT
// Created by $PCRTREE2's PCRasterSample.py.
et.push_back(ManualExampleTester("binding\n"
" Result = and_Result.map;\n"
" Expr1 = and_Expr1.map;\n"
" Expr2 = and_Expr2.map;\n"
"initial\n"
" report Result = Expr1 and Expr2;\n"
"\n"));
et.back().addResult("and_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = or_Result.map;\n"
" Expr1 = and_Expr1.map;\n"
" Expr2 = and_Expr2.map;\n"
"initial\n"
" report Result = Expr1 or Expr2;\n"
"\n"));
et.back().addResult("or_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = xor_Result.map;\n"
" Expr1 = and_Expr1.map;\n"
" Expr2 = and_Expr2.map;\n"
"initial\n"
" report Result = Expr1 xor Expr2;\n"
"\n"));
et.back().addResult("xor_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = not_Result.map;\n"
" Expr1 = and_Expr1.map;\n"
"initial\n"
" report Result = not Expr1;\n"
"\n"));
et.back().addResult("not_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ster_Result.map;\n"
" Expr1 = ster_Expr1.map;\n"
" Expr2 = ster_Expr2.map;\n"
"initial\n"
" report Result = Expr1 * Expr2;\n"
"\n"));
et.back().addResult("ster_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = sterster_Result.map;\n"
" Expr = sterster_Expr.map;\n"
" Power = sterster_Power.map;\n"
"initial\n"
" report Result = Expr ** Power;\n"
"\n"));
et.back().addResult("sterster_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = minus_Result.map;\n"
" Expr1 = minus_Expr1.map;\n"
" Expr2 = minus_Expr2.map;\n"
"initial\n"
" report Result = Expr1 - Expr2;\n"
"\n"));
et.back().addResult("minus_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = plus_Result.map;\n"
" Expr1 = minus_Expr1.map;\n"
" Expr2 = minus_Expr2.map;\n"
"initial\n"
" report Result = Expr1 + Expr2;\n"
"\n"));
et.back().addResult("plus_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = slash_Result.map;\n"
" Expr1 = slash_Expr1.map;\n"
" Expr2 = slash_Expr2.map;\n"
"initial\n"
" report Result = Expr1 / Expr2;\n"
"\n"));
et.back().addResult("slash_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = abs_Result.map;\n"
" Expr = abs_Expr.map;\n"
"initial\n"
" report Result = abs(Expr);\n"
"\n"));
et.back().addResult("abs_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = accu_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accu_Material.map;\n"
"initial\n"
" report Result = accuflux(Ldd,Material);\n"
"\n"));
et.back().addResult("accu_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = accu_Result2.map;\n"
" Ldd = accu_Ldd.map;\n"
"initial\n"
" report Result2 = accuflux(Ldd,1);\n"
"\n"));
et.back().addResult("accu_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result3 = accu_Result3.map;\n"
" Ldd = accu_Ldd.map;\n"
" MaterialMV = accu_MaterialMV.map;\n"
"initial\n"
" report Result3 = accuflux(Ldd,MaterialMV);\n"
"\n"));
et.back().addResult("accu_Result3.map");
et.push_back(ManualExampleTester("binding\n"
" State1 = accufraction_State1.map;\n"
" Flux1 = accufraction_Flux1.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accu_Material.map;\n"
"initial\n"
" report State1, Flux1 = accufractionstate,accufractionflux(Ldd,Material,0.5);\n"
"\n"));
et.back().addResult("accufraction_State1.map");
et.back().addResult("accufraction_Flux1.map");
et.push_back(ManualExampleTester("binding\n"
" State2 = accufraction_State2.map;\n"
" Flux2 = accufraction_Flux2.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
" TransFra = accufraction_TransFra.map;\n"
"initial\n"
" report State2, Flux2 = accufractionstate,accufractionflux(Ldd,Material,TransFra);\n"
"\n"));
et.back().addResult("accufraction_State2.map");
et.back().addResult("accufraction_Flux2.map");
et.push_back(ManualExampleTester("binding\n"
" State1 = accucapacity_State1.map;\n"
" Flux1 = accucapacity_Flux1.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accu_Material.map;\n"
"initial\n"
" report State1, Flux1 = accucapacitystate,accucapacityflux(Ldd,Material,1.5);\n"
"\n"));
et.back().addResult("accucapacity_State1.map");
et.back().addResult("accucapacity_Flux1.map");
et.push_back(ManualExampleTester("binding\n"
" State2 = accucapacity_State2.map;\n"
" Flux2 = accucapacity_Flux2.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
" TransCap = accucapacity_TransCap.map;\n"
"initial\n"
" report State2, Flux2 = accucapacitystate,accucapacityflux(Ldd,Material,TransCap);\n"
"\n"));
et.back().addResult("accucapacity_State2.map");
et.back().addResult("accucapacity_Flux2.map");
et.push_back(ManualExampleTester("binding\n"
" State1 = accuthreshold_State1.map;\n"
" Flux1 = accuthreshold_Flux1.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accu_Material.map;\n"
"initial\n"
" report State1, Flux1 = accuthresholdstate,accuthresholdflux(Ldd,Material,1.5);\n"
"\n"));
et.back().addResult("accuthreshold_State1.map");
et.back().addResult("accuthreshold_Flux1.map");
et.push_back(ManualExampleTester("binding\n"
" State2 = accuthreshold_State2.map;\n"
" Flux2 = accuthreshold_Flux2.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
" TransTH = accuthreshold_TransTH.map;\n"
"initial\n"
" report State2, Flux2 = accuthresholdstate,accuthresholdflux(Ldd,Material,TransTH);\n"
"\n"));
et.back().addResult("accuthreshold_State2.map");
et.back().addResult("accuthreshold_Flux2.map");
et.push_back(ManualExampleTester("binding\n"
" State1 = accutrigger_State1.map;\n"
" Flux1 = accutrigger_Flux1.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accu_Material.map;\n"
"initial\n"
" report State1, Flux1 = accutriggerstate,accutriggerflux(Ldd,Material,1.5);\n"
"\n"));
et.back().addResult("accutrigger_State1.map");
et.back().addResult("accutrigger_Flux1.map");
et.push_back(ManualExampleTester("binding\n"
" State2 = accutrigger_State2.map;\n"
" Flux2 = accutrigger_Flux2.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
" TransTH = accuthreshold_TransTH.map;\n"
"initial\n"
" report State2, Flux2 = accutriggerstate,accutriggerflux(Ldd,Material,TransTH);\n"
"\n"));
et.back().addResult("accutrigger_State2.map");
et.back().addResult("accutrigger_Flux2.map");
et.push_back(ManualExampleTester("binding\n"
" State3 = accutrigger_State3.map;\n"
" Flux3 = accutrigger_Flux3.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
" TransTHMV = accuthreshold_TransTHMV.map;\n"
"initial\n"
" report State3, Flux3 = accutriggerstate,accutriggerflux(Ldd,Material,TransTHMV);\n"
"\n"));
et.back().addResult("accutrigger_State3.map");
et.back().addResult("accutrigger_Flux3.map");
et.push_back(ManualExampleTester("binding\n"
" State1 = accutraveltime_State1.map;\n"
" Flux1 = accutraveltime_Flux1.map;\n"
" Ldd = accutraveltime_Ldd.map;\n"
" Material = accutraveltime_Material.map;\n"
" Velocity = accutraveltime_Velocity.map;\n"
"initial\n"
" report State1, Flux1 = accutraveltimestate,accutraveltimeflux(Ldd,Material,Velocity);\n"
"\n"));
et.back().addResult("accutraveltime_State1.map");
et.back().addResult("accutraveltime_Flux1.map");
et.push_back(ManualExampleTester("binding\n"
" Removed1 = accutraveltimefractionremoved_Removed1.map;\n"
" Ldd = accutraveltime_Ldd.map;\n"
" Material = accutraveltime_Material.map;\n"
" Velocity = accutraveltime_Velocity.map;\n"
"initial\n"
" report Removed1 = accutraveltimefractionremoved(Ldd,Material,Velocity, 1);\n"
"\n"));
et.back().addResult("accutraveltimefractionremoved_Removed1.map");
et.push_back(ManualExampleTester("binding\n"
" State1_1 = accutraveltimefraction_State1_1.map;\n"
" Flux1_1 = accutraveltimefraction_Flux1_1.map;\n"
" Removed1_1 = accutraveltimefraction_Removed1_1.map;\n"
" Ldd1 = attfTests_Ldd1.map;\n"
" Material1_2 = attfTests_Material1_2.map;\n"
" Velocity1_1 = attfTests_Velocity1_1.map;\n"
"initial\n"
"\n"
"State1_1, Flux1_1 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_2,Velocity1_1, 0.5);\n"
"Removed1_1 = accutraveltimefractionremoved(Ldd1,Material1_2,Velocity1_1, 0.5);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State1_1.map");
et.back().addResult("accutraveltimefraction_Flux1_1.map");
et.back().addResult("accutraveltimefraction_Removed1_1.map");
et.push_back(ManualExampleTester("binding\n"
" State1_2 = accutraveltimefraction_State1_2.map;\n"
" Flux1_2 = accutraveltimefraction_Flux1_2.map;\n"
" Removed1_2 = accutraveltimefraction_Removed1_2.map;\n"
" Ldd1 = attfTests_Ldd1.map;\n"
" Material1_2 = attfTests_Material1_2.map;\n"
" Velocity1_2 = attfTests_Velocity1_2.map;\n"
"initial\n"
"\n"
"State1_2, Flux1_2 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_2,Velocity1_2, 0.5);\n"
"Removed1_2 = accutraveltimefractionremoved(Ldd1,Material1_2,Velocity1_2, 0.5);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State1_2.map");
et.back().addResult("accutraveltimefraction_Flux1_2.map");
et.back().addResult("accutraveltimefraction_Removed1_2.map");
et.push_back(ManualExampleTester("binding\n"
" State1_3 = accutraveltimefraction_State1_3.map;\n"
" Flux1_3 = accutraveltimefraction_Flux1_3.map;\n"
" Removed1_3 = accutraveltimefraction_Removed1_3.map;\n"
" Ldd1 = attfTests_Ldd1.map;\n"
" Material1_3 = attfTests_Material1_3.map;\n"
" Velocity1_3 = attfTests_Velocity1_3.map;\n"
" Fraction1_3 = attfTests_Fraction1_3.map;\n"
"initial\n"
"\n"
"State1_3, Flux1_3 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_3, Fraction1_3);\n"
"Removed1_3 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_3, Fraction1_3);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State1_3.map");
et.back().addResult("accutraveltimefraction_Flux1_3.map");
et.back().addResult("accutraveltimefraction_Removed1_3.map");
et.push_back(ManualExampleTester("binding\n"
" State1_4 = accutraveltimefraction_State1_4.map;\n"
" Flux1_4 = accutraveltimefraction_Flux1_4.map;\n"
" Removed1_4 = accutraveltimefraction_Removed1_4.map;\n"
" Ldd1 = attfTests_Ldd1.map;\n"
" Material1_3 = attfTests_Material1_3.map;\n"
" Velocity1_4 = attfTests_Velocity1_4.map;\n"
" Fraction1_3 = attfTests_Fraction1_3.map;\n"
"initial\n"
"\n"
"State1_4, Flux1_4 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_4, Fraction1_3);\n"
"Removed1_4 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_4, Fraction1_3);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State1_4.map");
et.back().addResult("accutraveltimefraction_Flux1_4.map");
et.back().addResult("accutraveltimefraction_Removed1_4.map");
et.push_back(ManualExampleTester("binding\n"
" State1_5 = accutraveltimefraction_State1_5.map;\n"
" Flux1_5 = accutraveltimefraction_Flux1_5.map;\n"
" Removed1_5 = accutraveltimefraction_Removed1_5.map;\n"
" Ldd1 = attfTests_Ldd1.map;\n"
" Material1_3 = attfTests_Material1_3.map;\n"
" Velocity1_5 = attfTests_Velocity1_5.map;\n"
"initial\n"
"\n"
"State1_5, Flux1_5 = accutraveltimefractionstate,accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_5, 1);\n"
"Removed1_5 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_5, 1);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State1_5.map");
et.back().addResult("accutraveltimefraction_Flux1_5.map");
et.back().addResult("accutraveltimefraction_Removed1_5.map");
et.push_back(ManualExampleTester("binding\n"
" State2_1 = accutraveltimefraction_State2_1.map;\n"
" Flux2_1 = accutraveltimefraction_Flux2_1.map;\n"
" Removed2_1 = accutraveltimefraction_Removed2_1.map;\n"
" Ldd2 = attfTests_Ldd2.map;\n"
" Material2_1 = attfTests_Material2_1.map;\n"
" Velocity2_1 = attfTests_Velocity2_1.map;\n"
"initial\n"
"\n"
"State2_1, Flux2_1 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd2,Material2_1,Velocity2_1, 0.5);\n"
"Removed2_1 = accutraveltimefractionremoved(Ldd2,Material2_1,Velocity2_1, 0.5)\n"
"\n"));
et.back().addResult("accutraveltimefraction_State2_1.map");
et.back().addResult("accutraveltimefraction_Flux2_1.map");
et.back().addResult("accutraveltimefraction_Removed2_1.map");
et.push_back(ManualExampleTester("binding\n"
" State2_2 = accutraveltimefraction_State2_2.map;\n"
" Flux2_2 = accutraveltimefraction_Flux2_2.map;\n"
" Removed2_2 = accutraveltimefraction_Removed2_2.map;\n"
" Ldd2 = attfTests_Ldd2.map;\n"
" Material2_2 = attfTests_Material2_2.map;\n"
" Velocity2_2 = attfTests_Velocity2_2.map;\n"
"initial\n"
"\n"
"State2_2, Flux2_2 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_2, 0.5);\n"
"Removed2_2 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_2, 0.5)\n"
"\n"));
et.back().addResult("accutraveltimefraction_State2_2.map");
et.back().addResult("accutraveltimefraction_Flux2_2.map");
et.back().addResult("accutraveltimefraction_Removed2_2.map");
et.push_back(ManualExampleTester("binding\n"
" State2_3 = accutraveltimefraction_State2_3.map;\n"
" Flux2_3 = accutraveltimefraction_Flux2_3.map;\n"
" Removed2_3 = accutraveltimefraction_Removed2_3.map;\n"
" Ldd2 = attfTests_Ldd2.map;\n"
" Material2_2 = attfTests_Material2_2.map;\n"
" Velocity2_3 = attfTests_Velocity2_3.map;\n"
" Fraction2_3 = attfTests_Fraction2_3.map;\n"
"initial\n"
"\n"
"State2_3 = accutraveltimefractionstate(Ldd2,Material2_2,Velocity2_3, Fraction2_3);\n"
"Flux2_3 = accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_3, Fraction2_3);\n"
"Removed2_3 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_3, Fraction2_3);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State2_3.map");
et.back().addResult("accutraveltimefraction_Flux2_3.map");
et.back().addResult("accutraveltimefraction_Removed2_3.map");
et.push_back(ManualExampleTester("binding\n"
" State2_4 = accutraveltimefraction_State2_4.map;\n"
" Flux2_4 = accutraveltimefraction_Flux2_4.map;\n"
" Removed2_4 = accutraveltimefraction_Removed2_4.map;\n"
" Ldd2 = attfTests_Ldd2.map;\n"
" Material2_2 = attfTests_Material2_2.map;\n"
" Velocity2_4 = attfTests_Velocity2_4.map;\n"
" Fraction2_3 = attfTests_Fraction2_3.map;\n"
"initial\n"
"\n"
"State2_4, Flux2_4 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_4, Fraction2_3);\n"
"Removed2_4 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_4, Fraction2_3);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State2_4.map");
et.back().addResult("accutraveltimefraction_Flux2_4.map");
et.back().addResult("accutraveltimefraction_Removed2_4.map");
et.push_back(ManualExampleTester("binding\n"
" State3_1 = accutraveltimefraction_State3_1.map;\n"
" Flux3_1 = accutraveltimefraction_Flux3_1.map;\n"
" Removed3_1 = accutraveltimefraction_Removed3_1.map;\n"
" Ldd3 = attfTests_Ldd3.map;\n"
" Material3_1 = attfTests_Material3_1.map;\n"
" Velocity3_1 = attfTests_Velocity3_1.map;\n"
"initial\n"
"\n"
"State3_1, Flux3_1 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material3_1,Velocity3_1, 0.5);\n"
"Removed3_1 = accutraveltimefractionremoved(Ldd3,Material3_1,Velocity3_1, 0.5);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State3_1.map");
et.back().addResult("accutraveltimefraction_Flux3_1.map");
et.back().addResult("accutraveltimefraction_Removed3_1.map");
et.push_back(ManualExampleTester("binding\n"
" State3_2 = accutraveltimefraction_State3_2.map;\n"
" Flux3_2 = accutraveltimefraction_Flux3_2.map;\n"
" Removed3_2 = accutraveltimefraction_Removed3_2.map;\n"
" Ldd3 = attfTests_Ldd3.map;\n"
" Material3_1 = attfTests_Material3_1.map;\n"
" Velocity3_2 = attfTests_Velocity3_2.map;\n"
"initial\n"
"\n"
"State3_2, Flux3_2 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material3_1,Velocity3_2, 0.5);\n"
"Removed3_2 = accutraveltimefractionremoved(Ldd3,Material3_1,Velocity3_2, 0.5);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State3_2.map");
et.back().addResult("accutraveltimefraction_Flux3_2.map");
et.back().addResult("accutraveltimefraction_Removed3_2.map");
et.push_back(ManualExampleTester("binding\n"
" State4_1 = accutraveltimefraction_State4_1.map;\n"
" Flux4_1 = accutraveltimefraction_Flux4_1.map;\n"
" Removed4_1 = accutraveltimefraction_Removed4_1.map;\n"
" Ldd3 = attfTests_Ldd3.map;\n"
" Material4_1 = attfTests_Material4_1.map;\n"
" Velocity4_1 = attfTests_Velocity4_1.map;\n"
"initial\n"
"\n"
"State4_1, Flux4_1 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material4_1,Velocity4_1, 0.5);\n"
"Removed4_1 = accutraveltimefractionremoved(Ldd3,Material4_1,Velocity4_1, 0.5);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State4_1.map");
et.back().addResult("accutraveltimefraction_Flux4_1.map");
et.back().addResult("accutraveltimefraction_Removed4_1.map");
et.push_back(ManualExampleTester("binding\n"
" State4_2 = accutraveltimefraction_State4_2.map;\n"
" Flux4_2 = accutraveltimefraction_Flux4_2.map;\n"
" Removed4_2 = accutraveltimefraction_Removed4_2.map;\n"
" Ldd3 = attfTests_Ldd3.map;\n"
" Material4_1 = attfTests_Material4_1.map;\n"
" Velocity4_2 = attfTests_Velocity4_2.map;\n"
"initial\n"
"\n"
"State4_2, Flux4_2 =\n"
"accutraveltimefractionstate,accutraveltimefractionflux(Ldd3,Material4_1,Velocity4_2, 0.5);\n"
"Removed4_2 = accutraveltimefractionremoved(Ldd3,Material4_1,Velocity4_2, 0.5);\n"
"\n"));
et.back().addResult("accutraveltimefraction_State4_2.map");
et.back().addResult("accutraveltimefraction_Flux4_2.map");
et.back().addResult("accutraveltimefraction_Removed4_2.map");
et.push_back(ManualExampleTester("binding\n"
" Qnew = kinematic_Qnew.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
"initial\n"
" report Qnew = kinematic(Ldd,Material,0,1.5,0.6,1,15,10);\n"
"\n"));
et.back().addResult("kinematic_Qnew.map");
et.push_back(ManualExampleTester("binding\n"
" State1 = kinwave_State1.map;\n"
" Flux1 = kinwave_Flux1.map;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
"initial\n"
" report State1, Flux1 = kinwavestate,kinwaveflux(Ldd,Material,0,1.5,0.6,5,15,10);\n"
"\n"));
et.back().addResult("kinwave_State1.map");
et.back().addResult("kinwave_Flux1.map");
et.push_back(ManualExampleTester("#! --chezy\n"
"binding\n"
" StateChezy = dynamicwave_StateChezy.map;\n"
" FluxChezy = dynamicwave_FluxChezy.map;\n"
" Table = dynamicwave_Table.txt;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
"initial\n"
" report StateChezy, FluxChezy = dynwavestate,dynwaveflux(\n"
"Table,\n"
" 14, # profileId\n"
"Ldd,\n"
"Material, # oldState\n"
"0, # inflow\n"
"0, # bottomLevel\n"
"0.1, # roughness\n"
"1,# segmentLength\n"
"10,# nrTimeSlices\n"
"1, # timestepInSecs\n"
"0  # constantState\n"
")\n"
";\n"
"\n"));
et.back().addResult("dynamicwave_StateChezy.map");
et.back().addResult("dynamicwave_FluxChezy.map");
et.push_back(ManualExampleTester("#! --chezy\n"
"binding\n"
" State2Chezy = dynamicwave_State2Chezy.map;\n"
" Flux2Chezy = dynamicwave_Flux2Chezy.map;\n"
" Table = dynamicwave_Table.txt;\n"
" ProfileId2 = dynamicwave_ProfileId2.map;\n"
" Ldd = accu_Ldd.map;\n"
" OldState2 = dynamicwave_OldState2.map;\n"
"initial\n"
" report State2Chezy, Flux2Chezy = dynwavestate,dynwaveflux(\n"
"Table,\n"
"ProfileId2, # with a MV\n"
"Ldd,\n"
"OldState2,\n"
"0,# inflow\n"
"0,# bottomLevel\n"
"0.1,# roughness\n"
"1,# segmentLength\n"
"10,# nrTimeSlices\n"
"1, # timestepInSecs\n"
"0  # constantState\n"
")\n"
";\n"
"\n"));
et.back().addResult("dynamicwave_State2Chezy.map");
et.back().addResult("dynamicwave_Flux2Chezy.map");
et.push_back(ManualExampleTester("#! --chezy\n"
"binding\n"
" State3Chezy = dynamicwave_State3Chezy.map;\n"
" Flux3Chezy = dynamicwave_Flux3Chezy.map;\n"
" Table = dynamicwave_Table.txt;\n"
" Ldd = accu_Ldd.map;\n"
" OldState3 = dynamicwave_OldState3.map;\n"
"initial\n"
" report State3Chezy, Flux3Chezy = dynwavestate,dynwaveflux(\n"
"Table,\n"
" 14,# profileId \n"
"Ldd,\n"
"OldState3,\n"
"0,# inflow \n"
"0,# bottomLevel \n"
"0.1,# roughness \n"
"1,# segmentLength \n"
"10,# nrTimeSlices \n"
"1, # timestepInSecs\n"
"0  # constantState\n"
")\n"
";\n"
"\n"));
et.back().addResult("dynamicwave_State3Chezy.map");
et.back().addResult("dynamicwave_Flux3Chezy.map");
et.push_back(ManualExampleTester("#! --manning\n"
"binding\n"
" StateManning = dynamicwave_StateManning.map;\n"
" FluxManning = dynamicwave_FluxManning.map;\n"
" Table = dynamicwave_Table.txt;\n"
" Ldd = accu_Ldd.map;\n"
" Material = accufraction_Material.map;\n"
"initial\n"
" report StateManning, FluxManning = dynwavestate,dynwaveflux(\n"
"Table,\n"
" 14,# profileId\n"
"Ldd,\n"
"Material, # oldState\n"
"0,# inflow\n"
"0,# bottomLevel\n"
"0.1,# roughness\n"
"1,# segmentLength\n"
"10,# nrTimeSlices\n"
"1, # timestepInSecs\n"
"0  # constantState\n"
")\n"
";\n"
"\n"));
et.back().addResult("dynamicwave_StateManning.map");
et.back().addResult("dynamicwave_FluxManning.map");
et.push_back(ManualExampleTester("#! --manning\n"
"binding\n"
" State2Manning = dynamicwave_State2Manning.map;\n"
" Flux2Manning = dynamicwave_Flux2Manning.map;\n"
" Table = dynamicwave_Table.txt;\n"
" ProfileId2 = dynamicwave_ProfileId2.map;\n"
" Ldd = accu_Ldd.map;\n"
" OldState2 = dynamicwave_OldState2.map;\n"
"initial\n"
" report State2Manning, Flux2Manning = dynwavestate,dynwaveflux(\n"
"Table,\n"
"ProfileId2, # with a MV\n"
"Ldd,\n"
"OldState2,\n"
"0,# inflow\n"
"0,# bottomLevel\n"
"0.1,# roughness\n"
"1,# segmentLength\n"
"10,# nrTimeSlices\n"
"1, # timestepInSecs\n"
"0  # constantState\n"
");\n"
"\n"));
et.back().addResult("dynamicwave_State2Manning.map");
et.back().addResult("dynamicwave_Flux2Manning.map");
et.push_back(ManualExampleTester("#! --manning\n"
"binding\n"
" State3Manning = dynamicwave_State3Manning.map;\n"
" Flux3Manning = dynamicwave_Flux3Manning.map;\n"
" Table = dynamicwave_Table.txt;\n"
" Ldd = accu_Ldd.map;\n"
" OldState3 = dynamicwave_OldState3.map;\n"
"initial\n"
" report State3Manning, Flux3Manning = dynwavestate,dynwaveflux(\n"
"Table,\n"
" 14,# profileId\n"
"Ldd,\n"
"OldState3,\n"
"0,# inflow\n"
"0,# bottomLevel\n"
"0.1,# roughness\n"
"1,# segmentLength\n"
"10,# nrTimeSlices\n"
"1, # timestepInSecs\n"
"0  # constantState\n"
")\n"
";\n"
"\n"));
et.back().addResult("dynamicwave_State3Manning.map");
et.back().addResult("dynamicwave_Flux3Manning.map");
et.push_back(ManualExampleTester("#! --degrees\n"
"binding\n"
" Result = acos_Result.map;\n"
" Expr = acos_Expr.map;\n"
"initial\n"
" report Result = acos(Expr);\n"
"\n"));
et.back().addResult("acos_Result.map");
et.push_back(ManualExampleTester("#! --unittrue\n"
"binding\n"
" Result = areaarea_Result.map;\n"
" Class = areaarea_Class.map;\n"
"initial\n"
" report Result = areaarea( Class);\n"
"\n"));
et.back().addResult("areaarea_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areadiversity_Result.map;\n"
" Class = areaarea_Class.map;\n"
" Expr = areadiversity_Expr.map;\n"
"initial\n"
" report Result = areadiversity( Expr, Class);\n"
"\n"));
et.back().addResult("areadiversity_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areamajority_Result.map;\n"
" Class = areaarea_Class.map;\n"
" Expr = areamajority_Expr.map;\n"
"initial\n"
" report Result = areamajority( Expr, Class);\n"
"\n"));
et.back().addResult("areamajority_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areamaximum_Result.map;\n"
" Class = areaarea_Class.map;\n"
" Expr = areamaximum_Expr.map;\n"
"initial\n"
" report Result = areamaximum( Expr, Class);\n"
"\n"));
et.back().addResult("areamaximum_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areaminimum_Result.map;\n"
" Class = areaarea_Class.map;\n"
" Expr = areamaximum_Expr.map;\n"
"initial\n"
" report Result = areaminimum( Expr, Class);\n"
"\n"));
et.back().addResult("areaminimum_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areaaverage_Result.map;\n"
" Class = areaarea_Class.map;\n"
" Expr = areamaximum_Expr.map;\n"
"initial\n"
" report Result = areaaverage( Expr, Class);\n"
"\n"));
et.back().addResult("areaaverage_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areatotal_Result.map;\n"
" Class = areaarea_Class.map;\n"
" Expr = areamaximum_Expr.map;\n"
"initial\n"
" report Result = areatotal( Expr, Class);\n"
"\n"));
et.back().addResult("areatotal_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = asin_Result.map;\n"
" Expr = asin_Expr.map;\n"
"initial\n"
" report Result = asin(Expr);\n"
"\n"));
et.back().addResult("asin_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = aspect_Result.map;\n"
" Dem = slope_Dem.map;\n"
"initial\n"
" report Result = aspect(Dem);\n"
"\n"));
et.back().addResult("aspect_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = atan_Result.map;\n"
" Expr = atan_Expr.map;\n"
"initial\n"
" report Result = atan(Expr);\n"
"\n"));
et.back().addResult("atan_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = boolean_Result.map;\n"
" Expr = boolean_Expr.map;\n"
"initial\n"
" report Result = boolean(Expr);\n"
"\n"));
et.back().addResult("boolean_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = catchment_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Points = catchment_Points.map;\n"
"initial\n"
" report Result = catchment(Ldd,Points);\n"
"\n"));
et.back().addResult("catchment_Result.map");
et.push_back(ManualExampleTester("#! --unittrue\n"
"binding\n"
" Result1 = cellarea_Result1.map;\n"
" Expr = cellarea_Expr.map;\n"
"areamap\n"
" cellarea_Expr.map;\n"
"initial\n"
" report Result1 = cellarea();\n"
"\n"));
et.back().addResult("cellarea_Result1.map");
et.push_back(ManualExampleTester("#! --unitcell\n"
"binding\n"
" Result2 = cellarea_Result2.map;\n"
" Expr = cellarea_Expr.map;\n"
"areamap\n"
" cellarea_Expr.map;\n"
"initial\n"
" report Result2 = cellarea();\n"
"\n"));
et.back().addResult("cellarea_Result2.map");
et.push_back(ManualExampleTester("#! --unittrue\n"
"binding\n"
" Result1 = celllength_Result1.map;\n"
" Expr = cellarea_Expr.map;\n"
"areamap\n"
" cellarea_Expr.map;\n"
"initial\n"
" report Result1 = celllength();\n"
"\n"));
et.back().addResult("celllength_Result1.map");
et.push_back(ManualExampleTester("#! --unitcell\n"
"binding\n"
" Result2 = celllength_Result2.map;\n"
" Expr = cellarea_Expr.map;\n"
"areamap\n"
" cellarea_Expr.map;\n"
"initial\n"
" report Result2 = celllength();\n"
"\n"));
et.back().addResult("celllength_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = clump_Result1.map;\n"
" Expr = clump_Expr.map;\n"
"initial\n"
" report Result1 = clump( Expr);\n"
"\n"));
et.back().addResult("clump_Result1.map");
et.push_back(ManualExampleTester("#! --nondiagonal\n"
"binding\n"
" Result2 = clump_Result2.map;\n"
" Expr = clump_Expr.map;\n"
"initial\n"
" report Result2 = clump( Expr);\n"
"\n"));
et.back().addResult("clump_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = cos_Result.map;\n"
" Expr = cos_Expr.map;\n"
"initial\n"
" report Result = cos(Expr);\n"
"\n"));
et.back().addResult("cos_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = cover_Result1.map;\n"
" Expr1 = cover_Expr1.map;\n"
"initial\n"
" report Result1 = cover(Expr1,sqrt(9));\n"
"\n"));
et.back().addResult("cover_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = cover_Result2.map;\n"
" Expr1 = cover_Expr1.map;\n"
" Expr2 = cover_Expr2.map;\n"
" Expr3 = cover_Expr3.map;\n"
"initial\n"
" report Result2 = cover(Expr1,Expr2,Expr3);\n"
"\n"));
et.back().addResult("cover_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = defined_Result.map;\n"
" Expr = defined_Expr.map;\n"
"initial\n"
" report Result = defined(Expr);\n"
"\n"));
et.back().addResult("defined_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = lddcreate_Result1.map;\n"
" Dem = lddcreate_Dem.map;\n"
"initial\n"
" report Result1 = lddcreate(Dem,9999999,9999999,9999999,9999999);\n"
"\n"));
et.back().addResult("lddcreate_Result1.map");
et.push_back(ManualExampleTester("#! --lddin\n"
"binding\n"
" Result2 = lddcreate_Result2.map;\n"
" Dem = lddcreate_Dem.map;\n"
"initial\n"
" report Result2 = lddcreate(Dem,9999999,9999999,9999999,9999999);\n"
"\n"));
et.back().addResult("lddcreate_Result2.map");
et.push_back(ManualExampleTester("#! --lddin\n"
"binding\n"
" Result3 = lddcreate_Result3.map;\n"
" Dem = lddcreate_Dem.map;\n"
"initial\n"
" report Result3 = lddcreate(Dem,9999999,5000,9999999,9999999);\n"
"\n"));
et.back().addResult("lddcreate_Result3.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = lddcreatedem_Result1.map;\n"
" Dem = lddcreate_Dem.map;\n"
"initial\n"
" report Result1 = lddcreatedem(Dem,9999999,9999999,9999999,9999999);\n"
"\n"));
et.back().addResult("lddcreatedem_Result1.map");
et.push_back(ManualExampleTester("#! --lddcut\n"
"binding\n"
" Result2 = lddcreatedem_Result2.map;\n"
" Dem = lddcreate_Dem.map;\n"
"initial\n"
" report Result2 = lddcreatedem(Dem,999999,9999999,9999999,9999999);\n"
"\n"));
et.back().addResult("lddcreatedem_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = directional_Result1.map;\n"
" Expr = directional_Expr.map;\n"
"initial\n"
" report Result1 = directional(Expr);\n"
"\n"));
et.back().addResult("directional_Result1.map");
et.push_back(ManualExampleTester("#! --degrees\n"
"binding\n"
" Result2 = directional_Result2.map;\n"
" Expr = boolean_Expr.map;\n"
"initial\n"
" report Result2 = directional(Expr);\n"
"\n"));
et.back().addResult("directional_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = downstream_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Expr = downstream_Expr.map;\n"
"initial\n"
" report Result = downstream( Ldd, Expr);\n"
"\n"));
et.back().addResult("downstream_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = downstreamdist_Result.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
"initial\n"
" report Result = downstreamdist(Ldd2);\n"
"\n"));
et.back().addResult("downstreamdist_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = eq_Result.map;\n"
" Expr1 = eq_Expr1.map;\n"
" Expr2 = eq_Expr2.map;\n"
"initial\n"
" report Result = Expr1 == Expr2;\n"
"\n"));
et.back().addResult("eq_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = exp_Result.map;\n"
" Power = exp_Power.map;\n"
"initial\n"
" report Result = exp(Power);\n"
"\n"));
et.back().addResult("exp_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ge_Result.map;\n"
" Expr1 = eq_Expr1.map;\n"
" Expr2 = eq_Expr2.map;\n"
"initial\n"
" report Result = Expr1 >= Expr2;\n"
"\n"));
et.back().addResult("ge_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = gt_Result.map;\n"
" Expr1 = eq_Expr1.map;\n"
" Expr2 = eq_Expr2.map;\n"
"initial\n"
" report Result = Expr1 > Expr2;\n"
"\n"));
et.back().addResult("gt_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = idiv_Result.map;\n"
" Expr1 = slash_Expr1.map;\n"
" Expr2 = slash_Expr2.map;\n"
"initial\n"
" report Result = Expr1 idiv Expr2;\n"
"\n"));
et.back().addResult("idiv_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ifthen_Result.map;\n"
" Cond = ifthen_Cond.map;\n"
" Expr1 = ifthen_Expr1.map;\n"
"initial\n"
" report Result = if(Cond then Expr1);\n"
"\n"));
et.back().addResult("ifthen_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ifthenelse_Result.map;\n"
" Cond = ifthen_Cond.map;\n"
" Expr1 = ifthen_Expr1.map;\n"
" Expr2 = ifthenelse_Expr2.map;\n"
"initial\n"
" report Result = if(Cond,Expr1,Expr2);\n"
"\n"));
et.back().addResult("ifthenelse_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ldd_Result.map;\n"
" Expr = ldd_Expr.map;\n"
"initial\n"
" report Result = ldd(Expr);\n"
"\n"));
et.back().addResult("ldd_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = ldddist_Result1.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" Points = ldddist_Points.map;\n"
"initial\n"
" report Result1 = ldddist(Ldd2,Points,1);\n"
"\n"));
et.back().addResult("ldddist_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = ldddist_Result2.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" Points2 = ldddist_Points2.map;\n"
" FrictMat = ldddist_FrictMat.map;\n"
"initial\n"
" report Result2 = ldddist(Ldd2,Points2,FrictMat);\n"
"\n"));
et.back().addResult("ldddist_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = le_Result.map;\n"
" Expr1 = eq_Expr1.map;\n"
" Expr2 = eq_Expr2.map;\n"
"initial\n"
" report Result = Expr1 <= Expr2;\n"
"\n"));
et.back().addResult("le_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ln_Result.map;\n"
" Expr = ln_Expr.map;\n"
"initial\n"
" report Result = ln(Expr);\n"
"\n"));
et.back().addResult("ln_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = log10_Result.map;\n"
" Expr = log10_Expr.map;\n"
"initial\n"
" report Result = log10(Expr);\n"
"\n"));
et.back().addResult("log10_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = lookup_Result1.map;\n"
" Table = lookup_Table.txt;\n"
" Expr1 = lookup_Expr1.map;\n"
"initial\n"
" report Result1 = lookupnominal(Table,Expr1);\n"
"\n"));
et.back().addResult("lookup_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = lookup_Result2.map;\n"
" Table2 = lookup_Table2.txt;\n"
" Expr12 = lookup_Expr12.map;\n"
" Expr22 = lookup_Expr22.map;\n"
" Expr32 = lookup_Expr32.map;\n"
"initial\n"
" report Result2 = lookupordinal(Table2,Expr12,Expr22,Expr32);\n"
"\n"));
et.back().addResult("lookup_Result2.map");
et.push_back(ManualExampleTester("#! --matrixtable\n"
"binding\n"
" Result3 = lookup_Result3.map;\n"
" Table2 = lookup_Table2.txt;\n"
" Expr12 = lookup_Expr12.map;\n"
" Expr22 = lookup_Expr22.map;\n"
" Expr32 = lookup_Expr32.map;\n"
"initial\n"
" report Result3 = lookupordinal(Table2,1,100,Expr32);\n"
"\n"));
et.back().addResult("lookup_Result3.map");
et.push_back(ManualExampleTester("#! --matrixtable\n"
"binding\n"
" Result4 = lookup_Result4.map;\n"
" Table3 = lookup_Table3.txt;\n"
" Expr13 = lookup_Expr13.map;\n"
" Expr23 = lookup_Expr23.map;\n"
"initial\n"
" report Result4 = lookupscalar(Table3,Expr13,Expr23);\n"
"\n"));
et.back().addResult("lookup_Result4.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = lookuplinear_Result1.map;\n"
" Table = lookuplinear_Table.txt;\n"
" Expr = lookuplinear_Expr.map;\n"
"initial\n"
" report Result1 = lookuplinear(Table,Expr);\n"
"\n"));
et.back().addResult("lookuplinear_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = lookuplinear_Result2.map;\n"
" Table2 = lookuplinear_Table2.txt;\n"
" Expr2 = lookuplinear_Expr2.map;\n"
"initial\n"
" report Result2 = lookuplinear(Table2,Expr2);\n"
"\n"));
et.back().addResult("lookuplinear_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = lt_Result.map;\n"
" Expr1 = eq_Expr1.map;\n"
" Expr2 = eq_Expr2.map;\n"
"initial\n"
" report Result = Expr1 < Expr2;\n"
"\n"));
et.back().addResult("lt_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = maparea_Result.map;\n"
" Expr = maparea_Expr.map;\n"
"initial\n"
" report Result = maparea(Expr);\n"
"\n"));
et.back().addResult("maparea_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = mapmaximum_Result.map;\n"
" Expr = mapmaximum_Expr.map;\n"
"initial\n"
" report Result = mapmaximum(Expr);\n"
"\n"));
et.back().addResult("mapmaximum_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = mapminimum_Result.map;\n"
" Expr = mapmaximum_Expr.map;\n"
"initial\n"
" report Result = mapminimum(Expr);\n"
"\n"));
et.back().addResult("mapminimum_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = maptotal_Result.map;\n"
" Expr = mapmaximum_Expr.map;\n"
"initial\n"
" report Result = maptotal(Expr);\n"
"\n"));
et.back().addResult("maptotal_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = max_Result1.map;\n"
" Expr1 = max_Expr1.map;\n"
" Expr2 = max_Expr2.map;\n"
"initial\n"
" report Result1 = max(Expr1,Expr2);\n"
"\n"));
et.back().addResult("max_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = min_Result1.map;\n"
" Expr1 = max_Expr1.map;\n"
" Expr2 = max_Expr2.map;\n"
"initial\n"
" report Result1 = min(Expr1,Expr2);\n"
"\n"));
et.back().addResult("min_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result = mod_Result.map;\n"
" Expr1 = slash_Expr1.map;\n"
" Expr2 = slash_Expr2.map;\n"
"initial\n"
" report Result = Expr1 mod Expr2;\n"
"\n"));
et.back().addResult("mod_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = lddmask_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Mask = lddmask_Mask.map;\n"
"initial\n"
" report Result = lddmask(Ldd,Mask);\n"
"\n"));
et.back().addResult("lddmask_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = nodirection_Result.map;\n"
" Expr = nodirection_Expr.map;\n"
"initial\n"
" report Result = nodirection(Expr);\n"
"\n"));
et.back().addResult("nodirection_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = nominal_Result.map;\n"
" Expr = rounddown_Expr.map;\n"
"initial\n"
" report Result = nominal(Expr);\n"
"\n"));
et.back().addResult("nominal_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ne_Result.map;\n"
" Expr1 = eq_Expr1.map;\n"
" Expr2 = eq_Expr2.map;\n"
"initial\n"
" report Result = Expr1 != Expr2;\n"
"\n"));
et.back().addResult("ne_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = order_Result.map;\n"
" Expr = succ_Expr.map;\n"
"initial\n"
" report Result = order(Expr);\n"
"\n"));
et.back().addResult("order_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = ordinal_Result.map;\n"
" Expr = rounddown_Expr.map;\n"
"initial\n"
" report Result = ordinal(Expr);\n"
"\n"));
et.back().addResult("ordinal_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = path_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Points = path_Points.map;\n"
"initial\n"
" report Result = path(Ldd,Points);\n"
"\n"));
et.back().addResult("path_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = pit_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
"initial\n"
" report Result = pit(Ldd);\n"
"\n"));
et.back().addResult("pit_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = plancurv_Result.map;\n"
" Dem = slope_Dem.map;\n"
"initial\n"
" report Result = roundoff(100*plancurv(Dem))/100;\n"
"\n"));
et.back().addResult("plancurv_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = pred_Result1.map;\n"
" Expr = succ_Expr.map;\n"
"initial\n"
" report Result1 = pred(Expr);\n"
"\n"));
et.back().addResult("pred_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = pred_Result2.map;\n"
" Expr = succ_Expr.map;\n"
"initial\n"
" report Result2 = pred(Expr);\n"
"\n"));
et.back().addResult("pred_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = profcurv_Result.map;\n"
" Dem = slope_Dem.map;\n"
"initial\n"
" report Result = roundoff(100* profcurv(Dem))/100;\n"
"\n"));
et.back().addResult("profcurv_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = lddrepair_Result.map;\n"
" Ldd = lddrepair_Ldd.map;\n"
"initial\n"
" report Result = lddrepair(Ldd);\n"
"\n"));
et.back().addResult("lddrepair_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = rounddown_Result.map;\n"
" Expr = rounddown_Expr.map;\n"
"initial\n"
" report Result = rounddown(Expr);\n"
"\n"));
et.back().addResult("rounddown_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = roundoff_Result.map;\n"
" Expr = rounddown_Expr.map;\n"
"initial\n"
" report Result = roundoff(Expr);\n"
"\n"));
et.back().addResult("roundoff_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = roundup_Result.map;\n"
" Expr = rounddown_Expr.map;\n"
"initial\n"
" report Result = roundup(Expr);\n"
"\n"));
et.back().addResult("roundup_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = scalar_Result.map;\n"
" Expr1 = and_Expr1.map;\n"
"areamap\n"
" and_Expr1.map;\n"
"initial\n"
" report Result = scalar(1);\n"
"\n"));
et.back().addResult("scalar_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = sin_Result.map;\n"
" Expr = sin_Expr.map;\n"
"initial\n"
" report Result = sin(Expr);\n"
"\n"));
et.back().addResult("sin_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = slope_Result.map;\n"
" Dem = slope_Dem.map;\n"
"initial\n"
" report Result = slope(Dem);\n"
"\n"));
et.back().addResult("slope_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = slopelength_Result1.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
"initial\n"
" report Result1 = slopelength(Ldd2,1);\n"
"\n"));
et.back().addResult("slopelength_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = slopelength_Result2.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" FrictMat = slopelength_FrictMat.map;\n"
"initial\n"
" report Result2 = slopelength(Ldd2,FrictMat);\n"
"\n"));
et.back().addResult("slopelength_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = spread_Result1.map;\n"
" Points = spread_Points.map;\n"
"initial\n"
" report Result1 = spread(Points,0,1);\n"
"\n"));
et.back().addResult("spread_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = spread_Result2.map;\n"
" Points2 = spread_Points2.map;\n"
" Initial2 = spread_Initial2.map;\n"
" FrictMat2 = spread_FrictMat2.map;\n"
"initial\n"
" report Result2 = spread(Points2,Initial2,FrictMat2);\n"
"\n"));
et.back().addResult("spread_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = spreadldd_Result1.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" Points1 = spreadldd_Points1.map;\n"
"initial\n"
" report Result1 = spreadldd(Ldd2, Points1,0,1);\n"
"\n"));
et.back().addResult("spreadldd_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = spreadldd_Result2.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" Points2 = spreadldd_Points2.map;\n"
" Initial = spreadldd_Initial.map;\n"
" FrictMat = spreadldd_FrictMat.map;\n"
"initial\n"
" report Result2 = spreadldd(Ldd2, Points2,Initial,FrictMat);\n"
"\n"));
et.back().addResult("spreadldd_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = spreadlddzone_Result1.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" Points1 = spreadldd_Points1.map;\n"
"initial\n"
" report Result1 = spreadlddzone(Ldd2, Points1,0,1);\n"
"\n"));
et.back().addResult("spreadlddzone_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = spreadlddzone_Result2.map;\n"
" Ldd2 = accu_Ldd2.map;\n"
" Points2 = spreadldd_Points2.map;\n"
" Initial = spreadldd_Initial.map;\n"
" FrictMat = spreadldd_FrictMat.map;\n"
"initial\n"
" report Result2 = spreadlddzone(Ldd2, Points2,Initial,FrictMat);\n"
"\n"));
et.back().addResult("spreadlddzone_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = spreadzone_Result1.map;\n"
" Points = spread_Points.map;\n"
"initial\n"
" report Result1 = spreadzone(Points,0,1);\n"
"\n"));
et.back().addResult("spreadzone_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = spreadzone_Result2.map;\n"
" Points2 = spread_Points2.map;\n"
" Initial2 = spread_Initial2.map;\n"
" FrictMat2 = spread_FrictMat2.map;\n"
"initial\n"
" report Result2 = spreadzone(Points2,Initial2,FrictMat2);\n"
"\n"));
et.back().addResult("spreadzone_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = sqr_Result.map;\n"
" Expr = sqr_Expr.map;\n"
"initial\n"
" report Result = sqr(Expr);\n"
"\n"));
et.back().addResult("sqr_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = sqrt_Result.map;\n"
" Expr = sqrt_Expr.map;\n"
"initial\n"
" report Result = sqrt(Expr);\n"
"\n"));
et.back().addResult("sqrt_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = subcatchment_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Points = catchment_Points.map;\n"
"initial\n"
" report Result = subcatchment(Ldd,Points);\n"
"\n"));
et.back().addResult("subcatchment_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = succ_Result1.map;\n"
" Expr = succ_Expr.map;\n"
"initial\n"
" report Result1 = succ(Expr);\n"
"\n"));
et.back().addResult("succ_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result = streamorder_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
"initial\n"
" report Result = streamorder(Ldd);\n"
"\n"));
et.back().addResult("streamorder_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = tan_Result.map;\n"
" Expr = tan_Expr.map;\n"
"initial\n"
" report Result = tan(Expr);\n"
"\n"));
et.back().addResult("tan_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = uniqueid_Result.map;\n"
" Expr = uniqueid_Expr.map;\n"
"initial\n"
" report Result = uniqueid(Expr);\n"
"\n"));
et.back().addResult("uniqueid_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = upstream_Result.map;\n"
" Ldd = accu_Ldd.map;\n"
" Expr = downstream_Expr.map;\n"
"initial\n"
" report Result = upstream(Ldd, Expr);\n"
"\n"));
et.back().addResult("upstream_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = view_Result.map;\n"
" Dem = view_Dem.map;\n"
" Points = view_Points.map;\n"
"initial\n"
" report Result = view(Dem, Points);\n"
"\n"));
et.back().addResult("view_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowaverage_Result1.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result1 = windowaverage( Expr, 6);\n"
"\n"));
et.back().addResult("windowaverage_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowaverage_Result2.map;\n"
" Expr = windowaverage_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowaverage( Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowaverage_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result = shift_Result.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result = shift(Expr, 1,1);\n"
"\n"));
et.back().addResult("shift_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = shift_Result2.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result2 = shift(Expr, -1,-1);\n"
"\n"));
et.back().addResult("shift_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = shift0_Result1.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result1 = shift0(Expr, -1,-1);\n"
"\n"));
et.back().addResult("shift0_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowdiversity_Result1.map;\n"
" Expr = windowdiversity_Expr.map;\n"
"initial\n"
" report Result1 = windowdiversity( Expr, 6);\n"
"\n"));
et.back().addResult("windowdiversity_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowdiversity_Result2.map;\n"
" Expr = windowdiversity_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowdiversity( Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowdiversity_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowhighpass_Result1.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result1 = windowhighpass( Expr, 6);\n"
"\n"));
et.back().addResult("windowhighpass_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowhighpass_Result2.map;\n"
" Expr = windowaverage_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowhighpass( Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowhighpass_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowmajority_Result1.map;\n"
" Expr = windowmajority_Expr.map;\n"
"initial\n"
" report Result1 = windowmajority( Expr, 6);\n"
"\n"));
et.back().addResult("windowmajority_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowmajority_Result2.map;\n"
" Expr = windowmajority_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowmajority( Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowmajority_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowmaximum_Result1.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result1 = windowmaximum(Expr, 6);\n"
"\n"));
et.back().addResult("windowmaximum_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowmaximum_Result2.map;\n"
" Expr = windowaverage_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowmaximum( Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowmaximum_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowminimum_Result1.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result1 = windowminimum( Expr, 6);\n"
"\n"));
et.back().addResult("windowminimum_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowminimum_Result2.map;\n"
" Expr = windowaverage_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowminimum(Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowminimum_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = windowtotal_Result1.map;\n"
" Expr = windowaverage_Expr.map;\n"
"initial\n"
" report Result1 = windowtotal( Expr, 6);\n"
"\n"));
et.back().addResult("windowtotal_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = windowtotal_Result2.map;\n"
" Expr = windowaverage_Expr.map;\n"
" WinLen2 = windowaverage_WinLen2.map;\n"
"initial\n"
" report Result2 = windowtotal( Expr, WinLen2);\n"
"\n"));
et.back().addResult("windowtotal_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result3 = windowdiversity_Result3.map;\n"
" Expr2 = windowdiversity_Expr2.map;\n"
"initial\n"
" report Result3 = (windowdiversity(Expr2,celllength() * 1.1)) > 1;\n"
"\n"));
et.back().addResult("windowdiversity_Result3.map");
et.push_back(ManualExampleTester("#! --coorlr\n"
"binding\n"
" Result = xcoordinate_Result.map;\n"
" Expr = xcoordinate_Expr.map;\n"
"initial\n"
" report Result = xcoordinate(Expr);\n"
"\n"));
et.back().addResult("xcoordinate_Result.map");
et.push_back(ManualExampleTester("#! --coorcentre\n"
"binding\n"
" Result = ycoordinate_Result.map;\n"
" Expr = xcoordinate_Expr.map;\n"
"initial\n"
" report Result = ycoordinate(Expr);\n"
"\n"));
et.back().addResult("ycoordinate_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = argorderarealimited_Result.map;\n"
" Chances11 = argorderwithidarealimited_Chances11.map;\n"
" Chances12 = argorderwithidarealimited_Chances12.map;\n"
"initial\n"
" report Result = argorderarealimited(\n"
" Chances11,\n"
"  2, # limit in pixels\n"
" Chances12,\n"
"  2  # limit in pixels\n"
"  )\n"
"  ;\n"
"\n"));
et.back().addResult("argorderarealimited_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = argorderwithidarealimited_Result.map;\n"
" Chances11 = argorderwithidarealimited_Chances11.map;\n"
" Chances12 = argorderwithidarealimited_Chances12.map;\n"
"initial\n"
" report Result = argorderwithidarealimited(\n"
" Chances11,\n"
"  11,# first id\n"
"  2, # limit in pixels\n"
" Chances12,\n"
"  12,# second id\n"
"  2  # limit in pixels\n"
"  )\n"
"  ;\n"
"\n"));
et.back().addResult("argorderwithidarealimited_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = argorderaddarealimited_Result.map;\n"
" CurrentId = argorderaddarealimited_CurrentId.map;\n"
" Chances1 = argorderaddarealimited_Chances1.map;\n"
" Chances2 = argorderaddarealimited_Chances2.map;\n"
"initial\n"
" report Result = argorderaddarealimited(\n"
" CurrentId,\n"
" Chances1,\n"
"  1,# add area\n"
" Chances2,\n"
"  4  # limit in pixels\n"
"  )\n"
"  ;\n"
"\n"));
et.back().addResult("argorderaddarealimited_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = argorder_Result.map;\n"
" Chances11 = argorderwithidarealimited_Chances11.map;\n"
" Chances12 = argorderwithidarealimited_Chances12.map;\n"
"initial\n"
" report Result = argorder(\n"
" Chances11,\n"
" Chances12);\n"
"\n"));
et.back().addResult("argorder_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = argorderwithid_Result.map;\n"
" Chances11 = argorderwithidarealimited_Chances11.map;\n"
" Chances12 = argorderwithidarealimited_Chances12.map;\n"
"initial\n"
" report Result = argorderwithid(\n"
" Chances11,\n"
"  11,# first id\n"
" Chances12,\n"
"  12   # second id)\n"
"  )\n"
"  ;\n"
"\n"));
et.back().addResult("argorderwithid_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = areaorder_Result.map;\n"
" Expr = areaorder_Expr.map;\n"
" AreaClass = areaorder_AreaClass.map;\n"
"initial\n"
" report Result = areaorder(\n"
" Expr,\n"
" AreaClass) ;\n"
"\n"));
et.back().addResult("areaorder_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = umin_Result.map;\n"
" Expr = abs_Expr.map;\n"
"initial\n"
" report Result = -Expr;\n"
"\n"));
et.back().addResult("umin_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result = uadd_Result.map;\n"
" Expr = abs_Expr.map;\n"
"initial\n"
" report Result = +Expr;\n"
"\n"));
et.back().addResult("uadd_Result.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = markwhilesum_Result1.map;\n"
" Expr1 = markwhilesum_Expr1.map;\n"
" Expr = cos_Expr.map;\n"
"initial\n"
" report Result1 = markwhilesumle(Expr1, scalar(Expr), 40);\n"
"\n"));
et.back().addResult("markwhilesum_Result1.map");
et.push_back(ManualExampleTester("binding\n"
" Result2 = markwhilesum_Result2.map;\n"
" Expr1 = markwhilesum_Expr1.map;\n"
" Expr = cos_Expr.map;\n"
"initial\n"
" report Result2 = markwhilesumge(Expr1, scalar(Expr), 40);\n"
"\n"));
et.back().addResult("markwhilesum_Result2.map");
et.push_back(ManualExampleTester("binding\n"
" Result1 = window4total_Result1.map;\n"
" Expr1 = max_Expr1.map;\n"
"initial\n"
" report Result1 = window4total(Expr1);\n"
"\n"));
et.back().addResult("window4total_Result1.map");
et.push_back(ManualExampleTester("\n"
"# example from Applied Hydrology\n"
"binding\n"
" Id = muskingum_tssid.map;\n"
" Ldd = muskingum_Ldd.map;\n"
" InTss = muskingum_Inflow.txt;\n"
"                      # valid ranges\n"
" In_Timestep = 3600;  # 1 - 3600\n"
" In_K = 2.3;          # 0.5 - 10\n"
" In_x = 0.15;         # 0.1 - 0.9\n"
" In_SegmentLength = 1;# 0.1 - 10\n"
" In_NrIteration = 100;\n"
" # Muskingum routing is stable when 1/2(1-K) <= K/timestepSecs <= 1/2x\n"
" # Python code for test\n"
" #   f1 = 0.5*(1-K)\n"
" #   f2 = K / timestepInSecs\n"
" #   f3 = 0.5 * x\n"
" #   if not ( (f1 <= f2) and (f2 <= f3)):\n"
" #     continue\n"
"\n"
"timer\n"
"   1 40 1;\n"
"initial\n"
"\n"
"   TimeStepInSecs = In_Timestep;\n"
"   K = In_K/TimeStepInSecs;  # [sec]\n"
"\n"
"   x = In_x;\n"
"\n"
"   # EQUAL To value at timestep 1 in InTss\n"
"   PrevFlowRate = if(Id eq 1 then 85 else 85)/TimeStepInSecs ;  # m3/sec\n"
"\n"
"   PrevInflow = if(Id eq 1 then 85 else 0)/TimeStepInSecs;      # m3/sec\n"
"\n"
"   # Segmentlength varieren tussen 0.1 en 10\n"
"   SegmentLength = In_SegmentLength;\n"
"\n"
"   Iterations = In_NrIteration;\n"
"\n"
"dynamic\n"
"\n"
"   InflowTimestep= timeinputscalar(InTss, Id)/TimeStepInSecs;  # m3/sec\n"
"\n"
"   FlowRate = muskingum(Ldd,PrevFlowRate,PrevInflow,\n"
"                        InflowTimestep,K,x,\n"
"                        SegmentLength, Iterations,TimeStepInSecs);\n"
"\n"
"   report muskingum_FlowRate1.txt = timeoutput(Id,FlowRate*TimeStepInSecs);\n"
"\n"
"   PrevFlowRate = FlowRate;\n"
"   PrevInflow = InflowTimestep;\n"
"\n"));
et.back().addResult("muskingum_FlowRate1.txt");
