/* Ghidra address: 0160b0b0 */
/* Ghidra symbol: FUN_0160b0b0 */


undefined8 FUN_0160b0b0(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_3 == '\0') {
    FUN_00441920(param_1,local_res10[0]);
  }
  else {
    FUN_00414ad0(param_1,local_res10[0]);
  }
  FUN_00414480(local_res10);
  return param_1;
}

