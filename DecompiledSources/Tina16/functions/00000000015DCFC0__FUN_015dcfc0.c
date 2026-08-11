/* Ghidra address: 015dcfc0 */
/* Ghidra symbol: FUN_015dcfc0 */


void FUN_015dcfc0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x80)) {
    if (*(int *)(param_1 + 0x80) < 2) {
      *(undefined1 *)(param_1 + 0x231) = 1;
      FUN_015d2020(param_1);
      if ((*(char *)(param_1 + 0x103) != '\0') && (*(short *)(param_1 + 0xa0) == -0x100)) {
        *(undefined2 *)(param_1 + 0xa0) = 0x22;
      }
    }
    else {
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
    }
  }
  return;
}

