/* Ghidra address: 010b1b70 */
/* Ghidra symbol: FUN_010b1b70 */


void FUN_010b1b70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00416cd0(local_20,3,local_res10,&DAT_010b1c6c,local_res18);
  FUN_00441710(&local_28,local_20[0]);
  FUN_00440c30(local_28);
  (**(code **)(*param_1 + 0x100))(param_1,local_20[0]);
  FUN_00414560(&local_28,2);
  FUN_00414560(&local_res10,2);
  return;
}

