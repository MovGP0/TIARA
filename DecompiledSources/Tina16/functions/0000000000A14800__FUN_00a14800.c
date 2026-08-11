/* Ghidra address: 00a14800 */
/* Ghidra symbol: FUN_00a14800 */


void FUN_00a14800(longlong param_1,int *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  int iVar21;
  short *psVar22;
  longlong lVar23;
  ulonglong *puVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  short sVar33;
  short sVar34;
  int local_7c;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x30);
  iVar14 = *param_2;
  iVar10 = param_2[1];
  uVar13 = param_2[2];
  uVar9 = (ulonglong)uVar13;
  uVar28 = (ulonglong)(int)uVar13;
  local_7c = param_2[3];
  lVar17 = (longlong)local_7c;
  iVar25 = param_2[4];
  lVar26 = (longlong)iVar25;
  iVar11 = param_2[5];
  if (iVar14 < iVar10) {
    lVar15 = (longlong)iVar14;
    do {
      if ((int)uVar13 <= local_7c) {
        uVar19 = uVar28;
        do {
          if (iVar25 <= iVar11) {
            psVar22 = (short *)(uVar19 * 0x40 + *(longlong *)(lVar1 + lVar15 * 8) + lVar26 * 2);
            iVar21 = iVar25 + -1;
            do {
              if (*psVar22 != 0) {
                iVar14 = (int)lVar15;
                *param_2 = iVar14;
                goto LAB_00a148d9;
              }
              psVar22 = psVar22 + 1;
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar11);
          }
          bVar2 = (longlong)uVar19 < lVar17;
          uVar19 = uVar19 + 1;
        } while (bVar2);
      }
      bVar2 = lVar15 < iVar10;
      lVar15 = lVar15 + 1;
    } while (bVar2);
  }
LAB_00a148d9:
  if (iVar14 < iVar10) {
    lVar15 = (longlong)iVar10;
    do {
      if ((int)uVar13 <= local_7c) {
        uVar19 = uVar28;
        do {
          if (iVar25 <= iVar11) {
            psVar22 = (short *)(uVar19 * 0x40 + *(longlong *)(lVar1 + lVar15 * 8) + lVar26 * 2);
            iVar21 = iVar25 + -1;
            do {
              if (*psVar22 != 0) {
                iVar10 = (int)lVar15;
                param_2[1] = iVar10;
                goto LAB_00a1495b;
              }
              psVar22 = psVar22 + 1;
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar11);
          }
          bVar2 = (longlong)uVar19 < lVar17;
          uVar19 = uVar19 + 1;
        } while (bVar2);
      }
      bVar2 = iVar14 < lVar15;
      lVar15 = lVar15 + -1;
    } while (bVar2);
  }
LAB_00a1495b:
  if ((int)uVar13 < local_7c) {
    do {
      lVar15 = (longlong)iVar14;
      if (iVar14 <= iVar10) {
        do {
          if (iVar25 <= iVar11) {
            psVar22 = (short *)(uVar28 * 0x40 + *(longlong *)(lVar1 + lVar15 * 8) + lVar26 * 2);
            iVar21 = iVar25 + -1;
            do {
              if (*psVar22 != 0) {
                param_2[2] = (int)uVar28;
                uVar9 = uVar28;
                if (local_7c <= (int)uVar28) goto LAB_00a14a4a;
                goto LAB_00a149d8;
              }
              psVar22 = psVar22 + 1;
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar11);
          }
          bVar2 = lVar15 < iVar10;
          lVar15 = lVar15 + 1;
        } while (bVar2);
      }
      bVar2 = (longlong)uVar28 < lVar17;
      uVar28 = uVar28 + 1;
    } while (bVar2);
  }
  uVar28 = uVar9;
  if ((int)uVar13 < local_7c) {
LAB_00a149d8:
    do {
      lVar15 = (longlong)iVar14;
      uVar9 = uVar28;
      if (iVar14 <= iVar10) {
        do {
          if (iVar25 <= iVar11) {
            psVar22 = (short *)(lVar17 * 0x40 + *(longlong *)(lVar1 + lVar15 * 8) + lVar26 * 2);
            iVar21 = iVar25 + -1;
            do {
              if (*psVar22 != 0) {
                local_7c = (int)lVar17;
                param_2[3] = local_7c;
                goto LAB_00a14a4a;
              }
              psVar22 = psVar22 + 1;
              iVar21 = iVar21 + 1;
            } while (iVar21 < iVar11);
          }
          bVar2 = lVar15 < iVar10;
          lVar15 = lVar15 + 1;
        } while (bVar2);
      }
      bVar2 = (int)uVar28 < lVar17;
      lVar17 = lVar17 + -1;
    } while (bVar2);
  }
