/* Ghidra address: 0147b0e0 */
/* Ghidra symbol: FUN_0147b0e0 */


longlong FUN_0147b0e0(longlong param_1,char param_2)

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
  *(undefined4 *)(local_res8 + 0xb0) = 0;
  *(undefined4 *)(local_res8 + 0xb4) = 0;
  *(undefined4 *)(local_res8 + 100) = 0;
  local_1c = 0;
  do {
    *(undefined4 *)(local_res8 + 0x68 + (longlong)local_1c * 4) = 0x2caa;
    local_1c = local_1c + 1;
  } while (local_1c != 3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

