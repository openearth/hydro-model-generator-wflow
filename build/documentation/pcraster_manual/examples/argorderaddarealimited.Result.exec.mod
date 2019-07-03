binding
 Result = argorderaddarealimited_Result.map;
 CurrentId = argorderaddarealimited_CurrentId.map;
 Chances1 = argorderaddarealimited_Chances1.map;
 Chances2 = argorderaddarealimited_Chances2.map;
initial
 report Result = argorderaddarealimited(
 CurrentId,
 Chances1,
  1,# add area
 Chances2,
  4  # limit in pixels
  )
  ;
