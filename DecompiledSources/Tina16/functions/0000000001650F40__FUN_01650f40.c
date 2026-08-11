/* Ghidra address: 01650f40 */
/* Ghidra symbol: FUN_01650f40 */


double FUN_01650f40(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_01b100a0(param_1);
  return dVar1 * *(double *)(param_1 + 0x48);
}

