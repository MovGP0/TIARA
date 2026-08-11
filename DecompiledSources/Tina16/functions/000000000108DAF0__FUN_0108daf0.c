/* Ghidra address: 0108daf0 */
/* Ghidra symbol: FUN_0108daf0 */


undefined8 FUN_0108daf0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&LAB_0108dbc4,local_res10[0],1);
  if (iVar1 < 1) {
    FUN_00415dd0(param_1,local_res10[0],0);
  }
  else {
    FUN_00416dc0(&local_10,local_res10[0],1,iVar1 + -1);
    FUN_00415dd0(param_1,local_10,0);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return param_1;
}

