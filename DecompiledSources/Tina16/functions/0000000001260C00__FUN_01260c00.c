/* Ghidra address: 01260c00 */
/* Ghidra symbol: FUN_01260c00 */


undefined8
FUN_01260c00(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414650(&local_res18);
  FUN_00414610(local_res20);
  FUN_004168b0(&local_10,local_res18);
  FUN_0043f750(&local_18,param_5 + *(int *)(param_1 + 0x7a0));
  FUN_004168e0(&local_28,local_res20);
  FUN_01242880(&local_20,local_28);
  FUN_004168b0(&local_30,local_20);
  FUN_01250440(param_2,*(undefined8 *)(param_1 + 0x758),*(undefined8 *)(param_1 + 0x760),
               *(undefined1 *)(param_1 + 0x770),local_10,local_18,local_30);
  FUN_00414480(&local_30);
  FUN_004145c0(&local_28,2);
  FUN_00414560(&local_18,2);
  FUN_00414520(&local_res18);
  FUN_00414480(&local_res20);
  return param_2;
}

