/* Ghidra address: 01a9a580 */
/* Ghidra symbol: FUN_01a9a580 */


void FUN_01a9a580(longlong param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  iVar1 = thunk_FUN_041de4d6(*(undefined8 *)(param_1 + 0x140));
  if (iVar1 != 0) {
    if (local_res20[0] < local_res10[0]) {
      FUN_01cefdf0(local_res10,local_res20);
    }
    if (param_5 < local_res18[0]) {
      FUN_01cefdf0(local_res18,&param_5);
    }
    FUN_01a98380(param_1,local_res10[0],local_res18[0],local_1c,&local_20);
    FUN_01a98380(param_1,local_res20[0],param_5,&local_24,&local_28);
    local_1c[0] = local_1c[0] + -1;
    local_20 = local_20 + -1;
    local_24 = local_24 + 1;
    local_28 = local_28 + 1;
    local_34 = local_20 - *(int *)(param_1 + 0x18c);
    local_38 = local_1c[0] - *(int *)(param_1 + 0x188);
    local_2c = local_28 - *(int *)(param_1 + 0x18c);
    local_30 = local_24 - *(int *)(param_1 + 0x188);
    thunk_FUN_03a2fc9d(*(undefined8 *)(param_1 + 0x140),&local_38,0xffffffff);
  }
  return;
}

