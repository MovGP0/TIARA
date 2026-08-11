/* Ghidra address: 0072a2b0 */
/* Ghidra symbol: FUN_0072a2b0 */


void FUN_0072a2b0(longlong param_1,char param_2)

{
  if (param_2 != *(char *)(param_1 + 0x40)) {
    *(char *)(param_1 + 0x40) = param_2;
    FUN_0072a200();
  }
  return;
}

