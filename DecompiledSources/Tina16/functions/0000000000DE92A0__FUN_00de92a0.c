/* Ghidra address: 00de92a0 */
/* Ghidra symbol: FUN_00de92a0 */


double FUN_00de92a0(double param_1,double param_2)

{
  double dVar1;
  
  if (0.0 < param_2) {
    if (param_1 <= param_2) {
      if (param_2 / 2.0 <= param_1) {
        param_2 = ((param_2 - param_1) * 2.0) / param_2;
        dVar1 = 1.0 - (param_2 * param_2) / 2.0;
      }
      else {
        param_2 = (param_1 * 2.0) / param_2;
        dVar1 = (param_2 * param_2) / 2.0;
      }
    }
    else {
      dVar1 = 1.0;
    }
  }
  else {
    dVar1 = 1.0;
  }
  return dVar1;
}

