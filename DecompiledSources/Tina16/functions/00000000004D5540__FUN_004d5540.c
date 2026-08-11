/* Ghidra address: 004d5540 */
/* Ghidra symbol: FUN_004d5540 */


void FUN_004d5540(undefined8 param_1,longlong param_2)

{
  FUN_004095f0(*(undefined8 *)(param_2 + 0x68));
  if (*(longlong *)(param_2 + 0xa0) != 0) {
    **(undefined8 **)(param_2 + 0xa0) = *(undefined8 *)(param_2 + 0x60);
  }
  if (*(longlong *)(param_2 + 0x98) != 0) {
    **(undefined8 **)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0x58);
  }
  return;
}

