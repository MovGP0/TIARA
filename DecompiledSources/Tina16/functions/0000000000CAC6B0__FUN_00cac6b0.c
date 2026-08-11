/* Ghidra address: 00cac6b0 */
/* Ghidra symbol: FUN_00cac6b0 */


void FUN_00cac6b0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 *local_10;
  
  local_20 = auStack_48;
  FUN_00cb0bd0(param_1);
  local_10 = (undefined8 *)(param_1 + 0x140);
  local_18 = *local_10;
  *local_10 = 0;
  FUN_00410f20(local_18);
  return;
}

