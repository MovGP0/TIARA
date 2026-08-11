/* Ghidra address: 00f300d0 */
/* Ghidra symbol: FUN_00f300d0 */


int FUN_00f300d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))(*(longlong **)(param_1 + 0x10));
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))(*(longlong **)(param_1 + 0x18));
  return iVar1 + iVar2 + 1;
}

