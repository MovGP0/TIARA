/* Ghidra address: 0044f420 */
/* Ghidra symbol: FUN_0044f420 */


void FUN_0044f420(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
  }
  if ((iVar1 < param_2) && (param_2 = 0, param_1 != 0)) {
    param_2 = *(int *)(param_1 + -4);
  }
  FUN_0044f450(param_1,param_2);
  return;
}

