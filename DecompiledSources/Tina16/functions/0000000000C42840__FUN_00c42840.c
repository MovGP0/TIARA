/* Ghidra address: 00c42840 */
/* Ghidra symbol: FUN_00c42840 */


double FUN_00c42840(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  if (param_3 / 2.0 < param_1) {
    dVar1 = (double)FUN_00c42670(0x4000000000000000,param_4);
    param_2 = dVar1 * param_2 * (((param_4 * 2.0 * param_1) / param_3 - param_4) + 1.0);
  }
  else {
    dVar1 = (double)FUN_00c42670(1.0 - param_1 / param_3,-param_4);
    param_2 = param_2 * dVar1;
  }
  return param_2;
}

