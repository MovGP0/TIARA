/* Ghidra address: 018d3bb0 */
/* Ghidra symbol: FUN_018d3bb0 */


void FUN_018d3bb0(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_4) {
    iVar2 = ((param_3 - param_2) + 1) / 2;
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    if (param_4 == 1) {
      piVar1 = (int *)(param_1 + (longlong)(param_2 + iVar2 + -1) * 4);
      *piVar1 = *piVar1 + param_5;
    }
    else {
      FUN_018d3bb0(param_1,param_2,param_2 + iVar2 + -1,(longlong)param_4 / 2 & 0xffffffff,param_5);
      FUN_018d3bb0(param_1,param_2 + iVar2,param_3,param_4 - (int)((longlong)param_4 / 2),param_5);
    }
  }
  return;
}

