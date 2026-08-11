/* Ghidra address: 00a682f0 */
/* Ghidra symbol: FUN_00a682f0 */


undefined8 FUN_00a682f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (*(char *)(param_1 + 200) == '\0') {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    FUN_00a66700(param_2,local_res18[0]);
  }
  FUN_00414480(local_res18);
  return param_2;
}

