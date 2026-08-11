/* Ghidra address: 00a15d20 */
/* Ghidra symbol: FUN_00a15d20 */


void FUN_00a15d20(longlong param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  
  lVar7 = *(longlong *)(param_1 + 0x228);
  if (*(int *)(lVar7 + 0x60) == 0) {
    iVar11 = (**(code **)(*(longlong *)(param_1 + 0x230) + 0x18))
                       (param_1,*(undefined8 *)(lVar7 + 0x68 + (longlong)*(int *)(lVar7 + 0x78) * 8)
                       );
    if (iVar11 == 0) {
      return;
    }
    *(undefined4 *)(lVar7 + 0x60) = 1;
    *(int *)(lVar7 + 0x84) = *(int *)(lVar7 + 0x84) + 1;
  }
  iVar11 = *(int *)(lVar7 + 0x7c);
  if (iVar11 == 2) {
    (**(code **)(*(longlong *)(param_1 + 0x238) + 8))
              (param_1,*(undefined8 *)(lVar7 + 0x68 + (longlong)*(int *)(lVar7 + 0x78) * 8),
               lVar7 + 100,*(undefined4 *)(lVar7 + 0x80),param_2,param_3,param_4);
    if (*(uint *)(lVar7 + 100) < *(uint *)(lVar7 + 0x80)) {
      return;
    }
    *(undefined4 *)(lVar7 + 0x7c) = 0;
    if (param_4 <= *param_3) {
      return;
    }
  }
  else {
    if (iVar11 == 1) goto LAB_00a15ef0;
    if (iVar11 != 0) {
      return;
    }
  }
  *(undefined4 *)(lVar7 + 100) = 0;
  iVar11 = *(int *)(param_1 + 0x1a0);
  *(int *)(lVar7 + 0x80) = iVar11 + -1;
  if ((*(int *)(lVar7 + 0x84) == *(int *)(param_1 + 0x1a4)) &&
     (iVar5 = *(int *)(param_1 + 0x38), 0 < (longlong)iVar5)) {
    lVar8 = *(longlong *)(param_1 + 0x228);
    lVar17 = *(longlong *)(param_1 + 0x130);
    iVar6 = *(int *)(lVar8 + 0x78);
    lVar23 = 0;
    do {
      uVar13 = *(int *)(lVar17 + 0x24) * *(int *)(lVar17 + 0xc);
      iVar18 = (int)uVar13 / iVar11;
      uVar14 = *(uint *)(lVar17 + 0x2c) % uVar13;
      if (uVar14 != 0) {
        uVar13 = uVar14;
      }
      if (lVar23 == 0) {
        *(int *)(lVar8 + 0x80) = (int)(uVar13 - 1) / iVar18 + 1;
      }
      if (0 < iVar18) {
        lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x68 + (longlong)iVar6 * 8) + lVar23 * 8);
        lVar15 = 0;
        do {
          *(undefined8 *)(lVar9 + (longlong)(int)uVar13 * 8 + lVar15 * 8) =
               *(undefined8 *)(lVar9 + (longlong)(int)(uVar13 - 1) * 8);
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar18 * 2);
      }
      lVar23 = lVar23 + 1;
      lVar17 = lVar17 + 0x60;
    } while (lVar23 != iVar5);
  }
  *(undefined4 *)(lVar7 + 0x7c) = 1;
