/* Ghidra address: 004aec30 */
/* Ghidra symbol: FUN_004aec30 */


void FUN_004aec30(longlong *param_1,int param_2,longlong param_3)

{
  if ((param_2 < 0) || ((int)param_1[2] < param_2)) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)param_2);
  }
  if ((int)param_1[2] == *(int *)((longlong)param_1 + 0x14)) {
    (**(code **)*param_1)(param_1);
  }
  if (param_2 < (int)param_1[2]) {
    FUN_00409a70(param_1[1] + (longlong)param_2 * 8,param_1[1] + (longlong)(param_2 + 1) * 8,
                 (longlong)(((int)param_1[2] - param_2) * 8));
  }
  *(longlong *)(param_1[1] + (longlong)param_2 * 8) = param_3;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  if ((param_3 != 0) && ((undefined **)*param_1 != &PTR_FUN_00472dd0)) {
    (**(code **)(*param_1 + 8))(param_1,param_3,0);
  }
  return;
}

