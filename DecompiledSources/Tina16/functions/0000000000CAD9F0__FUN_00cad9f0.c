/* Ghidra address: 00cad9f0 */
/* Ghidra symbol: FUN_00cad9f0 */


undefined8 FUN_00cad9f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  (**(code **)(*param_1 + 400))(param_1,param_2,&LAB_00cada84,0xffffffff,0xffffffff,local_res18[0]);
  FUN_0041b800(local_res18);
  return param_2;
}

