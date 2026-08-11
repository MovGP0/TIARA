/* Ghidra address: 01478130 */
/* Ghidra symbol: FUN_01478130 */


void FUN_01478130(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2b5) = param_2;
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x2a8) + 0x125) = param_2;
  }
  return;
}

