/* Ghidra address: 009e6f90 */
/* Ghidra symbol: FUN_009e6f90 */


bool FUN_009e6f90(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  return *(int *)(param_1 + 8) < iVar1;
}

