/* Ghidra address: 006a51c0 */
/* Ghidra symbol: FUN_006a51c0 */


void FUN_006a51c0(longlong param_1)

{
  if ((*(int *)(param_1 + 8) != 0) &&
     (*(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1, *(int *)(param_1 + 8) == 0)) {
    thunk_FUN_0411986d();
    if (*(char *)(param_1 + 0x18) != '\0') {
      FUN_004d6550(*(undefined8 *)(param_1 + 0x10));
      *(undefined1 *)(param_1 + 0x18) = 0;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return;
}

