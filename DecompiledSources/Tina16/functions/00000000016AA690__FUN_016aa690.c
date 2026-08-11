/* Ghidra address: 016aa690 */
/* Ghidra symbol: FUN_016aa690 */


double FUN_016aa690(double *param_1)

{
  double dVar1;
  
  dVar1 = param_1[1];
  if (*param_1 <= dVar1 && dVar1 != *param_1) {
    dVar1 = *param_1;
  }
  return dVar1;
}

