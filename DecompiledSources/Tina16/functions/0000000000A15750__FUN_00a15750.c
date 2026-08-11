/* Ghidra address: 00a15750 */
/* Ghidra symbol: FUN_00a15750 */


void FUN_00a15750(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  longlong lVar28;
  ulonglong uVar12;
  
  lVar3 = param_1[0x45];
  if (param_2 == 2) {
    *(code **)(lVar3 + 8) = FUN_00a161c0;
  }
  else {
    if (param_2 != 0) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 4;
                    /* WARNING: Could not recover jumptable at 0x00a15ced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar4)();
      return;
    }
    if (*(int *)(param_1[0x4c] + 0x10) == 0) {
      *(code **)(lVar3 + 8) = FUN_00a16120;
    }
    else {
      *(code **)(lVar3 + 8) = FUN_00a15d20;
      lVar10 = param_1[7];
      if (0 < (longlong)(int)lVar10) {
        iVar2 = (int)param_1[0x34];
        lVar28 = param_1[0x26];
        lVar25 = 0;
        do {
          uVar14 = (longlong)(*(int *)(lVar28 + 0x24) * *(int *)(lVar28 + 0xc)) / (longlong)iVar2;
          uVar12 = uVar14 & 0xffffffff;
          uVar11 = (uint)uVar14;
          puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x68) + lVar25 * 8);
          puVar16 = *(undefined8 **)(*(longlong *)(lVar3 + 0x70) + lVar25 * 8);
          puVar5 = *(undefined8 **)(lVar3 + 0x10 + lVar25 * 8);
          uVar24 = uVar11 * (iVar2 + 2);
          if (0 < (int)uVar24) {
            uVar14 = (ulonglong)uVar24;
            if (uVar24 < 4) {
              lVar19 = 0;
            }
            else if (puVar16 < puVar4 + uVar14 && puVar4 < puVar16 + uVar14) {
              lVar19 = 0;
            }
            else if (puVar16 < puVar5 + uVar14 && puVar5 < puVar16 + uVar14) {
              lVar19 = 0;
            }
            else {
              lVar19 = 0;
              if (puVar5 + uVar14 <= puVar4 || puVar4 + uVar14 <= puVar5) {
                lVar19 = uVar14 - (uVar24 & 3);
                puVar20 = puVar5 + 2;
                puVar18 = puVar16 + 2;
                puVar21 = puVar4 + 2;
                lVar15 = lVar19;
                do {
                  uVar6 = puVar20[-2];
                  uVar7 = puVar20[-1];
                  uVar8 = *puVar20;
                  uVar9 = puVar20[1];
                  puVar18[-2] = uVar6;
                  puVar18[-1] = uVar7;
                  *puVar18 = uVar8;
                  puVar18[1] = uVar9;
                  puVar21[-2] = uVar6;
                  puVar21[-1] = uVar7;
                  *puVar21 = uVar8;
                  puVar21[1] = uVar9;
                  puVar20 = puVar20 + 4;
                  puVar18 = puVar18 + 4;
                  puVar21 = puVar21 + 4;
                  lVar15 = lVar15 + -4;
                } while (lVar15 != 0);
                if ((uVar24 & 3) == 0) goto LAB_00a159a0;
              }
            }
            uVar24 = uVar24 - (int)lVar19;
            uVar22 = (uVar14 - 1) - lVar19;
            if ((uVar24 & 3) != 0) {
              lVar15 = -((ulonglong)uVar24 & 3);
              do {
                uVar6 = puVar5[lVar19];
                puVar16[lVar19] = uVar6;
                puVar4[lVar19] = uVar6;
                lVar19 = lVar19 + 1;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 0);
            }
            if (2 < uVar22) {
              lVar15 = uVar14 - lVar19;
              puVar18 = puVar4 + lVar19 + 3;
              puVar21 = puVar16 + lVar19 + 3;
              puVar20 = puVar5 + lVar19 + 3;
              do {
                uVar6 = puVar20[-3];
                puVar21[-3] = uVar6;
                puVar18[-3] = uVar6;
                uVar6 = puVar20[-2];
                puVar21[-2] = uVar6;
                puVar18[-2] = uVar6;
                uVar6 = puVar20[-1];
                puVar21[-1] = uVar6;
                puVar18[-1] = uVar6;
                uVar6 = *puVar20;
                *puVar21 = uVar6;
                *puVar18 = uVar6;
                puVar18 = puVar18 + 4;
                puVar21 = puVar21 + 4;
                puVar20 = puVar20 + 4;
                lVar15 = lVar15 + -4;
              } while (lVar15 != 0);
            }
          }
LAB_00a159a0:
          if (0 < (int)uVar11) {
            lVar19 = (longlong)(int)(uVar11 * (iVar2 + -2));
            lVar15 = (longlong)(int)(uVar11 * iVar2);
            uVar22 = (ulonglong)(int)(uVar11 * 2);
            uVar14 = 1;
            if (0 < (longlong)uVar22) {
              uVar14 = uVar22;
            }
            if (uVar14 < 4) {
              uVar27 = 0;
LAB_00a15bf0:
              do {
                puVar16[lVar19 + uVar27] = puVar5[lVar15 + uVar27];
                puVar16[lVar15 + uVar27] = puVar5[lVar19 + uVar27];
                uVar27 = uVar27 + 1;
              } while ((longlong)uVar27 < (longlong)uVar22);
            }
            else {
              puVar18 = puVar16 + lVar19;
              uVar13 = 1;
              if (0 < (longlong)uVar22) {
                uVar13 = uVar22;
              }
              puVar21 = puVar16 + uVar13 + lVar19;
              puVar20 = puVar16 + lVar15;
              puVar1 = puVar16 + uVar13 + lVar15;
              if ((puVar18 < puVar1 && puVar20 < puVar21) ||
                 (puVar18 < puVar5 + uVar13 + lVar15 && puVar5 + lVar15 < puVar21)) {
                uVar27 = 0;
                goto LAB_00a15bf0;
              }
              if ((puVar18 < puVar5 + uVar13 + lVar19 && puVar5 + lVar19 < puVar21) ||
                 (puVar20 < puVar5 + uVar13 + lVar15 && puVar5 + lVar15 < puVar1)) {
                uVar27 = 0;
                goto LAB_00a15bf0;
              }
              uVar27 = 0;
              if (puVar20 < puVar5 + uVar13 + lVar19 && puVar5 + lVar19 < puVar1) goto LAB_00a15bf0;
              uVar27 = uVar14 & 0x7ffffffffffffffc;
              uVar17 = uVar27 - 4 >> 2;
              uVar13 = (ulonglong)((int)uVar17 + 1U & 1);
              if (uVar17 == 0) {
                lVar23 = 0;
              }
              else {
                lVar26 = (uVar13 - 1) - uVar17;
                lVar23 = 0;
                do {
                  uVar6 = (puVar5 + lVar15 + lVar23)[1];
                  uVar7 = puVar5[lVar15 + lVar23 + 2];
                  uVar8 = (puVar5 + lVar15 + lVar23 + 2)[1];
                  puVar16[lVar19 + lVar23] = puVar5[lVar15 + lVar23];
                  (puVar16 + lVar19 + lVar23)[1] = uVar6;
                  puVar16[lVar19 + lVar23 + 2] = uVar7;
                  (puVar16 + lVar19 + lVar23 + 2)[1] = uVar8;
                  uVar6 = (puVar5 + lVar19 + lVar23)[1];
                  uVar7 = puVar5[lVar19 + lVar23 + 2];
                  uVar8 = (puVar5 + lVar19 + lVar23 + 2)[1];
                  puVar16[lVar15 + lVar23] = puVar5[lVar19 + lVar23];
                  (puVar16 + lVar15 + lVar23)[1] = uVar6;
                  puVar16[lVar15 + lVar23 + 2] = uVar7;
                  (puVar16 + lVar15 + lVar23 + 2)[1] = uVar8;
                  uVar6 = (puVar5 + lVar15 + lVar23 + 4)[1];
                  uVar7 = puVar5[lVar15 + lVar23 + 6];
                  uVar8 = (puVar5 + lVar15 + lVar23 + 6)[1];
                  puVar16[lVar19 + lVar23 + 4] = puVar5[lVar15 + lVar23 + 4];
                  (puVar16 + lVar19 + lVar23 + 4)[1] = uVar6;
                  puVar16[lVar19 + lVar23 + 6] = uVar7;
                  (puVar16 + lVar19 + lVar23 + 6)[1] = uVar8;
                  uVar6 = (puVar5 + lVar19 + lVar23 + 4)[1];
                  uVar7 = puVar5[lVar19 + lVar23 + 6];
                  uVar8 = (puVar5 + lVar19 + lVar23 + 6)[1];
                  puVar16[lVar15 + lVar23 + 4] = puVar5[lVar19 + lVar23 + 4];
                  (puVar16 + lVar15 + lVar23 + 4)[1] = uVar6;
                  puVar16[lVar15 + lVar23 + 6] = uVar7;
                  (puVar16 + lVar15 + lVar23 + 6)[1] = uVar8;
                  lVar23 = lVar23 + 8;
                  lVar26 = lVar26 + 2;
                } while (lVar26 != 0);
              }
              if (uVar13 != 0) {
                lVar26 = lVar23 + lVar15;
                uVar6 = (puVar5 + lVar26)[1];
                uVar7 = puVar5[lVar26 + 2];
                uVar8 = (puVar5 + lVar26 + 2)[1];
                lVar23 = lVar23 + lVar19;
                puVar16[lVar23] = puVar5[lVar26];
                (puVar16 + lVar23)[1] = uVar6;
                puVar16[lVar23 + 2] = uVar7;
                (puVar16 + lVar23 + 2)[1] = uVar8;
                uVar6 = (puVar5 + lVar23)[1];
                uVar7 = puVar5[lVar23 + 2];
                uVar8 = (puVar5 + lVar23 + 2)[1];
                puVar16[lVar26] = puVar5[lVar23];
                (puVar16 + lVar26)[1] = uVar6;
                puVar16[lVar26 + 2] = uVar7;
                (puVar16 + lVar26 + 2)[1] = uVar8;
              }
              if (uVar14 != uVar27) goto LAB_00a15bf0;
            }
            lVar19 = (longlong)(int)uVar11;
            uVar14 = (ulonglong)(uVar11 & 3);
            if (uVar12 - 1 < 3) {
              lVar15 = 0;
            }
            else {
              lVar15 = 0;
              do {
                puVar4[lVar15 - lVar19] = *puVar4;
                puVar4[(lVar15 + 1) - lVar19] = *puVar4;
                puVar4[(lVar15 + 2) - lVar19] = *puVar4;
                puVar4[(lVar15 + 3) - lVar19] = *puVar4;
                lVar15 = lVar15 + 4;
              } while (uVar12 - uVar14 != lVar15);
            }
            if (uVar14 != 0) {
              puVar16 = puVar4 + (lVar15 - lVar19);
              lVar19 = -uVar14;
              do {
                *puVar16 = *puVar4;
                puVar16 = puVar16 + 1;
                lVar19 = lVar19 + 1;
              } while (lVar19 != 0);
            }
          }
          lVar25 = lVar25 + 1;
          lVar28 = lVar28 + 0x60;
        } while (lVar25 != (int)lVar10);
      }
      *(undefined8 *)(lVar3 + 0x78) = 0;
      *(undefined4 *)(lVar3 + 0x84) = 0;
    }
    *(undefined8 *)(lVar3 + 0x60) = 0;
  }
  return;
}

