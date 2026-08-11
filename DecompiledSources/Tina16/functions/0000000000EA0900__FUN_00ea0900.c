/* Ghidra address: 00ea0900 */
/* Ghidra symbol: FUN_00ea0900 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ea0900(longlong param_1,longlong param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar1 = param_3 * 2;
  if (param_3 < 1) {
    iVar11 = 8;
  }
  else {
    lVar2 = (longlong)iVar1;
    lVar5 = 2;
    if (1 < lVar2) {
      lVar5 = lVar2;
    }
    uVar9 = (lVar5 - 1U >> 1) + 1;
    if (uVar9 < 8) {
      iVar11 = 8;
      lVar5 = 0;
    }
    else {
      uVar15 = uVar9 & 0xfffffffffffffff8;
      lVar5 = uVar15 * 2;
      iVar18 = 8;
      iVar19 = 0;
      iVar20 = 0;
      iVar21 = 0;
      piVar10 = (int *)(param_2 + 0x20);
      iVar11 = 0;
      iVar16 = 0;
      iVar8 = 0;
      iVar17 = 0;
      uVar12 = uVar15;
      do {
        iVar18 = iVar18 + _DAT_01ee1450 +
                 ((piVar10[-7] - piVar10[-8]) * 2 & -(uint)(piVar10[-8] < piVar10[-7]));
        iVar19 = iVar19 + iRam0000000001ee1454 +
                 ((piVar10[-5] - piVar10[-6]) * 2 & -(uint)(piVar10[-6] < piVar10[-5]));
        iVar20 = iVar20 + iRam0000000001ee1458 +
                 ((piVar10[-3] - piVar10[-4]) * 2 & -(uint)(piVar10[-4] < piVar10[-3]));
        iVar21 = iVar21 + iRam0000000001ee145c +
                 ((piVar10[-1] - piVar10[-2]) * 2 & -(uint)(piVar10[-2] < piVar10[-1]));
        iVar11 = iVar11 + _DAT_01ee1450 +
                 ((piVar10[1] - *piVar10) * 2 & -(uint)(*piVar10 < piVar10[1]));
        iVar16 = iVar16 + iRam0000000001ee1454 +
                 ((piVar10[3] - piVar10[2]) * 2 & -(uint)(piVar10[2] < piVar10[3]));
        iVar8 = iVar8 + iRam0000000001ee1458 +
                ((piVar10[5] - piVar10[4]) * 2 & -(uint)(piVar10[4] < piVar10[5]));
        iVar17 = iVar17 + iRam0000000001ee145c +
                 ((piVar10[7] - piVar10[6]) * 2 & -(uint)(piVar10[6] < piVar10[7]));
        piVar10 = piVar10 + 0x10;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      iVar11 = iVar17 + iVar21 + iVar16 + iVar19 + iVar8 + iVar20 + iVar11 + iVar18;
      if (uVar9 == uVar15) goto LAB_00ea0a3c;
    }
    do {
      iVar11 = iVar11 + 10;
      iVar16 = *(int *)(param_2 + 4 + lVar5 * 4);
      piVar10 = (int *)(param_2 + lVar5 * 4);
      iVar8 = iVar16 - *piVar10;
      if (iVar8 != 0 && *piVar10 <= iVar16) {
        iVar11 = iVar11 + iVar8 * 2;
      }
      lVar5 = lVar5 + 2;
    } while (lVar5 < lVar2);
  }
LAB_00ea0a3c:
  puVar3 = (undefined8 *)(*(code *)PTR_FUN_01edf908)((longlong)iVar11);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0xfffffffa;
  }
  else {
    *param_4 = puVar3;
    if (0 < param_3) {
      puVar7 = puVar3 + (longlong)param_3 + 1;
      iVar11 = 2;
      if (1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar5 = 2;
      if (1 < (longlong)iVar1) {
        lVar5 = (longlong)iVar1;
      }
      uVar9 = lVar5 - 1U >> 1;
      uVar12 = (ulonglong)((int)uVar9 + 1U & 1);
      puVar13 = puVar3;
      if (uVar9 == 0) {
        uVar9 = 0;
      }
      else {
        lVar5 = (uVar12 - 1) - uVar9;
        uVar9 = 0;
        puVar6 = puVar7;
        do {
          iVar1 = *(int *)(param_2 + 4 + uVar9 * 4);
          iVar16 = *(int *)(param_2 + uVar9 * 4);
          uVar14 = iVar1 - iVar16;
          if (uVar14 == 0 || iVar1 < iVar16) {
            uVar14 = 0;
          }
          uVar15 = (ulonglong)uVar14;
          FUN_00626670(puVar6,param_1 + (longlong)iVar16 * 2,uVar14 * 2);
          *puVar13 = puVar6;
          lVar2 = (longlong)puVar6 + uVar15 * 2 + 2;
          *(undefined2 *)((longlong)puVar6 + uVar15 * 2) = 0;
          iVar1 = *(int *)(param_2 + 0xc + uVar9 * 4);
          iVar16 = *(int *)(param_2 + 8 + uVar9 * 4);
          uVar14 = iVar1 - iVar16;
          if (uVar14 == 0 || iVar1 < iVar16) {
            uVar14 = 0;
          }
          FUN_00626670(lVar2,param_1 + (longlong)iVar16 * 2,uVar14 * 2);
          puVar13[1] = lVar2;
          puVar13 = puVar13 + 2;
          puVar7 = (undefined8 *)((longlong)puVar6 + (ulonglong)uVar14 * 2 + uVar15 * 2 + 4);
          *(undefined2 *)((longlong)puVar6 + (ulonglong)uVar14 * 2 + uVar15 * 2 + 2) = 0;
          uVar9 = uVar9 + 4;
          lVar5 = lVar5 + 2;
          puVar6 = puVar7;
        } while (lVar5 != 0);
      }
      puVar3 = puVar3 + (ulonglong)(iVar11 - 1U >> 1) + 1;
      if (uVar12 != 0) {
        iVar1 = *(int *)(param_2 + (uVar9 | 1) * 4);
        iVar11 = *(int *)(param_2 + uVar9 * 4);
        uVar14 = iVar1 - iVar11;
        if (uVar14 == 0 || iVar1 < iVar11) {
          uVar14 = 0;
        }
        FUN_00626670(puVar7,param_1 + (longlong)iVar11 * 2,uVar14 * 2);
        *puVar13 = puVar7;
        *(undefined2 *)((longlong)puVar7 + (ulonglong)uVar14 * 2) = 0;
      }
    }
    *puVar3 = 0;
    uVar4 = 0;
  }
  return uVar4;
}

