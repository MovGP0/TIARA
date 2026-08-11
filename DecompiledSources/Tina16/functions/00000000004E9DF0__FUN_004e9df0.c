/* Ghidra address: 004e9df0 */
/* Ghidra symbol: FUN_004e9df0 */


void FUN_004e9df0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_004e9e60(param_1);
  local_10 = *(longlong *)(param_1 + 8);
  FUN_00598010(local_10 + 8);
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

