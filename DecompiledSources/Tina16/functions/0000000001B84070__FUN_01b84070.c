/* Ghidra address: 01b84070 */
/* Ghidra symbol: FUN_01b84070 */


bool FUN_01b84070(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x3d0) + 0x28))(*(longlong **)(param_1 + 0x3d0));
  return 0 < iVar1;
}

