/* Ghidra address: 00ea79e0 */
/* Ghidra symbol: FUN_00ea79e0 */


void FUN_00ea79e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ea7830(param_1 + 8);
  if (*(int *)(param_1 + 0x10) < iVar1 + -1) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  return;
}

