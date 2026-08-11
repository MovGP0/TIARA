/* Ghidra address: 0072a780 */
/* Ghidra symbol: FUN_0072a780 */


void FUN_0072a780(longlong param_1,longlong param_2)

{
  if (param_2 != *(longlong *)(param_1 + 0x40)) {
    *(longlong *)(param_1 + 0x40) = param_2;
  }
  return;
}

