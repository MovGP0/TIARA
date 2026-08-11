/* Ghidra address: 00634420 */
/* Ghidra symbol: FUN_00634420 */


uint FUN_00634420(uint param_1,byte *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  
  uVar14 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_3 == 1) {
    uVar3 = uVar14 + *param_2;
    uVar14 = (uVar14 - 0xfff1) + (uint)*param_2;
    if (uVar3 < 0xfff1) {
      uVar14 = uVar3;
    }
    uVar3 = uVar14 + 0xf + param_1;
    if (uVar14 + param_1 < 0xfff1) {
      uVar3 = uVar14 + param_1;
    }
    return uVar3 << 0x10 | uVar14;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  if (param_3 < 0x10) {
    if (param_3 != 0) {
      uVar1 = param_3 - 1;
      if ((param_3 & 3) != 0) {
        lVar12 = -(param_3 & 3);
        do {
          param_3 = param_3 - 1;
          bVar2 = *param_2;
          param_2 = param_2 + 1;
          uVar14 = uVar14 + bVar2;
          param_1 = param_1 + uVar14;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
      }
      if (2 < uVar1) {
        do {
          iVar4 = *param_2 + uVar14;
          iVar11 = (uint)param_2[1] + iVar4;
          iVar5 = (uint)param_2[2] + iVar11;
          uVar14 = (uint)param_2[3] + iVar5;
          param_1 = param_1 + iVar4 + iVar11 + iVar5 + uVar14;
          param_2 = param_2 + 4;
          param_3 = param_3 - 4;
        } while (param_3 != 0);
      }
    }
    uVar3 = uVar14 - 0xfff1;
    if (uVar14 < 0xfff1) {
      uVar3 = uVar14;
    }
    return (param_1 % 0xfff1) * 0x10000 | uVar3;
  }
  if (param_3 < 0x15b0) {
LAB_0063464c:
    uVar1 = param_3 - 0x10;
    uVar22 = uVar1 & 0xfffffffffffffff0;
    pbVar13 = param_2;
    do {
      param_3 = param_3 - 0x10;
      iVar10 = *pbVar13 + uVar14;
      iVar4 = (uint)pbVar13[1] + iVar10;
      iVar15 = (uint)pbVar13[2] + iVar4;
      iVar5 = (uint)pbVar13[3] + iVar15;
      iVar16 = (uint)pbVar13[4] + iVar5;
      iVar11 = (uint)pbVar13[5] + iVar16;
      iVar17 = (uint)pbVar13[6] + iVar11;
      iVar6 = (uint)pbVar13[7] + iVar17;
      iVar18 = (uint)pbVar13[8] + iVar6;
      iVar7 = (uint)pbVar13[9] + iVar18;
      iVar19 = (uint)pbVar13[10] + iVar7;
      iVar8 = (uint)pbVar13[0xb] + iVar19;
      iVar20 = (uint)pbVar13[0xc] + iVar8;
      iVar9 = (uint)pbVar13[0xd] + iVar20;
      iVar21 = (uint)pbVar13[0xe] + iVar9;
      uVar14 = (uint)pbVar13[0xf] + iVar21;
      param_1 = param_1 + iVar10 + iVar4 + iVar15 + iVar5 + iVar16 + iVar11 + iVar17 + iVar6 +
                iVar18 + iVar7 + iVar19 + iVar8 + iVar20 + iVar9 + iVar21 + uVar14;
      pbVar13 = pbVar13 + 0x10;
    } while (0xf < param_3);
    param_3 = uVar1 - uVar22;
    if (param_3 != 0) {
      param_2 = param_2 + uVar22 + 0x10;
      goto LAB_0063470d;
    }
  }
  else {
    do {
      param_3 = param_3 - 0x15b0;
      lVar12 = 0;
      do {
        iVar4 = param_2[lVar12] + uVar14;
        iVar15 = (uint)param_2[lVar12 + 1] + iVar4;
        iVar5 = (uint)param_2[lVar12 + 2] + iVar15;
        iVar16 = (uint)param_2[lVar12 + 3] + iVar5;
        iVar11 = (uint)param_2[lVar12 + 4] + iVar16;
        iVar17 = (uint)param_2[lVar12 + 5] + iVar11;
        iVar6 = (uint)param_2[lVar12 + 6] + iVar17;
        iVar18 = (uint)param_2[lVar12 + 7] + iVar6;
        iVar7 = (uint)param_2[lVar12 + 8] + iVar18;
        iVar19 = (uint)param_2[lVar12 + 9] + iVar7;
        iVar8 = (uint)param_2[lVar12 + 10] + iVar19;
        iVar20 = (uint)param_2[lVar12 + 0xb] + iVar8;
        iVar9 = (uint)param_2[lVar12 + 0xc] + iVar20;
        iVar21 = (uint)param_2[lVar12 + 0xd] + iVar9;
        iVar10 = (uint)param_2[lVar12 + 0xe] + iVar21;
        uVar14 = (uint)param_2[lVar12 + 0xf] + iVar10;
        param_1 = param_1 + iVar4 + iVar15 + iVar5 + iVar16 + iVar11 + iVar17 + iVar6 + iVar18 +
                  iVar7 + iVar19 + iVar8 + iVar20 + iVar9 + iVar21 + iVar10 + uVar14;
        lVar12 = lVar12 + 0x10;
      } while ((int)lVar12 != 0x15b0);
      param_2 = param_2 + 0x15b0;
      uVar14 = uVar14 % 0xfff1;
      param_1 = param_1 % 0xfff1;
    } while (0x15af < param_3);
    if (param_3 == 0) goto LAB_00634798;
    if (0xf < param_3) goto LAB_0063464c;
LAB_0063470d:
    uVar1 = param_3 - 1;
    if ((param_3 & 3) != 0) {
      lVar12 = -(param_3 & 3);
      do {
        param_3 = param_3 - 1;
        bVar2 = *param_2;
        param_2 = param_2 + 1;
        uVar14 = uVar14 + bVar2;
        param_1 = param_1 + uVar14;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0);
    }
    if (2 < uVar1) {
      do {
        iVar4 = *param_2 + uVar14;
        iVar11 = (uint)param_2[1] + iVar4;
        iVar5 = (uint)param_2[2] + iVar11;
        uVar14 = (uint)param_2[3] + iVar5;
        param_1 = param_1 + iVar4 + iVar11 + iVar5 + uVar14;
        param_2 = param_2 + 4;
        param_3 = param_3 - 4;
      } while (param_3 != 0);
    }
  }
  uVar14 = uVar14 % 0xfff1;
  param_1 = param_1 % 0xfff1;
LAB_00634798:
  return param_1 << 0x10 | uVar14;
}

