/* Ghidra address: 00c1e140 */
/* Ghidra symbol: FUN_00c1e140 */


longlong FUN_00c1e140(longlong param_1,char param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
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
  *(undefined8 *)(local_res8 + 0x10) = param_4;
  *(undefined4 *)(local_res8 + 0x18) = param_3;
  local_1c = -0xff;
  do {
    *(int *)(local_res8 + 0x418 + (longlong)local_1c * 4) = local_1c;
    local_1c = local_1c + 1;
  } while (local_1c != 0x100);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

