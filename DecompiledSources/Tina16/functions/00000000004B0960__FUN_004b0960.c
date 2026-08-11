/* Ghidra address: 004b0960 */
/* Ghidra symbol: FUN_004b0960 */


int FUN_004b0960(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_e8 [40];
  undefined1 *local_c0;
  int local_4c;
  longlong local_48;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  int local_14;
  longlong local_10;
  
  local_c0 = auStack_e8;
  local_20 = FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  local_48 = local_20 + 8;
  local_28 = param_2;
  if (param_3 == '\0') {
    local_4c = FUN_00596b00(local_48,&local_28);
  }
  else {
    local_4c = FUN_005970b0(local_48,&local_28);
  }
  local_2c = local_4c;
  local_14 = local_4c;
  if (-1 < local_4c) {
    FUN_0041b800(*(longlong *)(local_20 + 8) + (longlong)local_4c * 8);
    FUN_005999b0(local_20 + 8,local_14,5);
  }
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return local_14;
}

