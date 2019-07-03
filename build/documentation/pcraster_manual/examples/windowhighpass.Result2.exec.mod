binding
 Result2 = windowhighpass_Result2.map;
 Expr = windowaverage_Expr.map;
 WinLen2 = windowaverage_WinLen2.map;
initial
 report Result2 = windowhighpass( Expr, WinLen2);
