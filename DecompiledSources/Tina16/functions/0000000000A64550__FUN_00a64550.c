/* Ghidra address: 00a64550 */
/* Ghidra symbol: FUN_00a64550 */


void FUN_00a64550(longlong *param_1,longlong param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  *param_4 = 0;
  while( true ) {
    if ((param_3 < *param_4) || (*param_1 == 0)) {
      return;
    }
    iVar1 = FUN_004170c0(L"url(",*param_1,1);
    if (iVar1 == 0) {
      iVar1 = FUN_004170c0(L"rgb(",*param_1,1);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_004170c0(L"rgba(",*param_1,1);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_004170c0(L"hsla(",*param_1,1);
    }
    if (iVar1 == 0) {
      iVar1 = FUN_004170c0(L"hsl(",*param_1,1);
    }
    if (iVar1 == 0) break;
    iVar2 = FUN_004170c0(&DAT_00a6471c,*param_1,1);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 < iVar1) {
      return;
    }
    iVar2 = (iVar2 - iVar1) + 1;
    FUN_00416dc0(param_2 + (longlong)*param_4 * 8,*param_1,iVar1,iVar2);
    FUN_00416e20(param_1,iVar1,iVar2);
    *param_4 = *param_4 + 1;
  }
  return;
}

