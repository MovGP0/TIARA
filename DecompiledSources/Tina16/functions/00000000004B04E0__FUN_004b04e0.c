/* Ghidra address: 004b04e0 */
/* Ghidra symbol: FUN_004b04e0 */


undefined4 FUN_004b04e0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_e8 [40];
  undefined1 *local_c0;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_2c;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_14;
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
  local_10 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_10 + 0x10));
  return local_14;
}

