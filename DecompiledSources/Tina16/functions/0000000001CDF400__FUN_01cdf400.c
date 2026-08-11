/* Ghidra address: 01cdf400 */
/* Ghidra symbol: FUN_01cdf400 */


longlong FUN_01cdf400(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_01d2ae00(local_res8,0);
  *(undefined1 *)(local_res8 + 0x58) = 0;
  *(undefined1 *)(local_res8 + 0x59) = 0;
  *(undefined1 *)(local_res8 + 0x68) = 0;
  local_58 = 0;
  FUN_00498350(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0x14) = local_40;
  *(undefined8 *)(local_res8 + 0x1c) = uStack_38;
  local_58 = 0;
  FUN_00498350(&local_40,0,0,0);
  *(undefined8 *)(local_res8 + 0x24) = local_40;
  *(undefined8 *)(local_res8 + 0x2c) = uStack_38;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x70) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x78) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  *(undefined4 *)(local_res8 + 0x94) = 0;
  *(undefined4 *)(local_res8 + 0x98) = 0xb;
  *(undefined8 *)(local_res8 + 0xa0) = 0;
  *(undefined4 *)(local_res8 + 0x48) = 0xffffff;
  *(undefined4 *)(local_res8 + 0xa8) = 0xc0c0c0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

