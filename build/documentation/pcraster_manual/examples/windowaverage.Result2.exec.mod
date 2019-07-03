binding
 Result2 = windowaverage_Result2.map;
 Expr = windowaverage_Expr.map;
 WinLen2 = windowaverage_WinLen2.map;
initial
 report Result2 = windowaverage( Expr, WinLen2);
