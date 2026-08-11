/* Ghidra address: 013b9680 */
/* Ghidra symbol: FUN_013b9680 */


bool FUN_013b9680(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e1a0(&local_10,local_res8[0]);
  FUN_00414b50(local_res8,local_10);
  iVar1 = FUN_004170c0(&DAT_013b9734,local_res8[0],1);
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return 0 < iVar1;
}

