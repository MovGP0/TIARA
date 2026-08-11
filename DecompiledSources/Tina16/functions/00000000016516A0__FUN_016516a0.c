/* Ghidra address: 016516a0 */
/* Ghidra symbol: FUN_016516a0 */


double FUN_016516a0(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_01b100a0(param_1);
  return dVar1 * *(double *)(param_1 + 0x48);
}

