/* Ghidra address: 017f62b0 */
/* Ghidra symbol: FUN_017f62b0 */


undefined8 FUN_017f62b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_004170c0(&DAT_017f6488,local_res18[0],1);
  if (iVar1 < 1) {
    uVar2 = FUN_004170c0(&LAB_017f64a8,local_res18[0],1);
    FUN_00416dc0(&local_18,local_res18[0],1,uVar2);
    FUN_00416ba0(param_2,local_18,&DAT_017f6498);
    uVar2 = FUN_004170c0(&LAB_017f64a8,local_res18[0],1);
    FUN_00416e20(local_res18,1,uVar2);
    iVar1 = FUN_004170c0(&DAT_017f6498,local_res18[0],1);
    FUN_00416dc0(param_4,local_res18[0],1,iVar1 + -1);
  }
  else {
    iVar1 = FUN_004413f0(&DAT_017f6488,local_res18[0]);
    FUN_00416dc0(&local_10,local_res18[0],1,iVar1 + -1);
    FUN_00416ba0(param_2,local_10,&DAT_017f6498);
    uVar2 = FUN_004413f0(&DAT_017f6488,local_res18[0]);
    FUN_00416e20(local_res18,1,uVar2);
    iVar1 = FUN_004170c0(&DAT_017f6498,local_res18[0],1);
    FUN_00416dc0(param_4,local_res18[0],1,iVar1 + -1);
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return param_2;
}

