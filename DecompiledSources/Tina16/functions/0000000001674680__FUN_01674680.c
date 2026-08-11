/* Ghidra address: 01674680 */
/* Ghidra symbol: FUN_01674680 */


void FUN_01674680(longlong param_1,double param_2,double param_3,double param_4,double *param_5,
                 double *param_6)

{
  double dVar1;
  
  if (param_2 <= 0.0) {
    *param_6 = param_4 / param_3;
    *param_5 = *param_6 * param_2;
    *param_6 = *param_6 + *(double *)(param_1 + 0x430);
  }
  else {
    FUN_00b90650(param_2 / param_3,0x4055400000000000);
    dVar1 = (double)FUN_0040af80();
    *param_6 = (param_4 * dVar1) / param_3 + *(double *)(param_1 + 0x430);
    *param_5 = param_4 * (dVar1 - 1.0);
  }
  return;
}

