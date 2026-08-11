/* Ghidra address: 00a21b00 */
/* Ghidra symbol: FUN_00a21b00 */


undefined8 FUN_00a21b00(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong alStack_68 [5];
  
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  iVar4 = *(int *)(param_1 + 0x144);
  if (0 < iVar4) {
    lVar13 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x148 + lVar13 * 8);
      iVar4 = *(int *)(lVar5 + 0xc);
      lVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar1 + 0x70 + (longlong)*(int *)(lVar5 + 4) * 8),
                         *(int *)(lVar1 + 0x10) * iVar4,iVar4,0);
      alStack_68[lVar13] = lVar5;
      lVar13 = lVar13 + 1;
      iVar4 = *(int *)(param_1 + 0x144);
    } while (lVar13 < iVar4);
  }
  lVar13 = (longlong)*(int *)(lVar1 + 0x18);
  iVar15 = *(int *)(lVar1 + 0x1c);
  if (*(int *)(lVar1 + 0x18) < iVar15) {
    uVar9 = *(uint *)(lVar1 + 0x14);
    uVar6 = *(uint *)(param_1 + 0x168);
    do {
      if (uVar9 < uVar6) {
        do {
          iVar4 = *(int *)(param_1 + 0x144);
          if (0 < (longlong)iVar4) {
            lVar5 = 0;
            iVar15 = 0;
            do {
              lVar2 = *(longlong *)(param_1 + 0x148 + lVar5 * 8);
              lVar12 = (longlong)*(int *)(lVar2 + 0x38);
              if (0 < lVar12) {
                uVar6 = *(uint *)(lVar2 + 0x34);
                lVar2 = alStack_68[lVar5];
                uVar17 = (ulonglong)(uVar6 - 1) + 1;
                lVar18 = uVar17 - (uVar6 & 3);
                uVar3 = 0;
                if (-1 < (int)uVar6) {
                  uVar3 = uVar6;
                }
                lVar16 = 0;
                iVar8 = iVar15;
                do {
                  iVar15 = iVar8;
                  if (0 < (int)uVar6) {
                    lVar20 = (longlong)iVar8;
                    lVar19 = *(longlong *)(lVar2 + (lVar16 + lVar13) * 8);
                    lVar14 = (ulonglong)(uVar6 * uVar9) * 0x80 + lVar19;
                    iVar15 = 0;
                    if (uVar17 < 4) {
LAB_00a21d1c:
                      plVar11 = (longlong *)(lVar1 + 0x20 + lVar20 * 8);
                      iVar15 = uVar6 - iVar15;
                      do {
                        *plVar11 = lVar14;
                        lVar14 = lVar14 + 0x80;
                        plVar11 = plVar11 + 1;
                        iVar15 = iVar15 + -1;
                      } while (iVar15 != 0);
                    }
                    else {
                      plVar11 = (longlong *)(lVar1 + 0x30 + lVar20 * 8);
                      lVar20 = lVar20 + lVar18;
                      lVar14 = lVar14 + lVar18 * 0x80;
                      lVar19 = lVar19 + 0x180 + (ulonglong)(uVar6 * uVar9) * 0x80;
                      lVar10 = lVar18;
                      do {
                        plVar11[-2] = lVar19 + -0x180;
                        plVar11[-1] = lVar19 + -0x100;
                        *plVar11 = lVar19 + -0x80;
                        plVar11[1] = lVar19;
                        lVar19 = lVar19 + 0x200;
                        plVar11 = plVar11 + 4;
                        lVar10 = lVar10 + -4;
                      } while (lVar10 != 0);
                      iVar15 = (int)lVar18;
                      if ((uVar6 & 3) != 0) goto LAB_00a21d1c;
                    }
                    iVar15 = uVar6 + iVar8;
                  }
                  lVar16 = lVar16 + 1;
                  iVar8 = iVar8 + uVar3;
                } while (lVar16 < lVar12);
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < iVar4);
          }
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0x1f0) + 8))(param_1,lVar1 + 0x20);
          if (iVar4 == 0) {
            *(int *)(lVar1 + 0x18) = (int)lVar13;
            *(uint *)(lVar1 + 0x14) = uVar9;
            return 0;
          }
          uVar9 = uVar9 + 1;
          uVar6 = *(uint *)(param_1 + 0x168);
        } while (uVar9 < uVar6);
        iVar15 = *(int *)(lVar1 + 0x1c);
      }
      *(undefined4 *)(lVar1 + 0x14) = 0;
      lVar13 = lVar13 + 1;
      uVar9 = 0;
    } while (lVar13 < iVar15);
    iVar4 = *(int *)(param_1 + 0x144);
  }
  *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  uVar7 = 1;
  if (iVar4 < 2) {
    if (*(uint *)(lVar1 + 0x10) < *(int *)(param_1 + 0x140) - 1U) {
      uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0xc);
    }
    else {
      uVar7 = *(undefined4 *)(*(longlong *)(param_1 + 0x148) + 0x48);
    }
  }
  *(undefined4 *)(lVar1 + 0x1c) = uVar7;
  *(undefined8 *)(lVar1 + 0x14) = 0;
  return 1;
}

