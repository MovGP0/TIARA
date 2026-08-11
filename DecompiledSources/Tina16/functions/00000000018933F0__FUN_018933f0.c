/* Ghidra address: 018933f0 */
/* Ghidra symbol: FUN_018933f0 */


void FUN_018933f0(longlong *param_1,int param_2)

{
  int iVar1;
  int local_res10 [6];
  
  local_res10[0] = param_2;
  if (param_1[0x9a] != 0) {
    (*(code *)param_1[0x9a])(param_1[0x9b],param_1,1,local_res10);
  }
  iVar1 = (int)param_1[0x97] - (int)param_1[0x96];
  if (iVar1 < local_res10[0]) {
    local_res10[0] = iVar1;
  }
  if (local_res10[0] < 0) {
    local_res10[0] = 0;
  }
  if (local_res10[0] != *(int *)((longlong)param_1 + 0x4b4)) {
    *(int *)((longlong)param_1 + 0x4b4) = local_res10[0];
    FUN_01893500(param_1,local_res10[0],1);
    (**(code **)(*param_1 + 0x270))(param_1,param_1);
  }
  return;
}

