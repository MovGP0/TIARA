/* Ghidra address: 012ca160 */
/* Ghidra symbol: FUN_012ca160 */


undefined8 FUN_012ca160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_004413f0(&LAB_012ca1f4,local_res18[0]);
  if (iVar1 < 1) {
    FUN_00414ad0(param_2,local_res18[0]);
  }
  else {
    FUN_00416dc0(param_2,local_res18[0],1,iVar1 + -1);
  }
  FUN_00414480(local_res18);
  return param_2;
}

