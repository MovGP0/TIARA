/* Ghidra address: 004b03f0 */
/* Ghidra symbol: FUN_004b03f0 */


void FUN_004b03f0(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x18);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x10));
  return;
}

