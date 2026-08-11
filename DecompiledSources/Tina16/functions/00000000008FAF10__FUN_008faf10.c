/* Ghidra address: 008faf10 */
/* Ghidra symbol: FUN_008faf10 */


undefined1 FUN_008faf10(short *param_1)

{
  int iVar1;
  uint uVar2;
  short *local_res8 [4];
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  iVar1 = FUN_00416420(local_res8[0],0);
  if (iVar1 == 0) {
    local_11 = 0;
  }
  else if (*local_res8[0] == 0x2f) {
    uVar2 = 0;
    if (local_res8[0] != (short *)0x0) {
      uVar2 = *(uint *)(local_res8[0] + -2) >> 1;
    }
    FUN_00416430(&local_10,local_res8[0],2,uVar2 - 1);
    local_11 = FUN_008fbec0(local_10);
  }
  else {
    local_11 = 0;
  }
  FUN_00414520(&local_10);
  FUN_00414520(local_res8);
  return local_11;
}

