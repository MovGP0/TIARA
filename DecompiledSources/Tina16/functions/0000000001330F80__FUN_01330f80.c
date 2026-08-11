/* Ghidra address: 01330f80 */
/* Ghidra symbol: FUN_01330f80 */


bool FUN_01330f80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_01330e40(&local_10,local_res8);
  iVar1 = FUN_00416db0(local_10,local_res10);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res8,2);
  return iVar1 == 0;
}

