/* Ghidra address: 00d3e2a0 */
/* Ghidra symbol: FUN_00d3e2a0 */


longlong FUN_00d3e2a0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  
  local_30 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00d3b000(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x114) = 0;
  *(undefined8 *)(local_res8 + 0x100) = 0;
  FUN_00788d90(local_res8,7);
  *(undefined1 *)(local_res8 + 0x28) = 1;
  *(undefined4 *)(local_res8 + 0xc4) = 0;
  *(undefined4 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0xd8) = 0;
  *(undefined8 *)(local_res8 + 0xd0) = 0;
  uVar2 = FUN_00787fa0(*(undefined8 *)(local_res8 + 0x18));
  *(undefined4 *)(local_res8 + 0x108) = uVar2;
  uVar2 = FUN_00787c80(*(undefined8 *)(local_res8 + 0x18));
  *(undefined4 *)(local_res8 + 0x10c) = uVar2;
  local_58 = 0;
  FUN_004238d0(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0xf0) = local_40;
  *(undefined8 *)(local_res8 + 0xf8) = uStack_38;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

