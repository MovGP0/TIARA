/* Ghidra address: 00a187b0 */
/* Ghidra symbol: FUN_00a187b0 */


void FUN_00a187b0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  
  if (0 < *(int *)(param_1 + 0x19c)) {
    lVar3 = *param_4;
    lVar10 = 0;
    lVar11 = 0;
    do {
      lVar11 = (longlong)(int)lVar11;
      pbVar9 = *(byte **)(param_3 + -8 + lVar10 * 8);
      pbVar6 = *(byte **)(param_3 + lVar10 * 8);
      puVar15 = *(undefined1 **)(lVar3 + lVar11 * 8);
      iVar12 = (uint)*pbVar9 + (uint)*pbVar6 + (uint)*pbVar6 * 2;
      iVar8 = (uint)pbVar9[1] + (uint)pbVar6[1] + (uint)pbVar6[1] * 2;
      *puVar15 = (char)(iVar12 * 4 + 8U >> 4);
      puVar15[1] = (char)((uint)(iVar12 * 3 + 7 + iVar8) >> 4);
      iVar7 = *(int *)(param_2 + 0x28);
      puVar5 = puVar15 + 2;
      if (iVar7 != 2) {
        pbVar9 = pbVar9 + 2;
        pbVar6 = pbVar6 + 2;
        lVar4 = (ulonglong)(iVar7 - 3) * 2;
        iVar7 = 2 - iVar7;
        puVar14 = puVar5;
        iVar13 = iVar12;
        do {
          iVar12 = iVar8;
          bVar1 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          bVar2 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          iVar8 = (uint)bVar2 + (uint)bVar1 + (uint)bVar1 * 2;
          *puVar14 = (char)((uint)(iVar13 + 8 + iVar12 * 3) >> 4);
          puVar14[1] = (char)((uint)(iVar12 * 3 + 7 + iVar8) >> 4);
          puVar14 = puVar14 + 2;
          iVar7 = iVar7 + 1;
          iVar13 = iVar12;
        } while (iVar7 != 0);
        puVar14 = puVar5 + lVar4;
        puVar5 = puVar15 + lVar4 + 4;
        puVar15 = puVar14;
      }
      *puVar5 = (char)((uint)(iVar12 + 8 + iVar8 * 3) >> 4);
      puVar15[3] = (char)(iVar8 * 4 + 7U >> 4);
      pbVar9 = *(byte **)(param_3 + lVar10 * 8);
      pbVar6 = *(byte **)(param_3 + 8 + lVar10 * 8);
      puVar15 = *(undefined1 **)(lVar3 + 8 + lVar11 * 8);
      iVar12 = (uint)*pbVar6 + (uint)*pbVar9 + (uint)*pbVar9 * 2;
      iVar8 = (uint)pbVar6[1] + (uint)pbVar9[1] + (uint)pbVar9[1] * 2;
      *puVar15 = (char)(iVar12 * 4 + 8U >> 4);
      puVar15[1] = (char)((uint)(iVar12 * 3 + 7 + iVar8) >> 4);
      iVar7 = *(int *)(param_2 + 0x28);
      puVar5 = puVar15 + 2;
      if (iVar7 != 2) {
        pbVar6 = pbVar6 + 2;
        pbVar9 = pbVar9 + 2;
        lVar4 = (ulonglong)(iVar7 - 3) * 2;
        iVar7 = 2 - iVar7;
        puVar14 = puVar5;
        iVar13 = iVar12;
        do {
          iVar12 = iVar8;
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          iVar8 = (uint)bVar2 + (uint)bVar1 + (uint)bVar1 * 2;
          *puVar14 = (char)((uint)(iVar13 + 8 + iVar12 * 3) >> 4);
          puVar14[1] = (char)((uint)(iVar12 * 3 + 7 + iVar8) >> 4);
          puVar14 = puVar14 + 2;
          iVar7 = iVar7 + 1;
          iVar13 = iVar12;
        } while (iVar7 != 0);
        puVar14 = puVar5 + lVar4;
        puVar5 = puVar15 + lVar4 + 4;
        puVar15 = puVar14;
      }
      lVar10 = lVar10 + 1;
      *puVar5 = (char)((uint)(iVar12 + 8 + iVar8 * 3) >> 4);
      puVar15[3] = (char)(iVar8 * 4 + 7U >> 4);
      lVar11 = lVar11 + 2;
    } while ((int)lVar11 < *(int *)(param_1 + 0x19c));
  }
  return;
}

