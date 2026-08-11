/* Ghidra address: 014ce2c0 */
/* Ghidra symbol: FUN_014ce2c0 */


longlong FUN_014ce2c0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_88;
  local_50 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_6);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00410e60(local_res8,0);
  FUN_00414ad0(local_res8 + 0x20,param_6);
  *(undefined8 *)(local_res8 + 8) = param_7;
  *(undefined4 *)(local_res8 + 0x58) = 0;
  *(undefined4 *)(local_res8 + 0x5c) = 0;
  *(undefined1 *)(local_res8 + 0x518) = 0;
  *(undefined1 *)(local_res8 + 0x519) = 0;
  *(undefined1 *)(local_res8 + 0x51b) = 0;
  *(undefined8 *)(local_res8 + 0x18) = param_5;
  *(undefined1 *)(local_res8 + 0x51a) = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar1;
  FUN_00414ad0(local_res8 + 0x28,local_res18);
  *(undefined8 *)(local_res8 + 0x10) = local_res20;
  FUN_01b249f0(local_20,*(undefined8 *)(local_res8 + 0x28));
  local_48 = *(undefined8 *)(local_res8 + 0x20);
  local_40 = 0x11;
  FUN_00442f70(&local_38,L"%s_3d_out.txt",&local_48,0);
  local_68 = local_38;
  FUN_00416cd0(local_res8 + 0x30,3,local_20[0],&DAT_014ce68c);
  local_48 = *(undefined8 *)(local_res8 + 0x20);
  local_40 = 0x11;
  FUN_00442f70(&local_50,L"%s_3d_in.txt",&local_48,0);
  local_68 = local_50;
  FUN_00416cd0(local_res8 + 0x38,3,local_20[0],&DAT_014ce68c);
  *(undefined8 *)(local_res8 + 0x210) = 0;
  *(undefined4 *)(local_res8 + 0x70) = 0;
  *(undefined4 *)(local_res8 + 0x7c) = 0;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar1;
  FUN_00414480(&local_50);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  FUN_00414480(&local_res18);
  FUN_00414480(&param_6);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

