/* Ghidra address: 016350e0 */
/* Ghidra symbol: FUN_016350e0 */


bool FUN_016350e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  return 0 < iVar1;
}

