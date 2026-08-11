/* Ghidra address: 00c7cba0 */
/* Ghidra symbol: FUN_00c7cba0 */


longlong * FUN_00c7cba0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_0041b910(param_2);
  FUN_00414610(local_res18[0]);
  FUN_00c7c970(param_1,local_res10,local_res18[0]);
  if (*param_1 == 0) {
    FUN_00c7cc40(param_1,local_res10,local_res18[0]);
  }
  FUN_0041b800(&local_res10);
  FUN_00414480(local_res18);
  return param_1;
}

