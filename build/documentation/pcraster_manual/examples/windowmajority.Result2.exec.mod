binding
 Result2 = windowmajority_Result2.map;
 Expr = windowmajority_Expr.map;
 WinLen2 = windowaverage_WinLen2.map;
initial
 report Result2 = windowmajority( Expr, WinLen2);
