/* Ghidra address: 015f1b30 */
/* Ghidra symbol: FUN_015f1b30 */


undefined8 FUN_015f1b30(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00416880(local_20,local_res10[0]);
  iVar1 = FUN_004170c0(&LAB_015f1c50,local_20[0],1);
  if (iVar1 != 0) {
    FUN_00415ad0(local_res10,local_res10[0],1,iVar1 + -1);
  }
  FUN_00416880(&local_28,local_res10[0]);
  FUN_015f0d60(param_1,local_28,param_3,param_4,0);
  FUN_00414560(&local_28,2);
  FUN_004144d0(&local_10);
  FUN_004144d0(local_res10);
  return param_1;
}

