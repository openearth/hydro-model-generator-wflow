binding
 Result2 = windowminimum_Result2.map;
 Expr = windowaverage_Expr.map;
 WinLen2 = windowaverage_WinLen2.map;
initial
 report Result2 = windowminimum(Expr, WinLen2);
