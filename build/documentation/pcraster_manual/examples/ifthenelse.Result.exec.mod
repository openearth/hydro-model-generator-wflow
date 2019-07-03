binding
 Result = ifthenelse_Result.map;
 Cond = ifthen_Cond.map;
 Expr1 = ifthen_Expr1.map;
 Expr2 = ifthenelse_Expr2.map;
initial
 report Result = if(Cond,Expr1,Expr2);
