/* Ghidra address: 01113c10 */
/* Ghidra symbol: FUN_01113c10 */


void FUN_01113c10(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x61d)) {
    *(char *)(param_1 + 0x61d) = param_2;
  }
  *(undefined1 *)(param_1 + 0x61f) = 1;
  return;
}

