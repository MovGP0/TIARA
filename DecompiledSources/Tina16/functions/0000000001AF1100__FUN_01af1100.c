/* Ghidra address: 01af1100 */
/* Ghidra symbol: FUN_01af1100 */


void FUN_01af1100(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x7b1)) {
    *(char *)(param_1 + 0x7b1) = param_2;
    FUN_0064e140(param_1,0);
  }
  return;
}

