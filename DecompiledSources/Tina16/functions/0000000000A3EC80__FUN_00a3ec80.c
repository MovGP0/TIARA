/* Ghidra address: 00a3ec80 */
/* Ghidra symbol: FUN_00a3ec80 */


void FUN_00a3ec80(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x18));
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_0042a270(*(longlong *)(param_1 + 0x20));
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}

