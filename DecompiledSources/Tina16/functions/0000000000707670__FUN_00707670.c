/* Ghidra address: 00707670 */
/* Ghidra symbol: FUN_00707670 */


ushort FUN_00707670(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort uVar4;
  
  uVar4 = *(ushort *)(param_1 + 0x2c);
  uVar3 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
  cVar1 = FUN_0065be20(uVar3);
  if (cVar1 != '\0') {
    uVar3 = FUN_00707f20(*(undefined8 *)(param_1 + 8));
    uVar3 = FUN_0065b870(uVar3);
    uVar2 = thunk_FUN_041b2403(uVar3,0x105c,*(undefined4 *)(param_1 + 0x28),0xffffffff);
    uVar4 = uVar4 & 0xfe19;
    if ((uVar2 & 2) != 0) {
      uVar4 = uVar4 | 2;
    }
    if ((uVar2 & 1) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar2 & 0x10) != 0) {
      uVar4 = uVar4 | 0x20;
    }
    if ((uVar2 & 0x20) != 0) {
      uVar4 = uVar4 | 0x40;
    }
    if ((uVar2 & 0x40) != 0) {
      uVar4 = uVar4 | 0x80;
    }
    if ((uVar2 & 0x80) != 0) {
      uVar4 = uVar4 | 0x100;
    }
    *(ushort *)(param_1 + 0x2c) = uVar4;
  }
  return uVar4;
}

