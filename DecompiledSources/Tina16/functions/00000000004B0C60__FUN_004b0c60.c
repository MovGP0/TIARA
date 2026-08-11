/* Ghidra address: 004b0c60 */
/* Ghidra symbol: FUN_004b0c60 */


void FUN_004b0c60(undefined8 param_1,longlong param_2)

{
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(*(longlong *)(param_2 + 0x60) + 0x18);
  FUN_00412130(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x10));
  return;
}

