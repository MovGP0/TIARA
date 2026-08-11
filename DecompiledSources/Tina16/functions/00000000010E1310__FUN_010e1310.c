/* Ghidra address: 010e1310 */
/* Ghidra symbol: FUN_010e1310 */


longlong FUN_010e1310(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_20;
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
  local_1c = 1;
  do {
    local_20 = 0;
    do {
      *(undefined8 *)(local_res8 + -0x18 + (longlong)local_1c * 0x40 + (longlong)local_20 * 8) = 0;
      *(undefined8 *)(local_res8 + -0x38 + (longlong)local_1c * 0x40 + (longlong)local_20 * 8) = 0;
      local_20 = local_20 + 1;
    } while (local_20 != 4);
    local_1c = local_1c + 1;
  } while (local_1c != 0x11);
  *(undefined8 *)(local_res8 + 0x408) = param_3;
  *(undefined4 *)(local_res8 + 0x418) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

