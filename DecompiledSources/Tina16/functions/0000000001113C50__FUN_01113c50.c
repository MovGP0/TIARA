/* Ghidra address: 01113c50 */
/* Ghidra symbol: FUN_01113c50 */


void FUN_01113c50(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x628)) {
    *(int *)(param_1 + 0x628) = param_2;
  }
  *(undefined1 *)(param_1 + 0x621) = 1;
  return;
}

