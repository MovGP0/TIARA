/* Ghidra address: 01980c80 */
/* Ghidra symbol: FUN_01980c80 */


int FUN_01980c80(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < 1) {
    FUN_00410f20();
  }
  return iVar1;
}

