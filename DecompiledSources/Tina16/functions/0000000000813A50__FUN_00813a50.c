/* Ghidra address: 00813a50 */
/* Ghidra symbol: FUN_00813a50 */


longlong FUN_00813a50(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  local_40 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  *(undefined8 *)(local_res8 + 0x20) = param_3;
  local_68 = 0;
  FUN_004238d0(&local_50,0,0,0);
  *(undefined8 *)(local_res8 + 0xc) = local_50;
  *(undefined8 *)(local_res8 + 0x14) = uStack_48;
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(undefined4 *)(local_res8 + 0x3c) = 0;
  *(undefined1 *)(local_res8 + 0x9a) = 0;
  *(undefined1 *)(local_res8 + 0xa8) = 0;
  *(undefined4 *)(local_res8 + 8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xb0) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0xa9) = 0;
  DAT_02012680 = 0;
  local_30 = 0xffffffff;
  uStack_2c = 0xffffffff;
  *(undefined8 *)(local_res8 + 0xb4) = 0xffffffffffffffff;
  *(undefined1 *)(local_res8 + 0x1c) = 0;
  *(undefined1 *)(local_res8 + 0xc3) = 0;
  *(undefined1 *)(local_res8 + 0x99) = 0;
  *(undefined1 *)(local_res8 + 0xc1) = 0;
  *(undefined4 *)(local_res8 + 0x48) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xbc) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x4c) = 0xffffffff;
  *(undefined1 *)(local_res8 + 0xac) = 0;
  *(undefined1 *)(local_res8 + 0xab) = 0;
  *(undefined1 *)(local_res8 + 0xaa) = 0;
  *(undefined1 *)(local_res8 + 0xc2) = 0;
  *(undefined1 *)(local_res8 + 0x98) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

