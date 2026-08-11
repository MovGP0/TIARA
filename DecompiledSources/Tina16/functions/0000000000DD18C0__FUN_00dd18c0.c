/* Ghidra address: 00dd18c0 */
/* Ghidra symbol: FUN_00dd18c0 */


double FUN_00dd18c0(double param_1,double *param_2,undefined4 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (double)FUN_00dd07b0(param_3);
  dVar1 = *(double *)(&DAT_0202dae0 + (ulonglong)(byte)param_3 * 8);
  dVar3 = 1.0 / (dVar1 * 2.0);
  if (param_1 <= dVar2 + dVar3) {
    if (dVar2 - dVar3 <= param_1) {
      dVar2 = 1.0 - (param_1 - (dVar2 - dVar3)) * dVar1;
      *param_2 = -dVar1;
    }
    else {
      dVar2 = 1.0;
      *param_2 = 0.0;
    }
  }
  else {
    dVar2 = 0.0;
    *param_2 = 0.0;
  }
  return dVar2;
}

