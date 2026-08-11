/* Ghidra address: 00bafd90 */
/* Ghidra symbol: FUN_00bafd90 */


undefined8 FUN_00bafd90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  (**(code **)(*param_1 + 0x48))(param_1,local_res18[0],param_2);
  FUN_00414480(local_res18);
  return param_2;
}

