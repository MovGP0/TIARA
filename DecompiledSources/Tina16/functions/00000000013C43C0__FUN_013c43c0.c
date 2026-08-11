/* Ghidra address: 013c43c0 */
/* Ghidra symbol: FUN_013c43c0 */


longlong FUN_013c43c0(longlong param_1,char param_2,undefined1 param_3,undefined1 param_4,
                     undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar3 = FUN_00f1fa40(&DAT_00f1e690,1);
  *(undefined8 *)(local_res8 + 0x280) = uVar3;
  uVar3 = FUN_00f20bd0(&DAT_00f1f5d0,1);
  *(undefined8 *)(local_res8 + 0x300) = uVar3;
  *(undefined1 *)(local_res8 + 0x2b8) = param_4;
  *(undefined4 *)(local_res8 + 0x2d8) = param_5;
  *(undefined8 *)(local_res8 + 0x2d0) = param_8;
  *(undefined1 *)(local_res8 + 0x308) = 0;
  *(undefined1 *)(local_res8 + 0x309) = 0;
  *(undefined1 *)(local_res8 + 0x30a) = 0;
  *(undefined1 *)(local_res8 + 0x279) = 0;
  *(undefined8 *)(local_res8 + 0x2e0) = param_6;
  *(undefined4 *)(local_res8 + 0x290) = 0;
  uVar2 = FUN_013c1460(param_3);
  *(undefined4 *)PTR_DAT_02002a28 = uVar2;
  FUN_013c1550(&local_28,*(undefined4 *)PTR_DAT_02002a28);
  FUN_00414ad0(PTR_DAT_02001af8,local_28);
  local_48 = *(undefined8 *)(local_res8 + 0x2e0);
  local_40 = param_7;
  local_38 = 0;
  uVar3 = FUN_017e1bd0(&DAT_017df868,1,0,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  *(undefined8 *)(local_res8 + 0x328) = 0;
  *(undefined1 *)(local_res8 + 0x2f8) = 0;
  FUN_00414480(&local_28);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

