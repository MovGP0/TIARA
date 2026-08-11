/* Ghidra address: 00fae450 */
/* Ghidra symbol: FUN_00fae450 */


void FUN_00fae450(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x260))(*(longlong **)(param_1 + 0x6e8));
  *(int *)(param_1 + 0xa6c) = iVar1 + 8;
  return;
}