LAB_00a14a4a:
  iVar21 = (int)uVar9;
  if (iVar25 < iVar11) {
    do {
      lVar17 = (longlong)iVar14;
      if (iVar14 <= iVar10) {
        do {
          if (iVar21 <= local_7c) {
            psVar22 = (short *)(*(longlong *)(lVar1 + lVar17 * 8) + (longlong)iVar21 * 0x40 +
                               lVar26 * 2);
            iVar29 = iVar21 + -1;
            do {
              if (*psVar22 != 0) {
                iVar25 = (int)lVar26;
                param_2[4] = iVar25;
                goto LAB_00a14ac7;
              }
              psVar22 = psVar22 + 0x20;
              iVar29 = iVar29 + 1;
            } while (iVar29 < local_7c);
          }
          bVar2 = lVar17 < iVar10;
          lVar17 = lVar17 + 1;
        } while (bVar2);
      }
      bVar2 = lVar26 < iVar11;
      lVar26 = lVar26 + 1;
    } while (bVar2);
  }
LAB_00a14ac7:
  if (iVar25 < iVar11) {
    lVar17 = (longlong)iVar11;
    do {
      lVar26 = (longlong)iVar14;
      if (iVar14 <= iVar10) {
        do {
          if (iVar21 <= local_7c) {
            psVar22 = (short *)(*(longlong *)(lVar1 + lVar26 * 8) + (longlong)iVar21 * 0x40 +
                               lVar17 * 2);
            iVar29 = iVar21 + -1;
            do {
              if (*psVar22 != 0) {
                iVar11 = (int)lVar17;
                param_2[5] = iVar11;
                goto LAB_00a14b46;
              }
              psVar22 = psVar22 + 0x20;
              iVar29 = iVar29 + 1;
            } while (iVar29 < local_7c);
          }
          bVar2 = lVar26 < iVar10;
          lVar26 = lVar26 + 1;
        } while (bVar2);
      }
      bVar2 = iVar25 < lVar17;
      lVar17 = lVar17 + -1;
    } while (bVar2);
  }
