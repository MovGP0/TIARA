/* Ghidra address: 00c42aa0 */
/* Ghidra symbol: FUN_00c42aa0 */


double FUN_00c42aa0(double param_1,double param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = DAT_01ea36f8;
  if (1e-50 < param_2) {
    dVar1 = (double)FUN_0040c2f0(param_2);
    FUN_0040c2f0(param_2);
    dVar1 = 7.0 - dVar1;
  }
  if (param_1 <= dVar1) {
    dVar2 = (double)FUN_0040af80(param_1);
    *param_3 = dVar2;
  }
  else {
    dVar2 = (double)FUN_0040af80(dVar1);
    *param_3 = dVar2;
    dVar2 = dVar2 + *param_3 * (param_1 - dVar1);
  }
  return dVar2;
}

