/* Ghidra address: 00b5c8b0 */
/* Ghidra symbol: FUN_00b5c8b0 */


void FUN_00b5c8b0(longlong param_1)

{
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 0x10) == 0x809) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x78) + 0x10) == 10) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    if (*(char *)(param_1 + 0x3c) == '\0') {
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    else {
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
    }
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  return;
}

