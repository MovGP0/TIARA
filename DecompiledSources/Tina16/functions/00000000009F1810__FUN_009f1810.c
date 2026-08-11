/* Ghidra address: 009f1810 */
/* Ghidra symbol: FUN_009f1810 */


ushort FUN_009f1810(undefined8 param_1)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  
  uVar2 = FUN_00a01900(param_1);
  uVar6 = (ulonglong)uVar2;
  if (uVar6 < 0x90) {
    if (uVar6 == 0x8f) {
      sVar3 = FUN_00a01900(param_1);
      uVar6 = FUN_00a01900(param_1);
      sVar4 = (short)uVar6;
      if ((ushort)(sVar3 - 0xa1U) < 0x54) {
        if ((ushort)(sVar4 - 0xa1U) < 0x5e) {
          uVar2 = FUN_009efb80(param_1,(char)sVar3 + -0x80,
                               CONCAT71((int7)((uVar6 & 0xffffffff) >> 8),
                                        (char)(uVar6 & 0xffffffff) + -0x80));
          return uVar2;
        }
        return 0xfffd;
      }
      if ((ushort)(sVar3 - 0xf5U) < 10) {
        if ((ushort)(sVar4 - 0xa1U) < 0x5e) {
          return (sVar3 + -0xf5) * 0x5e + sVar4 + 0xe30b;
        }
        return 0xfffd;
      }
      return 0xfffd;
    }
    if (uVar6 < 0x80) {
      return uVar2;
    }
    if (uVar6 == 0x8e) {
      uVar5 = FUN_00a01900(param_1);
      if ((ushort)((short)uVar5 - 0xa1U) < 0x3f) {
        uVar2 = FUN_009efab0(param_1,uVar5);
        return uVar2;
      }
      return 0xfffd;
    }
  }
  else {
    if (uVar6 - 0xa1 < 0x54) {
      cVar1 = FUN_00a01900(param_1);
      uVar2 = FUN_009efaf0(param_1,(char)uVar2 + -0x80,cVar1 + -0x80);
      return uVar2;
    }
    if (uVar6 - 0xf5 < 10) {
      sVar3 = FUN_00a01900(param_1);
      if ((ushort)(sVar3 - 0xa1U) < 0x5e) {
        return (uVar2 - 0xf5) * 0x5e + sVar3 + 0xdf5f;
      }
      return 0xfffd;
    }
  }
  return 0xfffd;
}

