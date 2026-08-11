/* Ghidra address: 00a16590 */
/* Ghidra symbol: FUN_00a16590 */


undefined8 FUN_00a16590(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong alStack_68 [5];
  
  lVar1 = *(longlong *)(param_1 + 0x230);
  if (0 < *(int *)(param_1 + 0x1b0)) {
    lVar14 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x1b8 + lVar14 * 8);
      iVar4 = *(int *)(lVar5 + 0xc);
      lVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                        (param_1,*(undefined8 *)(lVar1 + 0x88 + (longlong)*(int *)(lVar5 + 4) * 8),
                         *(int *)(param_1 + 0xb0) * iVar4,iVar4,1);
      alStack_68[lVar14] = lVar5;
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x1b0));
  }
  lVar14 = (longlong)*(int *)(lVar1 + 0x2c);
  iVar4 = *(int *)(lVar1 + 0x30);
  if (*(int *)(lVar1 + 0x2c) < iVar4) {
    uVar11 = *(uint *)(lVar1 + 0x28);
    uVar7 = *(uint *)(param_1 + 0x1d8);
    do {
      if (uVar11 < uVar7) {
        do {
          iVar4 = *(int *)(param_1 + 0x1b0);
          if (0 < (longlong)iVar4) {
            lVar5 = 0;
            iVar8 = 0;
            do {
              lVar2 = *(longlong *)(param_1 + 0x1b8 + lVar5 * 8);
              lVar13 = (longlong)*(int *)(lVar2 + 0x38);
              iVar16 = iVar8;
              if (0 < lVar13) {
                uVar7 = *(uint *)(lVar2 + 0x34);
                lVar2 = alStack_68[lVar5];
                uVar18 = (ulonglong)(uVar7 - 1) + 1;
                lVar19 = uVar18 - (uVar7 & 3);
                uVar3 = 0;
                if (-1 < (int)uVar7) {
                  uVar3 = uVar7;
                }
                lVar17 = 0;
                do {
                  iVar16 = iVar8;
                  if (0 < (int)uVar7) {
                    lVar21 = (longlong)iVar8;
                    lVar20 = *(longlong *)(lVar2 + (lVar17 + lVar14) * 8);
                    lVar15 = (ulonglong)(uVar7 * uVar11) * 0x80 + lVar20;
                    iVar16 = 0;
                    if (uVar18 < 4) {
LAB_00a167ac:
                      plVar10 = (longlong *)(lVar1 + 0x38 + lVar21 * 8);
                      iVar16 = uVar7 - iVar16;
                      do {
                        *plVar10 = lVar15;
                        lVar15 = lVar15 + 0x80;
                        plVar10 = plVar10 + 1;
                        iVar16 = iVar16 + -1;
                      } while (iVar16 != 0);
                    }
                    else {
                      plVar10 = (longlong *)(lVar1 + 0x48 + lVar21 * 8);
                      lVar21 = lVar21 + lVar19;
                      lVar15 = lVar15 + lVar19 * 0x80;
                      lVar20 = lVar20 + 0x180 + (ulonglong)(uVar7 * uVar11) * 0x80;
                      lVar9 = lVar19;
                      do {
                        plVar10[-2] = lVar20 + -0x180;
                        plVar10[-1] = lVar20 + -0x100;
                        *plVar10 = lVar20 + -0x80;
                        plVar10[1] = lVar20;
                        lVar20 = lVar20 + 0x200;
                        plVar10 = plVar10 + 4;
                        lVar9 = lVar9 + -4;
                      } while (lVar9 != 0);
                      iVar16 = (int)lVar19;
                      if ((uVar7 & 3) != 0) goto LAB_00a167ac;
                    }
                    iVar16 = uVar7 + iVar8;
                  }
                  lVar17 = lVar17 + 1;
                  iVar8 = iVar8 + uVar3;
                } while (lVar17 < lVar13);
              }
              iVar8 = iVar16;
              lVar5 = lVar5 + 1;
            } while (lVar5 < iVar4);
          }
          iVar4 = (**(code **)(*(longlong *)(param_1 + 0x250) + 8))(param_1);
          if (iVar4 == 0) {
            *(int *)(lVar1 + 0x2c) = (int)lVar14;
            *(uint *)(lVar1 + 0x28) = uVar11;
            return 0;
          }
          uVar11 = uVar11 + 1;
          uVar7 = *(uint *)(param_1 + 0x1d8);
        } while (uVar11 < uVar7);
        iVar4 = *(int *)(lVar1 + 0x30);
      }
      *(undefined4 *)(lVar1 + 0x28) = 0;
      lVar14 = lVar14 + 1;
      uVar11 = 0;
    } while (lVar14 < iVar4);
  }
  uVar11 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar11;
  if (uVar11 < *(uint *)(param_1 + 0x1a4)) {
    lVar1 = *(longlong *)(param_1 + 0x230);
    uVar12 = 1;
    if (*(int *)(param_1 + 0x1b0) < 2) {
      if (uVar11 < *(uint *)(param_1 + 0x1a4) - 1) {
        uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0xc);
      }
      else {
        uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x48);
      }
    }
    *(undefined4 *)(lVar1 + 0x30) = uVar12;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    uVar6 = 3;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x240) + 0x18))(param_1);
    uVar6 = 4;
  }
  return uVar6;
}

