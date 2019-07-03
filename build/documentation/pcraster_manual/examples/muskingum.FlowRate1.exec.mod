
# example from Applied Hydrology
binding
 Id = muskingum_tssid.map;
 Ldd = muskingum_Ldd.map;
 InTss = muskingum_Inflow.txt;
                      # valid ranges
 In_Timestep = 3600;  # 1 - 3600
 In_K = 2.3;          # 0.5 - 10
 In_x = 0.15;         # 0.1 - 0.9
 In_SegmentLength = 1;# 0.1 - 10
 In_NrIteration = 100;
 # Muskingum routing is stable when 1/2(1-K) <= K/timestepSecs <= 1/2x
 # Python code for test
 #   f1 = 0.5*(1-K)
 #   f2 = K / timestepInSecs
 #   f3 = 0.5 * x
 #   if not ( (f1 <= f2) and (f2 <= f3)):
 #     continue

timer
   1 40 1;
initial

   TimeStepInSecs = In_Timestep;
   K = In_K/TimeStepInSecs;  # [sec]

   x = In_x;

   # EQUAL To value at timestep 1 in InTss
   PrevFlowRate = if(Id eq 1 then 85 else 85)/TimeStepInSecs ;  # m3/sec

   PrevInflow = if(Id eq 1 then 85 else 0)/TimeStepInSecs;      # m3/sec

   # Segmentlength varieren tussen 0.1 en 10
   SegmentLength = In_SegmentLength;

   Iterations = In_NrIteration;

dynamic

   InflowTimestep= timeinputscalar(InTss, Id)/TimeStepInSecs;  # m3/sec

   FlowRate = muskingum(Ldd,PrevFlowRate,PrevInflow,
                        InflowTimestep,K,x,
                        SegmentLength, Iterations,TimeStepInSecs);

   report muskingum_FlowRate1.txt = timeoutput(Id,FlowRate*TimeStepInSecs);

   PrevFlowRate = FlowRate;
   PrevInflow = InflowTimestep;
