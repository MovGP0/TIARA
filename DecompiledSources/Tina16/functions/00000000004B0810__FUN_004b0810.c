/* Ghidra address: 004b0810 */
/* Ghidra symbol: FUN_004b0810 */


void FUN_004b0810(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x38) = *(undefined8 *)(*(longlong *)(param_2 + 0x50) + 0x18);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  return;
}

