/* Ghidra address: 004b05d0 */
/* Ghidra symbol: FUN_004b05d0 */


void FUN_004b05d0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x18);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0xd8) + 0x10));
  return;
}

