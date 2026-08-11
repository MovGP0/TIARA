/* Ghidra address: 0059b9e0 */
/* Ghidra symbol: FUN_0059b9e0 */


void FUN_0059b9e0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + -8);
  }
  if ((int)param_1[1] == lVar1) {
    FUN_0059b950(param_1);
  }
  *(undefined1 *)(*param_1 + (longlong)(int)param_1[1]) = *param_2;
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  (*(code *)param_1[4])(param_1[3],param_2,1);
  return;
}

