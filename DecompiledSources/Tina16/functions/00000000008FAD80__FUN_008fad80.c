/* Ghidra address: 008fad80 */
/* Ghidra symbol: FUN_008fad80 */


undefined1 FUN_008fad80(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong local_res8 [4];
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  FUN_00416430(local_20,local_res8[0],1,2);
  iVar2 = FUN_00416420(local_20[0],&DAT_008faf00);
  if (iVar2 == 0) {
    uVar3 = 0;
    if (local_res8[0] != 0) {
      uVar3 = *(uint *)(local_res8[0] + -4) >> 1;
    }
    FUN_00416430(local_res8,local_res8[0],3,uVar3 - 2);
    iVar2 = FUN_00417170(&DAT_008faf0c,local_res8[0],1);
    if (iVar2 < 1) {
      local_31 = FUN_008fb370(local_res8[0]);
    }
    else {
      FUN_00416430(&local_28,local_res8[0],1,iVar2 + -1);
      cVar1 = FUN_008fb370(local_28);
      if (cVar1 == '\0') {
        local_31 = 0;
      }
      else {
        uVar3 = 0;
        if (local_res8[0] != 0) {
          uVar3 = *(uint *)(local_res8[0] + -4) >> 1;
        }
        FUN_00416430(&local_30,local_res8[0],iVar2,(uVar3 - iVar2) + 1);
        local_31 = FUN_008faf10(local_30);
      }
    }
  }
  else {
    local_31 = 0;
  }
  FUN_004145c0(&local_30,3);
  FUN_00414520(local_res8);
  return local_31;
}

