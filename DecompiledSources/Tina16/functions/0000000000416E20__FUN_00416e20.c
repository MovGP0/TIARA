/* Ghidra address: 00416e20 */
/* Ghidra symbol: FUN_00416e20 */


void FUN_00416e20(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  
  FUN_00414d20(param_1);
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
    FUN_00409a70(*param_1 + (longlong)(iVar1 - param_3) * 2,*param_1 + (longlong)param_2 * 2,
                 (longlong)(param_3 * 2));
    FUN_004169f0(param_1,param_2 + param_3);
  }
  return;
}

