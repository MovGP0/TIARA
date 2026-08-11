/* Ghidra address: 004b2880 */
/* Ghidra symbol: FUN_004b2880 */


bool FUN_004b2880(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  return *(int *)(param_1 + 8) < iVar1;
}

