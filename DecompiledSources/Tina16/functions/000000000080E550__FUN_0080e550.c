/* Ghidra address: 0080e550 */
/* Ghidra symbol: FUN_0080e550 */


void FUN_0080e550(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x110) != 0) {
    thunk_FUN_040dee27(0,*(longlong *)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  return;
}

