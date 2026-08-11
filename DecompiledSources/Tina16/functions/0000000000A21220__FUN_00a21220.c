/* Ghidra address: 00a21220 */
/* Ghidra symbol: FUN_00a21220 */


undefined8 FUN_00a21220(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  uint *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  int *local_68;
  uint uVar18;
  
  lVar5 = *(longlong *)(param_1 + 0x1c8);
  iVar12 = *(int *)(lVar5 + 0x18);
  iVar8 = *(int *)(lVar5 + 0x1c);
  lVar15 = lVar5;
  if (iVar12 < iVar8) {
    iVar3 = *(int *)(param_1 + 0x140);
    uVar11 = *(int *)(param_1 + 0x168) - 1;
    uVar24 = *(uint *)(lVar5 + 0x14);
    do {
      local_68 = (int *)(param_1 + 0x144);
      if (uVar24 <= uVar11) {
        do {
          iVar8 = *(int *)(param_1 + 0x144);
          if (0 < iVar8) {
            lVar15 = 0;
            iVar17 = 0;
            do {
              lVar6 = *(longlong *)(param_1 + 0x148 + lVar15 * 8);
              puVar1 = (uint *)(lVar6 + 0x34);
              puVar9 = (uint *)(lVar6 + 0x44);
              if (uVar24 < uVar11) {
                puVar9 = puVar1;
              }
              if (0 < *(int *)(lVar6 + 0x38)) {
                uVar4 = *puVar9;
                uVar19 = (ulonglong)(int)uVar4;
                iVar8 = *(int *)(lVar6 + 0x40);
                iVar23 = 0;
                iVar22 = iVar12 * 8;
                do {
                  if ((*(uint *)(lVar5 + 0x10) < iVar3 - 1U) ||
                     (iVar23 + iVar12 < *(int *)(lVar6 + 0x48))) {
                    lVar20 = (longlong)iVar17;
                    (**(code **)(*(longlong *)(param_1 + 0x1e8) + 8))
                              (param_1,lVar6,
                               *(undefined8 *)(param_2 + (longlong)*(int *)(lVar6 + 4) * 8),
                               *(undefined8 *)(lVar5 + 0x20 + lVar20 * 8),iVar22,iVar8 * uVar24,
                               uVar4);
                    uVar18 = *(uint *)(lVar6 + 0x34);
                    if ((int)uVar4 < (int)uVar18) {
                      FUN_00a1bd20(*(undefined8 *)
                                    (lVar5 + 0x20 + (longlong)(int)(iVar17 + uVar4) * 8),
                                   (longlong)(int)(uVar18 - uVar4) << 7);
                      uVar18 = *puVar1;
                      if ((int)uVar4 < (int)uVar18) {
                        uVar14 = uVar19;
                        if ((uVar18 - uVar4 & 1) != 0) {
                          **(undefined2 **)(lVar5 + 0x20 + (uVar19 + lVar20) * 8) =
                               **(undefined2 **)(lVar5 + 0x18 + (uVar19 + lVar20) * 8);
                          uVar14 = uVar19 + 1;
                        }
                        if (~uVar19 + (longlong)(int)uVar18 != 0) {
                          lVar20 = lVar5 + 0x28 + lVar20 * 8;
                          do {
                            **(undefined2 **)(lVar20 + -8 + uVar14 * 8) =
                                 **(undefined2 **)(lVar20 + -0x10 + uVar14 * 8);
                            **(undefined2 **)(lVar20 + uVar14 * 8) =
                                 **(undefined2 **)(lVar20 + -8 + uVar14 * 8);
                            uVar14 = uVar14 + 2;
                          } while ((longlong)uVar14 < (longlong)(int)uVar18);
                        }
                      }
                    }
                  }
                  else {
                    lVar21 = (longlong)iVar17;
                    FUN_00a1bd20(*(undefined8 *)(lVar5 + 0x20 + lVar21 * 8),
                                 (longlong)(int)*puVar1 << 7);
                    uVar18 = *puVar1;
                    lVar20 = (longlong)(int)uVar18;
                    if (0 < lVar20) {
                      puVar7 = *(undefined2 **)(lVar5 + 0x18 + lVar21 * 8);
                      uVar14 = (ulonglong)(uVar18 & 3);
                      if (lVar20 - 1U < 3) {
                        lVar16 = 0;
                      }
                      else {
                        lVar2 = lVar5 + 0x38 + lVar21 * 8;
                        lVar16 = 0;
                        do {
                          **(undefined2 **)(lVar2 + -0x18 + lVar16 * 8) = *puVar7;
                          **(undefined2 **)(lVar2 + -0x10 + lVar16 * 8) = *puVar7;
                          **(undefined2 **)(lVar2 + -8 + lVar16 * 8) = *puVar7;
                          **(undefined2 **)(lVar2 + lVar16 * 8) = *puVar7;
                          lVar16 = lVar16 + 4;
                        } while (lVar20 - uVar14 != lVar16);
                      }
                      if (uVar14 != 0) {
                        puVar10 = (undefined8 *)(lVar5 + 0x20 + (lVar16 + lVar21) * 8);
                        lVar20 = -uVar14;
                        do {
                          *(undefined2 *)*puVar10 = *puVar7;
                          puVar10 = puVar10 + 1;
                          lVar20 = lVar20 + 1;
                        } while (lVar20 != 0);
                      }
                    }
                  }
                  iVar17 = uVar18 + iVar17;
                  iVar22 = iVar22 + 8;
                  iVar23 = iVar23 + 1;
                } while (iVar23 < *(int *)(lVar6 + 0x38));
                iVar8 = *local_68;
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar8);
          }
          iVar8 = (**(code **)(*(longlong *)(param_1 + 0x1f0) + 8))();
          if (iVar8 == 0) {
            *(int *)(lVar5 + 0x18) = iVar12;
            *(uint *)(lVar5 + 0x14) = uVar24;
            return 0;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 <= uVar11);
        iVar8 = *(int *)(lVar5 + 0x1c);
      }
      *(undefined4 *)(lVar5 + 0x14) = 0;
      iVar12 = iVar12 + 1;
      uVar24 = 0;
    } while (iVar12 < iVar8);
    lVar15 = *(longlong *)(param_1 + 0x1c8);
  }
  *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
  uVar13 = 1;
  if (*(int *)(param_1 + 0x144) < 2) {
    if (*(uint *)(lVar15 + 0x10) < *(int *)(param_1 + 0x140) - 1U) {
      uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0xc);
    }
    else {
      uVar13 = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x48);
    }
  }
  *(undefined4 *)(lVar15 + 0x1c) = uVar13;
  *(undefined8 *)(lVar15 + 0x14) = 0;
  return 1;
}

