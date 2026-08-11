/* Ghidra address: 016fb350 */
/* Ghidra symbol: FUN_016fb350 */


undefined8 FUN_016fb350(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414630(param_3);
  FUN_00414610(local_res20);
  FUN_00416880(local_20,local_res18);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,L"webdedication",local_20[0],local_res20);
  FUN_00414480(local_20);
  FUN_004144d0(&local_res18);
  FUN_00414480(&local_res20);
  return param_2;
}

