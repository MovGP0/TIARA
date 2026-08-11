/* Ghidra address: 015f72e0 */
/* Ghidra symbol: FUN_015f72e0 */


undefined4 FUN_015f72e0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_14;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e130(&local_10,local_res8[0]);
  FUN_00414b50(local_res8,local_10);
  FUN_00416db0(local_res8[0],&DAT_015f73c4);
  local_14 = 1;
  iVar1 = FUN_00416db0(local_res8[0],&DAT_015f73d8);
  if (iVar1 == 0) {
    local_14 = 2;
  }
  iVar1 = FUN_00416db0(local_res8[0],L"INOUT");
  if (iVar1 == 0) {
    local_14 = 3;
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return local_14;
}

