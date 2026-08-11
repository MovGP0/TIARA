/* Ghidra address: 01113bf0 */
/* Ghidra symbol: FUN_01113bf0 */


void FUN_01113bf0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x61c)) {
    *(char *)(param_1 + 0x61c) = param_2;
  }
  *(undefined1 *)(param_1 + 0x61e) = 1;
  return;
}

