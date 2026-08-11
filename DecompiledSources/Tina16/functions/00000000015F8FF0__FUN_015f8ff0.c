/* Ghidra address: 015f8ff0 */
/* Ghidra symbol: FUN_015f8ff0 */


undefined8 FUN_015f8ff0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10[0] = param_2;
  FUN_00414630(param_2);
  FUN_00416880(&local_18,local_res10[0]);
  FUN_0043e1a0(&local_10,local_18);
  FUN_00415dd0(local_res10,local_10,0);
  FUN_00416880(&local_20,local_res10[0]);
  iVar1 = FUN_004170c0(L".vhd",local_20,1);
  if (iVar1 < 1) {
    FUN_00414ad0(param_1,&LAB_015f9110);
  }
  else {
    FUN_00414ad0(param_1,L".vhd");
  }
  FUN_00414560(&local_20,3);
  FUN_004144d0(local_res10);
  return param_1;
}

