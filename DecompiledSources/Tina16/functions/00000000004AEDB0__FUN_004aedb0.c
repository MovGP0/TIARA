/* Ghidra address: 004aedb0 */
/* Ghidra symbol: FUN_004aedb0 */


void FUN_004aedb0(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004ae960(*param_1,PTR_PTR_02004940,(longlong)param_2);
  }
  lVar1 = *(longlong *)(param_1[1] + (longlong)param_2 * 8);
  if ((param_3 != lVar1) &&
     (*(longlong *)(param_1[1] + (longlong)param_2 * 8) = param_3,
     (undefined **)*param_1 != &PTR_FUN_00472dd0)) {
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 8))(param_1,lVar1,2);
    }
    if (param_3 != 0) {
      (**(code **)(*param_1 + 8))(param_1,param_3,0);
    }
  }
  return;
}

