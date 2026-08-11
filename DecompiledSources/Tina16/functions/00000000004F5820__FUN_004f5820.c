/* Ghidra address: 004f5820 */
/* Ghidra symbol: FUN_004f5820 */


void FUN_004f5820(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_1c;
  undefined8 local_18;
  longlong local_10;
  
  local_b0 = auStack_d8;
  FUN_004f57c0(param_1);
  local_10 = *(longlong *)(param_1 + 8);
  local_88 = local_10 + 8;
  local_18 = param_2;
  if (param_3 == '\0') {
    local_8c = FUN_005974f0(local_88,&local_18);
  }
  else {
    local_8c = FUN_00597670(local_88,&local_18);
  }
  local_1c = local_8c;
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

