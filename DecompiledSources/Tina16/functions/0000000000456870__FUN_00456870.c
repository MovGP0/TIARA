/* Ghidra address: 00456870 */
/* Ghidra symbol: FUN_00456870 */


int FUN_00456870(longlong *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  do {
    do {
      iVar1 = iVar1 + -1;
      if (iVar1 < 0) {
        return -1;
      }
      iVar3 = 0;
      if (param_2 != 0) {
        iVar3 = *(int *)(param_2 + -4);
      }
      iVar2 = 0;
    } while (iVar3 + -1 < 0);
    do {
      if (*(short *)(*param_1 + (longlong)iVar1 * 2) == *(short *)(param_2 + (longlong)iVar2 * 2)) {
        return iVar1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  } while( true );
}

