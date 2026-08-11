/* Ghidra address: 0122a7b0 */
/* Ghidra symbol: FUN_0122a7b0 */


void FUN_0122a7b0(double *param_1,int param_2,int param_3,int param_4,int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_2 == param_4) {
    param_2 = param_4 + -1;
  }
  dVar1 = (double)FUN_0122a0a0(param_2 - *(int *)PTR_DAT_02003d58);
  dVar2 = (double)FUN_0122a0a0(param_4 - *(int *)PTR_DAT_02003d58);
  dVar3 = (double)FUN_0122a020(param_3 - *(int *)PTR_DAT_020037d0);
  dVar4 = (double)FUN_0122a020(param_5 - *(int *)PTR_DAT_020037d0);
  dVar1 = (double)FUN_00c42800(dVar2 / dVar1);
  *param_1 = (dVar4 - dVar3) / dVar1;
  return;
}

