/* Ghidra address: 0123b660 */
/* Ghidra symbol: FUN_0123b660 */


longlong FUN_0123b660(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 0x40,local_res18);
  *(undefined4 *)(local_res8 + 0x6c) = 0;
  FUN_00416ba0(local_res8 + 0x48,*(undefined8 *)PTR_DAT_020049a0,L"\\Examples\\FilterTemplates\\");
  *(undefined8 *)(local_res8 + 0x50) = local_res20;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar1;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x60) = uVar1;
  uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x5f0) = uVar1;
  uVar1 = FUN_00409570(0x1fd8);
  *(undefined8 *)(local_res8 + 0x600) = uVar1;
  uVar1 = FUN_00409570(0x3888);
  *(undefined8 *)(local_res8 + 0x18) = uVar1;
  uVar1 = FUN_00409570(0x12f0);
  *(undefined8 *)(local_res8 + 0x20) = uVar1;
  *(undefined8 *)(local_res8 + 0x10) = 0x4202a05f20000000;
  *(undefined8 *)(local_res8 + 0x28) = *(undefined8 *)(local_res8 + 0x600);
  *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(local_res8 + 0x18);
  *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(local_res8 + 0x20);
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

