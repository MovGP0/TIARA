/* Ghidra address: 00456900 */
/* Ghidra symbol: FUN_00456900 */


int FUN_00456900(longlong *param_1,short param_2,int param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    iVar3 = *(int *)(lVar1 + -4);
  }
  iVar2 = param_3;
  if (iVar3 <= param_3) {
    iVar3 = 0;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + -4);
    }
    iVar2 = iVar3 + -1;
  }
  if (param_3 - param_4 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (param_3 - param_4) + 1;
  }
  while( true ) {
    if (iVar2 < iVar3) {
      return -1;
    }
    if (*(short *)(*param_1 + (longlong)iVar2 * 2) == param_2) break;
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

