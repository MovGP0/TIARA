/* Ghidra address: 01676440 */
/* Ghidra symbol: FUN_01676440 */


double FUN_01676440(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040c850(param_4 - param_2);
  if (1e-30 <= dVar1) {
    param_3 = ((param_1 - param_2) * (param_5 - param_3)) / (param_4 - param_2) + param_3;
  }
  else {
    param_3 = 0.0;
  }
  return param_3;
}

