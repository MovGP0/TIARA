/* Ghidra address: 00c21980 */
/* Ghidra symbol: FUN_00c21980 */


longlong FUN_00c21980(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4)

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
  *(undefined8 *)(local_res8 + 8) = 0;
  *(undefined4 *)(local_res8 + 0x10) = 0;
  local_1c = 0;
  do {
    *(undefined8 *)(local_res8 + 0x18 + (longlong)local_1c * 8) = 0;
    local_1c = local_1c + 1;
  } while (local_1c != 8);
  *(undefined4 *)(local_res8 + 0x58) = param_3;
  *(undefined4 *)(local_res8 + 0x5c) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

