/* Ghidra address: 016aa890 */
/* Ghidra symbol: FUN_016aa890 */


double FUN_016aa890(double *param_1)

{
  double dVar1;
  
  if (*param_1 < param_1[1]) {
    dVar1 = param_1[3];
  }
  else {
    dVar1 = param_1[2];
  }
  return dVar1;
}

