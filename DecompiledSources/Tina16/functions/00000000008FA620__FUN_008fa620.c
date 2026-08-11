/* Ghidra address: 008fa620 */
/* Ghidra symbol: FUN_008fa620 */


undefined1 FUN_008fa620(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong local_res8 [4];
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  iVar2 = FUN_00417170(&DAT_008fa7dc,local_res8[0],1);
  if (iVar2 < 1) {
    cVar1 = FUN_008fa7e0(local_res8[0]);
    if (((cVar1 == '\0') && (cVar1 = FUN_008fa970(local_res8[0]), cVar1 == '\0')) &&
       (iVar2 = FUN_00416420(local_res8[0],0), iVar2 != 0)) {
      local_49 = 0;
    }
    else {
      local_49 = 1;
    }
  }
  else {
    FUN_00416430(local_30,local_res8[0],1,iVar2 + -1);
    FUN_004168b0(local_20,local_30[0]);
    FUN_004168e0(&local_38,local_20[0]);
    cVar1 = FUN_008fa7e0(local_38);
    if (cVar1 == '\0') {
      FUN_004168e0(&local_40,local_20[0]);
      cVar1 = FUN_008fa970(local_40);
      if ((cVar1 == '\0') && (local_20[0] != 0)) {
        local_49 = 0;
        goto code_r0x008fa76c;
      }
    }
    uVar3 = 0;
    if (local_res8[0] != 0) {
      uVar3 = *(uint *)(local_res8[0] + -4) >> 1;
    }
    FUN_00416430(&local_48,local_res8[0],iVar2 + 1,uVar3 - iVar2);
    local_49 = FUN_008fc0c0(local_48);
  }
code_r0x008fa76c:
  FUN_004145c0(&local_48,4);
  FUN_00414480(local_20);
  FUN_00414520(local_res8);
  return local_49;
}

