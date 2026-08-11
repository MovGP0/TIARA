/* Ghidra address: 0041cd20 */
/* Ghidra symbol: FUN_0041cd20 */


void FUN_0041cd20(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  longlong local_18;
  int local_c;
  
  local_20 = auStack_48;
  if (*(char *)(param_1 + 0x1298) != '\0') {
    local_c = (int)(((param_2 >> 0xd) + (param_2 >> 5)) % 0xc5);
    local_28 = (longlong)local_c;
    FUN_0041c990(param_1 + 0x20 + local_28 * 0x18);
    local_18 = FUN_0041c9b0(param_1 + 0x20 + local_28 * 0x18,param_2);
    FUN_0041ca40(param_1 + 0x20 + (longlong)local_c * 0x18);
    if (local_18 != 0) {
      FUN_0041c3a0(local_18);
      FUN_0041ca60(param_1,local_18);
    }
  }
  return;
}

