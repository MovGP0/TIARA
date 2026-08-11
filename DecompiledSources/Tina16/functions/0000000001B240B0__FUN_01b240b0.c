/* Ghidra address: 01b240b0 */
/* Ghidra symbol: FUN_01b240b0 */


undefined8 FUN_01b240b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  cVar1 = FUN_00456810(local_res18);
  if (cVar1 == '\0') {
    FUN_00416cd0(param_1,3,local_res10,&LAB_01b24158,local_res18[0]);
  }
  else {
    FUN_00414ad0(param_1,local_res10);
  }
  FUN_00414560(&local_res10,2);
  return param_1;
}

