/* Ghidra address: 008b1280 */
/* Ghidra symbol: FUN_008b1280 */


undefined8 FUN_008b1280(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res20;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res20 = param_4;
  FUN_0041b910(param_4);
  FUN_008b1190(param_1,local_20,param_3,local_res20);
  (**(code **)(*param_1 + 8))(param_1,param_2,local_20[0]);
  FUN_00419430(local_20,&DAT_0086e978);
  FUN_0041b800(&local_res20);
  return param_2;
}

