/* Ghidra address: 01647a50 */
/* Ghidra symbol: FUN_01647a50 */


bool FUN_01647a50(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x28))(*(longlong **)(param_1 + 0x28));
  return param_2 == iVar1;
}

