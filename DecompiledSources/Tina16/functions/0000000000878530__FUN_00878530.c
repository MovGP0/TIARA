/* Ghidra address: 00878530 */
/* Ghidra symbol: FUN_00878530 */


undefined8 FUN_00878530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_008785a0(param_1,param_2,0,0xffffffff,local_res18[0]);
  FUN_0041b800(local_res18);
  return param_1;
}

