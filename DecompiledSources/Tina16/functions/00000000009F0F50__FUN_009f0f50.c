/* Ghidra address: 009f0f50 */
/* Ghidra symbol: FUN_009f0f50 */


ulonglong FUN_009f0f50(undefined8 param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  short sVar7;
  ulonglong uVar8;
  short sVar9;
  ushort uVar10;
  
  uVar3 = FUN_00a01900(param_1);
  uVar8 = (ulonglong)uVar3;
  uVar10 = (ushort)uVar3;
  uVar5 = uVar8 & 0xffff;
  uVar1 = (undefined2)(uVar3 >> 0x10);
  if (uVar5 < 0xe0) {
    if (5 < uVar5 - 0x81) {
      if (uVar5 == 0x87) goto LAB_009f10e8;
      if (0x17 < uVar5 - 0x88) {
        if (0x3e < uVar5 - 0xa1) {
          return uVar8;
        }
        return (ulonglong)CONCAT22(uVar1,uVar10 - 0x140);
      }
    }
  }
  else if (10 < uVar5 - 0xe0) {
    if (1 < uVar5 - 0xed) {
      if (uVar5 - 0xf0 < 10) {
        sVar7 = FUN_00a01900(param_1);
        if ((ushort)(sVar7 - 0x40U) < 0x3f) {
          return (ulonglong)CONCAT22(uVar1,(uVar10 - 0xf0) * 0xbc + sVar7 + -0x2040);
        }
        if (0x7c < (ushort)(sVar7 - 0x80U)) {
          return uVar8;
        }
        return (ulonglong)CONCAT22(uVar1,(uVar10 - 0xf0) * 0xbc + sVar7 + -0x2041);
      }
      if (2 < uVar5 - 0xfa) {
        return uVar8;
      }
    }
LAB_009f10e8:
    uVar4 = FUN_00a01900(param_1);
    uVar2 = (ushort)uVar4;
    if ((0x3e < (ushort)(uVar2 - 0x40)) && (0x7c < (ushort)(uVar2 - 0x80))) {
      return uVar8;
    }
    if (uVar10 < 0xe0) {
      sVar7 = 0x81;
    }
    else {
      sVar7 = 0xc1;
    }
    if (uVar2 < 0x80) {
      sVar9 = 0x40;
    }
    else {
      sVar9 = 0x41;
    }
    uVar10 = (uVar10 - sVar7) * 0xbc + (uVar2 - sVar9);
    uVar3 = CONCAT22((short)((uint)uVar4 >> 0x10),0xfffd);
    if (uVar10 < 0x2050) {
      if (uVar10 < 0x4c4) {
        uVar3 = (uint)*(ushort *)(PTR_DAT_02002bd0 + (longlong)(int)(uVar10 - 0x468) * 2);
      }
    }
    else if (uVar10 < 0x29dc) {
      if (uVar10 < 0x21c8) {
        uVar3 = (uint)*(ushort *)(PTR_DAT_02002eb0 + (longlong)(int)(uVar10 - 0x2050) * 2);
      }
    }
    else if (uVar10 < 0x2b60) {
      uVar3 = (uint)*(ushort *)(PTR_DAT_020014b0 + (longlong)(int)(uVar10 - 0x29dc) * 2);
    }
    if ((short)uVar3 == -3) {
      return uVar8;
    }
    return (ulonglong)uVar3;
  }
  uVar6 = FUN_00a01900(param_1);
  uVar2 = (ushort)uVar6;
  if (((ushort)(uVar2 - 0x40) < 0x3f) || ((ushort)(uVar2 - 0x80) < 0x7d)) {
    if (uVar10 < 0xe0) {
      sVar7 = uVar10 - 0x81;
    }
    else {
      sVar7 = uVar10 - 0xc1;
    }
    if (uVar2 < 0x80) {
      sVar9 = -0x40;
    }
    else {
      sVar9 = -0x41;
    }
    uVar2 = uVar2 + sVar9;
    if (uVar2 < 0x5e) {
      sVar9 = sVar7 * 2 + 0x21;
      sVar7 = uVar2 + 0x21;
    }
    else {
      sVar9 = sVar7 * 2 + 0x22;
      sVar7 = uVar2 - 0x3d;
    }
    if ((((ushort)(sVar9 - 0x21U) < 8) || ((ushort)(sVar9 - 0x30U) < 0x45)) &&
       (uVar5 = CONCAT62((int6)((ulonglong)uVar6 >> 0x10),sVar7) & 0xffffffff,
       (ushort)((short)uVar5 - 0x21U) < 0x5e)) {
      uVar10 = ((sVar9 + -0x21) * 0x5e + sVar7) - 0x21;
      uVar3 = (uint)CONCAT62((int6)(uVar5 >> 0x10),0xfffd);
      if (uVar10 < 0x582) {
        if (uVar10 < 0x2b2) {
          uVar3 = (uint)*(ushort *)(PTR_DAT_02003388 + (ulonglong)uVar10 * 2);
        }
      }
      else if (uVar10 < 0x1e80) {
        uVar3 = (uint)*(ushort *)(PTR_DAT_02003640 + (longlong)(int)(uVar10 - 0x582) * 2);
      }
      if ((short)uVar3 != -3) {
        uVar8 = (ulonglong)uVar3;
      }
    }
  }
  return uVar8;
}

