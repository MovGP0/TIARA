/* Ghidra address: 00a19190 */
/* Ghidra symbol: FUN_00a19190 */


void FUN_00a19190(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  short *psVar16;
  byte *pbVar17;
  int *piVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint local_148 [66];
  
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  piVar18 = *(int **)(param_2 + 0x58);
  puVar9 = local_148;
  psVar16 = (short *)(param_3 + 0x70);
  uVar22 = 9;
  do {
    sVar3 = psVar16[-0x28];
    if (psVar16[-0x30] == 0 && sVar3 == 0) {
      if ((((psVar16[-0x20] != 0) || (psVar16[-0x18] != 0)) || (psVar16[-0x10] != 0)) ||
         ((psVar16[-8] != 0 || (*psVar16 != 0)))) {
        sVar3 = 0;
        goto LAB_00a19242;
      }
      uVar20 = (int)psVar16[-0x38] * *piVar18;
      *puVar9 = uVar20;
      puVar9[8] = uVar20;
      puVar9[0x10] = uVar20;
      puVar9[0x18] = uVar20;
      puVar9[0x20] = uVar20;
      puVar9[0x28] = uVar20;
      puVar9[0x30] = uVar20;
      lVar5 = 0x38;
    }
    else {
LAB_00a19242:
      iVar19 = (int)psVar16[-0x18] * piVar18[0x20] + (int)psVar16[-0x38] * *piVar18;
      iVar10 = (int)psVar16[-0x38] * *piVar18 - (int)psVar16[-0x18] * piVar18[0x20];
      iVar12 = (int)psVar16[-8] * piVar18[0x30] + (int)sVar3 * piVar18[0x10];
      iVar4 = (((int)sVar3 * piVar18[0x10] - (int)psVar16[-8] * piVar18[0x30]) * 0x16a >> 8) -
              iVar12;
      iVar21 = iVar12 + iVar19;
      iVar19 = iVar19 - iVar12;
      iVar12 = iVar4 + iVar10;
      iVar10 = iVar10 - iVar4;
      iVar13 = (int)psVar16[-0x30] * piVar18[8];
      iVar4 = (int)psVar16[-0x10] * piVar18[0x28] + (int)psVar16[-0x20] * piVar18[0x18];
      iVar15 = (int)psVar16[-0x10] * piVar18[0x28] - (int)psVar16[-0x20] * piVar18[0x18];
      iVar14 = (int)*psVar16 * piVar18[0x38] + iVar13;
      iVar13 = iVar13 - (int)*psVar16 * piVar18[0x38];
      iVar11 = iVar14 + iVar4;
      iVar6 = (iVar13 + iVar15) * 0x1d9 >> 8;
      iVar15 = ((iVar15 * -0x29d >> 8) - iVar11) + iVar6;
      iVar4 = ((iVar14 - iVar4) * 0x16a >> 8) - iVar15;
      iVar14 = ((iVar13 * 0x115 >> 8) - iVar6) + iVar4;
      *puVar9 = iVar11 + iVar21;
      puVar9[0x38] = iVar21 - iVar11;
      puVar9[8] = iVar15 + iVar12;
      puVar9[0x30] = iVar12 - iVar15;
      puVar9[0x10] = iVar4 + iVar10;
      puVar9[0x28] = iVar10 - iVar4;
      puVar9[0x20] = iVar14 + iVar19;
      uVar20 = iVar19 - iVar14;
      lVar5 = 0x18;
    }
    puVar9[lVar5] = uVar20;
    puVar9 = puVar9 + 1;
    piVar18 = piVar18 + 1;
    uVar22 = uVar22 - 1;
    psVar16 = psVar16 + 1;
  } while (1 < uVar22);
  lVar5 = 0;
  do {
    pbVar17 = (byte *)(*(longlong *)(param_4 + lVar5) + (ulonglong)param_5);
    uVar22 = local_148[lVar5 + 1];
    uVar20 = local_148[lVar5 + 2];
    if (uVar22 == 0 && local_148[lVar5 + 2] == 0) {
      uVar8 = 0;
      uVar20 = 0;
      if (((local_148[lVar5 + 3] != 0) || (local_148[lVar5 + 4] != 0)) ||
         ((uVar20 = uVar8, local_148[lVar5 + 5] != 0 ||
          ((local_148[lVar5 + 6] != 0 || (local_148[lVar5 + 7] != 0)))))) goto LAB_00a193f0;
      bVar2 = *(byte *)(lVar1 + 0x80 + (ulonglong)(local_148[lVar5] >> 5 & 0x3ff));
      *pbVar17 = bVar2;
      *(uint *)(pbVar17 + 1) = (uint)bVar2 * 0x1010101;
      *(short *)(pbVar17 + 5) = (short)((uint)bVar2 * 0x1010101);
      lVar7 = 7;
    }
    else {
LAB_00a193f0:
      iVar4 = local_148[lVar5 + 4] + local_148[lVar5];
      iVar6 = local_148[lVar5] - local_148[lVar5 + 4];
      iVar19 = local_148[lVar5 + 6] + uVar20;
      iVar12 = ((int)((uVar20 - local_148[lVar5 + 6]) * 0x16a) >> 8) - iVar19;
      iVar11 = iVar19 + iVar4;
      iVar4 = iVar4 - iVar19;
      iVar14 = iVar12 + iVar6;
      iVar6 = iVar6 - iVar12;
      iVar19 = local_148[lVar5 + 3] + local_148[lVar5 + 5];
      iVar13 = local_148[lVar5 + 5] - local_148[lVar5 + 3];
      iVar12 = local_148[lVar5 + 7] + uVar22;
      iVar15 = uVar22 - local_148[lVar5 + 7];
      iVar21 = iVar12 + iVar19;
      iVar10 = (iVar15 + iVar13) * 0x1d9 >> 8;
      iVar13 = ((iVar13 * -0x29d >> 8) - iVar21) + iVar10;
      iVar19 = ((iVar12 - iVar19) * 0x16a >> 8) - iVar13;
      iVar12 = ((iVar15 * 0x115 >> 8) - iVar10) + iVar19;
      *pbVar17 = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar21 + iVar11) >> 5 & 0x3ff));
      pbVar17[7] = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar11 - iVar21) >> 5 & 0x3ff));
      pbVar17[1] = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar13 + iVar14) >> 5 & 0x3ff));
      pbVar17[6] = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar14 - iVar13) >> 5 & 0x3ff));
      pbVar17[2] = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar19 + iVar6) >> 5 & 0x3ff));
      pbVar17[5] = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar6 - iVar19) >> 5 & 0x3ff));
      pbVar17[4] = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar12 + iVar4) >> 5 & 0x3ff));
      bVar2 = *(byte *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar4 - iVar12) >> 5 & 0x3ff));
      lVar7 = 3;
    }
    pbVar17[lVar7] = bVar2;
    lVar5 = lVar5 + 8;
    if (lVar5 == 0x40) {
      return;
    }
  } while( true );
}

