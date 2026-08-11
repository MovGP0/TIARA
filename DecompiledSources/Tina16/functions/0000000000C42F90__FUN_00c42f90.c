/* Ghidra address: 00c42f90 */
/* Ghidra symbol: FUN_00c42f90 */


double FUN_00c42f90(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  
  if (-param_1 < param_2) {
    dVar1 = 0.0;
    *param_4 = 0.0;
  }
  else {
    dVar1 = (param_1 + param_2) / param_3;
    *param_4 = 1.0 / param_3;
  }
  return dVar1;
}

