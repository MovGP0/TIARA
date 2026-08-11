/* Ghidra address: 0147d3c0 */
/* Ghidra symbol: FUN_0147d3c0 */


bool FUN_0147d3c0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_0043e1a0(&local_10,local_res10);
  FUN_0043e1a0(&local_18,local_res8);
  iVar1 = FUN_004170c0(local_10,local_18,1);
  FUN_00414560(&local_18,2);
  FUN_00414560(&local_res8,2);
  return 0 < iVar1;
}

