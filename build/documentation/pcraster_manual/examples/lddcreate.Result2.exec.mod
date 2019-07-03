#! --lddin
binding
 Result2 = lddcreate_Result2.map;
 Dem = lddcreate_Dem.map;
initial
 report Result2 = lddcreate(Dem,9999999,9999999,9999999,9999999);
