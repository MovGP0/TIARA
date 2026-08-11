/* Ghidra address: 00f43c20 */
/* Ghidra symbol: FUN_00f43c20 */


void FUN_00f43c20(longlong param_1)

{
  if (*(char *)(param_1 + 0x738) != '\0') {
    FUN_007f95c0(*(undefined8 *)(param_1 + 0x770));
    if (*(longlong *)(param_1 + 0x778) != 0) {
      thunk_FUN_04161dbd(*(longlong *)(param_1 + 0x778));
    }
  }
  return;
}

