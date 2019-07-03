/*!
\note
Do not edit, generated from (/PCRasterModelEngine/)createOperatorCppCode
*/
{IOpImpl   *i= &builtIn_ifthen;
 Operator *c= new Operator(
  "if","ifthen",OP_IFTHEN, SYNTAX_NONE, EXEC_TYPE_IFTHEN, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_ifthenelse;
 Operator *c= new Operator(
  "if","ifthenelse",OP_IFTHENELSE, SYNTAX_NONE, EXEC_TYPE_IFTHENELSE, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_BNOSDL,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_ne;
 Operator *c= new Operator(
  "ne","ne",OP_NE, SYNTAX_OP, EXEC_TYPE_POLY, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_eq;
 Operator *c= new Operator(
  "eq","eq",OP_EQ, SYNTAX_OP, EXEC_TYPE_POLY, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_gt;
 Operator *c= new Operator(
  "gt","gt",OP_GT, SYNTAX_OP, EXEC_TYPE_POLY, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_ge;
 Operator *c= new Operator(
  "ge","ge",OP_GE, SYNTAX_OP, EXEC_TYPE_POLY, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lt;
 Operator *c= new Operator(
  "lt","lt",OP_LT, SYNTAX_OP, EXEC_TYPE_POLY, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_le;
 Operator *c= new Operator(
  "le","le",OP_LE, SYNTAX_OP, EXEC_TYPE_POLY, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_min;
 Operator *c= new Operator(
  "min","min",OP_MIN, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackInput(VS_OS,ST_EITHER,true);
  c->pushBackResult(VS_OS,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_max;
 Operator *c= new Operator(
  "max","max",OP_MAX, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_OS,ST_EITHER,false);
  c->pushBackInput(VS_OS,ST_EITHER,true);
  c->pushBackResult(VS_OS,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_cover;
 Operator *c= new Operator(
  "cover","cover",OP_COVER, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_BNOSDL,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinput;
 Operator *c= new Operator(
  "timeinput","timeinput",OP_TIMEINPUT, SYNTAX_FUNC, EXEC_TYPE_MISC, i,false,0);
  c->pushBackInput(VS_MAPSTACK,ST_NON,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputsparse;
 Operator *c= new Operator(
  "timeinputsparse","timeinputsparse",OP_TIMEINPUTSPARSE, SYNTAX_FUNC, EXEC_TYPE_MISC, i,false,0);
  c->pushBackInput(VS_MAPSTACK,ST_NON,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputmodulo;
 Operator *c= new Operator(
  "timeinputmodulo","timeinputmodulo",OP_TIMEINPUTMODULO, SYNTAX_FUNC, EXEC_TYPE_MISC, i,false,0);
  c->pushBackInput(VS_MAPSTACK,ST_NON,false);
  c->pushBackInput(VS_O,ST_NONSPATIAL,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupmapstack;
 Operator *c= new Operator(
  "lookupmapstack","lookupmapstack",OP_LOOKUPMAPSTACK, SYNTAX_FUNC, EXEC_TYPE_MISC, i,false,0);
  c->pushBackInput(VS_MAPSTACK,ST_NON,false);
  c->pushBackInput(VS_O,ST_NONSPATIAL,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spreadmax_mrf;
 Operator *c= new Operator(
  "spreadmax_mrf","spreadmax",OP_SPREADMAX_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spreadmax;
 Operator *c= new Operator(
  "spreadmax","spreadmax",OP_SPREADMAX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spreadmaxzone;
 Operator *c= new Operator(
  "spreadmaxzone","spreadmaxzone",OP_SPREADMAXZONE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
add(OP_SPREADMAX_MRF,OP_SPREADMAX,OP_SPREADMAXZONE);
{IOpImpl   *i= &builtIn_spread_mrf;
 Operator *c= new Operator(
  "spread_mrf","spread",OP_SPREAD_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spread;
 Operator *c= new Operator(
  "spread","spread",OP_SPREAD, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spreadzone;
 Operator *c= new Operator(
  "spreadzone","spreadzone",OP_SPREADZONE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
add(OP_SPREAD_MRF,OP_SPREAD,OP_SPREADZONE);
{IOpImpl   *i= &builtIn_spreadldd_mrf;
 Operator *c= new Operator(
  "spreadldd_mrf","spreadldd",OP_SPREADLDD_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spreadldd;
 Operator *c= new Operator(
  "spreadldd","spreadldd",OP_SPREADLDD, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spreadlddzone;
 Operator *c= new Operator(
  "spreadlddzone","spreadlddzone",OP_SPREADLDDZONE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
add(OP_SPREADLDD_MRF,OP_SPREADLDD,OP_SPREADLDDZONE);
{IOpImpl   *i= &builtIn_dynamicwave_mrf;
 Operator *c= new Operator(
  "dynamicwave_mrf","dynamicwave",OP_DYNAMICWAVE_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_dynamicwaveq;
 Operator *c= new Operator(
  "dynamicwaveq","dynamicwaveq",OP_DYNAMICWAVEQ, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_dynamicwaveh;
 Operator *c= new Operator(
  "dynamicwaveh","dynamicwaveh",OP_DYNAMICWAVEH, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_DYNAMICWAVE_MRF,OP_DYNAMICWAVEQ,OP_DYNAMICWAVEH);
{IOpImpl   *i= &builtIn_order;
 Operator *c= new Operator(
  "order","order",OP_ORDER, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areaorder;
 Operator *c= new Operator(
  "areaorder","areaorder",OP_AREAORDER, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_argorder;
 Operator *c= new Operator(
  "argorder","argorder",OP_ARGORDER, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,true);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_argorderwithid;
 Operator *c= new Operator(
  "argorderwithid","argorderwithid",OP_ARGORDERWITHID, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,2);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_O,ST_NONSPATIAL,false);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_argorderarealimited;
 Operator *c= new Operator(
  "argorderarealimited","argorderarealimited",OP_ARGORDERAREALIMITED, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,2);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_argorderwithidarealimited;
 Operator *c= new Operator(
  "argorderwithidarealimited","argorderwithidarealimited",OP_ARGORDERWITHIDAREALIMITED, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,3);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_O,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_argorderaddarealimited;
 Operator *c= new Operator(
  "argorderaddarealimited","argorderaddarealimited",OP_ARGORDERADDAREALIMITED, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,2);
  c->pushBackInput(VS_O,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_argorderwithidaddarealimited;
 Operator *c= new Operator(
  "argorderwithidaddarealimited","argorderwithidaddarealimited",OP_ARGORDERWITHIDADDAREALIMITED, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,3);
  c->pushBackInput(VS_O,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_O,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowminimum;
 Operator *c= new Operator(
  "windowminimum","windowminimum",OP_WINDOWMINIMUM, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_OS,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_brenner;
 Operator *c= new Operator(
  "brenner","brenner",OP_BRENNER, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowmaximum;
 Operator *c= new Operator(
  "windowmaximum","windowmaximum",OP_WINDOWMAXIMUM, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_OS,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowdiversity;
 Operator *c= new Operator(
  "windowdiversity","windowdiversity",OP_WINDOWDIVERSITY, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areadiversity;
 Operator *c= new Operator(
  "areadiversity","areadiversity",OP_AREADIVERSITY, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areamajority;
 Operator *c= new Operator(
  "areamajority","areamajority",OP_AREAMAJORITY, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowmajority;
 Operator *c= new Operator(
  "windowmajority","windowmajority",OP_WINDOWMAJORITY, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn__ldddownstreamcell;
 Operator *c= new Operator(
  "_ldddownstreamcell","_ldddownstreamcell",OP__LDDDOWNSTREAMCELL, SYNTAX_NONE, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_BNOSDL,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_mul;
 Operator *c= new Operator(
  "*","mul",OP_MUL, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_fdiv;
 Operator *c= new Operator(
  "/","fdiv",OP_FDIV, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,false,0);
 c->setPointOn(rightDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_pow;
 Operator *c= new Operator(
  "**","pow",OP_POW, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,false,0);
 c->setPointOn(combDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_mod;
 Operator *c= new Operator(
  "mod","mod",OP_MOD, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,false,0);
 c->setPointOn(rightDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_idiv;
 Operator *c= new Operator(
  "idiv","idiv",OP_IDIV, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,false,0);
 c->setPointOn(rightDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_uadd;
 Operator *c= new Operator(
  "+","uadd",OP_UADD, SYNTAX_OP, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_umin;
 Operator *c= new Operator(
  "-","umin",OP_UMIN, SYNTAX_OP, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_badd;
 Operator *c= new Operator(
  "+","badd",OP_BADD, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_bmin;
 Operator *c= new Operator(
  "-","bmin",OP_BMIN, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputscalar;
 Operator *c= new Operator(
  "timeinputscalar","timeinputscalar",OP_TIMEINPUTSCALAR, SYNTAX_FUNC, EXEC_TYPE_T_IN, i,false,0);
  c->pushBackInput(VS_TSS,ST_NON,false);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputdirectional;
 Operator *c= new Operator(
  "timeinputdirectional","timeinputdirectional",OP_TIMEINPUTDIRECTIONAL, SYNTAX_FUNC, EXEC_TYPE_T_IN, i,false,0);
  c->pushBackInput(VS_TSS,ST_NON,false);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputboolean;
 Operator *c= new Operator(
  "timeinputboolean","timeinputboolean",OP_TIMEINPUTBOOLEAN, SYNTAX_FUNC, EXEC_TYPE_T_IN, i,false,0);
  c->pushBackInput(VS_TSS,ST_NON,false);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputldd;
 Operator *c= new Operator(
  "timeinputldd","timeinputldd",OP_TIMEINPUTLDD, SYNTAX_FUNC, EXEC_TYPE_T_IN, i,false,0);
  c->pushBackInput(VS_TSS,ST_NON,false);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputnominal;
 Operator *c= new Operator(
  "timeinputnominal","timeinputnominal",OP_TIMEINPUTNOMINAL, SYNTAX_FUNC, EXEC_TYPE_T_IN, i,false,0);
  c->pushBackInput(VS_TSS,ST_NON,false);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_timeinputordinal;
 Operator *c= new Operator(
  "timeinputordinal","timeinputordinal",OP_TIMEINPUTORDINAL, SYNTAX_FUNC, EXEC_TYPE_T_IN, i,false,0);
  c->pushBackInput(VS_TSS,ST_NON,false);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupnominal;
 Operator *c= new Operator(
  "lookupnominal","lookupnominal",OP_LOOKUPNOMINAL, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupboolean;
 Operator *c= new Operator(
  "lookupboolean","lookupboolean",OP_LOOKUPBOOLEAN, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupordinal;
 Operator *c= new Operator(
  "lookupordinal","lookupordinal",OP_LOOKUPORDINAL, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupscalar;
 Operator *c= new Operator(
  "lookupscalar","lookupscalar",OP_LOOKUPSCALAR, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookuplinear;
 Operator *c= new Operator(
  "lookuplinear","lookuplinear",OP_LOOKUPLINEAR, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupdirectional;
 Operator *c= new Operator(
  "lookupdirectional","lookupdirectional",OP_LOOKUPDIRECTIONAL, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookupldd;
 Operator *c= new Operator(
  "lookupldd","lookupldd",OP_LOOKUPLDD, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,true);
  c->pushBackResult(VS_L,ST_EITHER);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indexnominal","indexnominal",OP_INDEXNOMINAL, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_N,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indexboolean","indexboolean",OP_INDEXBOOLEAN, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_B,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indexordinal","indexordinal",OP_INDEXORDINAL, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_O,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indexscalar","indexscalar",OP_INDEXSCALAR, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indexdirectional","indexdirectional",OP_INDEXDIRECTIONAL, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_D,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indexldd","indexldd",OP_INDEXLDD, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_L,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "indextable","indextable",OP_INDEXTABLE, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_INDEXTABLE,ST_NON);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "index","index",OP_INDEX, SYNTAX_FUNC, EXEC_TYPE_INDEX, i,false,0);
  c->pushBackInput(VS_INDEXTABLE,ST_NON,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_ldd;
 Operator *c= new Operator(
  "ldd","ldd",OP_LDD, SYNTAX_FUNC, EXEC_TYPE_CONV, i,false,0);
  c->pushBackInput(VS_NOSDL,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_directional;
 Operator *c= new Operator(
  "directional","directional",OP_DIRECTIONAL, SYNTAX_FUNC, EXEC_TYPE_CONV, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_scalar;
 Operator *c= new Operator(
  "scalar","scalar",OP_SCALAR, SYNTAX_FUNC, EXEC_TYPE_CONV, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_boolean_;
 Operator *c= new Operator(
  "boolean","boolean_",OP_BOOLEAN_, SYNTAX_FUNC, EXEC_TYPE_CONV, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_nominal;
 Operator *c= new Operator(
  "nominal","nominal",OP_NOMINAL, SYNTAX_FUNC, EXEC_TYPE_CONV, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_ordinal;
 Operator *c= new Operator(
  "ordinal","ordinal",OP_ORDINAL, SYNTAX_FUNC, EXEC_TYPE_CONV, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_and_;
 Operator *c= new Operator(
  "and","and_",OP_AND_, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_or_;
 Operator *c= new Operator(
  "or","or_",OP_OR_, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_xor_;
 Operator *c= new Operator(
  "xor","xor_",OP_XOR_, SYNTAX_OP, EXEC_TYPE_SAME_BIN, i,true,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_not_;
 Operator *c= new Operator(
  "not","not_",OP_NOT_, SYNTAX_OP, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "test_until","test_until",OP_TEST_UNTIL, SYNTAX_NONE, EXEC_TYPE_MISC, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_sin;
 Operator *c= new Operator(
  "sin","sin",OP_SIN, SYNTAX_FUNC, EXEC_TYPE_TRIG, i,false,0);
  c->pushBackInput(VS_SD,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_cos;
 Operator *c= new Operator(
  "cos","cos",OP_COS, SYNTAX_FUNC, EXEC_TYPE_TRIG, i,false,0);
  c->pushBackInput(VS_SD,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_tan;
 Operator *c= new Operator(
  "tan","tan",OP_TAN, SYNTAX_FUNC, EXEC_TYPE_TRIG, i,false,0);
  c->pushBackInput(VS_SD,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_asin;
 Operator *c= new Operator(
  "asin","asin",OP_ASIN, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_acos;
 Operator *c= new Operator(
  "acos","acos",OP_ACOS, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_atan;
 Operator *c= new Operator(
  "atan","atan",OP_ATAN, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_abs;
 Operator *c= new Operator(
  "abs","abs",OP_ABS, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_exp;
 Operator *c= new Operator(
  "exp","exp",OP_EXP, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_fac;
 Operator *c= new Operator(
  "fac","fac",OP_FAC, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_rounddown;
 Operator *c= new Operator(
  "rounddown","rounddown",OP_ROUNDDOWN, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_ln;
 Operator *c= new Operator(
  "ln","ln",OP_LN, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_log10;
 Operator *c= new Operator(
  "log10","log10",OP_LOG10, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_roundup;
 Operator *c= new Operator(
  "roundup","roundup",OP_ROUNDUP, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_roundoff;
 Operator *c= new Operator(
  "roundoff","roundoff",OP_ROUNDOFF, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_sqrt;
 Operator *c= new Operator(
  "sqrt","sqrt",OP_SQRT, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_sqr;
 Operator *c= new Operator(
  "sqr","sqr",OP_SQR, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_normal;
 Operator *c= new Operator(
  "normal","normal",OP_NORMAL, SYNTAX_FUNC, EXEC_TYPE_GEN_SP, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_uniform;
 Operator *c= new Operator(
  "uniform","uniform",OP_UNIFORM, SYNTAX_FUNC, EXEC_TYPE_GEN_SP, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_xcoordinate;
 Operator *c= new Operator(
  "xcoordinate","xcoordinate",OP_XCOORDINATE, SYNTAX_FUNC, EXEC_TYPE_GEN_SP, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_ycoordinate;
 Operator *c= new Operator(
  "ycoordinate","ycoordinate",OP_YCOORDINATE, SYNTAX_FUNC, EXEC_TYPE_GEN_SP, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_uniqueid;
 Operator *c= new Operator(
  "uniqueid","uniqueid",OP_UNIQUEID, SYNTAX_FUNC, EXEC_TYPE_GEN_SP, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_move;
 Operator *c= new Operator(
  "move","move",OP_MOVE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_shift;
 Operator *c= new Operator(
  "shift","shift",OP_SHIFT, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_shift0;
 Operator *c= new Operator(
  "shift0","shift0",OP_SHIFT0, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_celllength;
 Operator *c= new Operator(
  "celllength","celllength",OP_CELLLENGTH, SYNTAX_FUNC, EXEC_TYPE_GEN_NS, i,false,0);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_cellarea;
 Operator *c= new Operator(
  "cellarea","cellarea",OP_CELLAREA, SYNTAX_FUNC, EXEC_TYPE_GEN_NS, i,false,0);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_time;
 Operator *c= new Operator(
  "time","time",OP_TIME, SYNTAX_FUNC, EXEC_TYPE_GEN_NS, i,false,0);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_timeslice;
 Operator *c= new Operator(
  "timeslice","timeslice",OP_TIMESLICE, SYNTAX_FUNC, EXEC_TYPE_GEN_NS, i,false,0);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_mapnormal;
 Operator *c= new Operator(
  "mapnormal","mapnormal",OP_MAPNORMAL, SYNTAX_FUNC, EXEC_TYPE_GEN_NS, i,false,0);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_mapuniform;
 Operator *c= new Operator(
  "mapuniform","mapuniform",OP_MAPUNIFORM, SYNTAX_FUNC, EXEC_TYPE_GEN_NS, i,false,0);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_succ;
 Operator *c= new Operator(
  "succ","succ",OP_SUCC, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_pred;
 Operator *c= new Operator(
  "pred","pred",OP_PRED, SYNTAX_FUNC, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_pit;
 Operator *c= new Operator(
  "pit","pit",OP_PIT, SYNTAX_FUNC, EXEC_TYPE_DIFF_UN, i,false,0);
  c->pushBackInput(VS_L,ST_EITHER,false);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_nodirection;
 Operator *c= new Operator(
  "nodirection","nodirection",OP_NODIRECTION, SYNTAX_FUNC, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_mapminimum;
 Operator *c= new Operator(
  "mapminimum","mapminimum",OP_MAPMINIMUM, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackResult(VS_OS,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_mapmaximum;
 Operator *c= new Operator(
  "mapmaximum","mapmaximum",OP_MAPMAXIMUM, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackResult(VS_OS,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_defined;
 Operator *c= new Operator(
  "defined","defined",OP_DEFINED, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_maparea;
 Operator *c= new Operator(
  "maparea","maparea",OP_MAPAREA, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_spatial;
 Operator *c= new Operator(
  "spatial","spatial",OP_SPATIAL, SYNTAX_FUNC, EXEC_TYPE_POLY, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accu_mrf;
 Operator *c= new Operator(
  "accu_mrf","accu",OP_ACCU_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accustate;
 Operator *c= new Operator(
  "accustate","accustate",OP_ACCUSTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accuflux;
 Operator *c= new Operator(
  "accuflux","accuflux",OP_ACCUFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCU_MRF,OP_ACCUSTATE,OP_ACCUFLUX);
{IOpImpl   *i= &builtIn_muskingum;
 Operator *c= new Operator(
  "muskingum","muskingum",OP_MUSKINGUM, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_dynwave_mrf;
 Operator *c= new Operator(
  "dynwave_mrf","dynwave",OP_DYNWAVE_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_dynwavestate;
 Operator *c= new Operator(
  "dynwavestate","dynwavestate",OP_DYNWAVESTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_dynwaveflux;
 Operator *c= new Operator(
  "dynwaveflux","dynwaveflux",OP_DYNWAVEFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_DYNWAVE_MRF,OP_DYNWAVESTATE,OP_DYNWAVEFLUX);
{IOpImpl   *i= &builtIn_lookupstate;
 Operator *c= new Operator(
  "lookupstate","lookupstate",OP_LOOKUPSTATE, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_lookuppotential;
 Operator *c= new Operator(
  "lookuppotential","lookuppotential",OP_LOOKUPPOTENTIAL, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_TABLE,ST_NON,false);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_accucapacity_mrf;
 Operator *c= new Operator(
  "accucapacity_mrf","accucapacity",OP_ACCUCAPACITY_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accucapacitystate;
 Operator *c= new Operator(
  "accucapacitystate","accucapacitystate",OP_ACCUCAPACITYSTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accucapacityflux;
 Operator *c= new Operator(
  "accucapacityflux","accucapacityflux",OP_ACCUCAPACITYFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCUCAPACITY_MRF,OP_ACCUCAPACITYSTATE,OP_ACCUCAPACITYFLUX);
{IOpImpl   *i= &builtIn_accuthreshold_mrf;
 Operator *c= new Operator(
  "accuthreshold_mrf","accuthreshold",OP_ACCUTHRESHOLD_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accuthresholdstate;
 Operator *c= new Operator(
  "accuthresholdstate","accuthresholdstate",OP_ACCUTHRESHOLDSTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accuthresholdflux;
 Operator *c= new Operator(
  "accuthresholdflux","accuthresholdflux",OP_ACCUTHRESHOLDFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCUTHRESHOLD_MRF,OP_ACCUTHRESHOLDSTATE,OP_ACCUTHRESHOLDFLUX);
{IOpImpl   *i= &builtIn_accufraction_mrf;
 Operator *c= new Operator(
  "accufraction_mrf","accufraction",OP_ACCUFRACTION_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accufractionstate;
 Operator *c= new Operator(
  "accufractionstate","accufractionstate",OP_ACCUFRACTIONSTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accufractionflux;
 Operator *c= new Operator(
  "accufractionflux","accufractionflux",OP_ACCUFRACTIONFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCUFRACTION_MRF,OP_ACCUFRACTIONSTATE,OP_ACCUFRACTIONFLUX);
{IOpImpl   *i= &builtIn_accutrigger_mrf;
 Operator *c= new Operator(
  "accutrigger_mrf","accutrigger",OP_ACCUTRIGGER_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutriggerstate;
 Operator *c= new Operator(
  "accutriggerstate","accutriggerstate",OP_ACCUTRIGGERSTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutriggerflux;
 Operator *c= new Operator(
  "accutriggerflux","accutriggerflux",OP_ACCUTRIGGERFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCUTRIGGER_MRF,OP_ACCUTRIGGERSTATE,OP_ACCUTRIGGERFLUX);
{IOpImpl   *i= &builtIn_accutraveltime_mrf;
 Operator *c= new Operator(
  "accutraveltime_mrf","accutraveltime",OP_ACCUTRAVELTIME_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutraveltimestate;
 Operator *c= new Operator(
  "accutraveltimestate","accutraveltimestate",OP_ACCUTRAVELTIMESTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutraveltimeflux;
 Operator *c= new Operator(
  "accutraveltimeflux","accutraveltimeflux",OP_ACCUTRAVELTIMEFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCUTRAVELTIME_MRF,OP_ACCUTRAVELTIMESTATE,OP_ACCUTRAVELTIMEFLUX);
{IOpImpl   *i= &builtIn_accutraveltimefractionremoved;
 Operator *c= new Operator(
  "accutraveltimefractionremoved","accutraveltimefractionremoved",OP_ACCUTRAVELTIMEFRACTIONREMOVED, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutraveltimefraction_mrf;
 Operator *c= new Operator(
  "accutraveltimefraction_mrf","accutraveltimefraction",OP_ACCUTRAVELTIMEFRACTION_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutraveltimefractionstate;
 Operator *c= new Operator(
  "accutraveltimefractionstate","accutraveltimefractionstate",OP_ACCUTRAVELTIMEFRACTIONSTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_accutraveltimefractionflux;
 Operator *c= new Operator(
  "accutraveltimefractionflux","accutraveltimefractionflux",OP_ACCUTRAVELTIMEFRACTIONFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_ACCUTRAVELTIMEFRACTION_MRF,OP_ACCUTRAVELTIMEFRACTIONSTATE,OP_ACCUTRAVELTIMEFRACTIONFLUX);
{IOpImpl   *i= &builtIn_diffuse_mrf;
 Operator *c= new Operator(
  "diffuse_mrf","diffuse",OP_DIFFUSE_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_diffusestate;
 Operator *c= new Operator(
  "diffusestate","diffusestate",OP_DIFFUSESTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_diffuseflux;
 Operator *c= new Operator(
  "diffuseflux","diffuseflux",OP_DIFFUSEFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_DIFFUSE_MRF,OP_DIFFUSESTATE,OP_DIFFUSEFLUX);
{IOpImpl   *i= &builtIn_kinwave_mrf;
 Operator *c= new Operator(
  "kinwave_mrf","kinwave",OP_KINWAVE_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_kinwavestate;
 Operator *c= new Operator(
  "kinwavestate","kinwavestate",OP_KINWAVESTATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_kinwaveflux;
 Operator *c= new Operator(
  "kinwaveflux","kinwaveflux",OP_KINWAVEFLUX, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_KINWAVE_MRF,OP_KINWAVESTATE,OP_KINWAVEFLUX);
{IOpImpl   *i= &builtIn_kinematic;
 Operator *c= new Operator(
  "kinematic","kinematic",OP_KINEMATIC, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_O,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn__cellfocus;
 Operator *c= new Operator(
  "_cellfocus","_cellfocus",OP__CELLFOCUS, SYNTAX_NONE, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_BNOSDL,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= 0;
 Operator *c= new Operator(
  "timeoutput","timeoutput",OP_TIMEOUTPUT, SYNTAX_FUNC, EXEC_TYPE_MISC, i,false,0);
  c->pushBackInput(VS_BNO,ST_EITHER,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_TSS,ST_NON);
 add(c);
}
{IOpImpl   *i= &builtIn_maptotal;
 Operator *c= new Operator(
  "maptotal","maptotal",OP_MAPTOTAL, SYNTAX_FUNC, EXEC_TYPE_DIFF_UN, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_mapand;
 Operator *c= new Operator(
  "mapand","mapand",OP_MAPAND, SYNTAX_FUNC, EXEC_TYPE_DIFF_UN, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_mapor;
 Operator *c= new Operator(
  "mapor","mapor",OP_MAPOR, SYNTAX_FUNC, EXEC_TYPE_DIFF_UN, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_NONSPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areaarea;
 Operator *c= new Operator(
  "areaarea","areaarea",OP_AREAAREA, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_clump;
 Operator *c= new Operator(
  "clump","clump",OP_CLUMP, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_N,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_drain;
 Operator *c= new Operator(
  "drain","drain",OP_DRAIN, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_path;
 Operator *c= new Operator(
  "path","path",OP_PATH, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_B,ST_SPATIAL,false);
  c->pushBackResult(VS_B,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_aspect;
 Operator *c= new Operator(
  "aspect","aspect",OP_ASPECT, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_D,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_slope;
 Operator *c= new Operator(
  "slope","slope",OP_SLOPE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_window4total;
 Operator *c= new Operator(
  "window4total","window4total",OP_WINDOW4TOTAL, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_profcurv;
 Operator *c= new Operator(
  "profcurv","profcurv",OP_PROFCURV, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_plancurv;
 Operator *c= new Operator(
  "plancurv","plancurv",OP_PLANCURV, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_view;
 Operator *c= new Operator(
  "view","view",OP_VIEW, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_B,ST_SPATIAL,false);
  c->pushBackResult(VS_B,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_extentofview;
 Operator *c= new Operator(
  "extentofview","extentofview",OP_EXTENTOFVIEW, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_inversedistance;
 Operator *c= new Operator(
  "inversedistance","inversedistance",OP_INVERSEDISTANCE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_B,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_catchment;
 Operator *c= new Operator(
  "catchment","catchment",OP_CATCHMENT, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_subcatchment;
 Operator *c= new Operator(
  "subcatchment","subcatchment",OP_SUBCATCHMENT, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_BNO,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowaverage;
 Operator *c= new Operator(
  "windowaverage","windowaverage",OP_WINDOWAVERAGE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_markwhilesumle;
 Operator *c= new Operator(
  "markwhilesumle","markwhilesumle",OP_MARKWHILESUMLE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_B,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_markwhilesumge;
 Operator *c= new Operator(
  "markwhilesumge","markwhilesumge",OP_MARKWHILESUMGE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_B,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_ellipseaverage;
 Operator *c= new Operator(
  "ellipseaverage","ellipseaverage",OP_ELLIPSEAVERAGE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_influencesimplegauss;
 Operator *c= new Operator(
  "influencesimplegauss","influencesimplegauss",OP_INFLUENCESIMPLEGAUSS, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_distributesimplegauss;
 Operator *c= new Operator(
  "distributesimplegauss","distributesimplegauss",OP_DISTRIBUTESIMPLEGAUSS, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_ibngauss;
 Operator *c= new Operator(
  "ibngauss","ibngauss",OP_IBNGAUSS, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_horizontan;
 Operator *c= new Operator(
  "horizontan","horizontan",OP_HORIZONTAN, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_catchmenttotal;
 Operator *c= new Operator(
  "catchmenttotal","catchmenttotal",OP_CATCHMENTTOTAL, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areamaximum;
 Operator *c= new Operator(
  "areamaximum","areamaximum",OP_AREAMAXIMUM, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_OS,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areaminimum;
 Operator *c= new Operator(
  "areaminimum","areaminimum",OP_AREAMINIMUM, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_OS,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_OS,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areaaverage;
 Operator *c= new Operator(
  "areaaverage","areaaverage",OP_AREAAVERAGE, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areatotal;
 Operator *c= new Operator(
  "areatotal","areatotal",OP_AREATOTAL, SYNTAX_FUNC, EXEC_TYPE_Direct, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areauniform;
 Operator *c= new Operator(
  "areauniform","areauniform",OP_AREAUNIFORM, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_areanormal;
 Operator *c= new Operator(
  "areanormal","areanormal",OP_AREANORMAL, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_BNO,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowtotal;
 Operator *c= new Operator(
  "windowtotal","windowtotal",OP_WINDOWTOTAL, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_windowhighpass;
 Operator *c= new Operator(
  "windowhighpass","windowhighpass",OP_WINDOWHIGHPASS, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_ldddist;
 Operator *c= new Operator(
  "ldddist","ldddist",OP_LDDDIST, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_B,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_upstream;
 Operator *c= new Operator(
  "upstream","upstream",OP_UPSTREAM, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_streamorder;
 Operator *c= new Operator(
  "streamorder","streamorder",OP_STREAMORDER, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackResult(VS_O,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_transient;
 Operator *c= new Operator(
  "transient","transient",OP_TRANSIENT, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_N,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_downstream;
 Operator *c= new Operator(
  "downstream","downstream",OP_DOWNSTREAM, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_BNOSDL,ST_EITHER,false);
  c->pushBackResult(VS_BNOSDL,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_downstreamdist;
 Operator *c= new Operator(
  "downstreamdist","downstreamdist",OP_DOWNSTREAMDIST, SYNTAX_FUNC, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddmask;
 Operator *c= new Operator(
  "lddmask","lddmask",OP_LDDMASK, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_B,ST_SPATIAL,false);
  c->pushBackResult(VS_L,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddrepair;
 Operator *c= new Operator(
  "lddrepair","lddrepair",OP_LDDREPAIR, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_slopelength;
 Operator *c= new Operator(
  "slopelength","slopelength",OP_SLOPELENGTH, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_L,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddcreate_mrf;
 Operator *c= new Operator(
  "lddcreate_mrf","lddcreate",OP_LDDCREATE_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddcreate;
 Operator *c= new Operator(
  "lddcreate","lddcreate",OP_LDDCREATE, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddcreatedem;
 Operator *c= new Operator(
  "lddcreatedem","lddcreatedem",OP_LDDCREATEDEM, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_LDDCREATE_MRF,OP_LDDCREATE,OP_LDDCREATEDEM);
{IOpImpl   *i= &builtIn_lddcreatend_mrf;
 Operator *c= new Operator(
  "lddcreatend_mrf","lddcreatend",OP_LDDCREATEND_MRF, SYNTAX_MRF, EXEC_TYPE_MRF, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_SPATIAL);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddcreatend;
 Operator *c= new Operator(
  "lddcreatend","lddcreatend",OP_LDDCREATEND, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lddcreatenddem;
 Operator *c= new Operator(
  "lddcreatenddem","lddcreatenddem",OP_LDDCREATENDDEM, SYNTAX_FUNC, EXEC_TYPE_DOUBLE, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
add(OP_LDDCREATEND_MRF,OP_LDDCREATEND,OP_LDDCREATENDDEM);
{IOpImpl   *i= &builtIn_c_1_2_b;
 Operator *c= new Operator(
  "c_1_2_b","c_1_2_b",OP_C_1_2_B, SYNTAX_NONE, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_L,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_4_2_b;
 Operator *c= new Operator(
  "c_4_2_b","c_4_2_b",OP_C_4_2_B, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_s_2_b;
 Operator *c= new Operator(
  "c_s_2_b","c_s_2_b",OP_C_S_2_B, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_SD,ST_EITHER,false);
  c->pushBackResult(VS_B,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_1_2_o;
 Operator *c= new Operator(
  "c_1_2_o","c_1_2_o",OP_C_1_2_O, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_BL,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_1_2_n;
 Operator *c= new Operator(
  "c_1_2_n","c_1_2_n",OP_C_1_2_N, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_BL,ST_EITHER,false);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_s_2_o;
 Operator *c= new Operator(
  "c_s_2_o","c_s_2_o",OP_C_S_2_O, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_s_2_n;
 Operator *c= new Operator(
  "c_s_2_n","c_s_2_n",OP_C_S_2_N, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_1_2_s;
 Operator *c= new Operator(
  "c_1_2_s","c_1_2_s",OP_C_1_2_S, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_BL,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_4_2_s;
 Operator *c= new Operator(
  "c_4_2_s","c_4_2_s",OP_C_4_2_S, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_s_2_d;
 Operator *c= new Operator(
  "c_s_2_d","c_s_2_d",OP_C_S_2_D, SYNTAX_NONE, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_d_2_s;
 Operator *c= new Operator(
  "c_d_2_s","c_d_2_s",OP_C_D_2_S, SYNTAX_NONE, EXEC_TYPE_SAME_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_S,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_d_2_n;
 Operator *c= new Operator(
  "c_d_2_n","c_d_2_n",OP_C_D_2_N, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_N,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_d_2_o;
 Operator *c= new Operator(
  "c_d_2_o","c_d_2_o",OP_C_D_2_O, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(onlyDomainIll);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_O,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_1_2_d;
 Operator *c= new Operator(
  "c_1_2_d","c_1_2_d",OP_C_1_2_D, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_BL,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_4_2_d;
 Operator *c= new Operator(
  "c_4_2_d","c_4_2_d",OP_C_4_2_D, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_l_2_d;
 Operator *c= new Operator(
  "c_l_2_d","c_l_2_d",OP_C_L_2_D, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_L,ST_EITHER,false);
  c->pushBackResult(VS_D,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_4_2_l;
 Operator *c= new Operator(
  "c_4_2_l","c_4_2_l",OP_C_4_2_L, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_NO,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_s_2_l;
 Operator *c= new Operator(
  "c_s_2_l","c_s_2_l",OP_C_S_2_L, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_S,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_c_d_2_l;
 Operator *c= new Operator(
  "c_d_2_l","c_d_2_l",OP_C_D_2_L, SYNTAX_NONE, EXEC_TYPE_DIFF_UN, i,false,0);
 c->setPointOn(noDomainIll);
  c->pushBackInput(VS_D,ST_EITHER,false);
  c->pushBackResult(VS_L,ST_EITHER);
 add(c);
}
{IOpImpl   *i= &builtIn_riksfraction;
 Operator *c= new Operator(
  "riksfraction","riksfraction",OP_RIKSFRACTION, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_B,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_squarefraction;
 Operator *c= new Operator(
  "squarefraction","squarefraction",OP_SQUAREFRACTION, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_B,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_gradx;
 Operator *c= new Operator(
  "gradx","gradx",OP_GRADX, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_grady;
 Operator *c= new Operator(
  "grady","grady",OP_GRADY, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_divergence;
 Operator *c= new Operator(
  "divergence","divergence",OP_DIVERGENCE, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_diver;
 Operator *c= new Operator(
  "diver","diver",OP_DIVER, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_lax;
 Operator *c= new Operator(
  "lax","lax",OP_LAX, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackInput(VS_S,ST_NONSPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
{IOpImpl   *i= &builtIn_laplacian;
 Operator *c= new Operator(
  "laplacian","laplacian",OP_LAPLACIAN, SYNTAX_FUNC, EXEC_TYPE_GLOBAL, i,false,0);
  c->pushBackInput(VS_S,ST_SPATIAL,false);
  c->pushBackResult(VS_S,ST_SPATIAL);
 add(c);
}
