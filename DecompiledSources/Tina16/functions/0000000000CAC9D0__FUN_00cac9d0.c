/* Ghidra address: 00cac9d0 */
/* Ghidra symbol: FUN_00cac9d0 */


void FUN_00cac9d0(longlong *param_1,undefined2 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00875240(local_20,local_res18[0],param_1[0x2a],3);
  FUN_0041b840(local_res18,local_20[0]);
  FUN_00877ff0(&local_28,param_2,local_res18[0]);
  (**(code **)(*param_1 + 0x130))(param_1,local_28,0xffffffff,0);
  FUN_00419430(&local_28,&DAT_0086e978);
  FUN_0041b800(local_20);
  FUN_0041b800(local_res18);
  return;
}

