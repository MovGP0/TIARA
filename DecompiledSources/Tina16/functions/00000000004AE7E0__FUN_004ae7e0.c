/* Ghidra address: 004ae7e0 */
/* Ghidra symbol: FUN_004ae7e0 */


int FUN_004ae7e0(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[2];
  if (iVar1 == *(int *)((longlong)param_1 + 0x14)) {
    (**(code **)*param_1)(param_1);
  }
  *(longlong *)(param_1[1] + (longlong)iVar1 * 8) = param_2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  if ((param_2 != 0) && ((undefined **)*param_1 != &PTR_FUN_00472dd0)) {
    (**(code **)(*param_1 + 8))(param_1,param_2,0);
  }
  return iVar1;
}

