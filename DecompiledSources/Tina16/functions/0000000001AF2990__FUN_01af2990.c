/* Ghidra address: 01af2990 */
/* Ghidra symbol: FUN_01af2990 */


void FUN_01af2990(longlong param_1,double param_2)

{
  if (param_2 != *(double *)(param_1 + 0x20)) {
    *(double *)(param_1 + 0x20) = param_2;
    FUN_01af2820();
  }
  return;
}