LAB_00a14b46:
  iVar12 = (iVar10 - iVar14) * 8;
  iVar29 = (local_7c - iVar21) * 0xc;
  iVar18 = (iVar11 - iVar25) * 0x10;
  iVar27 = 0;
  param_2[6] = iVar18 * iVar18 + iVar29 * iVar29 + iVar12 * iVar12;
  if (iVar14 <= iVar10) {
    iVar29 = iVar11;
    if (iVar11 < iVar25) {
      iVar29 = iVar25;
    }
    uVar28 = (ulonglong)(uint)(iVar29 - iVar25) + 1;
    uVar13 = (iVar29 - iVar25) + 1U & 7;
    lVar26 = uVar28 - uVar13;
    iVar27 = 0;
    lVar17 = (longlong)iVar14;
    do {
      if (iVar21 <= local_7c) {
        lVar15 = *(longlong *)(lVar1 + lVar17 * 8);
        puVar24 = (ulonglong *)((longlong)iVar21 * 0x40 + lVar15 + ((longlong)iVar25 + 4) * 2);
        lVar23 = (longlong)iVar21;
        do {
          if (iVar25 <= iVar11) {
            psVar22 = (short *)(lVar23 * 0x40 + lVar15 + (longlong)iVar25 * 2);
            iVar14 = iVar25;
            if (7 < uVar28) {
              psVar22 = psVar22 + lVar26;
              iVar30 = 0;
              iVar31 = 0;
              iVar32 = 0;
              iVar14 = 0;
              iVar29 = 0;
              iVar12 = 0;
              iVar18 = 0;
              lVar16 = lVar26;
              puVar20 = puVar24;
              do {
                uVar9 = puVar20[-1];
                sVar33 = (short)(uVar9 >> 0x30);
                auVar3._8_4_ = 0;
                auVar3._0_8_ = uVar9;
                auVar3._12_2_ = sVar33;
                auVar5._8_2_ = (short)(uVar9 >> 0x20);
                auVar5._0_8_ = uVar9;
                auVar5._10_4_ = auVar3._10_4_;
                auVar7._6_8_ = 0;
                auVar7._0_6_ = auVar5._8_6_;
                uVar19 = *puVar20;
                sVar34 = (short)(uVar19 >> 0x30);
                auVar4._8_4_ = 0;
                auVar4._0_8_ = uVar19;
                auVar4._12_2_ = sVar34;
                auVar6._8_2_ = (short)(uVar19 >> 0x20);
                auVar6._0_8_ = uVar19;
                auVar6._10_4_ = auVar4._10_4_;
                auVar8._6_8_ = 0;
                auVar8._0_6_ = auVar6._8_6_;
                iVar27 = iVar27 - (-(uint)((uVar9 & 0xffff) == 0) ^ 0xffffffff);
                iVar30 = iVar30 - (-(uint)((int)CONCAT82(SUB148(auVar7 << 0x40,6),
                                                         (short)(uVar9 >> 0x10)) == 0) ^ 0xffffffff)
                ;
                iVar31 = iVar31 - (-(uint)(auVar5._8_4_ == 0) ^ 0xffffffff);
                iVar32 = iVar32 - (-(uint)(sVar33 == 0) ^ 0xffffffff);
                iVar14 = iVar14 - (-(uint)((uVar19 & 0xffff) == 0) ^ 0xffffffff);
                iVar29 = iVar29 - (-(uint)((int)CONCAT82(SUB148(auVar8 << 0x40,6),
                                                         (short)(uVar19 >> 0x10)) == 0) ^ 0xffffffff
                                  );
                iVar12 = iVar12 - (-(uint)(auVar6._8_4_ == 0) ^ 0xffffffff);
                iVar18 = iVar18 - (-(uint)(sVar34 == 0) ^ 0xffffffff);
                puVar20 = puVar20 + 2;
                lVar16 = lVar16 + -8;
              } while (lVar16 != 0);
              iVar27 = iVar18 + iVar32 + iVar29 + iVar30 + iVar12 + iVar31 + iVar14 + iVar27;
              iVar14 = (int)lVar26 + iVar25;
              if (uVar13 == 0) goto LAB_00a14ce3;
            }
            iVar14 = iVar14 + -1;
            do {
              iVar27 = (iVar27 + 1) - (uint)(*psVar22 == 0);
              psVar22 = psVar22 + 1;
              iVar14 = iVar14 + 1;
            } while (iVar14 < iVar11);
          }
LAB_00a14ce3:
          puVar24 = puVar24 + 8;
          bVar2 = lVar23 < local_7c;
          lVar23 = lVar23 + 1;
        } while (bVar2);
      }
      bVar2 = lVar17 < iVar10;
      lVar17 = lVar17 + 1;
    } while (bVar2);
  }
  param_2[7] = iVar27;
  return;
}

