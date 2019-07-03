#! --matrixtable
binding
 Result3 = lookup_Result3.map;
 Table2 = lookup_Table2.txt;
 Expr12 = lookup_Expr12.map;
 Expr22 = lookup_Expr22.map;
 Expr32 = lookup_Expr32.map;
initial
 report Result3 = lookupordinal(Table2,1,100,Expr32);
