/* Ghidra address: 017fd3b0 */
/* Ghidra symbol: FUN_017fd3b0 */


undefined8 FUN_017fd3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414630(param_3);
  FUN_00416880(&local_10,local_res18[0]);
  iVar1 = FUN_004170c0(&LAB_017fd464,local_10,1);
  FUN_00415ad0(param_2,local_res18[0],1,iVar1 + -1);
  FUN_00414480(&local_10);
  FUN_004144d0(local_res18);
  return param_2;
}

