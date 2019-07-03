binding
 Result = upstream_Result.map;
 Ldd = accu_Ldd.map;
 Expr = downstream_Expr.map;
initial
 report Result = upstream(Ldd, Expr);
