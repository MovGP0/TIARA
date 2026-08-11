/* Ghidra address: 01cc85b0 */
/* Ghidra symbol: FUN_01cc85b0 */


double FUN_01cc85b0(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_01cc8330(param_1);
  return *(double *)(*(longlong *)(param_1 + 8) + 0x28) * dVar1;
}

