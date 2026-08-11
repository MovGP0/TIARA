/* Ghidra address: 00c42b60 */
/* Ghidra symbol: FUN_00c42b60 */


double FUN_00c42b60(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double *param_6,double *param_7)

{
  double dVar1;
  
  param_2 = param_2 * param_4;
  if (param_1 <= param_2 * -5.0) {
    *param_6 = param_5;
    dVar1 = -param_3 + param_5 * param_1;
    *param_7 = 0.0;
  }
  else {
    dVar1 = (double)FUN_00c42aa0(param_1 / param_2,param_3,param_6);
    dVar1 = (param_3 * dVar1 - param_3) + param_5 * param_1;
    *param_6 = (param_3 / param_2) * *param_6 + param_5;
    *param_7 = (*param_6 - param_5) / param_2;
  }
  return dVar1;
}

