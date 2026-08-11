/* Ghidra address: 00415b50 */
/* Ghidra symbol: FUN_00415b50 */


void FUN_00415b50(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_00414d80(param_1);
  iVar1 = 0;
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + -4);
  }
  if (((0 < param_2) && (param_2 <= iVar1)) && (0 < param_3)) {
    param_2 = param_2 + -1;
    param_3 = (iVar1 - param_2) - param_3;
    if (param_3 < 0) {
      param_3 = 0;
    }
    FUN_00409a70(*param_1 + (longlong)(iVar1 - param_3),*param_1 + (longlong)param_2,
                 (longlong)param_3);
    FUN_00415d10(param_1,param_2 + param_3,*(undefined2 *)(*param_1 + -0xc));
  }
  return;
}

