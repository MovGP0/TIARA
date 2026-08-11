/* Ghidra address: 018006e0 */
/* Ghidra symbol: FUN_018006e0 */


void FUN_018006e0(longlong param_1)

{
  FUN_007f95c0(*(undefined8 *)(param_1 + 0x6e0));
  if (*(longlong *)(param_1 + 0x6e8) != 0) {
    thunk_FUN_04161dbd(*(longlong *)(param_1 + 0x6e8));
  }
  return;
}

