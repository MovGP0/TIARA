/* Ghidra address: 00c817f0 */
/* Ghidra symbol: FUN_00c817f0 */


undefined8 FUN_00c817f0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  (**(code **)(*param_1 + 0x30))(param_1,local_20,param_3,local_res20,0);
  FUN_00415dd0(&local_28,local_res20,0);
  FUN_00b0d0c0(param_2,local_20[0],local_28);
  FUN_004144d0(&local_28);
  FUN_00414480(local_20);
  FUN_00414480(&local_res20);
  return param_2;
}

