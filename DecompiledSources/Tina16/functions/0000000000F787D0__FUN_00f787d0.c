/* Ghidra address: 00f787d0 */
/* Ghidra symbol: FUN_00f787d0 */


void FUN_00f787d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e130(&local_18,local_res18[0]);
  FUN_00416ba0(&local_10,&LAB_00f78888,local_18);
  (**(code **)(*param_2 + 0x78))(param_2,local_10);
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return;
}

