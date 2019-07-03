binding
 Result = shift_Result.map;
 Expr = windowaverage_Expr.map;
initial
 report Result = shift(Expr, 1,1);
