/* Ghidra address: 00ea7340 */
/* Ghidra symbol: FUN_00ea7340 */


void FUN_00ea7340(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00ea6f80(param_1 + 8);
  if (*(int *)(param_1 + 0x18) < iVar1 + -1) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  }
  return;
}

