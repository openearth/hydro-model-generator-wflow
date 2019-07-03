#! --lddcut
binding
 Result2 = lddcreatedem_Result2.map;
 Dem = lddcreate_Dem.map;
initial
 report Result2 = lddcreatedem(Dem,999999,9999999,9999999,9999999);
