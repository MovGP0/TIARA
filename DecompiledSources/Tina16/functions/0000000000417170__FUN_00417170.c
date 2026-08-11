/* Ghidra address: 00417170 */
/* Ghidra symbol: FUN_00417170 */


int FUN_00417170(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_1 != 0) {
    uVar7 = *(uint *)(param_1 + -4) >> 1;
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + -4) >> 1;
  }
  iVar5 = (uVar1 - param_3) - uVar7;
  iVar6 = iVar5 + 1;
  if (((0 < param_3) && (-1 < iVar6)) && (uVar7 != 0)) {
    lVar3 = FUN_00415f70();
    lVar4 = FUN_00415f70();
    iVar2 = 0;
    if (-1 < iVar6) {
      iVar5 = iVar5 + 2;
      do {
        iVar6 = 0;
        while ((-1 < iVar6 && (iVar6 < (int)uVar7))) {
          if (*(short *)(lVar4 + (longlong)(param_3 + -1) * 2 + (longlong)(iVar2 + iVar6) * 2) ==
              *(short *)(lVar3 + (longlong)iVar6 * 2)) {
            iVar6 = iVar6 + 1;
          }
          else {
            iVar6 = -1;
          }
        }
        if ((int)uVar7 <= iVar6) {
          return iVar2 + param_3;
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

