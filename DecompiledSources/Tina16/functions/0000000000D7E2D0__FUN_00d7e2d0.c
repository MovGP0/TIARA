/* Ghidra address: 00d7e2d0 */
/* Ghidra symbol: FUN_00d7e2d0 */


longlong FUN_00d7e2d0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00410e60(local_res8,0);
  *(undefined8 *)(local_res8 + 0x88) = param_3;
  local_19 = 0;
  do {
    *(undefined4 *)(local_res8 + 8 + (ulonglong)local_19 * 4) = 0;
    local_19 = local_19 + 1;
  } while (local_19 != 0x20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

