/* Ghidra address: 00fc09a0 */
/* Ghidra symbol: FUN_00fc09a0 */


void FUN_00fc09a0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x260))(*(longlong **)(param_1 + 0x6d8));
  *(int *)(param_1 + 0x818) = iVar1;
  if (0 < iVar1) {
    *(int *)(param_1 + 0x818) = *(int *)(param_1 + 0x818) + 1;
  }
  return;
}

