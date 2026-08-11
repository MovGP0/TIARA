/* Ghidra address: 00bafb20 */
/* Ghidra symbol: FUN_00bafb20 */


void FUN_00bafb20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x50;
  }
  FUN_00b9d000(&local_10,param_1,local_res10[0]);
  FUN_0041b840(param_3,local_10);
  FUN_0041b800(&local_10);
  FUN_00414480(local_res10);
  return;
}

