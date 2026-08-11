/* Ghidra address: 0099c280 */
/* Ghidra symbol: FUN_0099c280 */


longlong FUN_0099c280(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  uint local_20;
  uint local_1c;
  
  local_30 = auStack_68;
  local_40 = 0;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00995110(local_res8,0,param_3,param_4);
  iVar2 = FUN_00416420(param_4,&LAB_0099c474);
  if (iVar2 == 0) {
    FUN_00414520(local_res8 + 0x30);
    FUN_00414b90(local_res8 + 0x38,&LAB_0099c474);
  }
  else {
    local_1c = 0;
    if (param_4 != 0) {
      local_1c = *(uint *)(param_4 + -4) >> 1;
    }
    if (*(short *)(param_4 + -2 + (longlong)(int)local_1c * 2) == 0x2a) {
      local_20 = 0;
      if (param_4 != 0) {
        local_20 = *(uint *)(param_4 + -4) >> 1;
      }
      FUN_00416430(local_res8 + 0x30,param_4,1,local_20 - 2);
      FUN_00414b90(local_res8 + 0x38,&LAB_0099c474);
    }
    else {
      FUN_009476a0(&local_38,param_4);
      FUN_00414b90(local_res8 + 0x30,local_38);
      FUN_00947820(&local_40,param_4);
      FUN_00414b90(local_res8 + 0x38,local_40);
    }
  }
  FUN_004145c0(&local_40,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

