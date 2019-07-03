# DO NOT EDIT
# Created by $PCRTREE2's PCRasterSample.py.
import os, os.path
import testcase
from pcraster import *

# from PCRaster.operations import *
class TestExamples(testcase.TestCase):
    def testProlog(self):
        print("[skipped: inputTailRepeat of argorder* bugzilla 134]")
        assert(True)
        return

    def test_and_Result(self):
        try:
            Expr1 = readmap("and_Expr1.map")
            Expr2 = readmap("and_Expr2.map")
            Result = Expr1 & Expr2
            self.failUnless(self.mapEqualsValidated(Result, "and_Result.map"), "and_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_or_Result(self):
        try:
            Expr1 = readmap("and_Expr1.map")
            Expr2 = readmap("and_Expr2.map")
            Result = Expr1 | Expr2
            self.failUnless(self.mapEqualsValidated(Result, "or_Result.map"), "or_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_xor_Result(self):
        try:
            Expr1 = readmap("and_Expr1.map")
            Expr2 = readmap("and_Expr2.map")
            Result = Expr1 ^ Expr2
            self.failUnless(self.mapEqualsValidated(Result, "xor_Result.map"), "xor_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_not_Result(self):
        try:
            Expr1 = readmap("and_Expr1.map")
            Result = ~ Expr1 
            self.failUnless(self.mapEqualsValidated(Result, "not_Result.map"), "not_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ster_Result(self):
        try:
            Expr1 = readmap("ster_Expr1.map")
            Expr2 = readmap("ster_Expr2.map")
            Result = Expr1 * Expr2
            self.failUnless(self.mapEqualsValidated(Result, "ster_Result.map"), "ster_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_sterster_Result(self):
        try:
            Expr = readmap("sterster_Expr.map")
            Power = readmap("sterster_Power.map")
            Result = Expr ** Power
            self.failUnless(self.mapEqualsValidated(Result, "sterster_Result.map"), "sterster_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_minus_Result(self):
        try:
            Expr1 = readmap("minus_Expr1.map")
            Expr2 = readmap("minus_Expr2.map")
            Result = Expr1 - Expr2
            self.failUnless(self.mapEqualsValidated(Result, "minus_Result.map"), "minus_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_plus_Result(self):
        try:
            Expr1 = readmap("minus_Expr1.map")
            Expr2 = readmap("minus_Expr2.map")
            Result = Expr1 + Expr2
            self.failUnless(self.mapEqualsValidated(Result, "plus_Result.map"), "plus_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_slash_Result(self):
        try:
            Expr1 = readmap("slash_Expr1.map")
            Expr2 = readmap("slash_Expr2.map")
            Result = Expr1 / Expr2
            self.failUnless(self.mapEqualsValidated(Result, "slash_Result.map"), "slash_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_abs_Result(self):
        try:
            Expr = readmap("abs_Expr.map")
            Result = abs(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "abs_Result.map"), "abs_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accu_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accu_Material.map")
            Result = accuflux(Ldd,Material)
            self.failUnless(self.mapEqualsValidated(Result, "accu_Result.map"), "accu_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accu_Result2(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Result2 = accuflux(Ldd,1)
            self.failUnless(self.mapEqualsValidated(Result2, "accu_Result2.map"), "accu_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accu_Result3(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            MaterialMV = readmap("accu_MaterialMV.map")
            Result3 = accuflux(Ldd,MaterialMV)
            self.failUnless(self.mapEqualsValidated(Result3, "accu_Result3.map"), "accu_Result3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accufraction_State1(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accu_Material.map")
            
            State1 = accufractionstate(Ldd,Material,0.5)
            Flux1 = accufractionflux(Ldd,Material,0.5)
            
            self.failUnless(self.mapEqualsValidated(State1, "accufraction_State1.map"), "accufraction_State1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1, "accufraction_Flux1.map"), "accufraction_Flux1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accufraction_State2(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            TransFra = readmap("accufraction_TransFra.map")
            
            State2 = accufractionstate(Ldd,Material,TransFra)
            Flux2 = accufractionflux(Ldd,Material,TransFra)
            self.failUnless(self.mapEqualsValidated(State2, "accufraction_State2.map"), "accufraction_State2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2, "accufraction_Flux2.map"), "accufraction_Flux2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accucapacity_State1(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accu_Material.map")
            
            State1 = accucapacitystate(Ldd,Material,1.5)
            Flux1 = accucapacityflux(Ldd,Material,1.5)
            self.failUnless(self.mapEqualsValidated(State1, "accucapacity_State1.map"), "accucapacity_State1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1, "accucapacity_Flux1.map"), "accucapacity_Flux1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accucapacity_State2(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            TransCap = readmap("accucapacity_TransCap.map")
            
            State2 = accucapacitystate(Ldd,Material,TransCap)
            Flux2 = accucapacityflux(Ldd,Material,TransCap)
            self.failUnless(self.mapEqualsValidated(State2, "accucapacity_State2.map"), "accucapacity_State2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2, "accucapacity_Flux2.map"), "accucapacity_Flux2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accuthreshold_State1(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accu_Material.map")
            
            State1 = accuthresholdstate(Ldd,Material,1.5)
            Flux1 = accuthresholdflux(Ldd,Material,1.5)
            self.failUnless(self.mapEqualsValidated(State1, "accuthreshold_State1.map"), "accuthreshold_State1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1, "accuthreshold_Flux1.map"), "accuthreshold_Flux1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accuthreshold_State2(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            TransTH = readmap("accuthreshold_TransTH.map")
            
            State2 = accuthresholdstate(Ldd,Material,TransTH)
            Flux2 = accuthresholdflux(Ldd,Material,TransTH)
            self.failUnless(self.mapEqualsValidated(State2, "accuthreshold_State2.map"), "accuthreshold_State2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2, "accuthreshold_Flux2.map"), "accuthreshold_Flux2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutrigger_State1(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accu_Material.map")
            
            State1=accutriggerstate(Ldd,Material,1.5)
            Flux1=accutriggerflux(Ldd,Material,1.5)
            self.failUnless(self.mapEqualsValidated(State1, "accutrigger_State1.map"), "accutrigger_State1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1, "accutrigger_Flux1.map"), "accutrigger_Flux1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutrigger_State2(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            TransTH = readmap("accuthreshold_TransTH.map")
            
            State2 = accutriggerstate(Ldd,Material,TransTH)
            Flux2 = accutriggerflux(Ldd,Material,TransTH)
            self.failUnless(self.mapEqualsValidated(State2, "accutrigger_State2.map"), "accutrigger_State2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2, "accutrigger_Flux2.map"), "accutrigger_Flux2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutrigger_State3(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            TransTHMV = readmap("accuthreshold_TransTHMV.map")
            
            State3 = accutriggerstate(Ldd,Material,TransTHMV)
            Flux3 = accutriggerflux(Ldd,Material,TransTHMV)
            self.failUnless(self.mapEqualsValidated(State3, "accutrigger_State3.map"), "accutrigger_State3.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux3, "accutrigger_Flux3.map"), "accutrigger_Flux3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltime_State1(self):
        try:
            Ldd = readmap("accutraveltime_Ldd.map")
            Material = readmap("accutraveltime_Material.map")
            Velocity = readmap("accutraveltime_Velocity.map")
            
            State1 = accutraveltimestate(Ldd,Material,Velocity)
            Flux1 = accutraveltimeflux(Ldd,Material,Velocity)
            self.failUnless(self.mapEqualsValidated(State1, "accutraveltime_State1.map"), "accutraveltime_State1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1, "accutraveltime_Flux1.map"), "accutraveltime_Flux1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefractionremoved_Removed1(self):
        try:
            Ldd = readmap("accutraveltime_Ldd.map")
            Material = readmap("accutraveltime_Material.map")
            Velocity = readmap("accutraveltime_Velocity.map")
            Removed1 = accutraveltimefractionremoved(Ldd,Material,Velocity, 1)
            self.failUnless(self.mapEqualsValidated(Removed1, "accutraveltimefractionremoved_Removed1.map"), "accutraveltimefractionremoved_Removed1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State1_1(self):
        try:
            Ldd1 = readmap("attfTests_Ldd1.map")
            Material1_2 = readmap("attfTests_Material1_2.map")
            Velocity1_1 = readmap("attfTests_Velocity1_1.map")
            
            State1_1 = accutraveltimefractionstate(Ldd1,Material1_2,Velocity1_1, 0.5)
            Flux1_1 = accutraveltimefractionflux(Ldd1,Material1_2,Velocity1_1, 0.5)
            Removed1_1 = accutraveltimefractionremoved(Ldd1,Material1_2,Velocity1_1, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State1_1, "accutraveltimefraction_State1_1.map"), "accutraveltimefraction_State1_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1_1, "accutraveltimefraction_Flux1_1.map"), "accutraveltimefraction_Flux1_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed1_1, "accutraveltimefraction_Removed1_1.map"), "accutraveltimefraction_Removed1_1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State1_2(self):
        try:
            Ldd1 = readmap("attfTests_Ldd1.map")
            Material1_2 = readmap("attfTests_Material1_2.map")
            Velocity1_2 = readmap("attfTests_Velocity1_2.map")
            
            State1_2 = accutraveltimefractionstate(Ldd1,Material1_2,Velocity1_2, 0.5)
            Flux1_2 = accutraveltimefractionflux(Ldd1,Material1_2,Velocity1_2, 0.5)
            Removed1_2 = accutraveltimefractionremoved(Ldd1,Material1_2,Velocity1_2, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State1_2, "accutraveltimefraction_State1_2.map"), "accutraveltimefraction_State1_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1_2, "accutraveltimefraction_Flux1_2.map"), "accutraveltimefraction_Flux1_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed1_2, "accutraveltimefraction_Removed1_2.map"), "accutraveltimefraction_Removed1_2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State1_3(self):
        try:
            Ldd1 = readmap("attfTests_Ldd1.map")
            Material1_3 = readmap("attfTests_Material1_3.map")
            Velocity1_3 = readmap("attfTests_Velocity1_3.map")
            Fraction1_3 = readmap("attfTests_Fraction1_3.map")
            
            State1_3 = accutraveltimefractionstate(Ldd1,Material1_3,Velocity1_3, Fraction1_3)
            Flux1_3 = accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_3, Fraction1_3)
            Removed1_3 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_3, Fraction1_3)
            
            self.failUnless(self.mapEqualsValidated(State1_3, "accutraveltimefraction_State1_3.map"), "accutraveltimefraction_State1_3.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1_3, "accutraveltimefraction_Flux1_3.map"), "accutraveltimefraction_Flux1_3.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed1_3, "accutraveltimefraction_Removed1_3.map"), "accutraveltimefraction_Removed1_3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State1_4(self):
        try:
            Ldd1 = readmap("attfTests_Ldd1.map")
            Material1_3 = readmap("attfTests_Material1_3.map")
            Velocity1_4 = readmap("attfTests_Velocity1_4.map")
            Fraction1_3 = readmap("attfTests_Fraction1_3.map")
            
            State1_4 = accutraveltimefractionstate(Ldd1,Material1_3,Velocity1_4, Fraction1_3)
            Flux1_4 = accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_4, Fraction1_3)
            Removed1_4 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_4, Fraction1_3)
            
            self.failUnless(self.mapEqualsValidated(State1_4, "accutraveltimefraction_State1_4.map"), "accutraveltimefraction_State1_4.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1_4, "accutraveltimefraction_Flux1_4.map"), "accutraveltimefraction_Flux1_4.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed1_4, "accutraveltimefraction_Removed1_4.map"), "accutraveltimefraction_Removed1_4.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State1_5(self):
        try:
            Ldd1 = readmap("attfTests_Ldd1.map")
            Material1_3 = readmap("attfTests_Material1_3.map")
            Velocity1_5 = readmap("attfTests_Velocity1_5.map")
            
            State1_5 = accutraveltimefractionstate(Ldd1,Material1_3,Velocity1_5, 1)
            Flux1_5 = accutraveltimefractionflux(Ldd1,Material1_3,Velocity1_5, 1)
            Removed1_5 = accutraveltimefractionremoved(Ldd1,Material1_3,Velocity1_5, 1)
            
            self.failUnless(self.mapEqualsValidated(State1_5, "accutraveltimefraction_State1_5.map"), "accutraveltimefraction_State1_5.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1_5, "accutraveltimefraction_Flux1_5.map"), "accutraveltimefraction_Flux1_5.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed1_5, "accutraveltimefraction_Removed1_5.map"), "accutraveltimefraction_Removed1_5.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State2_1(self):
        try:
            Ldd2 = readmap("attfTests_Ldd2.map")
            Material2_1 = readmap("attfTests_Material2_1.map")
            Velocity2_1 = readmap("attfTests_Velocity2_1.map")
            
            State2_1 = accutraveltimefractionstate(Ldd2,Material2_1,Velocity2_1, 0.5)
            Flux2_1 = accutraveltimefractionflux(Ldd2,Material2_1,Velocity2_1, 0.5)
            Removed2_1 = accutraveltimefractionremoved(Ldd2,Material2_1,Velocity2_1, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State2_1, "accutraveltimefraction_State2_1.map"), "accutraveltimefraction_State2_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2_1, "accutraveltimefraction_Flux2_1.map"), "accutraveltimefraction_Flux2_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed2_1, "accutraveltimefraction_Removed2_1.map"), "accutraveltimefraction_Removed2_1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State2_2(self):
        try:
            Ldd2 = readmap("attfTests_Ldd2.map")
            Material2_2 = readmap("attfTests_Material2_2.map")
            Velocity2_2 = readmap("attfTests_Velocity2_2.map")
            
            State2_2 = accutraveltimefractionstate(Ldd2,Material2_2,Velocity2_2, 0.5)
            Flux2_2 = accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_2, 0.5)
            Removed2_2 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_2, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State2_2, "accutraveltimefraction_State2_2.map"), "accutraveltimefraction_State2_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2_2, "accutraveltimefraction_Flux2_2.map"), "accutraveltimefraction_Flux2_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed2_2, "accutraveltimefraction_Removed2_2.map"), "accutraveltimefraction_Removed2_2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State2_3(self):
        try:
            Ldd2 = readmap("attfTests_Ldd2.map")
            Material2_2 = readmap("attfTests_Material2_2.map")
            Velocity2_3 = readmap("attfTests_Velocity2_3.map")
            Fraction2_3 = readmap("attfTests_Fraction2_3.map")
            
            State2_3 = accutraveltimefractionstate(Ldd2,Material2_2,Velocity2_3, Fraction2_3)
            Flux2_3 = accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_3, Fraction2_3)
            Removed2_3 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_3, Fraction2_3)
            
            self.failUnless(self.mapEqualsValidated(State2_3, "accutraveltimefraction_State2_3.map"), "accutraveltimefraction_State2_3.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2_3, "accutraveltimefraction_Flux2_3.map"), "accutraveltimefraction_Flux2_3.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed2_3, "accutraveltimefraction_Removed2_3.map"), "accutraveltimefraction_Removed2_3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State2_4(self):
        try:
            Ldd2 = readmap("attfTests_Ldd2.map")
            Material2_2 = readmap("attfTests_Material2_2.map")
            Velocity2_4 = readmap("attfTests_Velocity2_4.map")
            Fraction2_3 = readmap("attfTests_Fraction2_3.map")
            
            State2_4 = accutraveltimefractionstate(Ldd2,Material2_2,Velocity2_4, Fraction2_3)
            Flux2_4 = accutraveltimefractionflux(Ldd2,Material2_2,Velocity2_4, Fraction2_3)
            Removed2_4 = accutraveltimefractionremoved(Ldd2,Material2_2,Velocity2_4, Fraction2_3)
            
            self.failUnless(self.mapEqualsValidated(State2_4, "accutraveltimefraction_State2_4.map"), "accutraveltimefraction_State2_4.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2_4, "accutraveltimefraction_Flux2_4.map"), "accutraveltimefraction_Flux2_4.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed2_4, "accutraveltimefraction_Removed2_4.map"), "accutraveltimefraction_Removed2_4.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State3_1(self):
        try:
            Ldd3 = readmap("attfTests_Ldd3.map")
            Material3_1 = readmap("attfTests_Material3_1.map")
            Velocity3_1 = readmap("attfTests_Velocity3_1.map")
            
            State3_1 = accutraveltimefractionstate(Ldd3,Material3_1,Velocity3_1, 0.5)
            Flux3_1 = accutraveltimefractionflux(Ldd3,Material3_1,Velocity3_1, 0.5)
            Removed3_1 = accutraveltimefractionremoved(Ldd3,Material3_1,Velocity3_1, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State3_1, "accutraveltimefraction_State3_1.map"), "accutraveltimefraction_State3_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux3_1, "accutraveltimefraction_Flux3_1.map"), "accutraveltimefraction_Flux3_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed3_1, "accutraveltimefraction_Removed3_1.map"), "accutraveltimefraction_Removed3_1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State3_2(self):
        try:
            Ldd3 = readmap("attfTests_Ldd3.map")
            Material3_1 = readmap("attfTests_Material3_1.map")
            Velocity3_2 = readmap("attfTests_Velocity3_2.map")
            
            State3_2 = accutraveltimefractionstate(Ldd3,Material3_1,Velocity3_2, 0.5)
            Flux3_2 = accutraveltimefractionflux(Ldd3,Material3_1,Velocity3_2, 0.5)
            Removed3_2 = accutraveltimefractionremoved(Ldd3,Material3_1,Velocity3_2, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State3_2, "accutraveltimefraction_State3_2.map"), "accutraveltimefraction_State3_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux3_2, "accutraveltimefraction_Flux3_2.map"), "accutraveltimefraction_Flux3_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed3_2, "accutraveltimefraction_Removed3_2.map"), "accutraveltimefraction_Removed3_2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State4_1(self):
        try:
            Ldd3 = readmap("attfTests_Ldd3.map")
            Material4_1 = readmap("attfTests_Material4_1.map")
            Velocity4_1 = readmap("attfTests_Velocity4_1.map")
            
            State4_1 = accutraveltimefractionstate(Ldd3,Material4_1,Velocity4_1, 0.5)
            Flux4_1 = accutraveltimefractionflux(Ldd3,Material4_1,Velocity4_1, 0.5)
            Removed4_1 = accutraveltimefractionremoved(Ldd3,Material4_1,Velocity4_1, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State4_1, "accutraveltimefraction_State4_1.map"), "accutraveltimefraction_State4_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux4_1, "accutraveltimefraction_Flux4_1.map"), "accutraveltimefraction_Flux4_1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed4_1, "accutraveltimefraction_Removed4_1.map"), "accutraveltimefraction_Removed4_1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_accutraveltimefraction_State4_2(self):
        try:
            Ldd3 = readmap("attfTests_Ldd3.map")
            Material4_1 = readmap("attfTests_Material4_1.map")
            Velocity4_2 = readmap("attfTests_Velocity4_2.map")
            
            State4_2 = accutraveltimefractionstate(Ldd3,Material4_1,Velocity4_2, 0.5)
            Flux4_2 = accutraveltimefractionflux(Ldd3,Material4_1,Velocity4_2, 0.5)
            Removed4_2 = accutraveltimefractionremoved(Ldd3,Material4_1,Velocity4_2, 0.5)
            
            self.failUnless(self.mapEqualsValidated(State4_2, "accutraveltimefraction_State4_2.map"), "accutraveltimefraction_State4_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux4_2, "accutraveltimefraction_Flux4_2.map"), "accutraveltimefraction_Flux4_2.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Removed4_2, "accutraveltimefraction_Removed4_2.map"), "accutraveltimefraction_Removed4_2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_kinematic_Qnew(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            Qnew = kinematic(Ldd,Material,0,1.5,0.6,1,15,10)
            self.failUnless(self.mapEqualsValidated(Qnew, "kinematic_Qnew.map"), "kinematic_Qnew.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_kinwave_State1(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            
            State1 = kinwavestate(Ldd,Material,0,1.5,0.6,5,15,10)
            Flux1 = kinwaveflux(Ldd,Material,0,1.5,0.6,5,15,10)
            self.failUnless(self.mapEqualsValidated(State1, "kinwave_State1.map"), "kinwave_State1.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux1, "kinwave_Flux1.map"), "kinwave_Flux1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_dynamicwave_StateChezy(self):
        try:
            setglobaloption("chezy")
            Table = "dynamicwave_Table.txt"
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            
            StateChezy = dynwavestate(
            Table,
            14, # profileId
            Ldd,
            Material, # oldState
            0, # inflow
            0, # bottomLevel
            0.1, # roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            FluxChezy = dynwaveflux(
            Table,
            14, # profileId
            Ldd,
            Material, # oldState
            0, # inflow
            0, # bottomLevel
            0.1, # roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            ) 
            self.failUnless(self.mapEqualsValidated(StateChezy, "dynamicwave_StateChezy.map"), "dynamicwave_StateChezy.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(FluxChezy, "dynamicwave_FluxChezy.map"), "dynamicwave_FluxChezy.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_dynamicwave_State2Chezy(self):
        try:
            setglobaloption("chezy")
            Table = "dynamicwave_Table.txt"
            ProfileId2 = readmap("dynamicwave_ProfileId2.map")
            Ldd = readmap("accu_Ldd.map")
            OldState2 = readmap("dynamicwave_OldState2.map")
            
            State2Chezy=dynwavestate(
            Table,
            ProfileId2, # with a MV
            Ldd,
            OldState2,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            Flux2Chezy=dynwaveflux(
            Table,
            ProfileId2, # with a MV
            Ldd,
            OldState2,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            self.failUnless(self.mapEqualsValidated(State2Chezy, "dynamicwave_State2Chezy.map"), "dynamicwave_State2Chezy.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2Chezy, "dynamicwave_Flux2Chezy.map"), "dynamicwave_Flux2Chezy.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_dynamicwave_State3Chezy(self):
        try:
            setglobaloption("chezy")
            Table = "dynamicwave_Table.txt"
            Ldd = readmap("accu_Ldd.map")
            OldState3 = readmap("dynamicwave_OldState3.map")
            
            State3Chezy = dynwavestate(
            Table,
             14,# profileId 
            Ldd,
            OldState3,
            0,# inflow 
            0,# bottomLevel 
            0.1,# roughness 
            1,# segmentLength 
            10,# nrTimeSlices 
            1, # timestepInSecs
            0  # constantState
            )
            Flux3Chezy = dynwaveflux(
            Table,
             14,# profileId 
            Ldd,
            OldState3,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            self.failUnless(self.mapEqualsValidated(State3Chezy, "dynamicwave_State3Chezy.map"), "dynamicwave_State3Chezy.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux3Chezy, "dynamicwave_Flux3Chezy.map"), "dynamicwave_Flux3Chezy.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_dynamicwave_StateManning(self):
        try:
            setglobaloption("manning")
            Table = "dynamicwave_Table.txt"
            Ldd = readmap("accu_Ldd.map")
            Material = readmap("accufraction_Material.map")
            
            StateManning = dynwavestate(
            Table,
             14,# profileId
            Ldd,
            Material, # oldState
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            FluxManning = dynwaveflux(
            Table,
             14,# profileId
            Ldd,
            Material, # oldState
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            self.failUnless(self.mapEqualsValidated(StateManning, "dynamicwave_StateManning.map"), "dynamicwave_StateManning.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(FluxManning, "dynamicwave_FluxManning.map"), "dynamicwave_FluxManning.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_dynamicwave_State2Manning(self):
        try:
            setglobaloption("manning")
            Table = "dynamicwave_Table.txt"
            ProfileId2 = readmap("dynamicwave_ProfileId2.map")
            Ldd = readmap("accu_Ldd.map")
            OldState2 = readmap("dynamicwave_OldState2.map")
            
            State2Manning = dynwavestate(
            Table,
            ProfileId2, # with a MV
            Ldd,
            OldState2,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            Flux2Manning = dynwaveflux(
            Table,
            ProfileId2, # with a MV
            Ldd,
            OldState2,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            self.failUnless(self.mapEqualsValidated(State2Manning, "dynamicwave_State2Manning.map"), "dynamicwave_State2Manning.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux2Manning, "dynamicwave_Flux2Manning.map"), "dynamicwave_Flux2Manning.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_dynamicwave_State3Manning(self):
        try:
            setglobaloption("manning")
            Table = "dynamicwave_Table.txt"
            Ldd = readmap("accu_Ldd.map")
            OldState3 = readmap("dynamicwave_OldState3.map")
            
            State3Manning = dynwavestate(
            Table,
            14,# profileId
            Ldd,
            OldState3,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            Flux3Manning = dynwaveflux(
            Table,
            14,# profileId
            Ldd,
            OldState3,
            0,# inflow
            0,# bottomLevel
            0.1,# roughness
            1,# segmentLength
            10,# nrTimeSlices
            1, # timestepInSecs
            0  # constantState
            )
            self.failUnless(self.mapEqualsValidated(State3Manning, "dynamicwave_State3Manning.map"), "dynamicwave_State3Manning.map:Result != validated")
            self.failUnless(self.mapEqualsValidated(Flux3Manning, "dynamicwave_Flux3Manning.map"), "dynamicwave_Flux3Manning.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_acos_Result(self):
        try:
            setglobaloption("degrees")
            Expr = readmap("acos_Expr.map")
            Result = acos(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "acos_Result.map"), "acos_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areaarea_Result(self):
        try:
            setglobaloption("unittrue")
            Class = readmap("areaarea_Class.map")
            Result = areaarea( Class)
            self.failUnless(self.mapEqualsValidated(Result, "areaarea_Result.map"), "areaarea_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areadiversity_Result(self):
        try:
            Class = readmap("areaarea_Class.map")
            Expr = readmap("areadiversity_Expr.map")
            Result = areadiversity( Expr, Class)
            self.failUnless(self.mapEqualsValidated(Result, "areadiversity_Result.map"), "areadiversity_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areamajority_Result(self):
        try:
            Class = readmap("areaarea_Class.map")
            Expr = readmap("areamajority_Expr.map")
            Result = areamajority( Expr, Class)
            self.failUnless(self.mapEqualsValidated(Result, "areamajority_Result.map"), "areamajority_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areamaximum_Result(self):
        try:
            Class = readmap("areaarea_Class.map")
            Expr = readmap("areamaximum_Expr.map")
            Result = areamaximum( Expr, Class)
            self.failUnless(self.mapEqualsValidated(Result, "areamaximum_Result.map"), "areamaximum_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areaminimum_Result(self):
        try:
            Class = readmap("areaarea_Class.map")
            Expr = readmap("areamaximum_Expr.map")
            Result = areaminimum( Expr, Class)
            self.failUnless(self.mapEqualsValidated(Result, "areaminimum_Result.map"), "areaminimum_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areaaverage_Result(self):
        try:
            Class = readmap("areaarea_Class.map")
            Expr = readmap("areamaximum_Expr.map")
            Result = areaaverage( Expr, Class)
            self.failUnless(self.mapEqualsValidated(Result, "areaaverage_Result.map"), "areaaverage_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areatotal_Result(self):
        try:
            Class = readmap("areaarea_Class.map")
            Expr = readmap("areamaximum_Expr.map")
            Result = areatotal( Expr, Class)
            self.failUnless(self.mapEqualsValidated(Result, "areatotal_Result.map"), "areatotal_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_asin_Result(self):
        try:
            Expr = readmap("asin_Expr.map")
            Result = asin(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "asin_Result.map"), "asin_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_aspect_Result(self):
        try:
            Dem = readmap("slope_Dem.map")
            Result = aspect(Dem)
            self.failUnless(self.mapEqualsValidated(Result, "aspect_Result.map"), "aspect_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_atan_Result(self):
        try:
            Expr = readmap("atan_Expr.map")
            Result = atan(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "atan_Result.map"), "atan_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_boolean_Result(self):
        try:
            Expr = readmap("boolean_Expr.map")
            Result = boolean(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "boolean_Result.map"), "boolean_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_catchment_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Points = readmap("catchment_Points.map")
            Result = catchment(Ldd,Points)
            self.failUnless(self.mapEqualsValidated(Result, "catchment_Result.map"), "catchment_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_cellarea_Result1(self):
        try:
            setglobaloption("unittrue")
            Expr = readmap("cellarea_Expr.map")
            setclone("cellarea_Expr.map");
            Result1 = cellarea()
            self.failUnless(self.mapEqualsValidated(Result1, "cellarea_Result1.map"), "cellarea_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_cellarea_Result2(self):
        try:
            setglobaloption("unitcell")
            Expr = readmap("cellarea_Expr.map")
            setclone("cellarea_Expr.map");
            Result2 = cellarea()
            self.failUnless(self.mapEqualsValidated(Result2, "cellarea_Result2.map"), "cellarea_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_celllength_Result1(self):
        try:
            setglobaloption("unittrue")
            Expr = readmap("cellarea_Expr.map")
            setclone("cellarea_Expr.map");
            Result1 = celllength()
            self.failUnless(self.mapEqualsValidated(Result1, "celllength_Result1.map"), "celllength_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_celllength_Result2(self):
        try:
            setglobaloption("unitcell")
            Expr = readmap("cellarea_Expr.map")
            setclone("cellarea_Expr.map");
            Result2 = celllength()
            self.failUnless(self.mapEqualsValidated(Result2, "celllength_Result2.map"), "celllength_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_clump_Result1(self):
        try:
            Expr = readmap("clump_Expr.map")
            Result1 = clump( Expr)
            self.failUnless(self.mapEqualsValidated(Result1, "clump_Result1.map"), "clump_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_clump_Result2(self):
        try:
            setglobaloption("nondiagonal")
            Expr = readmap("clump_Expr.map")
            Result2 = clump( Expr)
            self.failUnless(self.mapEqualsValidated(Result2, "clump_Result2.map"), "clump_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_cos_Result(self):
        try:
            Expr = readmap("cos_Expr.map")
            Result = cos(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "cos_Result.map"), "cos_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_cover_Result1(self):
        try:
            Expr1 = readmap("cover_Expr1.map")
            Result1 = cover(Expr1,sqrt(9))
            self.failUnless(self.mapEqualsValidated(Result1, "cover_Result1.map"), "cover_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_cover_Result2(self):
        try:
            Expr1 = readmap("cover_Expr1.map")
            Expr2 = readmap("cover_Expr2.map")
            Expr3 = readmap("cover_Expr3.map")
            Result2 = cover(Expr1,Expr2,Expr3)
            self.failUnless(self.mapEqualsValidated(Result2, "cover_Result2.map"), "cover_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_defined_Result(self):
        try:
            Expr = readmap("defined_Expr.map")
            Result = defined(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "defined_Result.map"), "defined_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddcreate_Result1(self):
        try:
            Dem = readmap("lddcreate_Dem.map")
            Result1 = lddcreate(Dem,9999999,9999999,9999999,9999999)
            self.failUnless(self.mapEqualsValidated(Result1, "lddcreate_Result1.map"), "lddcreate_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddcreate_Result2(self):
        try:
            setglobaloption("lddin")
            Dem = readmap("lddcreate_Dem.map")
            Result2 = lddcreate(Dem,9999999,9999999,9999999,9999999)
            self.failUnless(self.mapEqualsValidated(Result2, "lddcreate_Result2.map"), "lddcreate_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddcreate_Result3(self):
        try:
            setglobaloption("lddin")
            Dem = readmap("lddcreate_Dem.map")
            Result3 = lddcreate(Dem,9999999,5000,9999999,9999999)
            self.failUnless(self.mapEqualsValidated(Result3, "lddcreate_Result3.map"), "lddcreate_Result3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddcreatedem_Result1(self):
        try:
            Dem = readmap("lddcreate_Dem.map")
            Result1 = lddcreatedem(Dem,9999999,9999999,9999999,9999999)
            self.failUnless(self.mapEqualsValidated(Result1, "lddcreatedem_Result1.map"), "lddcreatedem_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddcreatedem_Result2(self):
        try:
            setglobaloption("lddcut")
            Dem = readmap("lddcreate_Dem.map")
            Result2 = lddcreatedem(Dem,999999,9999999,9999999,9999999)
            self.failUnless(self.mapEqualsValidated(Result2, "lddcreatedem_Result2.map"), "lddcreatedem_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_directional_Result1(self):
        try:
            Expr = readmap("directional_Expr.map")
            Result1 = directional(Expr)
            self.failUnless(self.mapEqualsValidated(Result1, "directional_Result1.map"), "directional_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_directional_Result2(self):
        try:
            setglobaloption("degrees")
            Expr = readmap("boolean_Expr.map")
            Result2 = directional(Expr)
            self.failUnless(self.mapEqualsValidated(Result2, "directional_Result2.map"), "directional_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_downstream_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Expr = readmap("downstream_Expr.map")
            Result = downstream( Ldd, Expr)
            self.failUnless(self.mapEqualsValidated(Result, "downstream_Result.map"), "downstream_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_downstreamdist_Result(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Result = downstreamdist(Ldd2)
            self.failUnless(self.mapEqualsValidated(Result, "downstreamdist_Result.map"), "downstreamdist_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_eq_Result(self):
        try:
            Expr1 = readmap("eq_Expr1.map")
            Expr2 = readmap("eq_Expr2.map")
            Result = Expr1 == Expr2
            self.failUnless(self.mapEqualsValidated(Result, "eq_Result.map"), "eq_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_exp_Result(self):
        try:
            Power = readmap("exp_Power.map")
            Result = exp(Power)
            self.failUnless(self.mapEqualsValidated(Result, "exp_Result.map"), "exp_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ge_Result(self):
        try:
            Expr1 = readmap("eq_Expr1.map")
            Expr2 = readmap("eq_Expr2.map")
            Result = Expr1 >= Expr2
            self.failUnless(self.mapEqualsValidated(Result, "ge_Result.map"), "ge_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_gt_Result(self):
        try:
            Expr1 = readmap("eq_Expr1.map")
            Expr2 = readmap("eq_Expr2.map")
            Result = Expr1 > Expr2
            self.failUnless(self.mapEqualsValidated(Result, "gt_Result.map"), "gt_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_idiv_Result(self):
        try:
            Expr1 = readmap("slash_Expr1.map")
            Expr2 = readmap("slash_Expr2.map")
            Result = Expr1 // Expr2
            self.failUnless(self.mapEqualsValidated(Result, "idiv_Result.map"), "idiv_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ifthen_Result(self):
        try:
            Cond = readmap("ifthen_Cond.map")
            Expr1 = readmap("ifthen_Expr1.map")
            Result = ifthen(Cond, Expr1)
            self.failUnless(self.mapEqualsValidated(Result, "ifthen_Result.map"), "ifthen_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ifthenelse_Result(self):
        try:
            Cond = readmap("ifthen_Cond.map")
            Expr1 = readmap("ifthen_Expr1.map")
            Expr2 = readmap("ifthenelse_Expr2.map")
            Result = ifthenelse(Cond, Expr1, Expr2)
            self.failUnless(self.mapEqualsValidated(Result, "ifthenelse_Result.map"), "ifthenelse_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ldd_Result(self):
        try:
            Expr = readmap("ldd_Expr.map")
            Result = ldd(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "ldd_Result.map"), "ldd_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ldddist_Result1(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Points = readmap("ldddist_Points.map")
            Result1 = ldddist(Ldd2,Points,1)
            self.failUnless(self.mapEqualsValidated(Result1, "ldddist_Result1.map"), "ldddist_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ldddist_Result2(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Points2 = readmap("ldddist_Points2.map")
            FrictMat = readmap("ldddist_FrictMat.map")
            Result2 = ldddist(Ldd2,Points2,FrictMat)
            self.failUnless(self.mapEqualsValidated(Result2, "ldddist_Result2.map"), "ldddist_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_le_Result(self):
        try:
            Expr1 = readmap("eq_Expr1.map")
            Expr2 = readmap("eq_Expr2.map")
            Result = Expr1 <= Expr2
            self.failUnless(self.mapEqualsValidated(Result, "le_Result.map"), "le_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ln_Result(self):
        try:
            Expr = readmap("ln_Expr.map")
            Result = ln(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "ln_Result.map"), "ln_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_log10_Result(self):
        try:
            Expr = readmap("log10_Expr.map")
            Result = log10(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "log10_Result.map"), "log10_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lookup_Result1(self):
        try:
            Table = "lookup_Table.txt"
            Expr1 = readmap("lookup_Expr1.map")
            Result1 = lookupnominal(Table,Expr1)
            self.failUnless(self.mapEqualsValidated(Result1, "lookup_Result1.map"), "lookup_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lookup_Result2(self):
        try:
            Table2 = "lookup_Table2.txt"
            Expr12 = readmap("lookup_Expr12.map")
            Expr22 = readmap("lookup_Expr22.map")
            Expr32 = readmap("lookup_Expr32.map")
            Result2 = lookupordinal(Table2,Expr12,Expr22,Expr32)
            self.failUnless(self.mapEqualsValidated(Result2, "lookup_Result2.map"), "lookup_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lookup_Result3(self):
        try:
            setglobaloption("matrixtable")
            Table2 = "lookup_Table2.txt"
            Expr12 = readmap("lookup_Expr12.map")
            Expr22 = readmap("lookup_Expr22.map")
            Expr32 = readmap("lookup_Expr32.map")
            Result3 = lookupordinal(Table2,1,100,Expr32)
            self.failUnless(self.mapEqualsValidated(Result3, "lookup_Result3.map"), "lookup_Result3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lookup_Result4(self):
        try:
            setglobaloption("matrixtable")
            Table3 = "lookup_Table3.txt"
            Expr13 = readmap("lookup_Expr13.map")
            Expr23 = readmap("lookup_Expr23.map")
            Result4 = lookupscalar(Table3,Expr13,Expr23)
            self.failUnless(self.mapEqualsValidated(Result4, "lookup_Result4.map"), "lookup_Result4.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lookuplinear_Result1(self):
        try:
            Table = "lookuplinear_Table.txt"
            Expr = readmap("lookuplinear_Expr.map")
            Result1 = lookuplinear(Table,Expr)
            self.failUnless(self.mapEqualsValidated(Result1, "lookuplinear_Result1.map"), "lookuplinear_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lookuplinear_Result2(self):
        try:
            Table2 = "lookuplinear_Table2.txt"
            Expr2 = readmap("lookuplinear_Expr2.map")
            Result2 = lookuplinear(Table2,Expr2)
            self.failUnless(self.mapEqualsValidated(Result2, "lookuplinear_Result2.map"), "lookuplinear_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lt_Result(self):
        try:
            Expr1 = readmap("eq_Expr1.map")
            Expr2 = readmap("eq_Expr2.map")
            Result = Expr1 < Expr2
            self.failUnless(self.mapEqualsValidated(Result, "lt_Result.map"), "lt_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_maparea_Result(self):
        try:
            Expr = readmap("maparea_Expr.map")
            Result = maparea(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "maparea_Result.map"), "maparea_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_mapmaximum_Result(self):
        try:
            Expr = readmap("mapmaximum_Expr.map")
            Result = mapmaximum(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "mapmaximum_Result.map"), "mapmaximum_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_mapminimum_Result(self):
        try:
            Expr = readmap("mapmaximum_Expr.map")
            Result = mapminimum(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "mapminimum_Result.map"), "mapminimum_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_maptotal_Result(self):
        try:
            Expr = readmap("mapmaximum_Expr.map")
            Result = maptotal(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "maptotal_Result.map"), "maptotal_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_max_Result1(self):
        try:
            Expr1 = readmap("max_Expr1.map")
            Expr2 = readmap("max_Expr2.map")
            Result1 = max(Expr1,Expr2)
            self.failUnless(self.mapEqualsValidated(Result1, "max_Result1.map"), "max_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_min_Result1(self):
        try:
            Expr1 = readmap("max_Expr1.map")
            Expr2 = readmap("max_Expr2.map")
            Result1 = min(Expr1,Expr2)
            self.failUnless(self.mapEqualsValidated(Result1, "min_Result1.map"), "min_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_mod_Result(self):
        try:
            Expr1 = readmap("slash_Expr1.map")
            Expr2 = readmap("slash_Expr2.map")
            Result = Expr1 % Expr2
            self.failUnless(self.mapEqualsValidated(Result, "mod_Result.map"), "mod_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddmask_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Mask = readmap("lddmask_Mask.map")
            Result = lddmask(Ldd,Mask)
            self.failUnless(self.mapEqualsValidated(Result, "lddmask_Result.map"), "lddmask_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_nodirection_Result(self):
        try:
            Expr = readmap("nodirection_Expr.map")
            Result = nodirection(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "nodirection_Result.map"), "nodirection_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_nominal_Result(self):
        try:
            Expr = readmap("rounddown_Expr.map")
            Result = nominal(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "nominal_Result.map"), "nominal_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ne_Result(self):
        try:
            Expr1 = readmap("eq_Expr1.map")
            Expr2 = readmap("eq_Expr2.map")
            Result = Expr1 != Expr2
            self.failUnless(self.mapEqualsValidated(Result, "ne_Result.map"), "ne_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_order_Result(self):
        try:
            Expr = readmap("succ_Expr.map")
            Result = order(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "order_Result.map"), "order_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ordinal_Result(self):
        try:
            Expr = readmap("rounddown_Expr.map")
            Result = ordinal(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "ordinal_Result.map"), "ordinal_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_path_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Points = readmap("path_Points.map")
            Result = path(Ldd,Points)
            self.failUnless(self.mapEqualsValidated(Result, "path_Result.map"), "path_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_pit_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Result = pit(Ldd)
            self.failUnless(self.mapEqualsValidated(Result, "pit_Result.map"), "pit_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_plancurv_Result(self):
        try:
            Dem = readmap("slope_Dem.map")
            Result = roundoff(100*plancurv(Dem))/100
            self.failUnless(self.mapEqualsValidated(Result, "plancurv_Result.map"), "plancurv_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_pred_Result1(self):
        try:
            Expr = readmap("succ_Expr.map")
            Result1 = pred(Expr)
            self.failUnless(self.mapEqualsValidated(Result1, "pred_Result1.map"), "pred_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_pred_Result2(self):
        try:
            Expr = readmap("succ_Expr.map")
            Result2 = pred(Expr)
            self.failUnless(self.mapEqualsValidated(Result2, "pred_Result2.map"), "pred_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_profcurv_Result(self):
        try:
            Dem = readmap("slope_Dem.map")
            Result = roundoff(100* profcurv(Dem))/100
            self.failUnless(self.mapEqualsValidated(Result, "profcurv_Result.map"), "profcurv_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_lddrepair_Result(self):
        try:
            Ldd = readmap("lddrepair_Ldd.map")
            Result = lddrepair(Ldd)
            self.failUnless(self.mapEqualsValidated(Result, "lddrepair_Result.map"), "lddrepair_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_rounddown_Result(self):
        try:
            Expr = readmap("rounddown_Expr.map")
            Result = rounddown(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "rounddown_Result.map"), "rounddown_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_roundoff_Result(self):
        try:
            Expr = readmap("rounddown_Expr.map")
            Result = roundoff(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "roundoff_Result.map"), "roundoff_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_roundup_Result(self):
        try:
            Expr = readmap("rounddown_Expr.map")
            Result = roundup(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "roundup_Result.map"), "roundup_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_scalar_Result(self):
        try:
            Expr1 = readmap("and_Expr1.map")
            setclone("and_Expr1.map");
            Result = scalar(1)
            self.failUnless(self.mapEqualsValidated(Result, "scalar_Result.map"), "scalar_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_sin_Result(self):
        try:
            Expr = readmap("sin_Expr.map")
            Result = sin(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "sin_Result.map"), "sin_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_slope_Result(self):
        try:
            Dem = readmap("slope_Dem.map")
            Result = slope(Dem)
            self.failUnless(self.mapEqualsValidated(Result, "slope_Result.map"), "slope_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_slopelength_Result1(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Result1 = slopelength(Ldd2,1)
            self.failUnless(self.mapEqualsValidated(Result1, "slopelength_Result1.map"), "slopelength_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_slopelength_Result2(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            FrictMat = readmap("slopelength_FrictMat.map")
            Result2 = slopelength(Ldd2,FrictMat)
            self.failUnless(self.mapEqualsValidated(Result2, "slopelength_Result2.map"), "slopelength_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spread_Result1(self):
        try:
            Points = readmap("spread_Points.map")
            Result1 = spread(Points,0,1)
            self.failUnless(self.mapEqualsValidated(Result1, "spread_Result1.map"), "spread_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spread_Result2(self):
        try:
            Points2 = readmap("spread_Points2.map")
            Initial2 = readmap("spread_Initial2.map")
            FrictMat2 = readmap("spread_FrictMat2.map")
            Result2 = spread(Points2,Initial2,FrictMat2)
            self.failUnless(self.mapEqualsValidated(Result2, "spread_Result2.map"), "spread_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spreadldd_Result1(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Points1 = readmap("spreadldd_Points1.map")
            Result1 = spreadldd(Ldd2, Points1,0,1)
            self.failUnless(self.mapEqualsValidated(Result1, "spreadldd_Result1.map"), "spreadldd_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spreadldd_Result2(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Points2 = readmap("spreadldd_Points2.map")
            Initial = readmap("spreadldd_Initial.map")
            FrictMat = readmap("spreadldd_FrictMat.map")
            Result2 = spreadldd(Ldd2, Points2,Initial,FrictMat)
            self.failUnless(self.mapEqualsValidated(Result2, "spreadldd_Result2.map"), "spreadldd_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spreadlddzone_Result1(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Points1 = readmap("spreadldd_Points1.map")
            Result1 = spreadlddzone(Ldd2, Points1,0,1)
            self.failUnless(self.mapEqualsValidated(Result1, "spreadlddzone_Result1.map"), "spreadlddzone_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spreadlddzone_Result2(self):
        try:
            Ldd2 = readmap("accu_Ldd2.map")
            Points2 = readmap("spreadldd_Points2.map")
            Initial = readmap("spreadldd_Initial.map")
            FrictMat = readmap("spreadldd_FrictMat.map")
            Result2 = spreadlddzone(Ldd2, Points2,Initial,FrictMat)
            self.failUnless(self.mapEqualsValidated(Result2, "spreadlddzone_Result2.map"), "spreadlddzone_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spreadzone_Result1(self):
        try:
            Points = readmap("spread_Points.map")
            Result1 = spreadzone(Points,0,1)
            self.failUnless(self.mapEqualsValidated(Result1, "spreadzone_Result1.map"), "spreadzone_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_spreadzone_Result2(self):
        try:
            Points2 = readmap("spread_Points2.map")
            Initial2 = readmap("spread_Initial2.map")
            FrictMat2 = readmap("spread_FrictMat2.map")
            Result2 = spreadzone(Points2,Initial2,FrictMat2)
            self.failUnless(self.mapEqualsValidated(Result2, "spreadzone_Result2.map"), "spreadzone_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_sqr_Result(self):
        try:
            Expr = readmap("sqr_Expr.map")
            Result = sqr(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "sqr_Result.map"), "sqr_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_sqrt_Result(self):
        try:
            Expr = readmap("sqrt_Expr.map")
            Result = sqrt(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "sqrt_Result.map"), "sqrt_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_subcatchment_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Points = readmap("catchment_Points.map")
            Result = subcatchment(Ldd,Points)
            self.failUnless(self.mapEqualsValidated(Result, "subcatchment_Result.map"), "subcatchment_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_succ_Result1(self):
        try:
            Expr = readmap("succ_Expr.map")
            Result1 = succ(Expr)
            self.failUnless(self.mapEqualsValidated(Result1, "succ_Result1.map"), "succ_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_streamorder_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Result = streamorder(Ldd)
            self.failUnless(self.mapEqualsValidated(Result, "streamorder_Result.map"), "streamorder_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_tan_Result(self):
        try:
            Expr = readmap("tan_Expr.map")
            Result = tan(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "tan_Result.map"), "tan_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_uniqueid_Result(self):
        try:
            Expr = readmap("uniqueid_Expr.map")
            Result = uniqueid(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "uniqueid_Result.map"), "uniqueid_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_upstream_Result(self):
        try:
            Ldd = readmap("accu_Ldd.map")
            Expr = readmap("downstream_Expr.map")
            Result = upstream(Ldd, Expr)
            self.failUnless(self.mapEqualsValidated(Result, "upstream_Result.map"), "upstream_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_view_Result(self):
        try:
            Dem = readmap("view_Dem.map")
            Points = readmap("view_Points.map")
            Result = view(Dem, Points)
            self.failUnless(self.mapEqualsValidated(Result, "view_Result.map"), "view_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowaverage_Result1(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result1 = windowaverage( Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowaverage_Result1.map"), "windowaverage_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowaverage_Result2(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowaverage( Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowaverage_Result2.map"), "windowaverage_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_shift_Result(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result = shift(Expr, 1,1)
            self.failUnless(self.mapEqualsValidated(Result, "shift_Result.map"), "shift_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_shift_Result2(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result2 = shift(Expr, -1,-1)
            self.failUnless(self.mapEqualsValidated(Result2, "shift_Result2.map"), "shift_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_shift0_Result1(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result1 = shift0(Expr, -1,-1)
            self.failUnless(self.mapEqualsValidated(Result1, "shift0_Result1.map"), "shift0_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowdiversity_Result1(self):
        try:
            Expr = readmap("windowdiversity_Expr.map")
            Result1 = windowdiversity( Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowdiversity_Result1.map"), "windowdiversity_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowdiversity_Result2(self):
        try:
            Expr = readmap("windowdiversity_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowdiversity( Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowdiversity_Result2.map"), "windowdiversity_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowhighpass_Result1(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result1 = windowhighpass( Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowhighpass_Result1.map"), "windowhighpass_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowhighpass_Result2(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowhighpass( Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowhighpass_Result2.map"), "windowhighpass_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowmajority_Result1(self):
        try:
            Expr = readmap("windowmajority_Expr.map")
            Result1 = windowmajority( Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowmajority_Result1.map"), "windowmajority_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowmajority_Result2(self):
        try:
            Expr = readmap("windowmajority_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowmajority( Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowmajority_Result2.map"), "windowmajority_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowmaximum_Result1(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result1 = windowmaximum(Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowmaximum_Result1.map"), "windowmaximum_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowmaximum_Result2(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowmaximum( Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowmaximum_Result2.map"), "windowmaximum_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowminimum_Result1(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result1 = windowminimum( Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowminimum_Result1.map"), "windowminimum_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowminimum_Result2(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowminimum(Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowminimum_Result2.map"), "windowminimum_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowtotal_Result1(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            Result1 = windowtotal( Expr, 6)
            self.failUnless(self.mapEqualsValidated(Result1, "windowtotal_Result1.map"), "windowtotal_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowtotal_Result2(self):
        try:
            Expr = readmap("windowaverage_Expr.map")
            WinLen2 = readmap("windowaverage_WinLen2.map")
            Result2 = windowtotal( Expr, WinLen2)
            self.failUnless(self.mapEqualsValidated(Result2, "windowtotal_Result2.map"), "windowtotal_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_windowdiversity_Result3(self):
        try:
            Expr2 = readmap("windowdiversity_Expr2.map")
            Result3 = (windowdiversity(Expr2,celllength() * 1.1)) > 1
            self.failUnless(self.mapEqualsValidated(Result3, "windowdiversity_Result3.map"), "windowdiversity_Result3.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_xcoordinate_Result(self):
        try:
            setglobaloption("coorlr")
            Expr = readmap("xcoordinate_Expr.map")
            Result = xcoordinate(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "xcoordinate_Result.map"), "xcoordinate_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_ycoordinate_Result(self):
        try:
            setglobaloption("coorcentre")
            Expr = readmap("xcoordinate_Expr.map")
            Result = ycoordinate(Expr)
            self.failUnless(self.mapEqualsValidated(Result, "ycoordinate_Result.map"), "ycoordinate_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_areaorder_Result(self):
        try:
            Expr = readmap("areaorder_Expr.map")
            AreaClass = readmap("areaorder_AreaClass.map")
            Result = areaorder(
             Expr,
             AreaClass) 
            self.failUnless(self.mapEqualsValidated(Result, "areaorder_Result.map"), "areaorder_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_umin_Result(self):
        try:
            Expr = readmap("abs_Expr.map")
            Result = -Expr
            self.failUnless(self.mapEqualsValidated(Result, "umin_Result.map"), "umin_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_uadd_Result(self):
        try:
            Expr = readmap("abs_Expr.map")
            Result = +Expr
            self.failUnless(self.mapEqualsValidated(Result, "uadd_Result.map"), "uadd_Result.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_markwhilesum_Result1(self):
        try:
            Expr1 = readmap("markwhilesum_Expr1.map")
            Expr = readmap("cos_Expr.map")
            Result1 = markwhilesumle(Expr1, scalar(Expr), 40)
            self.failUnless(self.mapEqualsValidated(Result1, "markwhilesum_Result1.map"), "markwhilesum_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_markwhilesum_Result2(self):
        try:
            Expr1 = readmap("markwhilesum_Expr1.map")
            Expr = readmap("cos_Expr.map")
            Result2 = markwhilesumge(Expr1, scalar(Expr), 40)
            self.failUnless(self.mapEqualsValidated(Result2, "markwhilesum_Result2.map"), "markwhilesum_Result2.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))

    def test_window4total_Result1(self):
        try:
            Expr1 = readmap("max_Expr1.map")
            Result1 = window4total(Expr1)
            self.failUnless(self.mapEqualsValidated(Result1, "window4total_Result1.map"), "window4total_Result1.map:Result != validated")
        except Exception as exception:
            self.failUnless(False, str(exception))
