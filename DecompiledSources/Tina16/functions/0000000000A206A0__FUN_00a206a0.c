/* Ghidra address: 00a206a0 */
/* Ghidra symbol: FUN_00a206a0 */


void FUN_00a206a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  longlong lVar27;
  longlong lVar28;
  int *piVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong lVar34;
  undefined8 *local_a8;
  
  if (param_2 != 0) {
    puVar12 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar12 + 5) = 4;
    (*(code *)*puVar12)();
  }
  puVar12 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x38] = (longlong)puVar12;
  *puVar12 = FUN_00a20b00;
  if (*(int *)(param_1[0x3c] + 0x10) == 0) {
    puVar12[1] = FUN_00a20dd0;
    if (0 < *(int *)((longlong)param_1 + 0x4c)) {
      piVar29 = (int *)(param_1[0xb] + 0x1c);
      lVar13 = 0;
      do {
        uVar15 = (**(code **)(param_1[1] + 0x10))
                           (param_1,1,
                            (longlong)(*piVar29 * (int)param_1[0x27] * 8) / (longlong)piVar29[-5] &
                            0xffffffff,*(undefined4 *)((longlong)param_1 + 0x13c));
        puVar12[lVar13 + 2] = uVar15;
        lVar13 = lVar13 + 1;
        piVar29 = piVar29 + 0x18;
      } while (lVar13 < *(int *)((longlong)param_1 + 0x4c));
    }
  }
  else {
    puVar12[1] = FUN_00a20b50;
    uVar5 = *(uint *)((longlong)param_1 + 0x13c);
    lVar23 = (longlong)(int)uVar5;
    iVar6 = uVar5 * 5;
    lVar13 = (**(code **)param_1[1])
                       (param_1,1,(longlong)(*(int *)((longlong)param_1 + 0x4c) * iVar6) << 3);
    if (0 < *(int *)((longlong)param_1 + 0x4c)) {
      uVar33 = (ulonglong)uVar5;
      lVar30 = param_1[0xb];
      lVar24 = (longlong)(int)(uVar5 * 4);
      lVar32 = (longlong)(int)(uVar5 * 2);
      lVar28 = (longlong)iVar6 * 8;
      uVar14 = uVar33 - (uVar5 & 3);
      local_a8 = (undefined8 *)(lVar13 + 0x10);
      lVar27 = lVar13 + 8 + lVar24 * 8;
      lVar34 = 0;
      lVar31 = lVar13;
      do {
        uVar16 = (**(code **)(param_1[1] + 0x10))
                           (param_1,1,
                            (longlong)(*(int *)(lVar30 + 0x1c) * (int)param_1[0x27] * 8) /
                            (longlong)*(int *)(lVar30 + 8) & 0xffffffff,lVar23 * 3);
        lVar1 = lVar31 + lVar23 * 8;
        FUN_00626670(lVar1,uVar16,lVar23 * 0x18);
        if (0 < (int)uVar5) {
          if (uVar5 < 4) {
LAB_00a208fc:
            uVar21 = 0;
          }
          else {
            lVar17 = lVar28 * lVar34;
            uVar21 = lVar13 + lVar17;
            uVar20 = uVar33 * 8 + lVar17 + lVar13;
            uVar25 = lVar24 * 8 + lVar17 + lVar13;
            uVar18 = lVar17 + uVar33 * 8 + lVar24 * 8 + lVar13;
            uVar22 = uVar16 + lVar32 * 8;
            uVar2 = uVar16 + (lVar32 + uVar33) * 8;
            uVar3 = uVar16 + uVar33 * 8;
            if (uVar21 < uVar18 && uVar25 < uVar20) {
              uVar21 = 0;
            }
            else {
              if (((uVar21 < uVar2 && uVar22 < uVar20) || (uVar21 < uVar3 && uVar16 < uVar20)) ||
                 (uVar25 < uVar2 && uVar22 < uVar18)) goto LAB_00a208fc;
              uVar21 = 0;
              if (uVar3 <= uVar25 || uVar18 <= uVar16) {
                puVar19 = (undefined8 *)(uVar16 + 0x10);
                uVar21 = uVar14;
                puVar26 = local_a8;
                do {
                  uVar15 = (puVar19 + lVar32 + -2)[1];
                  uVar10 = puVar19[lVar32];
                  uVar11 = (puVar19 + lVar32)[1];
                  puVar26[-2] = puVar19[lVar32 + -2];
                  puVar26[-1] = uVar15;
                  *puVar26 = uVar10;
                  puVar26[1] = uVar11;
                  uVar7 = *(undefined4 *)((longlong)puVar19 + -0xc);
                  uVar8 = *(undefined4 *)(puVar19 + -1);
                  uVar9 = *(undefined4 *)((longlong)puVar19 + -4);
                  uVar15 = *puVar19;
                  uVar10 = puVar19[1];
                  puVar4 = puVar26 + lVar24 + -2;
                  *(undefined4 *)puVar4 = *(undefined4 *)(puVar19 + -2);
                  *(undefined4 *)((longlong)puVar4 + 4) = uVar7;
                  *(undefined4 *)(puVar4 + 1) = uVar8;
                  *(undefined4 *)((longlong)puVar4 + 0xc) = uVar9;
                  puVar26[lVar24] = uVar15;
                  (puVar26 + lVar24)[1] = uVar10;
                  puVar19 = puVar19 + 4;
                  puVar26 = puVar26 + 4;
                  uVar21 = uVar21 - 4;
                } while (uVar21 != 0);
                uVar21 = uVar14;
                if ((uVar5 & 3) == 0) goto LAB_00a20aad;
              }
            }
          }
          uVar22 = uVar21;
          if ((uVar5 - (int)uVar21 & 1) != 0) {
            *(undefined8 *)(lVar31 + uVar21 * 8) = *(undefined8 *)(uVar16 + (uVar21 + lVar32) * 8);
            *(undefined8 *)(lVar31 + (uVar21 + lVar24) * 8) = *(undefined8 *)(uVar16 + uVar21 * 8);
            uVar22 = uVar21 + 1;
          }
          if (uVar33 - 1 != uVar21) {
            lVar17 = uVar16 + (lVar32 + 1) * 8;
            do {
              *(undefined8 *)(lVar31 + uVar22 * 8) = *(undefined8 *)(lVar17 + -8 + uVar22 * 8);
              *(undefined8 *)(lVar27 + -8 + uVar22 * 8) = *(undefined8 *)(uVar16 + uVar22 * 8);
              *(undefined8 *)(lVar31 + 8 + uVar22 * 8) = *(undefined8 *)(lVar17 + uVar22 * 8);
              *(undefined8 *)(lVar27 + uVar22 * 8) = *(undefined8 *)(uVar16 + 8 + uVar22 * 8);
              uVar22 = uVar22 + 2;
            } while (uVar33 != uVar22);
          }
        }
LAB_00a20aad:
        puVar12[lVar34 + 2] = lVar1;
        lVar31 = lVar31 + lVar28;
        lVar34 = lVar34 + 1;
        lVar30 = lVar30 + 0x60;
        local_a8 = local_a8 + iVar6;
        lVar27 = lVar27 + lVar28;
      } while (lVar34 < *(int *)((longlong)param_1 + 0x4c));
    }
  }
  return;
}

