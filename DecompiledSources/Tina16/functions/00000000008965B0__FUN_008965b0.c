/* Ghidra address: 008965b0 */
/* Ghidra symbol: FUN_008965b0 */


undefined4 FUN_008965b0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_c;
  
  local_20 = auStack_48;
  FUN_0089b8c0(param_1);
  local_c = *(undefined4 *)(param_1 + 0x10);
  FUN_0089b920(param_1);
  return local_c;
}

