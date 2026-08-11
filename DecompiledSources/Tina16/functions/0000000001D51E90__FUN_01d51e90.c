/* Ghidra address: 01d51e90 */
/* Ghidra symbol: FUN_01d51e90 */


double FUN_01d51e90(double param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_01d51e00(-*(double *)(param_2 + 0xf8) * *(double *)(param_2 + 0x100) * param_1
                              );
  return -*(double *)(param_2 + 0xf0) * dVar1;
}

