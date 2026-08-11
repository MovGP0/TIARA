/* Ghidra address: 00f12100 */
/* Ghidra symbol: FUN_00f12100 */


double FUN_00f12100(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  if ((param_1 <= 0.0) || (param_2 <= 0.0)) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)FUN_0040c2f0(param_2);
    dVar2 = (double)FUN_0040c2f0(param_1);
    dVar1 = dVar1 / dVar2;
  }
  return dVar1;
}

