/* Ghidra address: 00f79390 */
/* Ghidra symbol: FUN_00f79390 */


bool FUN_00f79390(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28));
  return 0 < iVar1;
}

