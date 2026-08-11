/* Ghidra address: 00fc09e0 */
/* Ghidra symbol: FUN_00fc09e0 */


void FUN_00fc09e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(int *)(param_1 + 0x81c) = iVar1 + 1;
  return;
}

