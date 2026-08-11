/* Ghidra address: 012e53b0 */
/* Ghidra symbol: FUN_012e53b0 */


longlong FUN_012e53b0(longlong param_1,char param_2,undefined8 param_3,int param_4,
                     undefined4 param_5)

{
  undefined8 uVar1;
  int iVar2;
  longlong local_res8;
  undefined8 local_res18;
  int local_res20;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_40;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_40 = auStack_a8;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  FUN_00414ad0(local_res8 + 0x10,local_res18);
  *(undefined1 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0x28) = param_5;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0x3ff0000000000000;
  *(undefined4 *)(local_res8 + 0x30) = 0x400;
  *(undefined4 *)(local_res8 + 0x40) = 0;
  uVar1 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar1;
  local_1c = 0;
  iVar2 = local_res20;
  if (-1 < local_res20 + -1) {
    do {
      local_88 = 1;
      local_80 = 0;
      local_78 = 0xffffffff;
      local_70 = 0;
      local_68 = 0x3ff0000000000000;
      local_60 = 0x4014000000000000;
      local_58 = 0;
      local_50 = 0x3ff0000000000000;
      local_28 = FUN_012e5090(&DAT_012e2ef8,1,0,0);
      FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x38),local_28);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(&local_res18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

