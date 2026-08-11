/* Ghidra address: 017ccb20 */
/* Ghidra symbol: FUN_017ccb20 */


undefined8 FUN_017ccb20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_004170c0(&LAB_017ccbc4,local_res18[0],1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    FUN_00416dc0(param_2,local_res18[0],1,iVar1 + -1);
  }
  FUN_00414480(local_res18);
  return param_2;
}

