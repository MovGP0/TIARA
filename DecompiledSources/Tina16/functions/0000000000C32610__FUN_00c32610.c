/* Ghidra address: 00c32610 */
/* Ghidra symbol: FUN_00c32610 */


void FUN_00c32610(longlong param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x38);
  FUN_00c319b0(param_1);
  *(undefined1 *)(param_1 + 0x84) = 1;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x60);
  }
  if (lVar5 == 0) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    uVar3 = DAT_01e9f550;
  }
  else {
    uVar1 = FUN_00c2e570(lVar5);
    *(undefined1 *)(param_1 + 0x60) = uVar1;
    uVar2 = FUN_00c2e520(lVar5);
    uVar3 = (uint)uVar2;
    if (uVar2 == 0) {
      uVar3 = DAT_01e9f550;
    }
  }
  if ((int)uVar3 < (int)DAT_01e9f554) {
    uVar3 = DAT_01e9f554;
  }
  if ((int)DAT_01e9f558 < (int)uVar3) {
    uVar3 = DAT_01e9f558;
  }
  if (*(int *)(param_1 + 0x34) < 1) {
    uVar3 = DAT_01e9f558;
  }
  uVar4 = thunk_FUN_03f3ed25(uVar3 * DAT_01e9f54c,100,*(int *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x80) = uVar4;
  return;
}

