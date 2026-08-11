/* Ghidra address: 016dca60 */
/* Ghidra symbol: FUN_016dca60 */


double FUN_016dca60(undefined8 param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double unaff_XMM9_Qa;
  double dVar3;
  
  if (param_2 == '\x06') {
    dVar3 = param_4[1];
    dVar1 = param_4[3];
    dVar2 = param_4[4];
    if ((param_3 < 0.0) || (dVar3 <= param_3)) {
      if (dVar3 <= param_3) {
        dVar3 = (double)FUN_0040af80(-(param_3 - dVar3) / param_4[2]);
        unaff_XMM9_Qa = 1.0 - dVar3;
        if (dVar1 <= param_3) {
          dVar3 = (double)FUN_0040af80(-(param_3 - dVar1) / dVar2);
          unaff_XMM9_Qa = (unaff_XMM9_Qa + dVar3) - 1.0;
        }
      }
    }
    else {
      unaff_XMM9_Qa = 0.0;
    }
    dVar3 = unaff_XMM9_Qa * *param_4;
  }
  else {
    dVar3 = 0.0;
  }
  return dVar3;
}

