/* Ghidra address: 008fb560 */
/* Ghidra symbol: FUN_008fb560 */


undefined1 FUN_008fb560(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong local_res8 [4];
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  uVar3 = 0;
  if (local_res8[0] != 0) {
    uVar3 = *(uint *)(local_res8[0] + -4) >> 1;
  }
  if (uVar3 == 0) {
    local_29 = 1;
  }
  else {
    iVar2 = FUN_00417170(&LAB_008fb680,local_res8[0],1);
    if (iVar2 < 1) {
      local_29 = FUN_008fb800(local_res8[0]);
    }
    else {
      FUN_00416430(&local_20,local_res8[0],1,iVar2 + -1);
      cVar1 = FUN_008fb690(local_20);
      if (cVar1 != '\0') {
        FUN_00416430(&local_28,local_res8[0],iVar2 + 1,uVar3 - iVar2);
        cVar1 = FUN_008fb800(local_28);
        if (cVar1 != '\0') {
          local_29 = 1;
          goto LAB_008fb629;
        }
      }
      local_29 = 0;
    }
  }
LAB_008fb629:
  FUN_004145c0(&local_28,2);
  FUN_00414520(local_res8);
  return local_29;
}

