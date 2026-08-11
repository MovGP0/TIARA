/* Ghidra address: 00a22d40 */
/* Ghidra symbol: FUN_00a22d40 */


void FUN_00a22d40(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (-2 < *(int *)(param_1 + 0x13c)) {
    uVar2 = *(uint *)(param_1 + 0x30);
    uVar12 = (ulonglong)uVar2;
    uVar23 = iVar1 * 0x10;
    if (0 < (int)(uVar23 - uVar2)) {
      uVar22 = *(int *)(param_1 + 0x13c) + 2;
      iVar19 = -2;
      if (-3 < (int)(~uVar23 + uVar2)) {
        iVar19 = ~uVar23 + uVar2;
      }
      lVar25 = (ulonglong)(((uVar23 | 1) - uVar2) + iVar19) + 1;
      uVar13 = (ulonglong)(uVar22 & 3);
      if ((ulonglong)uVar22 - 1 < 3) {
        lVar16 = 0;
      }
      else {
        lVar16 = 0;
        do {
          lVar3 = *(longlong *)(param_3 + -8 + lVar16 * 8);
          FUN_00626680(lVar3 + uVar12,*(undefined1 *)(lVar3 + -1 + uVar12),lVar25);
          lVar3 = *(longlong *)(param_3 + lVar16 * 8);
          FUN_00626680(lVar3 + uVar12,*(undefined1 *)(lVar3 + -1 + uVar12),lVar25);
          lVar3 = *(longlong *)(param_3 + 8 + lVar16 * 8);
          FUN_00626680(lVar3 + uVar12,*(undefined1 *)(lVar3 + -1 + uVar12),lVar25);
          lVar3 = *(longlong *)(param_3 + 0x10 + lVar16 * 8);
          FUN_00626680(lVar3 + uVar12,*(undefined1 *)(lVar3 + -1 + uVar12),lVar25);
          lVar16 = lVar16 + 4;
        } while (uVar22 - uVar13 != lVar16);
      }
      if (uVar13 != 0) {
        plVar17 = (longlong *)(param_3 + -8 + lVar16 * 8);
        lVar16 = -uVar13;
        do {
          FUN_00626680(*plVar17 + uVar12,*(undefined1 *)(*plVar17 + -1 + uVar12),lVar25);
          plVar17 = plVar17 + 1;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 0);
      }
    }
  }
  if (0 < *(int *)(param_2 + 0xc)) {
    iVar21 = *(int *)(param_1 + 0x110) * -0x50 + 0x4000;
    iVar19 = *(int *)(param_1 + 0x110) * 0x10;
    uVar12 = (ulonglong)(iVar1 * 8 - 2);
    uVar13 = uVar12 * 2 | 2;
    lVar25 = 0;
    uVar14 = 0;
    do {
      puVar4 = *(undefined1 **)(param_4 + lVar25 * 8);
      pbVar5 = *(byte **)(param_3 + -8 + uVar14 * 8);
      pbVar6 = *(byte **)(param_3 + uVar14 * 8);
      pbVar7 = *(byte **)(param_3 + (uVar14 | 1) * 8);
      pbVar8 = *(byte **)(param_3 + 0x10 + uVar14 * 8);
      uVar14 = uVar14 + 2;
      *puVar4 = (char)(((uint)pbVar7[1] + (uint)pbVar6[1] + (uint)*pbVar6 + (uint)*pbVar7) * iVar21
                       + 0x8000 +
                       ((uint)*pbVar8 * 3 + (uint)*pbVar5 * 3 + (uint)pbVar5[2] + (uint)pbVar8[2] +
                       ((uint)*pbVar7 + (uint)*pbVar6) * 2 + (uint)pbVar5[1] * 2 +
                       (uint)pbVar8[1] * 2 + (uint)pbVar6[2] * 2 + (uint)pbVar7[2] * 2) * iVar19 >>
                      0x10);
      iVar20 = iVar1 * -8 + 2;
      pbVar9 = pbVar8;
      puVar18 = puVar4;
      pbVar10 = pbVar5;
      pbVar11 = pbVar7;
      while( true ) {
        puVar18 = puVar18 + 1;
        iVar24 = (uint)pbVar11[2] + (uint)pbVar6[2] + (uint)pbVar6[3] + (uint)pbVar11[3];
        iVar15 = (uint)pbVar6[1] +
                 (uint)pbVar9[2] + (uint)pbVar10[2] + (uint)pbVar10[3] + (uint)pbVar9[3];
        if (iVar20 == 0) break;
        *puVar18 = (char)(iVar24 * iVar21 + 0x8000 +
                          ((uint)pbVar10[4] + (uint)pbVar10[1] +
                           ((uint)pbVar11[4] + (uint)pbVar11[1] + iVar15 + (uint)pbVar6[4]) * 2 +
                           (uint)pbVar9[1] + (uint)pbVar9[4]) * iVar19 >> 0x10);
        iVar20 = iVar20 + 1;
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
        pbVar10 = pbVar10 + 2;
        pbVar11 = pbVar11 + 2;
      }
      puVar4[uVar12 | 1] =
           (char)(iVar24 * iVar21 + 0x8000 +
                  ((uint)pbVar9[3] + (uint)pbVar10[3] + (uint)pbVar5[uVar13 - 1] +
                   (uint)pbVar8[uVar13 - 1] +
                  ((uint)pbVar11[3] + (uint)pbVar6[3] + iVar15 + (uint)pbVar7[uVar13 - 1]) * 2) *
                  iVar19 >> 0x10);
      lVar25 = lVar25 + 1;
    } while (lVar25 < *(int *)(param_2 + 0xc));
  }
  return;
}

