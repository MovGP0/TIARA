/* Ghidra address: 00a216b0 */
/* Ghidra symbol: FUN_00a216b0 */


void FUN_00a216b0(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined2 *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined2 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar4 = *(longlong *)(param_1 + 0x1c8);
    uVar5 = *(int *)(param_1 + 0x140) - 1;
    lVar20 = *(longlong *)(param_1 + 0x58);
    lVar16 = 0;
    do {
      lVar8 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar4 + 0x70 + lVar16 * 8),
                         *(int *)(lVar4 + 0x10) * *(int *)(lVar20 + 0xc),*(int *)(lVar20 + 0xc),1);
      uVar7 = *(uint *)(lVar4 + 0x10);
      if (uVar7 < uVar5) {
        uVar17 = *(uint *)(lVar20 + 0xc);
      }
      else {
        uVar17 = *(uint *)(lVar20 + 0x20) % *(uint *)(lVar20 + 0xc);
        if (uVar17 == 0) {
          uVar17 = *(uint *)(lVar20 + 0xc);
        }
      }
      uVar2 = *(uint *)(lVar20 + 0x1c);
      uVar3 = *(uint *)(lVar20 + 8);
      lVar13 = (longlong)(int)uVar3;
      uVar12 = uVar2 % uVar3;
      uVar6 = uVar3 - uVar12;
      if ((int)uVar12 < 1) {
        uVar6 = uVar12;
      }
      if (0 < (int)uVar17) {
        uVar9 = (ulonglong)(uVar6 & 7);
        uVar21 = 0;
        do {
          lVar10 = *(longlong *)(lVar8 + uVar21 * 8);
          (**(code **)(*(longlong *)(param_1 + 0x1e8) + 8))
                    (param_1,lVar20,*(undefined8 *)(param_2 + lVar16 * 8),lVar10,(int)uVar21 * 8,0,
                     uVar2);
          if (0 < (int)uVar6) {
            lVar14 = (ulonglong)uVar2 * 0x80;
            FUN_00a1bd20();
            uVar1 = *(undefined2 *)(lVar10 + -0x80 + lVar14);
            if ((ulonglong)uVar6 - 1 < 7) {
              lVar19 = 0;
            }
            else {
              puVar18 = (undefined2 *)(lVar10 + 0x380 + (ulonglong)uVar2 * 0x80);
              lVar19 = 0;
              do {
                puVar18[-0x1c0] = uVar1;
                puVar18[-0x180] = uVar1;
                puVar18[-0x140] = uVar1;
                puVar18[-0x100] = uVar1;
                puVar18[-0xc0] = uVar1;
                puVar18[-0x80] = uVar1;
                puVar18[-0x40] = uVar1;
                *puVar18 = uVar1;
                lVar19 = lVar19 + 8;
                puVar18 = puVar18 + 0x200;
              } while (uVar6 - uVar9 != lVar19);
            }
            if (uVar9 != 0) {
              puVar18 = (undefined2 *)(lVar10 + lVar14 + lVar19 * 0x80);
              lVar10 = -uVar9;
              do {
                *puVar18 = uVar1;
                puVar18 = puVar18 + 0x40;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 0);
            }
          }
          uVar21 = uVar21 + 1;
        } while (uVar21 != uVar17);
        uVar7 = *(uint *)(lVar4 + 0x10);
      }
      if (uVar7 == uVar5) {
        uVar6 = uVar6 + uVar2;
        if ((int)uVar17 < *(int *)(lVar20 + 0xc)) {
          lVar10 = (longlong)(int)uVar17;
          uVar9 = (ulonglong)(uVar3 & 7);
          do {
            lVar14 = *(longlong *)(lVar8 + -8 + lVar10 * 8);
            lVar19 = *(longlong *)(lVar8 + lVar10 * 8);
            FUN_00a1bd20(lVar19,(ulonglong)uVar6 << 7);
            if (uVar3 <= uVar6) {
              uVar7 = 0;
              puVar18 = (undefined2 *)(lVar19 + 0x380);
              do {
                if (0 < (int)uVar3) {
                  uVar1 = *(undefined2 *)(lVar14 + (lVar13 + -1) * 0x80);
                  if ((ulonglong)uVar3 - 1 < 7) {
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = 0;
                    puVar15 = puVar18;
                    do {
                      puVar15[-0x1c0] = uVar1;
                      puVar15[-0x180] = uVar1;
                      puVar15[-0x140] = uVar1;
                      puVar15[-0x100] = uVar1;
                      puVar15[-0xc0] = uVar1;
                      puVar15[-0x80] = uVar1;
                      puVar15[-0x40] = uVar1;
                      *puVar15 = uVar1;
                      lVar11 = lVar11 + 8;
                      puVar15 = puVar15 + 0x200;
                    } while (uVar3 - uVar9 != lVar11);
                  }
                  if (uVar9 != 0) {
                    puVar15 = (undefined2 *)(lVar11 * 0x80 + lVar19);
                    lVar11 = -uVar9;
                    do {
                      *puVar15 = uVar1;
                      puVar15 = puVar15 + 0x40;
                      lVar11 = lVar11 + 1;
                    } while (lVar11 != 0);
                  }
                }
                lVar14 = lVar14 + lVar13 * 0x80;
                uVar7 = uVar7 + 1;
                puVar18 = puVar18 + lVar13 * 0x40;
                lVar19 = lVar19 + lVar13 * 0x80;
              } while (uVar7 < uVar6 / uVar3);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < *(int *)(lVar20 + 0xc));
        }
      }
      lVar16 = lVar16 + 1;
      lVar20 = lVar20 + 0x60;
    } while (lVar16 < *(int *)(param_1 + 0x4c));
  }
  FUN_00a21b00(param_1,param_2);
  return;
}

