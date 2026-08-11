/* Ghidra address: 00667830 */
/* Ghidra symbol: FUN_00667830 */


void FUN_00667830(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xb8) = *(undefined8 *)(*(longlong *)(param_2 + 0xe0) + 0x48);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x10));
  return;
}

