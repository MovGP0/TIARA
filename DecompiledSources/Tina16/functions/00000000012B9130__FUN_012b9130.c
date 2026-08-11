/* Ghidra address: 012b9130 */
/* Ghidra symbol: FUN_012b9130 */


undefined8 FUN_012b9130(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  byte bVar1;
  undefined8 local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  bVar1 = FUN_004170c0(&DAT_012b9258,local_res18[0],1);
  if (bVar1 == 0) {
    FUN_00416910(param_2,local_res18[0],0xff);
  }
  else if (param_4 == '\0') {
    FUN_00416dc0(&local_18,local_res18[0],bVar1 + 1,0xff);
    FUN_00416910(param_2,local_18,0xff);
  }
  else {
    FUN_00416dc0(&local_10,local_res18[0],1,bVar1 - 1);
    FUN_00416910(param_2,local_10,0xff);
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return param_2;
}

