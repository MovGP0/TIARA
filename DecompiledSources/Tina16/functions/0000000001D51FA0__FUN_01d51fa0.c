/* Ghidra address: 01d51fa0 */
/* Ghidra symbol: FUN_01d51fa0 */


double FUN_01d51fa0(double param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_01d51e00(-*(double *)(param_2 + 0xf8) *
                               (param_1 + *(double *)(param_2 + 0xe0)));
  dVar1 = -*(double *)(param_2 + 0xf0) * dVar1;
  dVar2 = (double)FUN_01d51e90(param_1,param_2);
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  return dVar2;
}

