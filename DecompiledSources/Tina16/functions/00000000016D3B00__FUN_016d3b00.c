/* Ghidra address: 016d3b00 */
/* Ghidra symbol: FUN_016d3b00 */


void FUN_016d3b00(longlong param_1,int param_2)

{
  if (param_2 < 2) {
    param_2 = 2;
  }
  if (4 < param_2) {
    param_2 = 4;
  }
  *(int *)(param_1 + 0x4a0) = param_2;
  return;
}

