/* Ghidra address: 005bfb90 */
/* Ghidra symbol: FUN_005bfb90 */


void FUN_005bfb90(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x10);
  FUN_00412130(*(undefined8 *)(param_2 + 0x40));
  return;
}

