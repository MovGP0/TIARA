/* Ghidra address: 01778cc0 */
/* Ghidra symbol: FUN_01778cc0 */


bool FUN_01778cc0(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30));
  return 0 < iVar1;
}

