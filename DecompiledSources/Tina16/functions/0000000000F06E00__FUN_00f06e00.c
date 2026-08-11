/* Ghidra address: 00f06e00 */
/* Ghidra symbol: FUN_00f06e00 */


void FUN_00f06e00(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  if ((dVar1 != 1.0) || (dVar2 != 0.0)) {
    *param_1 = (1.0 - (dVar1 * dVar1 + dVar2 * dVar2)) /
               ((1.0 - dVar1) * (1.0 - dVar1) + dVar2 * dVar2);
    param_1[1] = (dVar2 * 2.0) / ((1.0 - dVar1) * (1.0 - dVar1) + dVar2 * dVar2);
  }
  return;
}

