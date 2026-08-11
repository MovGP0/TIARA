/* Ghidra address: 00b0ab70 */
/* Ghidra symbol: FUN_00b0ab70 */


void FUN_00b0ab70(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*(int *)(param_1 + 0x644) == -1) {
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x4c0);
  }
  FUN_00416ba0(local_20,&LAB_00b0aca8,local_res10[0]);
  FUN_0084e3e0(param_1,0,*(undefined4 *)(param_1 + 0x644),local_20[0]);
  (**(code **)(*param_3 + 0x18))(param_3,&local_28);
  FUN_00b0b2a0(param_1,1,*(undefined4 *)(param_1 + 0x644),local_28);
  FUN_0084e470(param_1,1,*(undefined4 *)(param_1 + 0x644),param_3);
  *(int *)(param_1 + 0x644) = *(int *)(param_1 + 0x644) + 1;
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

