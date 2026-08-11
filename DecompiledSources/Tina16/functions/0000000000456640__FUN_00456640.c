/* Ghidra address: 00456640 */
/* Ghidra symbol: FUN_00456640 */


int FUN_00456640(longlong *param_1,longlong param_2,int param_3,short param_4,short param_5,
                int param_6,int param_7)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + -4);
  }
  param_7 = param_6 + param_7;
  if ((iVar3 <= param_7) && (param_7 = 0, lVar2 != 0)) {
    param_7 = *(int *)(lVar2 + -4);
  }
  if (param_4 == param_5) {
    bVar1 = false;
    for (; param_6 < param_7; param_6 = param_6 + 1) {
      if (*(short *)(*param_1 + (longlong)param_6 * 2) == param_4) {
        bVar1 = !bVar1;
      }
      if (!bVar1) {
        for (lVar2 = 0; lVar2 <= param_3; lVar2 = lVar2 + 1) {
          if (*(short *)(*param_1 + (longlong)param_6 * 2) == *(short *)(param_2 + lVar2 * 2)) {
            return param_6;
          }
        }
      }
    }
  }
  else {
    iVar3 = 0;
    for (; param_6 < param_7; param_6 = param_6 + 1) {
      if (*(short *)(*param_1 + (longlong)param_6 * 2) == param_4) {
        iVar3 = iVar3 + 1;
      }
      else if ((*(short *)(*param_1 + (longlong)param_6 * 2) == param_5) && (0 < iVar3)) {
        iVar3 = iVar3 + -1;
      }
      if (iVar3 == 0) {
        for (lVar2 = 0; lVar2 <= param_3; lVar2 = lVar2 + 1) {
          if (*(short *)(*param_1 + (longlong)param_6 * 2) == *(short *)(param_2 + lVar2 * 2)) {
            return param_6;
          }
        }
      }
    }
  }
  return -1;
}

