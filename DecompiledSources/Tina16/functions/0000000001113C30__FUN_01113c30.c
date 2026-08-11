/* Ghidra address: 01113c30 */
/* Ghidra symbol: FUN_01113c30 */


void FUN_01113c30(longlong param_1,int param_2)

{
  if (param_2 != *(int *)(param_1 + 0x62c)) {
    *(int *)(param_1 + 0x62c) = param_2;
  }
  *(undefined1 *)(param_1 + 0x620) = 1;
  return;
}

