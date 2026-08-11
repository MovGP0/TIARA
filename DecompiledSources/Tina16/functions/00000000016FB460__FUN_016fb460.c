/* Ghidra address: 016fb460 */
/* Ghidra symbol: FUN_016fb460 */


void FUN_016fb460(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414630(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00416880(local_20,local_res10);
  (**(code **)(*param_1 + 0x18))(param_1,L"webdedication",local_20[0],local_res18[0]);
  FUN_00414480(local_20);
  FUN_004144d0(&local_res10);
  FUN_00414480(local_res18);
  return;
}

