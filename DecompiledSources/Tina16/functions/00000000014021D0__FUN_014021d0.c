/* Ghidra address: 014021d0 */
/* Ghidra symbol: FUN_014021d0 */


void FUN_014021d0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x770) + 0x278))(*(longlong **)(param_1 + 0x770));
  *(int *)(param_1 + 0x8a8) = iVar1 + 1;
  return;
}

