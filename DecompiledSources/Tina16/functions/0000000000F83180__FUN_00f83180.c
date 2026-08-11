/* Ghidra address: 00f83180 */
/* Ghidra symbol: FUN_00f83180 */


void FUN_00f83180(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x68) = *(undefined8 *)(*(longlong *)(param_2 + 0x90) + 0x80);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x68) + 0x10));
  return;
}

