/* Ghidra address: 016aee50 */
/* Ghidra symbol: FUN_016aee50 */


longlong FUN_016aee50(longlong param_1,char param_2,ushort param_3)

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
  *(uint *)(local_res8 + 0x24) = (uint)param_3;
  *(undefined4 *)(local_res8 + 0x1c) = 0;
  *(undefined4 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x20) = 0;
  uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 0x24) * 8));
  *(undefined8 *)(local_res8 + 8) = uVar2;
  uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 0x24) * 4));
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00409570((longlong)(*(int *)(local_res8 + 0x24) * 8));
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

