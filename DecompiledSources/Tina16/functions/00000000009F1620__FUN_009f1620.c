/* Ghidra address: 009f1620 */
/* Ghidra symbol: FUN_009f1620 */


ushort FUN_009f1620(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auStack_38 [32];
  
  uVar1 = FUN_00a01900(param_1);
  uVar3 = (ulonglong)uVar1;
  if (uVar3 < 0xa1) {
    if (uVar3 < 0x80) {
      return uVar1;
    }
    if (uVar3 == 0x80) {
      return 0xfffd;
    }
    if (uVar3 - 0x81 < 0x20) {
      return 0xfffd;
    }
  }
  else {
    if (uVar3 - 0xa1 < 2) {
      uVar2 = FUN_00a01900(param_1);
      if ((ushort)(uVar2 - 0x40) < 0x3f) {
        uVar1 = FUN_009f15a0(auStack_38,uVar1 - 0xa1,uVar2 - 0x40);
        return uVar1;
      }
      if (0x5d < (ushort)(uVar2 - 0xa1)) {
        return 0xfffd;
      }
      uVar1 = FUN_009f15a0(auStack_38,uVar1 - 0xa1,uVar2 - 0x62);
      return uVar1;
    }
    if (uVar3 - 0xa3 < 0x57) {
      uVar2 = FUN_00a01900(param_1);
      uVar3 = (ulonglong)(ushort)(uVar1 * 0x100 + uVar2);
      if (uVar3 < 0xc800) {
        if (uVar3 == 0xa3e1) {
          return 0x20ac;
        }
        if (0x5d < uVar3 - 0xc6a1) {
LAB_009f17a1:
          if ((ushort)(uVar2 - 0x40) < 0x3f) {
            uVar1 = FUN_009f15c0(auStack_38,uVar1 - 0xa1,uVar2 - 0x40);
            return uVar1;
          }
          if (0x5d < (ushort)(uVar2 - 0xa1)) {
            return 0xfffd;
          }
          uVar1 = FUN_009f15c0(auStack_38,uVar1 - 0xa1,uVar2 - 0x62);
          return uVar1;
        }
      }
      else if (0xfe < uVar3 - 0xc800) {
        if (uVar3 - 0xf9d6 < 0x29) {
          return *(ushort *)(PTR_DAT_02004b88 + (longlong)(int)(uVar2 - 0xd6) * 2);
        }
        if (uVar3 - 63999 < 0x500) {
          return 0xfffd;
        }
        goto LAB_009f17a1;
      }
      return 0xfffd;
    }
    if (uVar3 == 0xff) {
      return 0xfffd;
    }
  }
  return 0xfffd;
}

