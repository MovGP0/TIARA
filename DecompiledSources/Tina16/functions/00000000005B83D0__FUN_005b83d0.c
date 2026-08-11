/* Ghidra address: 005b83d0 */
/* Ghidra symbol: FUN_005b83d0 */


bool FUN_005b83d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_0043e5a0(&local_10,param_2);
  FUN_0043e5a0(&local_18,param_1);
  iVar1 = FUN_0044f900(local_10,local_18);
  FUN_00414560(&local_18,2);
  return 0 < iVar1;
}

