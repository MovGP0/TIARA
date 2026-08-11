/* Ghidra address: 00456550 */
/* Ghidra symbol: FUN_00456550 */


int FUN_00456550(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + -4);
  }
  param_5 = param_4 + param_5;
  if ((iVar1 <= param_5) && (param_5 = 0, lVar2 != 0)) {
    param_5 = *(int *)(lVar2 + -4);
  }
  do {
    if (param_5 <= param_4) {
      return -1;
    }
    for (lVar2 = 0; lVar2 <= param_3; lVar2 = lVar2 + 1) {
      if (*(short *)(*param_1 + (longlong)param_4 * 2) == *(short *)(param_2 + lVar2 * 2)) {
        return param_4;
      }
    }
    param_4 = param_4 + 1;
  } while( true );
}

