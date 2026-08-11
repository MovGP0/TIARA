/* Ghidra address: 01d52030 */
/* Ghidra symbol: FUN_01d52030 */


double FUN_01d52030(double param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_01d51e00(-*(double *)(param_2 + 0xf8) *
                               (param_1 - *(double *)(param_2 + 0xe0)));
  return -*(double *)(param_2 + 0xe8) * dVar1;
}

