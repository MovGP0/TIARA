/* Ghidra address: 00a227e0 */
/* Ghidra symbol: FUN_00a227e0 */


void FUN_00a227e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong *plVar17;
  byte *pbVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  byte *pbVar22;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  uVar21 = iVar2 * 8;
  if (-2 < *(int *)(param_1 + 0x13c)) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar9 = (ulonglong)uVar3;
    if (0 < (int)(uVar21 - uVar3)) {
      uVar16 = *(int *)(param_1 + 0x13c) + 2;
      iVar7 = -2;
      if (-3 < (int)(~uVar21 + uVar3)) {
        iVar7 = ~uVar21 + uVar3;
      }
      lVar20 = (ulonglong)(((uVar21 | 1) - uVar3) + iVar7) + 1;
      uVar11 = (ulonglong)(uVar16 & 3);
      if ((ulonglong)uVar16 - 1 < 3) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        do {
          lVar4 = *(longlong *)(param_3 + -8 + lVar12 * 8);
          FUN_00626680(lVar4 + uVar9,*(undefined1 *)(lVar4 + -1 + uVar9),lVar20);
          lVar4 = *(longlong *)(param_3 + lVar12 * 8);
          FUN_00626680(lVar4 + uVar9,*(undefined1 *)(lVar4 + -1 + uVar9),lVar20);
          lVar4 = *(longlong *)(param_3 + 8 + lVar12 * 8);
          FUN_00626680(lVar4 + uVar9,*(undefined1 *)(lVar4 + -1 + uVar9),lVar20);
          lVar4 = *(longlong *)(param_3 + 0x10 + lVar12 * 8);
          FUN_00626680(lVar4 + uVar9,*(undefined1 *)(lVar4 + -1 + uVar9),lVar20);
          lVar12 = lVar12 + 4;
        } while (uVar16 - uVar11 != lVar12);
      }
      if (uVar11 != 0) {
        plVar17 = (longlong *)(param_3 + -8 + lVar12 * 8);
        lVar12 = -uVar11;
        do {
          FUN_00626680(*plVar17 + uVar9,*(undefined1 *)(*plVar17 + -1 + uVar9),lVar20);
          plVar17 = plVar17 + 1;
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0);
      }
    }
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    iVar8 = *(int *)(param_1 + 0x110) * -0x200 + 0x10000;
    iVar7 = *(int *)(param_1 + 0x110) * 0x40;
    uVar21 = uVar21 - 3 | 2;
    lVar20 = 0;
    do {
      puVar5 = *(undefined1 **)(param_4 + lVar20 * 8);
      pbVar18 = *(byte **)(param_3 + -8 + lVar20 * 8);
      pbVar6 = *(byte **)(param_3 + lVar20 * 8);
      pbVar13 = *(byte **)(param_3 + 8 + lVar20 * 8);
      lVar20 = lVar20 + 1;
      iVar1 = (uint)*pbVar13 + (uint)*pbVar18 + (uint)*pbVar6;
      iVar14 = (uint)pbVar6[1] + (uint)pbVar13[1] + (uint)pbVar18[1];
      *puVar5 = (char)((uint)*pbVar6 * iVar8 + 0x8000 +
                       ((uint)*pbVar13 + (uint)*pbVar18 + iVar1 + iVar14) * iVar7 >> 0x10);
      pbVar13 = pbVar13 + 2;
      pbVar18 = pbVar18 + 2;
      pbVar22 = pbVar6 + 2;
      iVar19 = iVar2 * -8 + 2;
      puVar10 = puVar5;
      do {
        iVar15 = iVar14;
        puVar10 = puVar10 + 1;
        iVar14 = (uint)*pbVar22 + (uint)*pbVar13 + (uint)*pbVar18;
        *puVar10 = (char)((uint)pbVar22[-1] * iVar8 + 0x8000 +
                          (((iVar1 + iVar15) - (uint)pbVar22[-1]) + iVar14) * iVar7 >> 0x10);
        pbVar13 = pbVar13 + 1;
        pbVar18 = pbVar18 + 1;
        pbVar22 = pbVar22 + 1;
        iVar19 = iVar19 + 1;
        iVar1 = iVar15;
      } while (iVar19 != 0);
      puVar5[uVar21] =
           (char)((uint)pbVar6[uVar21] * iVar8 + 0x8000 +
                  ((iVar15 + iVar14 * 2) - (uint)pbVar6[uVar21]) * iVar7 >> 0x10);
    } while (lVar20 < *(int *)(param_2 + 0xc));
  }
  return;
}

