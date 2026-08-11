/* Ghidra address: 004b0320 */
/* Ghidra symbol: FUN_004b0320 */


void FUN_004b0320(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x18);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}

