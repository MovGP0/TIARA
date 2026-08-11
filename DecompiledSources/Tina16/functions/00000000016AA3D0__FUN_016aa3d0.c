/* Ghidra address: 016aa3d0 */
/* Ghidra symbol: FUN_016aa3d0 */


double FUN_016aa3d0(double *param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040c850(*param_1);
  if (1e-50 <= dVar1) {
    dVar1 = param_1[1] / *param_1;
    FUN_0040c850(dVar1);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 - 1e-38;
    }
    else {
      dVar1 = dVar1 + 1e-38;
    }
    dVar1 = 1.0 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

