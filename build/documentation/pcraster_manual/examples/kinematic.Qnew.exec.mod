binding
 Qnew = kinematic_Qnew.map;
 Ldd = accu_Ldd.map;
 Material = accufraction_Material.map;
initial
 report Qnew = kinematic(Ldd,Material,0,1.5,0.6,1,15,10);
