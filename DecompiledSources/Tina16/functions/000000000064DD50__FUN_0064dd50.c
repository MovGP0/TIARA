/* Ghidra address: 0064dd50 */
/* Ghidra symbol: FUN_0064dd50 */


void FUN_0064dd50(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0xe8) = param_2;
  if (param_2 != 0) {
    FUN_007e70b0(param_2,param_1);
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

