/* Ghidra address: 009008a0 */
/* Ghidra symbol: FUN_009008a0 */


undefined1 FUN_009008a0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_21;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00416430(local_20,param_1,1,6);
  iVar1 = FUN_00416420(local_20[0],L"xmlns:");
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + -4) >> 1;
    }
    FUN_00416430(&local_10,param_1,7,uVar2 - 6);
    local_21 = FUN_009007e0(local_10);
  }
  else {
    local_21 = 0;
  }
  FUN_00414520(local_20);
  FUN_00414520(&local_10);
  return local_21;
}

