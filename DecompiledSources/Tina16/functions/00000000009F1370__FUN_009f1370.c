/* Ghidra address: 009f1370 */
/* Ghidra symbol: FUN_009f1370 */


ushort FUN_009f1370(undefined8 param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  ulonglong uVar5;
  undefined1 auStack_38 [40];
  
  uVar1 = FUN_00a01900(param_1);
  uVar5 = (ulonglong)uVar1;
  if (uVar5 < 0xa1) {
    if (uVar5 < 0x80) {
      return uVar1;
    }
    if (uVar5 - 0x81 < 0x20) {
      uVar2 = FUN_00a01900(param_1);
      if ((ushort)(uVar2 - 0x40) < 0x1b) {
        uVar1 = FUN_009f1260(auStack_38,uVar1 - 0x81,uVar2 - 0x41);
        return uVar1;
      }
      if ((ushort)(uVar2 - 0x61) < 0x1a) {
        uVar1 = FUN_009f1260(auStack_38,uVar1 - 0x81,uVar2 - 0x47);
        return uVar1;
      }
      if (0x7d < (ushort)(uVar2 - 0x81)) {
        return 0xfffd;
      }
      uVar1 = FUN_009f1260(auStack_38,uVar1 - 0x81,uVar2 - 0x4d);
      return uVar1;
    }
  }
  else {
    if (uVar5 - 0xa1 < 0x25) {
      uVar2 = FUN_00a01900(param_1);
      uVar5 = (ulonglong)uVar2;
      if (uVar5 < 0xa1) {
        if (uVar5 - 0x40 < 0x1b) {
          uVar1 = FUN_009f12e0(auStack_38,uVar1 - 0xa1,uVar2 - 0x41);
          return uVar1;
        }
        if (0x19 < uVar5 - 0x61) {
          if (0x1f < uVar5 - 0x81) {
            return 0xfffd;
          }
          uVar1 = FUN_009f12e0(auStack_38,uVar1 - 0xa1,uVar2 - 0x4d);
          return uVar1;
        }
        uVar1 = FUN_009f12e0(auStack_38,uVar1 - 0xa1,uVar2 - 0x47);
        return uVar1;
      }
      if (0x46 < uVar5 - 0xa1) {
        if (uVar5 == 0xe8) {
          if (uVar1 == 0xa2) {
            return 0xfffd;
          }
          uVar1 = FUN_009f1350(auStack_38,uVar1,uVar2);
          return uVar1;
        }
        if (0x15 < uVar5 - 0xe9) {
          return 0xfffd;
        }
      }
      uVar1 = FUN_009f1350(auStack_38,uVar1,uVar2);
      return uVar1;
    }
    if (uVar5 - 0xc6 < 0x38) {
      uVar3 = FUN_00a01900(param_1);
      uVar1 = FUN_009f1350(auStack_38,uVar1,uVar3);
      return uVar1;
    }
    if (uVar5 == 0xfe) {
      sVar4 = FUN_00a01900(param_1);
      return sVar4 + 0xdf5f;
    }
  }
  return 0xfffd;
}

