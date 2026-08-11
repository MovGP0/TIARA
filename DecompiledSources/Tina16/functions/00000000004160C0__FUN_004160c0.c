/* Ghidra address: 004160c0 */
/* Ghidra symbol: FUN_004160c0 */


void FUN_004160c0(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar6 = param_2;
  if (-1 < param_2 + -1) {
    do {
      lVar3 = *(longlong *)(param_3 + (longlong)iVar4 * 8);
      if (lVar3 != 0) {
        iVar1 = *(int *)(lVar3 + -4);
        iVar5 = iVar5 + iVar1 / 2;
        if (iVar5 < 0) {
          FUN_00410ab0(2,(longlong)iVar1 % 2 & 0xffffffff);
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  lVar3 = FUN_00414450(iVar5);
  iVar4 = 0;
  iVar6 = 0;
  if (-1 < param_2 + -1) {
    do {
      lVar2 = *(longlong *)(param_3 + (longlong)iVar6 * 8);
      if (lVar2 != 0) {
        FUN_00409a70(lVar2,lVar3 + (longlong)iVar4 * 2,(longlong)((*(int *)(lVar2 + -4) / 2) * 2));
        iVar4 = iVar4 + *(int *)(lVar2 + -4) / 2;
      }
      iVar6 = iVar6 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_00415e00(param_1,lVar3);
  return;
}

