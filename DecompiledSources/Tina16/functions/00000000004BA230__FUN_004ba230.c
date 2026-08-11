/* Ghidra address: 004ba230 */
/* Ghidra symbol: FUN_004ba230 */


longlong FUN_004ba230(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  FUN_004194b0(local_res8 + 0x28,param_3,&DAT_00406578);
  local_20 = *(longlong *)(local_res8 + 0x28);
  local_28 = local_20;
  if (local_20 != 0) {
    local_28 = *(longlong *)(local_20 + -8);
  }
  FUN_004b9c20(local_res8,*(undefined8 *)(local_res8 + 0x28),local_28);
  *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(local_res8 + 0x10);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

