/* Ghidra address: 0041ce10 */
/* Ghidra symbol: FUN_0041ce10 */


void FUN_0041ce10(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 *local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  int local_c;
  
  local_30 = auStack_58;
  puVar1 = auStack_58;
  if (*(char *)(param_1 + 0x1298) == '\0') {
    FUN_0041cc40(param_1);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_c = (int)(((param_3 >> 0xd) + (param_3 >> 5)) % 0xc5);
  local_38 = (longlong)local_c;
  FUN_0041c990(param_1 + 0x20 + local_38 * 0x18);
  local_18 = FUN_0041c880(param_1 + 0x20 + local_38 * 0x18,param_3,&local_10);
  if (local_18 == 0) {
    local_20 = FUN_0041cb20(param_1,param_3);
    FUN_0041c7b0(param_1 + 0x20 + local_38 * 0x18,local_10,local_20);
    local_18 = local_20;
  }
  FUN_0041ca40(param_1 + 0x20 + (longlong)local_c * 0x18);
  local_28 = local_18;
  FUN_0041c450(local_18,local_18 + 0x10,param_2);
  return;
}

