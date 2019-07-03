binding
 Result2 = windowtotal_Result2.map;
 Expr = windowaverage_Expr.map;
 WinLen2 = windowaverage_WinLen2.map;
initial
 report Result2 = windowtotal( Expr, WinLen2);
