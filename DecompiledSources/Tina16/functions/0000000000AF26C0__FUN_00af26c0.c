/* Ghidra address: 00af26c0 */
/* Ghidra symbol: FUN_00af26c0 */


void FUN_00af26c0(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x908) - *(int *)(*(longlong *)(param_1 + 0x740) + 0x9c);
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  if (param_2 < 1) {
    param_2 = 0;
  }
  FUN_0068e980(*(undefined8 *)(param_1 + 0x758),param_2);
  FUN_00aa66b0(*(undefined8 *)(param_1 + 0x8b0),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x740) + 0x180))(*(longlong **)(param_1 + 0x740));
  return;
}

