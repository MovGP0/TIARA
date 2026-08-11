/* Ghidra address: 0041c7b0 */
/* Ghidra symbol: FUN_0041c7b0 */


void FUN_0041c7b0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
  }
  if (lVar2 == 0) {
    FUN_0041c190(param_1 + 0x10,10);
  }
  else {
    lVar2 = 0;
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
    }
    if (*(int *)(param_1 + 8) == lVar2) {
      lVar2 = 0;
      if (*(longlong *)(param_1 + 0x10) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + -8);
      }
      FUN_0041c190(param_1 + 0x10,lVar2 * 2);
    }
  }
  iVar1 = *(int *)(param_1 + 8);
  if (param_2 < iVar1) {
    FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8,
                 *(longlong *)(param_1 + 0x10) + (longlong)(param_2 + 1) * 8,
                 (longlong)((iVar1 - param_2) * 8));
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)param_2 * 8) = param_3;
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 8) = param_3;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

