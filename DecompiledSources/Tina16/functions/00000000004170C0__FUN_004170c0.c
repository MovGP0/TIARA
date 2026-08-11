/* Ghidra address: 004170c0 */
/* Ghidra symbol: FUN_004170c0 */


int FUN_004170c0(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (((param_1 != (short *)0x0) && (param_2 != 0)) && (0 < param_3)) {
    iVar1 = *(int *)(param_1 + -2);
    iVar3 = ((*(int *)(param_2 + -4) - param_3) - iVar1) + 2;
    if ((0 < iVar1) && (0 < iVar3)) {
      param_2 = param_2 + (longlong)(param_3 + -1) * 2;
      iVar2 = 0;
      if (iVar1 == 1) {
        do {
          if (*(short *)(param_2 + (longlong)iVar2 * 2) == *param_1) {
            return iVar2 + param_3;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar3);
      }
      else {
        do {
          if (*(short *)(param_2 + (longlong)iVar2 * 2) == *param_1) {
            iVar4 = 1;
            while (*(short *)(param_2 + (longlong)(iVar2 + iVar4) * 2) == param_1[iVar4]) {
              iVar4 = iVar4 + 1;
              if (iVar4 == iVar1) {
                return iVar2 + param_3;
              }
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar3);
      }
    }
  }
  return 0;
}

