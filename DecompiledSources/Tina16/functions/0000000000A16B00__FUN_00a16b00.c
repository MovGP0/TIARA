/* Ghidra address: 00a16b00 */
/* Ghidra symbol: FUN_00a16b00 */


undefined8 FUN_00a16b00(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  
  lVar3 = *(longlong *)(param_1 + 0x230);
  uVar19 = *(uint *)(param_1 + 0x1a4);
  iVar13 = *(int *)(lVar3 + 0x2c);
  iVar6 = *(int *)(lVar3 + 0x30);
  if (iVar13 < iVar6) {
    uVar10 = *(int *)(param_1 + 0x1d8) - 1;
    puVar1 = (undefined8 *)(lVar3 + 0x38);
    uVar18 = *(uint *)(lVar3 + 0x28);
    do {
      if (uVar18 <= uVar10) {
        do {
          FUN_00a1bd20(*puVar1,(longlong)*(int *)(param_1 + 0x1e0) << 7);
          iVar6 = (**(code **)(*(longlong *)(param_1 + 0x250) + 8))(param_1,puVar1);
          if (iVar6 == 0) {
            *(int *)(lVar3 + 0x2c) = iVar13;
            *(uint *)(lVar3 + 0x28) = uVar18;
            return 0;
          }
          iVar6 = *(int *)(param_1 + 0x1b0);
          if (0 < iVar6) {
            lVar15 = 0;
            iVar17 = 0;
            do {
              lVar4 = *(longlong *)(param_1 + 0x1b8 + lVar15 * 8);
              if (*(int *)(lVar4 + 0x30) == 0) {
                iVar17 = iVar17 + *(int *)(lVar4 + 0x3c);
              }
              else {
                piVar12 = (int *)(lVar4 + 0x44);
                if (uVar18 < uVar10) {
                  piVar12 = (int *)(lVar4 + 0x34);
                }
                iVar16 = *(int *)(lVar4 + 0x38);
                if (0 < iVar16) {
                  pcVar5 = *(code **)(*(longlong *)(param_1 + 600) + 8 +
                                     (longlong)*(int *)(lVar4 + 4) * 8);
                  iVar6 = *piVar12;
                  iVar2 = *(int *)(lVar4 + 0x40);
                  iVar9 = *(int *)(lVar4 + 0x24);
                  lVar14 = (longlong)(iVar9 * iVar13) * 8 +
                           *(longlong *)(param_2 + (longlong)*(int *)(lVar4 + 4) * 8);
                  iVar7 = 0;
                  do {
                    if (*(uint *)(param_1 + 0xb0) < uVar19 - 1) {
                      if (0 < iVar6) {
LAB_00a16c64:
                        lVar20 = 0;
                        iVar16 = iVar2 * uVar18;
                        do {
                          (*pcVar5)(param_1,lVar4,puVar1[iVar17 + lVar20],lVar14,iVar16);
                          iVar9 = *(int *)(lVar4 + 0x24);
                          iVar16 = iVar16 + iVar9;
                          lVar20 = lVar20 + 1;
                        } while (lVar20 < iVar6);
                        iVar16 = *(int *)(lVar4 + 0x38);
                      }
                    }
                    else if (iVar7 + iVar13 < *(int *)(lVar4 + 0x48) && 0 < iVar6)
                    goto LAB_00a16c64;
                    iVar17 = iVar17 + *(int *)(lVar4 + 0x34);
                    lVar14 = lVar14 + (longlong)iVar9 * 8;
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < iVar16);
                  iVar6 = *(int *)(param_1 + 0x1b0);
                }
              }
              lVar15 = lVar15 + 1;
            } while (lVar15 < iVar6);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 <= uVar10);
        iVar6 = *(int *)(lVar3 + 0x30);
      }
      *(undefined4 *)(lVar3 + 0x28) = 0;
      iVar13 = iVar13 + 1;
      uVar18 = 0;
    } while (iVar13 < iVar6);
    uVar19 = *(uint *)(param_1 + 0x1a4);
  }
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
  uVar18 = *(int *)(param_1 + 0xb0) + 1;
  *(uint *)(param_1 + 0xb0) = uVar18;
  if (uVar18 < uVar19) {
    lVar3 = *(longlong *)(param_1 + 0x230);
    uVar11 = 1;
    if (*(int *)(param_1 + 0x1b0) < 2) {
      if (uVar18 < uVar19 - 1) {
        uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0xc);
      }
      else {
        uVar11 = *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + 0x48);
      }
    }
    *(undefined4 *)(lVar3 + 0x30) = uVar11;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    uVar8 = 3;
  }
  else {
    (**(code **)(*(longlong *)(param_1 + 0x240) + 0x18))(param_1);
    uVar8 = 4;
  }
  return uVar8;
}

