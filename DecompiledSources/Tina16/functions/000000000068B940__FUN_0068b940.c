/* Ghidra address: 0068b940 */
/* Ghidra symbol: FUN_0068b940 */


void FUN_0068b940(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if ((0 < *(int *)(param_1 + 0x4c0)) && (0 < *(int *)(param_1 + 0x98))) {
    iVar2 = FUN_0064d0b0(param_1);
    iVar2 = FUN_0040c840((double)iVar2 / (double)*(int *)(param_1 + 0x4c0));
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    uVar1 = FUN_0065b870(param_1);
    thunk_FUN_041b2403(uVar1,0x195,(longlong)iVar2,0);
  }
  return;
}