LAB_00a15ef0:
  (**(code **)(*(longlong *)(param_1 + 0x238) + 8))
            (param_1,*(undefined8 *)(lVar7 + 0x68 + (longlong)*(int *)(lVar7 + 0x78) * 8),
             lVar7 + 100,*(undefined4 *)(lVar7 + 0x80),param_2,param_3,param_4);
  if (*(uint *)(lVar7 + 0x80) <= *(uint *)(lVar7 + 100)) {
    if (*(int *)(lVar7 + 0x84) == 1) {
      iVar11 = *(int *)(param_1 + 0x1a0);
      iVar5 = *(int *)(param_1 + 0x38);
      if (0 < (longlong)iVar5) {
        lVar8 = *(longlong *)(param_1 + 0x228);
        lVar17 = *(longlong *)(param_1 + 0x130);
        lVar23 = 0;
        do {
          uVar10 = (longlong)(*(int *)(lVar17 + 0x24) * *(int *)(lVar17 + 0xc)) / (longlong)iVar11;
          uVar13 = (uint)uVar10;
          if (0 < (int)uVar13) {
            lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x68) + lVar23 * 8);
            lVar15 = *(longlong *)(*(longlong *)(lVar8 + 0x70) + lVar23 * 8);
            lVar22 = (longlong)(int)(uVar13 * (iVar11 + 2));
            lVar16 = (longlong)(int)(uVar13 * (iVar11 + 1));
            lVar21 = (longlong)(int)uVar13;
            if (uVar13 == 1) {
              lVar12 = 0;
            }
            else {
              lVar1 = lVar15 + 8 + lVar16 * 8;
              lVar2 = lVar9 + 8 + lVar16 * 8;
              lVar19 = lVar15 + 8 + lVar21 * -8;
              lVar20 = lVar9 + 8 + lVar21 * -8;
              lVar3 = lVar15 + 8 + lVar22 * 8;
              lVar4 = lVar9 + 8 + lVar22 * 8;
              lVar12 = 0;
              do {
                *(undefined8 *)(lVar20 + -8 + lVar12 * 8) = *(undefined8 *)(lVar2 + -8 + lVar12 * 8)
                ;
                *(undefined8 *)(lVar19 + -8 + lVar12 * 8) = *(undefined8 *)(lVar1 + -8 + lVar12 * 8)
                ;
                *(undefined8 *)(lVar4 + -8 + lVar12 * 8) = *(undefined8 *)(lVar9 + lVar12 * 8);
                *(undefined8 *)(lVar3 + -8 + lVar12 * 8) = *(undefined8 *)(lVar15 + lVar12 * 8);
                *(undefined8 *)(lVar20 + lVar12 * 8) = *(undefined8 *)(lVar2 + lVar12 * 8);
                *(undefined8 *)(lVar19 + lVar12 * 8) = *(undefined8 *)(lVar1 + lVar12 * 8);
                *(undefined8 *)(lVar4 + lVar12 * 8) = *(undefined8 *)(lVar9 + 8 + lVar12 * 8);
                *(undefined8 *)(lVar3 + lVar12 * 8) = *(undefined8 *)(lVar15 + 8 + lVar12 * 8);
                lVar12 = lVar12 + 2;
              } while ((uVar10 & 0xffffffff) - (ulonglong)(uVar13 & 1) != lVar12);
            }
            if ((ulonglong)(uVar13 & 1) != 0) {
              *(undefined8 *)(lVar9 + (lVar12 - lVar21) * 8) =
                   *(undefined8 *)(lVar9 + (lVar16 + lVar12) * 8);
              *(undefined8 *)(lVar15 + (lVar12 - lVar21) * 8) =
                   *(undefined8 *)(lVar15 + (lVar16 + lVar12) * 8);
              *(undefined8 *)(lVar9 + (lVar22 + lVar12) * 8) = *(undefined8 *)(lVar9 + lVar12 * 8);
              *(undefined8 *)(lVar15 + (lVar22 + lVar12) * 8) = *(undefined8 *)(lVar15 + lVar12 * 8)
              ;
            }
          }
          lVar23 = lVar23 + 1;
          lVar17 = lVar17 + 0x60;
        } while (lVar23 != iVar5);
      }
    }
    else {
      iVar11 = *(int *)(param_1 + 0x1a0);
    }
    *(byte *)(lVar7 + 0x78) = *(byte *)(lVar7 + 0x78) ^ 1;
    *(undefined4 *)(lVar7 + 0x60) = 0;
    *(int *)(lVar7 + 100) = iVar11 + 1;
    *(int *)(lVar7 + 0x80) = iVar11 + 2;
    *(undefined4 *)(lVar7 + 0x7c) = 2;
  }
  return;
}

