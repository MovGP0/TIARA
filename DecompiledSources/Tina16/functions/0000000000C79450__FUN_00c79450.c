/* Ghidra address: 00c79450 */
/* Ghidra symbol: FUN_00c79450 */


undefined8 FUN_00c79450(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x298) != 0) {
    local_10 = 0;
    if (*(char *)(param_1 + 0x2a0) == '\0') {
      local_20 = auStack_48;
      local_14 = thunk_FUN_041b2403(*(longlong *)(param_1 + 0x298),0x464,0,0);
      local_10 = FUN_00442b60(local_14 + 2);
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x298),0x464,(longlong)(local_14 + 1),local_10);
      FUN_004167d0(param_2,local_10);
      FUN_00442c30(local_10);
    }
    else {
      FUN_00c79860(param_1,param_2);
    }
  }
  return param_2;
}

