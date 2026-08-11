/* Ghidra address: 008fa970 */
/* Ghidra symbol: FUN_008fa970 */


undefined1 FUN_008fa970(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong local_res8 [4];
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_res8[0] = param_1;
  FUN_00414650(local_res8);
  iVar2 = FUN_00417170(&DAT_008fab4c,local_res8[0],1);
  if (iVar2 < 1) {
    cVar1 = FUN_008fad80(local_res8[0]);
    if (((cVar1 == '\0') && (cVar1 = FUN_008faf10(local_res8[0]), cVar1 == '\0')) &&
       (cVar1 = FUN_008fafe0(local_res8[0]), cVar1 == '\0')) {
      local_51 = 0;
    }
    else {
      local_51 = 1;
    }
  }
  else {
    FUN_00416430(local_30,local_res8[0],1,iVar2 + -1);
    FUN_004168b0(local_20,local_30[0]);
    FUN_004168e0(&local_38,local_20[0]);
    cVar1 = FUN_008fad80(local_38);
    if (cVar1 == '\0') {
      FUN_004168e0(&local_40,local_20[0]);
      cVar1 = FUN_008faf10(local_40);
      if (cVar1 == '\0') {
        FUN_004168e0(&local_48,local_20[0]);
        cVar1 = FUN_008fafe0(local_48);
        if (cVar1 == '\0') {
          local_51 = 0;
          goto code_r0x008faad5;
        }
      }
    }
    uVar3 = 0;
    if (local_res8[0] != 0) {
      uVar3 = *(uint *)(local_res8[0] + -4) >> 1;
    }
    FUN_00416430(&local_50,local_res8[0],iVar2 + 1,uVar3 - iVar2);
    local_51 = FUN_008fc050(local_50);
  }
code_r0x008faad5:
  FUN_004145c0(&local_50,5);
  FUN_00414480(local_20);
  FUN_00414520(local_res8);
  return local_51;
}

