/* Ghidra address: 007fa810 */
/* Ghidra symbol: FUN_007fa810 */


void FUN_007fa810(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x3c) != param_2) {
    *(char *)(param_1 + 0x3c) = param_2;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    FUN_007fb150(*(undefined8 *)(param_1 + 8));
  }
  return;
}

