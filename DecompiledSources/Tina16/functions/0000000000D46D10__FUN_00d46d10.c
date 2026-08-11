/* Ghidra address: 00d46d10 */
/* Ghidra symbol: FUN_00d46d10 */


longlong FUN_00d46d10(longlong param_1,char param_2,longlong param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  *(undefined4 *)(local_res8 + 0x41) = 0;
  *(undefined4 *)(local_res8 + 8) = param_4;
  FUN_00414480(local_res8 + 0x20);
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x10) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0xc) = 0xffffffff;
  local_68 = 0;
  FUN_00423010(&local_38,0,0,0);
  *(undefined8 *)(local_res8 + 0x28) = local_38;
  *(undefined8 *)(local_res8 + 0x30) = uStack_30;
  local_68 = 0;
  FUN_00423010(&local_48,0,0,0);
  *(undefined8 *)(local_res8 + 0x48) = local_48;
  *(undefined8 *)(local_res8 + 0x50) = uStack_40;
  *(undefined1 *)(local_res8 + 0x40) = 0;
  *(undefined1 *)(local_res8 + 0x46) = 0;
  *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(param_3 + 0x18);
  FUN_00d46fa0(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

