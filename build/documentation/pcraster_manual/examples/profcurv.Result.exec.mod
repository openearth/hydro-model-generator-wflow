binding
 Result = profcurv_Result.map;
 Dem = slope_Dem.map;
initial
 report Result = roundoff(100* profcurv(Dem))/100;
