/* Ghidra address: 010bf890 */
/* Ghidra symbol: FUN_010bf890 */


double FUN_010bf890(double param_1)

{
  double dVar1;
  
  if (param_1 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (double)FUN_0040c850(param_1);
    dVar1 = dVar1 / param_1;
  }
  return dVar1;
}

