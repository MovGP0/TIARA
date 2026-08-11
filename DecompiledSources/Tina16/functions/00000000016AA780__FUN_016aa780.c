/* Ghidra address: 016aa780 */
/* Ghidra symbol: FUN_016aa780 */


double FUN_016aa780(double *param_1)

{
  double dVar1;
  double unaff_XMM6_Qa;
  
  if (*param_1 <= 80.0) {
    if (-80.0 < *param_1 || *param_1 == -80.0) {
      if (*param_1 < param_1[1] || *param_1 == param_1[1]) {
        dVar1 = (double)FUN_0040af80(*param_1);
      }
      else {
        dVar1 = (double)FUN_0040af80(param_1[1]);
        dVar1 = dVar1 + dVar1 * (*param_1 - param_1[1]);
      }
    }
    else {
      FUN_0040af80(0xc054000000000000);
      dVar1 = unaff_XMM6_Qa + unaff_XMM6_Qa * (*param_1 + 80.0);
    }
  }
  else {
    dVar1 = (double)FUN_0040af80(0x4054000000000000);
    dVar1 = dVar1 + dVar1 * (*param_1 - 80.0);
  }
  return dVar1;
}

