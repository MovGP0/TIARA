/* Ghidra address: 017fd640 */
/* Ghidra symbol: FUN_017fd640 */


undefined8 FUN_017fd640(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  iVar1 = FUN_004170c0(&DAT_017fd768,local_res18[0],1);
  if (iVar1 < 1) {
    uVar2 = FUN_004170c0(&LAB_017fd788,local_res18[0],1);
    FUN_00416dc0(&local_18,local_res18[0],1,uVar2);
    FUN_00416ba0(param_2,local_18,&DAT_017fd778);
  }
  else {
    iVar1 = FUN_004413f0(&DAT_017fd768,local_res18[0]);
    FUN_00416dc0(&local_10,local_res18[0],1,iVar1 + -1);
    FUN_00416ba0(param_2,local_10,&DAT_017fd778);
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return param_2;
}

