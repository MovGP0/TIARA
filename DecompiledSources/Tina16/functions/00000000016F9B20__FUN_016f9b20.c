/* Ghidra address: 016f9b20 */
/* Ghidra symbol: FUN_016f9b20 */


longlong * FUN_016f9b20(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  FUN_00414bf0(param_1);
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if ((iVar1 % param_3 != 0) || (iVar1 == 0)) {
    FUN_00415d10(param_1,(iVar1 / param_3 + 1) * param_3,0);
    iVar1 = iVar1 + 1;
    iVar3 = 0;
    if (*param_1 != 0) {
      iVar3 = *(int *)(*param_1 + -4);
    }
    if (iVar1 <= iVar3) {
      iVar3 = (iVar3 - iVar1) + 1;
      do {
        lVar2 = FUN_00414df0(param_1);
        *(undefined1 *)(lVar2 + -1 + (longlong)iVar1) = 0;
        iVar1 = iVar1 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return param_1;
}

