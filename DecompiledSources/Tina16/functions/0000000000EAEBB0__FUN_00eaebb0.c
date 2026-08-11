/* Ghidra address: 00eaebb0 */
/* Ghidra symbol: FUN_00eaebb0 */


undefined8 FUN_00eaebb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  (**(code **)(*DAT_0202ea70 + 0x10))(DAT_0202ea70,param_1,local_res10,local_res18,0);
  FUN_00414560(&local_res10,2);
  return param_1;
}

