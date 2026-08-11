/* Ghidra address: 01cc8580 */
/* Ghidra symbol: FUN_01cc8580 */


double FUN_01cc8580(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_01cc8320(param_1);
  return *(double *)(*(longlong *)(param_1 + 8) + 0x28) * dVar1;
}

