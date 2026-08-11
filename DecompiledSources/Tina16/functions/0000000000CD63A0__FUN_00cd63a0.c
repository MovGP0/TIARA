/* Ghidra address: 00cd63a0 */
/* Ghidra symbol: FUN_00cd63a0 */


int FUN_00cd63a0(undefined1 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  FUN_00416760(&local_10,param_1);
  FUN_00415430(&local_20,param_2,0);
  FUN_00415ad0(&local_18,local_20,1,param_3);
  FUN_00416880(&local_28,local_18);
  iVar1 = FUN_0044f900(local_10,local_28);
  FUN_00414480(&local_28);
  FUN_00414590(&local_20,2);
  FUN_00414480(&local_10);
  return iVar1 + -1;
}

