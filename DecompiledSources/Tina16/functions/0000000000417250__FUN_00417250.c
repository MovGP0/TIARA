/* Ghidra address: 00417250 */
/* Ghidra symbol: FUN_00417250 */


int FUN_00417250(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  if (param_1 != 0) {
    iVar6 = *(int *)(param_1 + -4);
  }
  iVar4 = 0;
  if (param_2 != 0) {
    iVar4 = *(int *)(param_2 + -4);
  }
  iVar4 = (iVar4 - param_3) - iVar6;
  iVar5 = iVar4 + 1;
  if (((0 < param_3) && (-1 < iVar5)) && (0 < iVar6)) {
    lVar2 = FUN_00415ab0();
    lVar3 = FUN_00415ab0();
    iVar1 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar4 + 2;
      do {
        iVar5 = 0;
        while ((-1 < iVar5 && (iVar5 < iVar6))) {
          if (*(char *)(lVar3 + (param_3 + -1) + (longlong)(iVar1 + iVar5)) ==
              *(char *)(lVar2 + iVar5)) {
            iVar5 = iVar5 + 1;
          }
          else {
            iVar5 = -1;
          }
        }
        if (iVar6 <= iVar5) {
          return iVar1 + param_3;
        }
        iVar1 = iVar1 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

