/* Ghidra address: 00cb3650 */
/* Ghidra symbol: FUN_00cb3650 */


void FUN_00cb3650(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x160) = param_2;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x1ab) = param_2;
  }
  return;
}

