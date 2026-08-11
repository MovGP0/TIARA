/* Ghidra address: 00a0ca90 */
/* Ghidra symbol: FUN_00a0ca90 */


void FUN_00a0ca90(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  
  lVar3 = param_1[1];
  plVar9 = *(longlong **)(lVar3 + 0x80);
  if (plVar9 == (longlong *)0x0) {
    iVar13 = 0;
    iVar18 = 0;
  }
  else {
    iVar18 = 0;
    iVar13 = 0;
    do {
      if (*plVar9 == 0) {
        iVar18 = iVar18 + (int)plVar9[2] * *(int *)((longlong)plVar9 + 0xc);
        iVar13 = iVar13 + *(int *)((longlong)plVar9 + 0xc) * (int)plVar9[1];
      }
      plVar9 = (longlong *)plVar9[6];
    } while (plVar9 != (longlong *)0x0);
  }
  for (plVar9 = *(longlong **)(lVar3 + 0x88); plVar9 != (longlong *)0x0;
      plVar9 = (longlong *)plVar9[6]) {
    if (*plVar9 == 0) {
      iVar18 = iVar18 + (int)plVar9[2] * *(int *)((longlong)plVar9 + 0xc) * 0x80;
      iVar13 = iVar13 + *(int *)((longlong)plVar9 + 0xc) * (int)plVar9[1] * 0x80;
    }
  }
  if (0 < iVar18) {
    iVar8 = FUN_00a0d710(param_1,iVar18,iVar13,*(undefined4 *)(lVar3 + 0x90));
    iVar16 = 1000000000;
    if (iVar8 < iVar13) {
      iVar16 = 1;
      if (0 < iVar8 / iVar18) {
        iVar16 = iVar8 / iVar18;
      }
    }
    for (plVar9 = *(longlong **)(lVar3 + 0x80); plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)plVar9[6]) {
      if (*plVar9 == 0) {
        uVar1 = *(uint *)(plVar9 + 1);
        if (iVar16 < (int)((uVar1 - 1) / *(uint *)(plVar9 + 2) + 1)) {
          *(uint *)((longlong)plVar9 + 0x14) = *(uint *)(plVar9 + 2) * iVar16;
          FUN_00a0d720(param_1,plVar9 + 7,uVar1 * *(int *)((longlong)plVar9 + 0xc));
          *(undefined4 *)((longlong)plVar9 + 0x2c) = 1;
          uVar1 = *(uint *)((longlong)plVar9 + 0x14);
        }
        else {
          *(uint *)((longlong)plVar9 + 0x14) = uVar1;
        }
        uVar2 = *(uint *)((longlong)plVar9 + 0xc);
        lVar10 = param_1[1];
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (longlong)(int)uVar2;
        auVar6 = ZEXT816(0) << 0x40 | ZEXT816(0x3b9ac9e8);
        auVar7 = auVar6 / auVar5;
        iVar18 = auVar7._0_4_;
        if (iVar18 == 0) {
          puVar12 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar12 + 5) = 0x46;
          (*(code *)*puVar12)(param_1,SUB168(auVar6 % auVar5,0));
        }
        uVar15 = auVar7._0_8_;
        if ((int)uVar1 <= iVar18) {
          uVar15 = (ulonglong)uVar1;
        }
        *(int *)(lVar10 + 0x94) = (int)uVar15;
        lVar10 = FUN_00a0c4e0(param_1,1,(ulonglong)uVar1 << 3);
        if (uVar1 != 0) {
          uVar20 = 0;
          do {
            uVar19 = uVar1 - (int)uVar20;
            uVar14 = (uint)uVar15;
            uVar17 = (ulonglong)uVar19;
            if (uVar14 < uVar19) {
              uVar17 = uVar15;
            }
            uVar15 = uVar17;
            uVar17 = uVar15 * uVar2;
            lVar4 = param_1[1];
            if (0x3b9ac9e8 < uVar17) {
              *(undefined8 *)(*param_1 + 0x28) = 0x300000036;
              (**(code **)*param_1)();
            }
            lVar11 = 0;
            if ((uVar17 & 7) != 0) {
              lVar11 = 8 - (uVar17 & 7);
            }
            puVar12 = (undefined8 *)FUN_00a0d6f0(param_1);
            if (puVar12 == (undefined8 *)0x0) {
              *(undefined8 *)(*param_1 + 0x28) = 0x400000036;
              (**(code **)*param_1)();
            }
            *(int *)(lVar4 + 0x90) = *(int *)(lVar4 + 0x90) + (int)lVar11 + 0x18 + (int)uVar17;
            *puVar12 = *(undefined8 *)(lVar4 + 0x78);
            puVar12[1] = lVar11 + uVar17;
            puVar12[2] = 0;
            *(undefined8 **)(lVar4 + 0x78) = puVar12;
            if ((int)uVar15 != 0) {
              puVar12 = puVar12 + 3;
              uVar19 = ~uVar1 + (int)uVar20;
              uVar14 = ~uVar14;
              if (uVar14 < uVar19) {
                uVar14 = uVar19;
              }
              iVar18 = uVar14 + 1;
              uVar17 = uVar20;
              do {
                uVar20 = (ulonglong)((int)uVar17 + 1);
                *(undefined8 **)(lVar10 + uVar17 * 8) = puVar12;
                puVar12 = (undefined8 *)((longlong)puVar12 + (ulonglong)uVar2);
                iVar18 = iVar18 + 1;
                uVar17 = uVar20;
              } while (iVar18 != 0);
            }
          } while ((uint)uVar20 < uVar1);
        }
        *plVar9 = lVar10;
        *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(lVar3 + 0x94);
        *(undefined8 *)((longlong)plVar9 + 0x1c) = 0;
        *(undefined4 *)(plVar9 + 5) = 0;
      }
    }
    for (plVar9 = *(longlong **)(lVar3 + 0x88); plVar9 != (longlong *)0x0;
        plVar9 = (longlong *)plVar9[6]) {
      if (*plVar9 == 0) {
        uVar1 = *(uint *)(plVar9 + 1);
        if (iVar16 < (int)((uVar1 - 1) / *(uint *)(plVar9 + 2) + 1)) {
          *(uint *)((longlong)plVar9 + 0x14) = *(uint *)(plVar9 + 2) * iVar16;
          FUN_00a0d720(param_1,plVar9 + 7,uVar1 * *(int *)((longlong)plVar9 + 0xc) * 0x80);
          *(undefined4 *)((longlong)plVar9 + 0x2c) = 1;
          uVar1 = *(uint *)((longlong)plVar9 + 0x14);
        }
        else {
          *(uint *)((longlong)plVar9 + 0x14) = uVar1;
        }
        uVar2 = *(uint *)((longlong)plVar9 + 0xc);
        lVar10 = param_1[1];
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (longlong)(int)uVar2 << 7;
        auVar5 = ZEXT816(0) << 0x40 | ZEXT816(0x3b9ac9e8);
        auVar7 = auVar5 / auVar6;
        iVar18 = auVar7._0_4_;
        if (iVar18 == 0) {
          puVar12 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar12 + 5) = 0x46;
          (*(code *)*puVar12)(param_1,SUB168(auVar5 % auVar6,0));
        }
        uVar15 = auVar7._0_8_;
        if ((int)uVar1 <= iVar18) {
          uVar15 = (ulonglong)uVar1;
        }
        *(int *)(lVar10 + 0x94) = (int)uVar15;
        lVar10 = FUN_00a0c4e0(param_1,1,(ulonglong)uVar1 << 3);
        if (uVar1 != 0) {
          uVar14 = 0;
          do {
            uVar19 = (uint)uVar15;
            uVar20 = (ulonglong)(uVar1 - uVar14);
            if (uVar19 < uVar1 - uVar14) {
              uVar20 = uVar15;
            }
            uVar15 = uVar20;
            uVar20 = (ulonglong)uVar2 * 0x80 * uVar15;
            lVar4 = param_1[1];
            if (0x3b9ac9e8 < uVar20) {
              *(undefined8 *)(*param_1 + 0x28) = 0x300000036;
              (**(code **)*param_1)();
            }
            puVar12 = (undefined8 *)FUN_00a0d6f0(param_1);
            if (puVar12 == (undefined8 *)0x0) {
              *(undefined8 *)(*param_1 + 0x28) = 0x400000036;
              (**(code **)*param_1)();
            }
            *(int *)(lVar4 + 0x90) = *(int *)(lVar4 + 0x90) + ((uint)uVar20 | 0x18);
            *puVar12 = *(undefined8 *)(lVar4 + 0x78);
            puVar12[1] = uVar20;
            puVar12[2] = 0;
            *(undefined8 **)(lVar4 + 0x78) = puVar12;
            if ((int)uVar15 != 0) {
              puVar12 = puVar12 + 3;
              uVar19 = ~uVar19;
              if (uVar19 < ~uVar1 + uVar14) {
                uVar19 = ~uVar1 + uVar14;
              }
              iVar18 = uVar19 + 1;
              do {
                uVar20 = (ulonglong)uVar14;
                uVar14 = uVar14 + 1;
                *(undefined8 **)(lVar10 + uVar20 * 8) = puVar12;
                puVar12 = puVar12 + (ulonglong)uVar2 * 0x10;
                iVar18 = iVar18 + 1;
              } while (iVar18 != 0);
            }
          } while (uVar14 < uVar1);
        }
        *plVar9 = lVar10;
        *(undefined4 *)(plVar9 + 3) = *(undefined4 *)(lVar3 + 0x94);
        *(undefined8 *)((longlong)plVar9 + 0x1c) = 0;
        *(undefined4 *)(plVar9 + 5) = 0;
      }
    }
  }
  return;
}

