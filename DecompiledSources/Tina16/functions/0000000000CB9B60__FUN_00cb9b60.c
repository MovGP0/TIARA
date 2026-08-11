/* Ghidra address: 00cb9b60 */
/* Ghidra symbol: FUN_00cb9b60 */


void FUN_00cb9b60(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1aa) = param_2;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x158) + 0x62) = param_2;
  }
  return;
}

