/* Ghidra address: 00c42cb0 */
/* Ghidra symbol: FUN_00c42cb0 */


double FUN_00c42cb0(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  
  if (param_1 < param_2 * -3.0) {
    if ((param_5 == 0.0) || (-param_5 <= param_1)) {
      dVar2 = (param_2 * 3.0) / (param_1 * 2.718281828459045);
      dVar2 = dVar2 * dVar2 * dVar2;
      dVar1 = -param_4 * (dVar2 + 1.0) + param_6 * param_1;
      *param_7 = (param_4 * 3.0 * dVar2) / param_1 + param_6;
      *param_8 = ((*param_7 - param_6) * -4.0) / param_1;
    }
    else {
      dVar1 = (double)FUN_00c42aa0(-(param_5 + param_1) / param_3,param_4,param_7);
      dVar1 = -param_4 * dVar1 + param_6 * param_1;
      *param_7 = (param_4 * *param_7) / param_3 + param_6;
      *param_8 = -(*param_7 - param_6) / param_3;
    }
  }
  else {
    dVar1 = (double)FUN_00c42aa0(param_1 / param_2,param_4,param_7);
    dVar1 = param_4 * (dVar1 - 1.0) + param_6 * param_1;
    *param_7 = (param_4 * *param_7) / param_2 + param_6;
    *param_8 = (*param_7 - param_6) / param_2;
  }
  return dVar1;
}

