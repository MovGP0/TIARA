/* Ghidra address: 010cd240 */
/* Ghidra symbol: FUN_010cd240 */


bool FUN_010cd240(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x28))(*(longlong **)(param_1 + 0x180));
  return iVar1 <= *(int *)(param_1 + 0x15c);
}

