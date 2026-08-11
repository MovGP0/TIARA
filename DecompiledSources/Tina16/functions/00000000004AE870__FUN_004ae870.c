/* Ghidra address: 004ae870 */
/* Ghidra symbol: FUN_004ae870 */


void FUN_004ae870(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)param_2);
  }
  lVar1 = *(longlong *)(param_1[1] + (longlong)param_2 * 8);
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  if (param_2 < (int)param_1[2]) {
    FUN_00409a70(param_1[1] + (longlong)(param_2 + 1) * 8,param_1[1] + (longlong)param_2 * 8,
                 (longlong)(((int)param_1[2] - param_2) * 8));
  }
  if ((lVar1 != 0) && ((undefined **)*param_1 != &PTR_FUN_00472dd0)) {
    (**(code **)(*param_1 + 8))(param_1,lVar1,2);
  }
  return;
}

