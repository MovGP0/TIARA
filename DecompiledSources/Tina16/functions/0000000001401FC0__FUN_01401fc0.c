/* Ghidra address: 01401fc0 */
/* Ghidra symbol: FUN_01401fc0 */


void FUN_01401fc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x278))(*(longlong **)(param_1 + 0x740));
  *(int *)(param_1 + 0x8a8) = iVar1 + 1;
  return;
}

