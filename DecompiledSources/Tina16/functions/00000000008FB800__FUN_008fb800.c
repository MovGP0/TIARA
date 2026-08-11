/* Ghidra address: 008fb800 */
/* Ghidra symbol: FUN_008fb800 */


undefined1 FUN_008fb800(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong local_res8 [4];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  iVar2 = FUN_00417170(&LAB_008fb910,local_res8[0],1);
  if (iVar2 < 1) {
    local_29 = FUN_008fb920(local_res8[0]);
  }
  else {
    FUN_00416430(local_20,local_res8[0],1,iVar2 + -1);
    cVar1 = FUN_008fb920(local_20[0]);
    if (cVar1 == '\0') {
      local_29 = 0;
    }
    else {
      uVar3 = 0;
      if (local_res8[0] != 0) {
        uVar3 = *(uint *)(local_res8[0] + -4) >> 1;
      }
      FUN_00416430(&local_28,local_res8[0],iVar2 + 1,uVar3 - iVar2);
      local_29 = FUN_008fbda0(local_28);
    }
  }
  FUN_004145c0(&local_28,2);
  FUN_00414520(local_res8);
  return local_29;
}

