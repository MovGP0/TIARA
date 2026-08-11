/* Ghidra address: 0125d2f0 */
/* Ghidra symbol: FUN_0125d2f0 */


undefined8
FUN_0125d2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            longlong *param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res20 = param_4;
  FUN_00414650(&local_res20);
  FUN_004168b0(local_20,local_res20);
  FUN_0043f750(&local_28,param_6);
  (**(code **)(*param_5 + 0x38))(param_5,&local_38);
  FUN_004168e0(&local_40,local_38);
  FUN_01242880(&local_30,local_40);
  FUN_004168b0(&local_48,local_30);
  FUN_01250ce0(param_1,param_2,param_3,param_7,local_20[0],local_28,local_48,param_8);
  FUN_00414480(&local_48);
  FUN_00414520(&local_40);
  FUN_00414480(&local_38);
  FUN_00414520(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414520(&local_res20);
  return param_1;
}

