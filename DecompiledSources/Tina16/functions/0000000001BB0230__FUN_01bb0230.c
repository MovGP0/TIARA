/* Ghidra address: 01bb0230 */
/* Ghidra symbol: FUN_01bb0230 */


longlong FUN_01bb0230(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
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
  *(longlong *)(local_res8 + 0x28) = param_3;
  FUN_004194b0(local_res8 + 0x10,*(undefined8 *)(param_3 + 0x10),&DAT_00406578);
  *(undefined4 *)(local_res8 + 0x18) = *(undefined4 *)(param_3 + 0x18);
  FUN_01baffe0(local_res8,4);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 4;
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(local_res8 + 0x18);
  *(undefined4 *)(param_3 + 0x20) = 4;
  *(undefined4 *)(local_res8 + 0x1c) = *(undefined4 *)(local_res8 + 0x18);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

