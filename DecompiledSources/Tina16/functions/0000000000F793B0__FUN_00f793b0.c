/* Ghidra address: 00f793b0 */
/* Ghidra symbol: FUN_00f793b0 */


bool FUN_00f793b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  return 0 < iVar1;
}

