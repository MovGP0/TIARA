/* Ghidra address: 016ae250 */
/* Ghidra symbol: FUN_016ae250 */


void FUN_016ae250(longlong param_1,int param_2)

{
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(undefined1 *)(param_1 + 0x30) = 0;
    (*(int **)(param_1 + 0x8470))[1] = param_2 - **(int **)(param_1 + 0x8470);
  }
  return;
}

