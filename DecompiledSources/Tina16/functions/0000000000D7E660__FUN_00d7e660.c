/* Ghidra address: 00d7e660 */
/* Ghidra symbol: FUN_00d7e660 */


longlong FUN_00d7e660(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 *local_28;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x68) = param_3;
  local_1c = 0;
  local_28 = &DAT_01ecf208;
  do {
    *(undefined4 *)(local_res8 + 8 + (longlong)local_1c * 4) = *local_28;
    local_1c = local_1c + 1;
    local_28 = local_28 + 4;
  } while (local_1c != 0x17);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

