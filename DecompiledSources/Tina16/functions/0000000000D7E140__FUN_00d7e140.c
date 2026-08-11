/* Ghidra address: 00d7e140 */
/* Ghidra symbol: FUN_00d7e140 */


byte FUN_00d7e140(undefined8 param_1)

{
  int iVar1;
  byte local_19;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,param_1);
  iVar1 = FUN_004170c0(L",bold",local_10,1);
  local_19 = iVar1 != 0;
  iVar1 = FUN_004170c0(L",italic",local_10,1);
  if (iVar1 != 0) {
    local_19 = local_19 | 2;
  }
  iVar1 = FUN_004170c0(L",underline",local_10,1);
  if (iVar1 != 0) {
    local_19 = local_19 | 4;
  }
  iVar1 = FUN_004170c0(L",strikeout",local_10,1);
  if (iVar1 != 0) {
    local_19 = local_19 | 8;
  }
  FUN_00414480(&local_10);
  return local_19;
}

