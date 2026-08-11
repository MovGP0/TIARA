/* Ghidra address: 00415530 */
/* Ghidra symbol: FUN_00415530 */


void FUN_00415530(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4) / 2;
  }
  FUN_00414a20(param_1,param_2,iVar1,param_3);
  return;
}

