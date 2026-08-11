/* Ghidra address: 010fcfd0 */
/* Ghidra symbol: FUN_010fcfd0 */


void FUN_010fcfd0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(*(longlong **)(param_1 + 8));
    FUN_004095f0(lVar1,(longlong)iVar2);
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x90))(*(longlong **)(param_1 + 8));
  return;
}

