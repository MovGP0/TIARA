/* Ghidra address: 004f5750 */
/* Ghidra symbol: FUN_004f5750 */


void FUN_004f5750(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  FUN_004f57c0(param_1);
  local_10 = *(longlong *)(param_1 + 8);
  FUN_00598010(local_10 + 8);
  FUN_00412130(*(undefined8 *)(param_1 + 0x10));
  return;
}

