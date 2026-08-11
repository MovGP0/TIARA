/* Ghidra address: 004168b0 */
/* Ghidra symbol: FUN_004168b0 */


void FUN_004168b0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + -4) / 2;
  }
  FUN_00414740(param_1,param_2,iVar1);
  return;
}

