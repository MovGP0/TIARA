/* Ghidra address: 00a78210 */
/* Ghidra symbol: FUN_00a78210 */


void FUN_00a78210(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_00a78160(param_1);
  if (*(double *)(param_1 + 0x4c0) <= (double)iVar2) {
    if ((double)iVar2 < *(double *)(param_1 + 0x4c8) ||
        (double)iVar2 == *(double *)(param_1 + 0x4c8)) {
      uVar1 = FUN_0065b870(param_1);
      iVar2 = FUN_005fbf20(0xff0000);
      thunk_FUN_041b2403(uVar1,0x409,0,(longlong)iVar2);
    }
    else {
      uVar1 = FUN_0065b870(param_1);
      iVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x4dc));
      thunk_FUN_041b2403(uVar1,0x409,0,(longlong)iVar2);
    }
  }
  else {
    uVar1 = FUN_0065b870(param_1);
    iVar2 = FUN_005fbf20(*(undefined4 *)(param_1 + 0x4d8));
    thunk_FUN_041b2403(uVar1,0x409,0,(longlong)iVar2);
  }
  return;
}

