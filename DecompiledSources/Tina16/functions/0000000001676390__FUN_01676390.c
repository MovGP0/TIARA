/* Ghidra address: 01676390 */
/* Ghidra symbol: FUN_01676390 */


double FUN_01676390(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040c850(param_3 - param_1);
  if (1e-30 <= dVar1) {
    dVar1 = (param_4 - param_2) / (param_3 - param_1);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

