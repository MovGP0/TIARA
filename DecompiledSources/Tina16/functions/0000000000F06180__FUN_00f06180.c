/* Ghidra address: 00f06180 */
/* Ghidra symbol: FUN_00f06180 */


double FUN_00f06180(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_0040af40(param_1);
  if (param_1 < 0.0) {
    dVar1 = dVar1 + 1.0;
  }
  dVar2 = (double)FUN_0040c850(1.0 - dVar1);
  if (dVar2 < 1e-12) {
    dVar1 = 0.0;
  }
  return dVar1;
}

