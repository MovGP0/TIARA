/* Ghidra address: 01330d40 */
/* Ghidra symbol: FUN_01330d40 */


undefined8 FUN_01330d40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043ea00(&local_20,local_res10[0]);
  FUN_01330c90(&local_18,local_20);
  FUN_0043e130(&local_10,local_18);
  FUN_00414b50(local_res10,local_10);
  iVar1 = FUN_004170c0(&LAB_01330e38,local_res10[0],1);
  FUN_00416dc0(param_1,local_res10[0],1,iVar1 + -1);
  FUN_00414560(&local_20,3);
  FUN_00414480(local_res10);
  return param_1;
}

