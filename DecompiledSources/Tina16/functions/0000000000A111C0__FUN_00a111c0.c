/* Ghidra address: 00a111c0 */
/* Ghidra symbol: FUN_00a111c0 */


void FUN_00a111c0(longlong param_1,longlong *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  longlong lVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  
  lVar7 = *(longlong *)(param_1 + 0x260);
  lVar8 = *(longlong *)(param_1 + 0x1a8);
  lVar9 = *(longlong *)(lVar7 + 0x20);
  lVar10 = *(longlong *)(lVar7 + 0x28);
  lVar11 = *(longlong *)(lVar7 + 0x30);
  lVar7 = *(longlong *)(lVar7 + 0x38);
  param_3 = param_3 & 0xffffffff;
  pbVar20 = *(byte **)(*param_2 + param_3 * 8);
  pbVar14 = *(byte **)(param_2[1] + param_3 * 8);
  pbVar23 = *(byte **)(param_2[2] + param_3 * 8);
  puVar17 = (undefined1 *)*param_4;
  uVar4 = *(uint *)(param_1 + 0x88);
  uVar24 = uVar4 >> 1;
  if (uVar24 != 0) {
    uVar15 = (ulonglong)(uVar24 - 1);
    pbVar1 = pbVar14 + uVar15 + 1;
    iVar25 = -uVar24;
    puVar19 = puVar17 + 5;
    pbVar18 = pbVar20;
    pbVar22 = pbVar23;
    do {
      bVar2 = *pbVar22;
      pbVar22 = pbVar22 + 1;
      lVar21 = (longlong)*(int *)(lVar9 + (ulonglong)bVar2 * 4);
      bVar3 = *pbVar14;
      pbVar14 = pbVar14 + 1;
      iVar5 = *(int *)(lVar11 + (ulonglong)bVar2 * 4);
      iVar6 = *(int *)(lVar7 + (ulonglong)bVar3 * 4);
      lVar16 = (longlong)*(int *)(lVar10 + (ulonglong)bVar3 * 4);
      uVar12 = (ulonglong)*pbVar18;
      puVar19[-3] = *(undefined1 *)(lVar8 + lVar21 + uVar12);
      lVar13 = (longlong)(iVar5 + iVar6 >> 0x10);
      puVar19[-4] = *(undefined1 *)(lVar8 + lVar13 + uVar12);
      puVar19[-5] = *(undefined1 *)(lVar8 + uVar12 + lVar16);
      uVar12 = (ulonglong)pbVar18[1];
      *puVar19 = *(undefined1 *)(lVar8 + lVar21 + uVar12);
      puVar19[-1] = *(undefined1 *)(lVar8 + lVar13 + uVar12);
      puVar19[-2] = *(undefined1 *)(lVar8 + lVar16 + uVar12);
      puVar19 = puVar19 + 6;
      pbVar18 = pbVar18 + 2;
      iVar25 = iVar25 + 1;
    } while (iVar25 != 0);
    pbVar23 = pbVar23 + uVar15 + 1;
    pbVar20 = pbVar20 + uVar15 * 2 + 2;
    puVar17 = puVar17 + uVar15 * 6 + 6;
    uVar4 = *(uint *)(param_1 + 0x88);
    pbVar14 = pbVar1;
  }
  if ((uVar4 & 1) != 0) {
    iVar25 = *(int *)(lVar11 + (ulonglong)*pbVar23 * 4);
    iVar5 = *(int *)(lVar7 + (ulonglong)*pbVar14 * 4);
    iVar6 = *(int *)(lVar10 + (ulonglong)*pbVar14 * 4);
    uVar15 = (ulonglong)*pbVar20;
    puVar17[2] = *(undefined1 *)
                  (lVar8 + (longlong)*(int *)(lVar9 + (ulonglong)*pbVar23 * 4) + uVar15);
    puVar17[1] = *(undefined1 *)(lVar8 + (longlong)(iVar25 + iVar5 >> 0x10) + uVar15);
    *puVar17 = *(undefined1 *)(lVar8 + (longlong)iVar6 + uVar15);
  }
  return;
}

