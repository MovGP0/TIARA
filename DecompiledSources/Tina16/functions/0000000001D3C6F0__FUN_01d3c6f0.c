/* Ghidra address: 01d3c6f0 */
/* Ghidra symbol: FUN_01d3c6f0 */


longlong FUN_01d3c6f0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(undefined4 *)(local_res8 + 0x40) = 0;
  *(undefined4 *)(local_res8 + 0x44) = 0;
  *(undefined1 *)(local_res8 + 0x48) = 1;
  *(undefined1 *)(local_res8 + 0x49) = 1;
  *(undefined1 *)(local_res8 + 0x4a) = 0;
  *(undefined8 *)(local_res8 + 0x50) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined8 *)(local_res8 + 0x18) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  FUN_00c44460(&local_40,0,0);
  *(undefined8 *)(local_res8 + 0x28) = local_40;
  *(undefined8 *)(local_res8 + 0x30) = uStack_38;
  *(undefined8 *)(local_res8 + 0x38) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

