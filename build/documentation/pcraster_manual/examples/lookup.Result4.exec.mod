#! --matrixtable
binding
 Result4 = lookup_Result4.map;
 Table3 = lookup_Table3.txt;
 Expr13 = lookup_Expr13.map;
 Expr23 = lookup_Expr23.map;
initial
 report Result4 = lookupscalar(Table3,Expr13,Expr23);
