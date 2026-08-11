/* Ghidra address: 0194fb50 */
/* Ghidra symbol: FUN_0194fb50 */


void FUN_0194fb50(undefined8 param_1,longlong param_2)

{
  FUN_00410f20(*(undefined8 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x2a8) = 0;
  }
  return;
}

