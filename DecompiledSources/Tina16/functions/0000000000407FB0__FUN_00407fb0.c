/* Ghidra address: 00407fb0 */
/* Ghidra symbol: FUN_00407fb0 */


longlong FUN_00407fb0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  plVar1 = *(longlong **)(param_1 + -8);
  uVar2 = (uint)param_2;
  if (((ulonglong)plVar1 & 7) == 0) {
    lVar3 = *plVar1;
    uVar5 = *(ushort *)(lVar3 + 2) - 8;
    if (uVar5 < param_2) {
      uVar9 = (ulonglong)(*(ushort *)(lVar3 + 2) + 0x18 + uVar5);
      lVar4 = FUN_004079c0((uVar9 - param_2 & (ulonglong)(uVar9 < param_2) - 1) + param_2);
      if (lVar4 == 0) {
        return 0;
      }
      if (0x40a28 < param_2) {
        *(ulonglong *)(lVar4 + -0x10) = param_2;
      }
      (**(code **)(lVar3 + 0x30))(param_1,lVar4,*(ushort *)(lVar3 + 2) - 8);
      FUN_00407d90(param_1);
      return lVar4;
    }
    if (uVar5 <= uVar2 * 4 + 0x40) {
      return param_1;
    }
    lVar3 = FUN_004079c0(param_2);
    if (lVar3 == 0) {
      return 0;
    }
    FUN_004073a0(param_1,lVar3,param_2);
    FUN_00407d90(param_1);
    return lVar3;
  }
  if (((ulonglong)plVar1 & 5) != 0) {
    if (((ulonglong)plVar1 & 3) == 0) {
      lVar3 = FUN_00407830(param_1);
      return lVar3;
    }
    return 0;
  }
  uVar6 = (uint)plVar1 & 0xfffffff0;
  lVar3 = (ulonglong)uVar6 + param_1;
  uVar5 = uVar6 - 8;
  uVar9 = (ulonglong)uVar5;
  uVar7 = (ulonglong)((uint)plVar1 & 0xf);
  if (param_2 <= uVar9) {
    if (uVar9 <= param_2 * 2) {
      return param_1;
    }
    if (uVar2 < 0xb28) {
      if (uVar2 < 0x2cc) {
        lVar3 = FUN_004079c0(param_2);
        if (lVar3 == 0) {
          return 0;
        }
        FUN_004073a0(param_1,lVar3,param_2);
        FUN_00407d90(param_1);
        return lVar3;
      }
      param_2 = 0xb28;
      if (uVar5 < 0xb29) {
        return param_1;
      }
    }
    uVar9 = param_2 + 0xd7 & 0xffffffffffffff00;
    uVar10 = uVar9 + 0x30;
    if (DAT_020060a9 != '\0') {
      FUN_00407440();
      uVar7 = *(ulonglong *)(param_1 + -8) & 0xf;
    }
    *(ulonglong *)(param_1 + -8) = uVar7 | uVar10;
    uVar8 = (ulonglong)(uVar6 - (int)uVar10);
    uVar7 = *(ulonglong *)(lVar3 + -8);
    if ((uVar7 & 1) == 0) {
      *(ulonglong *)(lVar3 + -8) = uVar7 | 8;
      lVar4 = lVar3;
    }
    else {
      uVar7 = uVar7 & 0xfffffffffffffff0;
      uVar8 = uVar8 + uVar7;
      lVar4 = lVar3 + uVar7;
      if (0xb2f < (uint)uVar7) {
        FUN_00407490(lVar3);
      }
    }
    *(ulonglong *)(lVar4 + -0x10) = uVar8;
    *(ulonglong *)(uVar9 + 0x28 + param_1) = uVar8 + 3;
    if (0xb2f < uVar8) {
      FUN_004074e0(uVar10 + param_1,uVar8);
    }
    DAT_02006ba8 = 0;
    return param_1;
  }
  if ((*(ulonglong *)(lVar3 + -8) & 1) != 0) {
    uVar8 = *(ulonglong *)(lVar3 + -8) & 0xfffffffffffffff0;
    uVar10 = uVar9 + uVar8;
    if (param_2 <= uVar10) {
      if (DAT_020060a9 == '\0') {
LAB_00408218:
        if (0xb2f < (uint)uVar8) {
          FUN_00407490(lVar3);
        }
        uVar5 = (uVar5 >> 2) + uVar5;
        uVar2 = (uVar2 + 0xd7 + (uVar5 - uVar2 & (uVar5 < uVar2) - 1) & 0xffffff00) + 0x30;
        uVar9 = (ulonglong)uVar2;
        uVar5 = (int)uVar10 + 8;
        uVar6 = uVar5 - uVar2;
        if (uVar5 < uVar2 || uVar6 == 0) {
          *(ulonglong *)(uVar10 + param_1) = *(ulonglong *)(uVar10 + param_1) & 0xfffffffffffffff7;
          uVar9 = uVar10 + 8;
        }
        else {
          *(ulonglong *)((uVar10 - 8) + param_1) = (ulonglong)uVar6;
          *(ulonglong *)((uVar9 - 8) + param_1) = (ulonglong)(uVar6 + 3);
          if (0xb2f < uVar6) {
            FUN_004074e0(uVar9 + param_1);
          }
        }
        *(ulonglong *)(param_1 + -8) = uVar9 | uVar7;
        DAT_02006ba8 = 0;
        return param_1;
      }
      FUN_00407440();
      uVar7 = *(ulonglong *)(param_1 + -8) & 0xf;
      if ((*(ulonglong *)(lVar3 + -8) & 1) != 0) {
        uVar8 = (ulonglong)((uint)*(ulonglong *)(lVar3 + -8) & 0xfffffff0);
        uVar10 = uVar9 + uVar8;
        if (param_2 <= uVar10) goto LAB_00408218;
      }
      DAT_02006ba8 = 0;
    }
  }
  uVar7 = (ulonglong)((uVar5 >> 2) + uVar5);
  uVar7 = (uVar7 - param_2 & (ulonglong)(uVar7 < param_2) - 1) + param_2;
  lVar3 = FUN_004079c0(uVar7);
  if ((int)lVar3 != 0) {
    if (0x40a28 < uVar7) {
      *(ulonglong *)(lVar3 + -0x10) = param_2;
    }
    FUN_004073a0(param_1,lVar3,uVar9);
    FUN_00407d90(param_1);
  }
  return lVar3;
}

