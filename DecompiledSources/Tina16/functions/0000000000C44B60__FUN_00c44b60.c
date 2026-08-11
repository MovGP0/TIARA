/* Ghidra address: 00c44b60 */
/* Ghidra symbol: FUN_00c44b60 */


void FUN_00c44b60(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = dVar3 * dVar3 + dVar4 * dVar4;
  if (dVar5 == 0.0) {
    *param_1 = 1e+30;
    param_1[1] = 1e+30;
  }
  else {
    *param_1 = (dVar1 * dVar3 + dVar2 * dVar4) / dVar5;
    param_1[1] = (dVar2 * dVar3 - dVar1 * dVar4) / dVar5;
  }
  return;
}

