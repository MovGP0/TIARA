/* Ghidra address: 016aa8b0 */
/* Ghidra symbol: FUN_016aa8b0 */


double FUN_016aa8b0(double *param_1)

{
  double dVar1;
  
  FUN_0040c850(param_1[1]);
  FUN_0040c850(*param_1);
  if (param_1[1] < *param_1) {
    dVar1 = param_1[3];
  }
  else {
    dVar1 = param_1[2];
  }
  return dVar1;
}

