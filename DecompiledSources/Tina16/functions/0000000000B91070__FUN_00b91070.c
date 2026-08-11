/* Ghidra address: 00b91070 */
/* Ghidra symbol: FUN_00b91070 */


undefined8 FUN_00b91070(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_004170c0(&DAT_00b91154,local_res18[0],1);
  if (0 < iVar1) {
    uVar2 = FUN_004170c0(&DAT_00b91154,local_res18[0],1);
    FUN_00416e20(local_res18,uVar2,1);
  }
  iVar1 = FUN_004170c0(&LAB_00b91164,local_res18[0],1);
  if (0 < iVar1) {
    uVar2 = FUN_004170c0(&LAB_00b91164,local_res18[0],1);
    FUN_00416e20(local_res18,uVar2,1);
  }
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414480(local_res18);
  return param_2;
}

