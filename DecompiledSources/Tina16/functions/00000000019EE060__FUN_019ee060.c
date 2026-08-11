/* Ghidra address: 019ee060 */
/* Ghidra symbol: FUN_019ee060 */


undefined8 FUN_019ee060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  bVar1 = FUN_004170c0(&DAT_019ee104,local_res18[0],1);
  if (bVar1 == 0) {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    FUN_00416dc0(param_2,local_res18[0],1,bVar1 - 1);
  }
  FUN_00414480(local_res18);
  return param_2;
}

