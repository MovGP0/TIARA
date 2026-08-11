/* Ghidra address: 010ccd30 */
/* Ghidra symbol: FUN_010ccd30 */


double FUN_010ccd30(double param_1,int param_2)

{
  double dVar1;
  
  if (param_2 < 2) {
    dVar1 = (double)FUN_00c42750((double)param_2);
    param_1 = param_1 * dVar1;
  }
  else if (0 < param_2) {
    do {
      param_1 = param_1 * 10.0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return param_1;
}

