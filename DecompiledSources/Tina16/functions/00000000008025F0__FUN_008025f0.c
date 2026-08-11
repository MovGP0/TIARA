/* Ghidra address: 008025f0 */
/* Ghidra symbol: FUN_008025f0 */


void FUN_008025f0(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  longlong local_10;
  
  local_20 = auStack_48;
  local_10 = *(longlong *)(*(longlong *)(param_1 + 0x50) + 0x4c0);
  local_11 = *(undefined1 *)(local_10 + 0x490);
  *(undefined1 *)(local_10 + 0x490) = 1;
  FUN_00802550(*(undefined8 *)(param_1 + 0x50));
  *(undefined1 *)(local_10 + 0x490) = local_11;
  return;
}

