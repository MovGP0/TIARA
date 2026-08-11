/* Ghidra address: 00b0acb0 */
/* Ghidra symbol: FUN_00b0acb0 */


void FUN_00b0acb0(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(int *)(param_1 + 0x644) == -1) {
    *(undefined4 *)(param_1 + 0x644) = *(undefined4 *)(param_1 + 0x4c0);
  }
  FUN_00416ba0(local_20,&DAT_00b0adcc,local_res18[0]);
  FUN_0084e3e0(param_1,0,param_2,local_20[0]);
  (**(code **)(*param_4 + 0x18))(param_4,&local_28);
  FUN_00b0b2a0(param_1,1,param_2,local_28);
  FUN_0084e470(param_1,1,param_2,param_4);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return;
}

