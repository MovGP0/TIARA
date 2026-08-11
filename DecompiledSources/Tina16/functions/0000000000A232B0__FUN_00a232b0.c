/* Ghidra address: 00a232b0 */
/* Ghidra symbol: FUN_00a232b0 */


void FUN_00a232b0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [13];
  undefined1 auVar7 [13];
  undefined1 auVar8 [13];
  undefined1 auVar9 [13];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  ulonglong uVar12;
  undefined1 auVar13 [13];
  undefined1 auVar14 [13];
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  int iVar28;
  longlong lVar29;
  byte *pbVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  undefined1 uVar39;
  
  iVar20 = *(int *)(param_2 + 0x1c) * 8;
  uVar2 = *(uint *)(param_1 + 0x30);
  uVar26 = (ulonglong)uVar2;
  uVar21 = *(int *)(param_1 + 0x138) / *(int *)(param_2 + 8);
  uVar3 = *(uint *)(param_1 + 0x13c);
  iVar28 = *(int *)(param_2 + 0xc);
  uVar15 = (int)uVar3 / iVar28;
  if ((0 < (int)uVar3) && (uVar27 = uVar21 * iVar20, 0 < (int)(uVar27 - uVar2))) {
    iVar28 = -2;
    if (-3 < (int)(~uVar27 + uVar2)) {
      iVar28 = ~uVar27 + uVar2;
    }
    lVar29 = (ulonglong)(((uVar27 | 1) - uVar2) + iVar28) + 1;
    uVar19 = (ulonglong)(uVar3 & 3);
    if ((ulonglong)uVar3 - 1 < 3) {
      lVar23 = 0;
    }
    else {
      lVar23 = 0;
      do {
        lVar25 = *(longlong *)(param_3 + lVar23 * 8);
        FUN_00626680(lVar25 + uVar26,*(undefined1 *)(lVar25 + -1 + uVar26),lVar29);
        lVar25 = *(longlong *)(param_3 + 8 + lVar23 * 8);
        FUN_00626680(lVar25 + uVar26,*(undefined1 *)(lVar25 + -1 + uVar26),lVar29);
        lVar25 = *(longlong *)(param_3 + 0x10 + lVar23 * 8);
        FUN_00626680(lVar25 + uVar26,*(undefined1 *)(lVar25 + -1 + uVar26),lVar29);
        lVar25 = *(longlong *)(param_3 + 0x18 + lVar23 * 8);
        FUN_00626680(lVar25 + uVar26,*(undefined1 *)(lVar25 + -1 + uVar26),lVar29);
        lVar23 = lVar23 + 4;
      } while (uVar3 - uVar19 != lVar23);
    }
    if (uVar19 != 0) {
      plVar22 = (longlong *)(param_3 + lVar23 * 8);
      lVar23 = -uVar19;
      do {
        FUN_00626680(*plVar22 + uVar26,*(undefined1 *)(*plVar22 + -1 + uVar26),lVar29);
        plVar22 = plVar22 + 1;
        lVar23 = lVar23 + 1;
      } while (lVar23 != 0);
    }
    iVar28 = *(int *)(param_2 + 0xc);
  }
  if (0 < iVar28) {
    uVar26 = (ulonglong)(uVar21 - 1) + 1;
    lVar25 = uVar26 - (uVar21 & 7);
    lVar29 = 0;
    lVar23 = 0;
    do {
      if (iVar20 != 0) {
        puVar24 = *(undefined1 **)(param_4 + lVar29 * 8);
        uVar19 = 0;
        iVar28 = 0;
        do {
          iVar35 = 0;
          if (0 < (int)uVar15) {
            uVar18 = 0;
            iVar35 = 0;
            do {
              if (0 < (int)uVar21) {
                lVar17 = *(longlong *)(param_3 + (uVar18 + lVar23) * 8);
                pbVar30 = (byte *)(lVar17 + uVar19);
                iVar31 = 0;
                if (7 < uVar26) {
                  pbVar30 = pbVar30 + lVar25;
                  iVar36 = 0;
                  iVar37 = 0;
                  iVar38 = 0;
                  puVar16 = (undefined4 *)(lVar17 + 4 + uVar19);
                  iVar31 = 0;
                  iVar32 = 0;
                  iVar33 = 0;
                  iVar34 = 0;
                  lVar17 = lVar25;
                  do {
                    uVar4 = puVar16[-1];
                    uVar5 = *puVar16;
                    uVar39 = (undefined1)((uint)uVar4 >> 8);
                    uVar12 = (ulonglong)CONCAT12(uVar39,(short)uVar4) & 0xffffffffffff00ff;
                    auVar6._8_4_ = 0;
                    auVar6._0_8_ = uVar12;
                    auVar6[0xc] = (char)((uint)uVar4 >> 0x18);
                    auVar7[8] = (char)((uint)uVar4 >> 0x10);
                    auVar7._0_8_ = uVar12;
                    auVar7[9] = 0;
                    auVar7._10_3_ = auVar6._10_3_;
                    auVar13._5_8_ = 0;
                    auVar13._0_5_ = auVar7._8_5_;
                    auVar8[4] = uVar39;
                    auVar8._0_4_ = (uint)uVar12;
                    auVar8[5] = 0;
                    auVar8._6_7_ = SUB137(auVar13 << 0x40,6);
                    iVar35 = iVar35 + ((uint)uVar12 & 0xffff);
                    iVar36 = iVar36 + auVar8._4_4_;
                    iVar37 = iVar37 + auVar7._8_4_;
                    iVar38 = iVar38 + (uint)(uint3)(auVar6._10_3_ >> 0x10);
                    uVar39 = (undefined1)((uint)uVar5 >> 8);
                    uVar12 = (ulonglong)CONCAT12(uVar39,(short)uVar5) & 0xffffffffffff00ff;
                    auVar9._8_4_ = 0;
                    auVar9._0_8_ = uVar12;
                    auVar9[0xc] = (char)((uint)uVar5 >> 0x18);
                    auVar10[8] = (char)((uint)uVar5 >> 0x10);
                    auVar10._0_8_ = uVar12;
                    auVar10[9] = 0;
                    auVar10._10_3_ = auVar9._10_3_;
                    auVar14._5_8_ = 0;
                    auVar14._0_5_ = auVar10._8_5_;
                    auVar11[4] = uVar39;
                    auVar11._0_4_ = (uint)uVar12;
                    auVar11[5] = 0;
                    auVar11._6_7_ = SUB137(auVar14 << 0x40,6);
                    iVar31 = iVar31 + ((uint)uVar12 & 0xffff);
                    iVar32 = iVar32 + auVar11._4_4_;
                    iVar33 = iVar33 + auVar10._8_4_;
                    iVar34 = iVar34 + (uint)(uint3)(auVar9._10_3_ >> 0x10);
                    puVar16 = puVar16 + 2;
                    lVar17 = lVar17 + -8;
                  } while (lVar17 != 0);
                  iVar35 = iVar34 + iVar38 + iVar32 + iVar36 + iVar33 + iVar37 + iVar31 + iVar35;
                  iVar31 = (int)lVar25;
                  if ((uVar21 & 7) == 0) goto LAB_00a2353d;
                }
                iVar31 = uVar21 - iVar31;
                do {
                  bVar1 = *pbVar30;
                  pbVar30 = pbVar30 + 1;
                  iVar35 = iVar35 + (uint)bVar1;
                  iVar31 = iVar31 + -1;
                } while (iVar31 != 0);
              }
LAB_00a2353d:
              uVar18 = uVar18 + 1;
            } while (uVar18 != uVar15);
          }
          *puVar24 = (char)((iVar35 + (int)(uVar15 * uVar21) / 2) / (int)(uVar15 * uVar21));
          puVar24 = puVar24 + 1;
          iVar28 = iVar28 + 1;
          uVar19 = (ulonglong)((int)uVar19 + uVar21);
        } while (iVar28 != iVar20);
        iVar28 = *(int *)(param_2 + 0xc);
      }
      lVar23 = lVar23 + (int)uVar15;
      lVar29 = lVar29 + 1;
    } while (lVar29 < iVar28);
  }
  return;
}

