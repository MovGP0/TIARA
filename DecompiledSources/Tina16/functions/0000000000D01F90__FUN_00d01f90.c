/* Ghidra address: 00d01f90 */
/* Ghidra symbol: FUN_00d01f90 */


undefined8 FUN_00d01f90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00d079e0(param_1,param_2,local_res18[0],&stack0xfffffffffffffff8,0xffffffff);
  FUN_00414480(local_res18);
  return param_2;
}

