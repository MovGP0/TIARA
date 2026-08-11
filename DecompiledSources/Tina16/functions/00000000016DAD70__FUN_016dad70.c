/* Ghidra address: 016dad70 */
/* Ghidra symbol: FUN_016dad70 */


int FUN_016dad70(longlong param_1,int param_2)

{
  while (*(double *)(*(longlong *)(param_1 + 0x98) + -8 + (longlong)param_2 * 8) == 0.0) {
    param_2 = param_2 + 1;
    if (8 < param_2) {
      param_2 = 3;
    }
  }
  return param_2;
}

