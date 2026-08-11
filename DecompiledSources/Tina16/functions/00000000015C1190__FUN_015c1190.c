/* Ghidra address: 015c1190 */
/* Ghidra symbol: FUN_015c1190 */


undefined8 FUN_015c1190(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  if (local_res10 == 0) {
    FUN_015bf040(param_1,local_res18);
  }
  else {
    FUN_015bf040(param_1,local_res10);
  }
  FUN_00414560(&local_res10,2);
  return param_1;
}

