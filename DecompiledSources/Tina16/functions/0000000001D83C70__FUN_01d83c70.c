/* Ghidra address: 01d83c70 */
/* Ghidra symbol: FUN_01d83c70 */


void FUN_01d83c70(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x260))(*(longlong **)(param_1 + 0x920));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x920) + 0x260))(*(longlong **)(param_1 + 0x920))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xa88) + 0xb0))(*(longlong **)(param_1 + 0xa88),uVar2);
  }
  return;
}

