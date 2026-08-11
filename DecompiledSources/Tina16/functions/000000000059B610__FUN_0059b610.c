/* Ghidra address: 0059b610 */
/* Ghidra symbol: FUN_0059b610 */


void FUN_0059b610(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
    FUN_00594f90();
  }
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + -8);
  }
  if (lVar1 < param_2) {
    FUN_0059b400(param_1,(longlong)param_2);
  }
  if (param_2 < (int)param_1[1]) {
    FUN_00598e40(param_1,param_2,(int)param_1[1] - param_2);
  }
  *(int *)(param_1 + 1) = param_2;
  return;
}

