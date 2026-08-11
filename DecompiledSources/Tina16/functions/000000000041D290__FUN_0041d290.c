/* Ghidra address: 0041d290 */
/* Ghidra symbol: FUN_0041d290 */


bool FUN_0041d290(longlong param_1,ulonglong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong local_20;
  undefined1 local_14 [7];
  bool local_d;
  int local_c;
  
  local_30 = auStack_58;
  local_d = false;
  if (*(char *)(param_1 + 0x1298) != '\0') {
    local_c = (int)(((param_2 >> 0xd) + (param_2 >> 5)) % 0xc5);
    local_38 = (longlong)local_c;
    FUN_0041c990(param_1 + 0x20 + local_38 * 0x18);
    local_20 = FUN_0041c880(param_1 + 0x20 + local_38 * 0x18,param_2,local_14);
    FUN_0041ca40(param_1 + 0x20 + (longlong)local_c * 0x18);
    local_d = local_20 != 0;
  }
  return local_d;
}

