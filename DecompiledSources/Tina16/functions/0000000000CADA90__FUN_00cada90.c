/* Ghidra address: 00cada90 */
/* Ghidra symbol: FUN_00cada90 */


undefined8 FUN_00cada90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_0041b910(local_res20);
  (**(code **)(*param_1 + 400))(param_1,param_2,local_res18,0xffffffff,0xffffffff,local_res20);
  FUN_00414480(&local_res18);
  FUN_0041b800(&local_res20);
  return param_2;
}

