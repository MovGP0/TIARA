/* Ghidra address: 00a10ed0 */
/* Ghidra symbol: FUN_00a10ed0 */


void FUN_00a10ed0(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  longlong lVar21;
  byte *pbVar22;
  undefined1 *puVar23;
  byte *pbVar24;
  byte *pbVar25;
  byte *pbVar26;
  byte *pbVar27;
  undefined1 *puVar28;
  
  lVar10 = *(longlong *)(param_1 + 0x260);
  lVar7 = *(longlong *)(param_1 + 0x1a8);
  lVar11 = *(longlong *)(lVar10 + 0x20);
  lVar14 = *(longlong *)(lVar10 + 0x28);
  lVar8 = *(longlong *)(lVar10 + 0x30);
  lVar10 = *(longlong *)(lVar10 + 0x38);
  pbVar25 = *(byte **)(*param_2 + (ulonglong)(param_3 * 2) * 8);
  pbVar15 = *(byte **)(*param_2 + (ulonglong)(param_3 * 2 + 1) * 8);
  pbVar24 = *(byte **)(param_2[1] + (ulonglong)param_3 * 8);
  pbVar27 = *(byte **)(param_2[2] + (ulonglong)param_3 * 8);
  puVar23 = (undefined1 *)*param_4;
  puVar19 = (undefined1 *)param_4[1];
  uVar4 = *(uint *)(param_1 + 0x88);
  uVar16 = uVar4 >> 1;
  if (uVar16 != 0) {
    uVar12 = (ulonglong)(uVar16 - 1);
    pbVar2 = pbVar24 + uVar12 + 1;
    lVar1 = uVar12 * 6 + 6;
    pbVar3 = pbVar15 + uVar12 * 2 + 2;
    iVar17 = -uVar16;
    puVar28 = puVar19 + 5;
    puVar20 = puVar23 + 5;
    pbVar22 = pbVar27;
    pbVar26 = pbVar25;
    do {
      lVar18 = (longlong)*(int *)(lVar11 + (ulonglong)*pbVar22 * 4);
      iVar5 = *(int *)(lVar8 + (ulonglong)*pbVar22 * 4);
      iVar6 = *(int *)(lVar10 + (ulonglong)*pbVar24 * 4);
      lVar13 = (longlong)*(int *)(lVar14 + (ulonglong)*pbVar24 * 4);
      uVar9 = (ulonglong)*pbVar26;
      puVar20[-3] = *(undefined1 *)(lVar7 + lVar18 + uVar9);
      lVar21 = (longlong)(iVar5 + iVar6 >> 0x10);
      puVar20[-4] = *(undefined1 *)(lVar7 + lVar21 + uVar9);
      puVar20[-5] = *(undefined1 *)(lVar7 + uVar9 + lVar13);
      uVar9 = (ulonglong)pbVar26[1];
      *puVar20 = *(undefined1 *)(lVar7 + lVar18 + uVar9);
      puVar20[-1] = *(undefined1 *)(lVar7 + lVar21 + uVar9);
      puVar20[-2] = *(undefined1 *)(lVar7 + uVar9 + lVar13);
      uVar9 = (ulonglong)*pbVar15;
      puVar28[-3] = *(undefined1 *)(lVar7 + lVar18 + uVar9);
      puVar28[-4] = *(undefined1 *)(lVar7 + lVar21 + uVar9);
      puVar28[-5] = *(undefined1 *)(lVar7 + uVar9 + lVar13);
      uVar9 = (ulonglong)pbVar15[1];
      *puVar28 = *(undefined1 *)(lVar7 + lVar18 + uVar9);
      puVar28[-1] = *(undefined1 *)(lVar7 + lVar21 + uVar9);
      puVar28[-2] = *(undefined1 *)(lVar7 + lVar13 + uVar9);
      pbVar22 = pbVar22 + 1;
      pbVar24 = pbVar24 + 1;
      puVar28 = puVar28 + 6;
      puVar20 = puVar20 + 6;
      pbVar26 = pbVar26 + 2;
      pbVar15 = pbVar15 + 2;
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0);
    pbVar27 = pbVar27 + uVar12 + 1;
    pbVar25 = pbVar25 + uVar12 * 2 + 2;
    puVar23 = puVar23 + lVar1;
    puVar19 = puVar19 + lVar1;
    uVar4 = *(uint *)(param_1 + 0x88);
    pbVar15 = pbVar3;
    pbVar24 = pbVar2;
  }
  if ((uVar4 & 1) != 0) {
    lVar11 = (longlong)*(int *)(lVar11 + (ulonglong)*pbVar27 * 4);
    iVar17 = *(int *)(lVar8 + (ulonglong)*pbVar27 * 4);
    iVar5 = *(int *)(lVar10 + (ulonglong)*pbVar24 * 4);
    lVar14 = (longlong)*(int *)(lVar14 + (ulonglong)*pbVar24 * 4);
    uVar12 = (ulonglong)*pbVar25;
    puVar23[2] = *(undefined1 *)(lVar7 + lVar11 + uVar12);
    lVar10 = (longlong)(iVar17 + iVar5 >> 0x10);
    puVar23[1] = *(undefined1 *)(lVar7 + lVar10 + uVar12);
    *puVar23 = *(undefined1 *)(lVar7 + uVar12 + lVar14);
    uVar12 = (ulonglong)*pbVar15;
    puVar19[2] = *(undefined1 *)(lVar7 + lVar11 + uVar12);
    puVar19[1] = *(undefined1 *)(lVar7 + lVar10 + uVar12);
    *puVar19 = *(undefined1 *)(lVar7 + lVar14 + uVar12);
  }
  return;
}

