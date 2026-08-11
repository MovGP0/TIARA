/* Ghidra address: 00c44a50 */
/* Ghidra symbol: FUN_00c44a50 */


void FUN_00c44a50(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  *param_1 = dVar1 * dVar3 - dVar2 * dVar4;
  param_1[1] = dVar2 * dVar3 + dVar1 * dVar4;
  return;
}

