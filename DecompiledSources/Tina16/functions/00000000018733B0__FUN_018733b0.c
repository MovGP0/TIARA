/* Ghidra address: 018733b0 */
/* Ghidra symbol: FUN_018733b0 */


void FUN_018733b0(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    if (*(int *)(param_1 + 0x1c) == 1) {
      FUN_00618d40(*(undefined8 *)(param_1 + 8));
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
    }
  }
  else {
    FUN_00618d40(*(undefined8 *)(param_1 + 8));
  }
  if (param_2 != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}

