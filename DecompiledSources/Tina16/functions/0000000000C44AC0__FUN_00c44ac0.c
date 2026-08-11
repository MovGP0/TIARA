/* Ghidra address: 00c44ac0 */
/* Ghidra symbol: FUN_00c44ac0 */


void FUN_00c44ac0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_2[1];
  dVar2 = param_3[1];
  *param_1 = *param_2 + *param_3;
  param_1[1] = dVar1 + dVar2;
  return;
}

