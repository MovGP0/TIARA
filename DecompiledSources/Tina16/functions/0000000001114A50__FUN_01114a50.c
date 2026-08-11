/* Ghidra address: 01114a50 */
/* Ghidra symbol: FUN_01114a50 */


void FUN_01114a50(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))(*(longlong **)(param_1 + 0x4e8));
  *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  return;
}

