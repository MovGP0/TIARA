/* Ghidra address: 016aa670 */
/* Ghidra symbol: FUN_016aa670 */


double FUN_016aa670(double *param_1)

{
  double dVar1;
  
  dVar1 = param_1[1];
  if (dVar1 < *param_1) {
    dVar1 = *param_1;
  }
  return dVar1;
}

