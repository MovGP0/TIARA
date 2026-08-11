/* Ghidra address: 00456bf0 */
/* Ghidra symbol: FUN_00456bf0 */


int FUN_00456bf0(longlong *param_1,longlong param_2,short param_3,short param_4,int param_5)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar6 = 0;
  if (param_2 != 0) {
    iVar6 = *(int *)(param_2 + -4);
  }
  iVar8 = 0;
  if (*param_1 != 0) {
    iVar8 = *(int *)(*param_1 + -4);
  }
  iVar8 = (iVar8 - param_5) - iVar6;
  iVar9 = iVar8 + 1;
  if (((-1 < param_5) && (-1 < iVar9)) && (0 < iVar6)) {
    lVar4 = FUN_00416740(param_2);
    lVar5 = FUN_00416740();
    lVar5 = lVar5 + (longlong)param_5 * 2;
    if (param_3 == param_4) {
      bVar2 = false;
      iVar3 = 0;
      if (-1 < iVar9) {
        iVar8 = iVar8 + 2;
        do {
          iVar9 = 0;
          while ((-1 < iVar9 && (iVar9 < iVar6))) {
            sVar1 = *(short *)(lVar5 + (longlong)(iVar3 + iVar9) * 2);
            if (sVar1 == param_3) {
              bVar2 = !bVar2;
            }
            if (bVar2) {
              iVar9 = -1;
            }
            else if (sVar1 == *(short *)(lVar4 + (longlong)iVar9 * 2)) {
              iVar9 = iVar9 + 1;
            }
            else {
              iVar9 = -1;
            }
          }
          if (iVar6 <= iVar9) {
            return iVar3 + param_5;
          }
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      iVar7 = 0;
      iVar3 = 0;
      if (-1 < iVar9) {
        iVar8 = iVar8 + 2;
        do {
          iVar9 = 0;
          while ((-1 < iVar9 && (iVar9 < iVar6))) {
            sVar1 = *(short *)(lVar5 + (longlong)(iVar3 + iVar9) * 2);
            if (sVar1 == param_3) {
              iVar7 = iVar7 + 1;
            }
            else if (sVar1 == param_4) {
              iVar7 = iVar7 + -1;
            }
            if (iVar7 < 1) {
              if (sVar1 == *(short *)(lVar4 + (longlong)iVar9 * 2)) {
                iVar9 = iVar9 + 1;
              }
              else {
                iVar9 = -1;
              }
            }
            else {
              iVar9 = -1;
            }
          }
          if (iVar6 <= iVar9) {
            return iVar3 + param_5;
          }
          iVar3 = iVar3 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
  }
  return -1;
}

