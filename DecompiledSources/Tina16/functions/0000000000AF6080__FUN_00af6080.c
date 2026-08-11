/* Ghidra address: 00af6080 */
/* Ghidra symbol: FUN_00af6080 */


void FUN_00af6080(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 0) {
    param_2 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x908) - *(int *)(*(longlong *)(param_1 + 0x740) + 0x9c);
  if (iVar1 <= param_2) {
    param_2 = iVar1;
  }
  iVar1 = FUN_00af6070(param_1);
  if (param_2 != iVar1) {
    FUN_00af26c0(param_1,param_2);
  }
  return;
}

