/* Ghidra address: 00a19570 */
/* Ghidra symbol: FUN_00a19570 */


void FUN_00a19570(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  short *psVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  int local_c8 [34];
  
  piVar12 = local_c8;
  lVar1 = *(longlong *)(param_1 + 0x1a8);
  piVar11 = *(int **)(param_2 + 0x58);
  psVar9 = (short *)(param_3 + 0x70);
  uVar14 = 8;
  do {
    uVar15 = 3;
    if (uVar14 != 4) {
      sVar3 = psVar9[-0x28];
      if (psVar9[-0x30] == 0 && sVar3 == 0) {
        if ((((psVar9[-0x20] != 0) || (psVar9[-0x10] != 0)) || (psVar9[-8] != 0)) || (*psVar9 != 0))
        {
          sVar3 = 0;
          goto LAB_00a19601;
        }
        iVar6 = (int)psVar9[-0x38] * *piVar11 * 4;
        *piVar12 = iVar6;
        piVar12[8] = iVar6;
        piVar12[0x10] = iVar6;
        lVar8 = 0x18;
      }
      else {
LAB_00a19601:
        iVar7 = (int)psVar9[-0x38] * *piVar11 * 0x4000;
        iVar4 = (int)psVar9[-8] * piVar11[0x30] * -0x187e + (int)sVar3 * piVar11[0x10] * 0x3b21;
        iVar6 = iVar7 + 0x800 + iVar4;
        iVar7 = iVar7 - iVar4;
        iVar10 = (int)psVar9[-0x30] * piVar11[8];
        iVar4 = iVar10 * 0x21f9 +
                (int)psVar9[-0x20] * piVar11[0x18] * -0x4587 +
                (int)psVar9[-0x10] * piVar11[0x28] * 0x2e75 + (int)*psVar9 * piVar11[0x38] * -0x6c2;
        iVar10 = iVar10 * 0x5203 +
                 (int)psVar9[-0x20] * piVar11[0x18] * 0x1ccd +
                 (int)psVar9[-0x10] * piVar11[0x28] * -0x133e +
                 (int)*psVar9 * piVar11[0x38] * -0x1050;
        *piVar12 = iVar6 + iVar10 >> 0xc;
        piVar12[0x18] = iVar6 - iVar10 >> 0xc;
        piVar12[8] = iVar7 + 0x800 + iVar4 >> 0xc;
        iVar6 = (iVar7 + 0x800) - iVar4 >> 0xc;
        lVar8 = 0x10;
      }
      piVar12[lVar8] = iVar6;
      if (uVar14 < 2) break;
      uVar15 = uVar14 - 1;
    }
    piVar11 = piVar11 + 1;
    piVar12 = piVar12 + 1;
    psVar9 = psVar9 + 1;
    uVar14 = uVar15;
  } while( true );
  lVar8 = 0;
  do {
    puVar13 = (undefined1 *)(*(longlong *)(param_4 + lVar8) + (ulonglong)param_5);
    iVar6 = local_c8[lVar8 + 1];
    iVar4 = local_c8[lVar8 + 2];
    if (iVar6 == 0 && local_c8[lVar8 + 2] == 0) {
      iVar4 = 0;
      if (((local_c8[lVar8 + 3] != 0) || (local_c8[lVar8 + 5] != 0)) ||
         ((iVar4 = 0, local_c8[lVar8 + 6] != 0 || (local_c8[lVar8 + 7] != 0)))) goto LAB_00a19780;
      uVar2 = *(undefined1 *)(lVar1 + 0x80 + (ulonglong)(local_c8[lVar8] + 0x10U >> 5 & 0x3ff));
      *puVar13 = uVar2;
      puVar13[1] = uVar2;
      puVar13[2] = uVar2;
      lVar5 = 3;
    }
    else {
LAB_00a19780:
      iVar10 = local_c8[lVar8 + 6] * -0x187e + iVar4 * 0x3b21;
      iVar4 = local_c8[lVar8] * 0x4000 + 0x40000 + iVar10;
      iVar10 = local_c8[lVar8] * 0x4000 - iVar10;
      iVar7 = iVar6 * 0x21f9 + local_c8[lVar8 + 7] * -0x6c2 + local_c8[lVar8 + 5] * 0x2e75 +
              local_c8[lVar8 + 3] * -0x4587;
      iVar6 = iVar6 * 0x5203 + local_c8[lVar8 + 7] * -0x1050 + local_c8[lVar8 + 5] * -0x133e +
              local_c8[lVar8 + 3] * 0x1ccd;
      *puVar13 = *(undefined1 *)(lVar1 + 0x80 + (ulonglong)((uint)(iVar4 + iVar6) >> 0x13 & 0x3ff));
      puVar13[3] = *(undefined1 *)
                    (lVar1 + 0x80 + (ulonglong)((uint)(iVar4 - iVar6) >> 0x13 & 0x3ff));
      puVar13[1] = *(undefined1 *)
                    (lVar1 + 0x80 + (ulonglong)((uint)(iVar10 + 0x40000 + iVar7) >> 0x13 & 0x3ff));
      uVar2 = *(undefined1 *)
               (lVar1 + 0x80 + (ulonglong)((uint)((iVar10 + 0x40000) - iVar7) >> 0x13 & 0x3ff));
      lVar5 = 2;
    }
    puVar13[lVar5] = uVar2;
    lVar8 = lVar8 + 8;
    if (lVar8 == 0x20) {
      return;
    }
  } while( true );
}

