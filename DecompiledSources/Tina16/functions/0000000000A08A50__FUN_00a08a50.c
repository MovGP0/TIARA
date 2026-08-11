/* Ghidra address: 00a08a50 */
/* Ghidra symbol: FUN_00a08a50 */


void FUN_00a08a50(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x8c)) {
    FUN_00a08d90(param_1,*(int *)(param_1 + 0x8c));
    if (*(int *)(param_1 + 0x90) < param_2) {
      *(undefined4 *)(param_1 + 0x8c) = 1;
    }
    else if (param_2 < 1) {
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x90);
    }
    else {
      *(int *)(param_1 + 0x8c) = param_2;
    }
    if (*(char *)(param_1 + 0x80) != '\0') {
      *(undefined1 *)(param_1 + 0xac) = 2;
    }
  }
  return;
}

