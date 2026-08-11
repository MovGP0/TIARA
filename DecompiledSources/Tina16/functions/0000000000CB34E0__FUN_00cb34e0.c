/* Ghidra address: 00cb34e0 */
/* Ghidra symbol: FUN_00cb34e0 */


void FUN_00cb34e0(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 400) = param_2;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_00cb9b60(*(longlong *)(param_1 + 0x128));
  }
  return;
}

