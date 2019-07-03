binding
 Result2 = shift_Result2.map;
 Expr = windowaverage_Expr.map;
initial
 report Result2 = shift(Expr, -1,-1);
