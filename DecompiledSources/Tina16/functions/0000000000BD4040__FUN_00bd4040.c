/* Ghidra address: 00bd4040 */
/* Ghidra symbol: FUN_00bd4040 */


void FUN_00bd4040(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  if (*(int *)(param_1 + 0x10) < 1) {
    thunk_FUN_041a9b5c(0,*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

