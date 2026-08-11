/* Ghidra address: 017fd470 */
/* Ghidra symbol: FUN_017fd470 */


undefined8 FUN_017fd470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  FUN_00416880(&local_10,local_res18[0]);
  iVar1 = FUN_004170c0(&DAT_017fd618,local_10,1);
  if (iVar1 < 1) {
    FUN_00416880(&local_28,local_res18[0]);
    uVar2 = FUN_004170c0(&LAB_017fd638,local_28,1);
    FUN_00415b50(local_res18,1,uVar2);
    FUN_00416880(&local_30,local_res18[0]);
    iVar1 = FUN_004170c0(&DAT_017fd628,local_30,1);
    FUN_00415ad0(param_2,local_res18[0],1,iVar1 + -1);
  }
  else {
    FUN_00416880(&local_18,local_res18[0]);
    uVar2 = FUN_004413f0(&DAT_017fd618,local_18);
    FUN_00415b50(local_res18,1,uVar2);
    FUN_00416880(&local_20,local_res18[0]);
    iVar1 = FUN_004170c0(&DAT_017fd628,local_20,1);
    FUN_00415ad0(param_2,local_res18[0],1,iVar1 + -1);
  }
  FUN_00414560(&local_30,5);
  FUN_004144d0(local_res18);
  return param_2;
}

