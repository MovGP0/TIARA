/* Ghidra address: 0118b540 */
/* Ghidra symbol: FUN_0118b540 */


undefined8 FUN_0118b540(longlong *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar4 = *(int *)(*param_1 + 0x1fa0);
  iVar2 = iVar4 + -1;
  dVar9 = (double)iVar2 / 2.0;
  dVar10 = (*(double *)(*param_1 + 0x30) + *(double *)(*param_1 + 0x20)) /
           (*(double *)(*param_1 + 0x40) * 2.0);
  dVar11 = (*(double *)(*param_1 + 0x38) + *(double *)(*param_1 + 0x28)) /
           (*(double *)(*param_1 + 0x40) * 2.0);
  sVar1 = *(short *)(*param_1 + 0x1fa4);
  if (sVar1 == 0x48) {
    iVar3 = 0;
    if (-1 < iVar2) {
      do {
        if ((double)iVar3 == dVar9) {
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) =
               (3.1415926535898 - dVar10) / 3.1415926535898;
        }
        else {
          dVar6 = (double)iVar3 - dVar9;
          dVar11 = (double)FUN_0040bdd0(dVar6 * 3.1415926535898);
          dVar5 = (double)FUN_0040bdd0(dVar10 * dVar6);
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) =
               (dVar11 - dVar5) / (dVar6 * 3.1415926535898);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (sVar1 == 0x4c) {
    iVar3 = 0;
    if (-1 < iVar2) {
      do {
        if ((double)iVar3 == dVar9) {
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) = dVar10 / 3.1415926535898;
        }
        else {
          dVar11 = (double)FUN_0040bdd0(dVar10 * ((double)iVar3 - dVar9));
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) =
               dVar11 / (((double)iVar3 - dVar9) * 3.1415926535898);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (sVar1 == 0x50) {
    iVar3 = 0;
    if (-1 < iVar2) {
      do {
        if ((double)iVar3 == dVar9) {
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) = (dVar11 - dVar10) / 3.1415926535898;
        }
        else {
          dVar7 = (double)iVar3 - dVar9;
          dVar5 = (double)FUN_0040bdd0(dVar11 * dVar7);
          dVar6 = (double)FUN_0040bdd0(dVar10 * dVar7);
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) =
               (dVar5 - dVar6) / (dVar7 * 3.1415926535898);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else {
    if (sVar1 != 0x53) {
      return 3;
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      do {
        if ((double)iVar3 == dVar9) {
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) =
               ((dVar10 - dVar11) + 3.1415926535898) / 3.1415926535898;
        }
        else {
          dVar8 = (double)iVar3 - dVar9;
          dVar5 = (double)FUN_0040bdd0(dVar8 * 3.1415926535898);
          dVar6 = (double)FUN_0040bdd0(dVar11 * dVar8);
          dVar7 = (double)FUN_0040bdd0(dVar10 * dVar8);
          *(double *)(*param_1 + 0xff8 + (longlong)iVar3 * 8) =
               ((dVar5 - dVar6) + dVar7) / (dVar8 * 3.1415926535898);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

