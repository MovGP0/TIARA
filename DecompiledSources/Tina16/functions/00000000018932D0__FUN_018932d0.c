/* Ghidra address: 018932d0 */
/* Ghidra symbol: FUN_018932d0 */


void FUN_018932d0(longlong *param_1,int param_2)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  if (param_1[0x9a] != 0) {
    (*(code *)param_1[0x9a])(param_1[0x9b],param_1,0,local_res10);
  }
  iVar1 = *(int *)((longlong)param_1 + 0x4a4) - *(int *)((longlong)param_1 + 0x49c);
  if (iVar1 < local_res10[0]) {
    local_res10[0] = iVar1;
  }
  if (local_res10[0] < 0) {
    local_res10[0] = 0;
  }
  if (local_res10[0] != (int)param_1[0x94]) {
    *(int *)(param_1 + 0x94) = local_res10[0];
    FUN_01893500(param_1,local_res10[0],0);
    (**(code **)(*param_1 + 0x268))(param_1,param_1);
  }
  return;
}

