/* Ghidra address: 00fae420 */
/* Ghidra symbol: FUN_00fae420 */


void FUN_00fae420(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6b0) + 0x260))(*(longlong **)(param_1 + 0x6b0));
  *(int *)(param_1 + 0xa68) = iVar1 + 8;
  return;
}

