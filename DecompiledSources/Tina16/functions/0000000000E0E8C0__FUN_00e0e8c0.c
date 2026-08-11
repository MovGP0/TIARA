/* Ghidra address: 00e0e8c0 */
/* Ghidra symbol: FUN_00e0e8c0 */


bool FUN_00e0e8c0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x28))(*(longlong **)(param_1 + 0x58));
  return 0 < iVar1;
}

