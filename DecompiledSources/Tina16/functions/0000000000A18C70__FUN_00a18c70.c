/* Ghidra address: 00a18c70 */
/* Ghidra symbol: FUN_00a18c70 */


void FUN_00a18c70(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  ulonglong uVar11;
  short sVar12;
  short *psVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_1a8 [100];
  
  fVar6 = DAT_01e6fa78;
  fVar5 = DAT_01e6fa74;
  fVar4 = DAT_01e6fa70;
  fVar3 = DAT_01e6fa6c;
  pfVar9 = local_1a8;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  pfVar8 = *(float **)(param_2 + 0x58);
  psVar13 = (short *)(param_3 + 0x70);
  uVar7 = 9;
  do {
    sVar12 = psVar13[-0x28];
    if (psVar13[-0x30] == 0 && sVar12 == 0) {
      if ((((psVar13[-0x20] != 0) || (psVar13[-0x18] != 0)) || (psVar13[-0x10] != 0)) ||
         ((psVar13[-8] != 0 || (*psVar13 != 0)))) {
        sVar12 = 0;
        goto LAB_00a18da2;
      }
      fVar23 = (float)(int)psVar13[-0x38] * *pfVar8;
      *pfVar9 = fVar23;
      pfVar9[8] = fVar23;
      pfVar9[0x10] = fVar23;
      pfVar9[0x18] = fVar23;
      pfVar9[0x20] = fVar23;
      pfVar9[0x28] = fVar23;
      pfVar9[0x30] = fVar23;
      lVar10 = 0x38;
    }
    else {
LAB_00a18da2:
      fVar23 = (float)(int)psVar13[-0x38] * *pfVar8 + (float)(int)psVar13[-0x18] * pfVar8[0x20];
      fVar20 = (float)(int)psVar13[-0x38] * *pfVar8 - (float)(int)psVar13[-0x18] * pfVar8[0x20];
      fVar15 = (float)(int)sVar12 * pfVar8[0x10] + (float)(int)psVar13[-8] * pfVar8[0x30];
      fVar14 = ((float)(int)sVar12 * pfVar8[0x10] - (float)(int)psVar13[-8] * pfVar8[0x30]) *
               DAT_01e6fa6c - fVar15;
      fVar21 = fVar23 + fVar15;
      fVar23 = fVar23 - fVar15;
      fVar17 = fVar20 + fVar14;
      fVar20 = fVar20 - fVar14;
      fVar16 = (float)(int)psVar13[-0x30] * pfVar8[8];
      fVar14 = (float)(int)psVar13[-0x20] * pfVar8[0x18] + (float)(int)psVar13[-0x10] * pfVar8[0x28]
      ;
      fVar18 = (float)(int)psVar13[-0x10] * pfVar8[0x28] - (float)(int)psVar13[-0x20] * pfVar8[0x18]
      ;
      fVar22 = fVar16 + (float)(int)*psVar13 * pfVar8[0x38];
      fVar16 = fVar16 - (float)(int)*psVar13 * pfVar8[0x38];
      fVar19 = fVar14 + fVar22;
      fVar15 = (fVar18 + fVar16) * DAT_01e6fa70;
      fVar18 = (fVar18 * DAT_01e6fa78 + fVar15) - fVar19;
      fVar22 = (fVar22 - fVar14) * DAT_01e6fa6c - fVar18;
      fVar14 = (fVar16 * DAT_01e6fa74 - fVar15) + fVar22;
      *pfVar9 = fVar21 + fVar19;
      pfVar9[0x38] = fVar21 - fVar19;
      pfVar9[8] = fVar17 + fVar18;
      pfVar9[0x30] = fVar17 - fVar18;
      pfVar9[0x10] = fVar20 + fVar22;
      pfVar9[0x28] = fVar20 - fVar22;
      pfVar9[0x20] = fVar23 + fVar14;
      fVar23 = fVar23 - fVar14;
      lVar10 = 0x18;
    }
    pfVar9[lVar10] = fVar23;
    pfVar9 = pfVar9 + 1;
    pfVar8 = pfVar8 + 1;
    uVar7 = uVar7 - 1;
    psVar13 = psVar13 + 1;
    if (uVar7 < 2) {
      uVar11 = (ulonglong)param_5;
      lVar10 = 0;
      do {
        lVar2 = *(longlong *)(param_4 + lVar10);
        fVar21 = local_1a8[lVar10] + local_1a8[lVar10 + 4];
        fVar22 = local_1a8[lVar10] - local_1a8[lVar10 + 4];
        fVar23 = local_1a8[lVar10 + 2] + local_1a8[lVar10 + 6];
        fVar17 = fVar21 + fVar23;
        fVar19 = local_1a8[lVar10 + 5] + local_1a8[lVar10 + 3];
        fVar14 = local_1a8[lVar10 + 5] - local_1a8[lVar10 + 3];
        fVar21 = fVar21 - fVar23;
        fVar20 = local_1a8[lVar10 + 1] + local_1a8[lVar10 + 7];
        fVar18 = local_1a8[lVar10 + 1] - local_1a8[lVar10 + 7];
        fVar23 = (local_1a8[lVar10 + 2] - local_1a8[lVar10 + 6]) * fVar3 - fVar23;
        fVar16 = fVar19 + fVar20;
        fVar24 = fVar22 + fVar23;
        fVar15 = (fVar14 + fVar18) * fVar4;
        fVar22 = fVar22 - fVar23;
        fVar23 = (fVar14 * fVar6 + fVar15) - fVar16;
        fVar19 = (fVar20 - fVar19) * fVar3 - fVar23;
        *(undefined1 *)(lVar2 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar17 + fVar16) + 4U >> 3 & 0x3ff));
        fVar14 = (fVar18 * fVar5 - fVar15) + fVar19;
        *(undefined1 *)(lVar2 + 7 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar17 - fVar16) + 4U >> 3 & 0x3ff));
        *(undefined1 *)(lVar2 + 1 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar24 + fVar23) + 4U >> 3 & 0x3ff));
        *(undefined1 *)(lVar2 + 6 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar24 - fVar23) + 4U >> 3 & 0x3ff));
        *(undefined1 *)(lVar2 + 2 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar22 + fVar19) + 4U >> 3 & 0x3ff));
        *(undefined1 *)(lVar2 + 5 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar22 - fVar19) + 4U >> 3 & 0x3ff));
        *(undefined1 *)(lVar2 + 4 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar21 + fVar14) + 4U >> 3 & 0x3ff));
        lVar10 = lVar10 + 8;
        *(undefined1 *)(lVar2 + 3 + uVar11) =
             *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((int)(fVar21 - fVar14) + 4U >> 3 & 0x3ff));
      } while (lVar10 != 0x40);
      return;
    }
  } while( true );
}

