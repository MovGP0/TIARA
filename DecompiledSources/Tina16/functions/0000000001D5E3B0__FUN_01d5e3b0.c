/* Ghidra address: 01d5e3b0 */
/* Ghidra symbol: FUN_01d5e3b0 */


double FUN_01d5e3b0(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6)

{
  double dVar1;
  
  if (param_6 - param_5 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (param_2 - param_1) * param_3 +
            ((param_4 - param_3) / (param_6 - param_5)) * 0.5 *
            ((param_2 - param_5) * (param_2 - param_5) - (param_1 - param_5) * (param_1 - param_5));
  }
  return dVar1;
}

