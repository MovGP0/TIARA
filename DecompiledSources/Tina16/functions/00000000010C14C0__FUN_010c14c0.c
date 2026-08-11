/* Ghidra address: 010c14c0 */
/* Ghidra symbol: FUN_010c14c0 */


double FUN_010c14c0(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  if (param_4 <= 0.0) {
    param_4 = 1000000000000.0;
  }
  else {
    param_4 = 1.0 / param_4;
  }
  param_5 = param_4 * 2.0 * param_5;
  dVar1 = -param_5 / (param_5 + 1.0);
  return (-dVar1 * param_1 + dVar1 * param_2) - ((1.0 - param_5) / (param_5 + 1.0)) * param_3;
}

