/* Ghidra address: 004b06b0 */
/* Ghidra symbol: FUN_004b06b0 */


void FUN_004b06b0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x18);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x10));
  return;
}

