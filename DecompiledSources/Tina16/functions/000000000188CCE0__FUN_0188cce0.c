/* Ghidra address: 0188cce0 */
/* Ghidra symbol: FUN_0188cce0 */


void FUN_0188cce0(longlong param_1)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    sVar1 = *(short *)(*(longlong *)(param_1 + 0xe0) + 0x5e);
    if (*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0065b870(*(longlong *)(*(longlong *)PTR_DAT_02005950 + 0xd8));
    }
    uVar4 = FUN_00416740(*(undefined8 *)(param_1 + 0x60));
    iVar2 = thunk_FUN_03c8dec4(uVar3,*(undefined8 *)(param_1 + 0x50),uVar4,
                               *(undefined8 *)(param_1 + 0xe0),*(undefined8 *)(param_1 + 0xe0),0xe);
    if (0 < iVar2) {
      *(int *)(param_1 + 8) = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x58);
      *(int *)(param_1 + 0x3c) = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x58);
      iVar2 = (int)*(short *)(*(longlong *)(param_1 + 0xe0) + 0x5e);
      if (sVar1 != iVar2) {
        *(int *)(param_1 + 0xc) = iVar2;
      }
      FUN_0188c570(param_1);
    }
  }
  return;
}

