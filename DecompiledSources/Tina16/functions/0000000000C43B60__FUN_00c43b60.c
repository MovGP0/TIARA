/* Ghidra address: 00c43b60 */
/* Ghidra symbol: FUN_00c43b60 */


double FUN_00c43b60(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_0040c850(param_2);
  if (1e-100 <= dVar1) {
    dVar1 = -param_1 / (param_2 * 6.283185307179586);
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

