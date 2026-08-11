/* Ghidra address: 01bbaee0 */
/* Ghidra symbol: FUN_01bbaee0 */


void FUN_01bbaee0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00416cd0(&local_10,3,local_res10,&LAB_01bbafa8,local_res18);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))(*(longlong **)(param_1 + 0x10),local_10);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

