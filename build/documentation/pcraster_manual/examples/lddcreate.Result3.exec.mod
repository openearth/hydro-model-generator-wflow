#! --lddin
binding
 Result3 = lddcreate_Result3.map;
 Dem = lddcreate_Dem.map;
initial
 report Result3 = lddcreate(Dem,9999999,5000,9999999,9999999);
