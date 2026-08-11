/* Ghidra address: 0041cf50 */
/* Ghidra symbol: FUN_0041cf50 */


void FUN_0041cf50(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong local_20;
  longlong local_18;
  undefined1 local_10 [4];
  int local_c;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x1298) != '\0') {
    local_c = (int)(((param_3 >> 0xd) + (param_3 >> 5)) % 0xc5);
    local_38 = (longlong)local_c;
    FUN_0041c990(param_1 + 0x20 + local_38 * 0x18);
    local_18 = FUN_0041c880(param_1 + 0x20 + local_38 * 0x18,param_3,local_10);
    FUN_0041ca40(param_1 + 0x20 + (longlong)local_c * 0x18);
    if (local_18 != 0) {
      local_20 = local_18;
      FUN_0041c5f0(local_18,local_18 + 0x10,param_2);
    }
  }
  return;
}

