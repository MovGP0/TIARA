/* Ghidra address: 00a262d0 */
/* Ghidra symbol: FUN_00a262d0 */


undefined8 FUN_00a262d0(longlong *param_1,longlong param_2)

{
  int *piVar1;
  short sVar2;
  longlong lVar3;
  short *psVar4;
  int *piVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar3 = param_1[0x3e];
  iVar7 = (int)param_1[0x23];
  if (iVar7 != 0) {
    iVar10 = *(int *)(lVar3 + 0x30);
    if (*(int *)(lVar3 + 0x30) == 0) {
      if (0 < *(int *)((longlong)param_1 + 0x144)) {
        lVar9 = 0;
        do {
          *(undefined4 *)(lVar3 + 0x20 + lVar9 * 4) = 0;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((longlong)param_1 + 0x144));
        iVar7 = (int)param_1[0x23];
      }
      *(int *)(lVar3 + 0x30) = iVar7;
      iVar10 = iVar7;
    }
    *(int *)(lVar3 + 0x30) = iVar10 + -1;
  }
  if (0 < (int)param_1[0x2e]) {
    lVar9 = 0;
    do {
      lVar13 = (longlong)*(int *)((longlong)param_1 + lVar9 * 4 + 0x174);
      psVar4 = *(short **)(param_2 + lVar9 * 8);
      lVar14 = *(longlong *)(lVar3 + 0x78 + (longlong)*(int *)(param_1[lVar13 + 0x29] + 0x14) * 8);
      piVar5 = *(int **)(lVar3 + 0x98 + (longlong)*(int *)(param_1[lVar13 + 0x29] + 0x18) * 8);
      iVar7 = (int)*psVar4 - *(int *)(lVar3 + 0x20 + lVar13 * 4);
      uVar11 = iVar7 >> 0x1f;
      uVar11 = iVar7 + uVar11 ^ uVar11;
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> uVar12 == 0; uVar12 = uVar12 - 1) {
          }
        }
        uVar12 = (uVar12 ^ 0xffffffe0) + 0x21;
        if (0xb < uVar12) {
          puVar6 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar6 + 5) = 6;
          (*(code *)*puVar6)(param_1);
        }
      }
      piVar1 = (int *)(lVar14 + (longlong)(int)uVar12 * 4);
      *piVar1 = *piVar1 + 1;
      uVar11 = 0;
      lVar14 = 1;
      do {
        sVar2 = psVar4[(int)(&DAT_01e6fbe0)[lVar14]];
        if (sVar2 == 0) {
          uVar11 = uVar11 + 1;
        }
        else {
          if (0xf < (int)uVar11) {
            uVar12 = ~uVar11;
            if ((int)uVar12 < -0x20) {
              uVar12 = 0xffffffe0;
            }
            uVar12 = uVar11 + 0x10 + uVar12;
            uVar11 = (uVar11 - 0x10) - (uVar12 & 0xfffffff0);
            piVar5[0xf0] = (uVar12 >> 4) + 1 + piVar5[0xf0];
          }
          iVar7 = -(int)sVar2;
          if (-1 < sVar2) {
            iVar7 = (int)sVar2;
          }
          uVar12 = iVar7 >> 1;
          if (uVar12 == 0) {
            uVar8 = 0x20;
          }
          else {
            uVar8 = 0x1f;
            if (uVar12 != 0) {
              for (; uVar12 >> uVar8 == 0; uVar8 = uVar8 - 1) {
              }
            }
            uVar8 = uVar8 ^ 0x1f;
          }
          if (9 < (int)(0x20 - uVar8)) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 6;
            (*(code *)*puVar6)(param_1);
          }
          piVar5[(int)((0x21 - uVar8) + uVar11 * 0x10)] =
               piVar5[(int)((0x21 - uVar8) + uVar11 * 0x10)] + 1;
          uVar11 = 0;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != 0x40);
      if (0 < (int)uVar11) {
        *piVar5 = *piVar5 + 1;
      }
      *(int *)(lVar3 + 0x20 + lVar13 * 4) = (int)**(short **)(param_2 + lVar9 * 8);
      lVar9 = lVar9 + 1;
    } while (lVar9 < (int)param_1[0x2e]);
  }
  return 1;
}

