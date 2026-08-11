/* Ghidra address: 019b9b30 */
/* Ghidra symbol: FUN_019b9b30 */


void FUN_019b9b30(longlong param_1)

{
  if (*(char *)(param_1 + 0xb3c) == '\0') {
    *(undefined8 *)(param_1 + 0xb28) = 0;
    *(undefined8 *)(param_1 + 0xb30) = 0;
    *(undefined1 *)(param_1 + 0xb3c) = 1;
  }
  return;
}

