binding
 Result = plancurv_Result.map;
 Dem = slope_Dem.map;
initial
 report Result = roundoff(100*plancurv(Dem))/100;
