/* Ghidra address: 019cd7d0 */
/* Ghidra symbol: FUN_019cd7d0 */


longlong FUN_019cd7d0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined1 *)(local_res8 + 0x3a) = 0;
  *(undefined1 *)(local_res8 + 0x39) = 0;
  *(undefined4 *)(local_res8 + 0x4c) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  uVar2 = FUN_00f33100(&LAB_00f256b8,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  *(undefined1 *)(local_res8 + 0x3b) = 0;
  *(undefined1 *)(local_res8 + 0x38) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

