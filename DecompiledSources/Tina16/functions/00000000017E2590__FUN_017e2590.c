/* Ghidra address: 017e2590 */
/* Ghidra symbol: FUN_017e2590 */


void FUN_017e2590(longlong param_1,undefined4 param_2)

{
  undefined1 local_2a8 [640];
  undefined4 local_28;
  
  local_2a8[0] = 6;
  local_28 = *(undefined4 *)(param_1 + 0x55c);
  FUN_017e19f0(*(undefined8 *)(param_1 + 0x500),local_2a8);
  *(undefined4 *)(param_1 + 0x55c) = param_2;
  FUN_017e4880(param_1,3);
  return;
}

