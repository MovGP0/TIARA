/* Ghidra address: 00877e10 */
/* Ghidra symbol: FUN_00877e10 */


undefined8 FUN_00877e10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  FUN_00877e90(param_1,param_2,0xffffffff,1,local_res18[0]);
  FUN_0041b800(local_res18);
  return param_1;
}

