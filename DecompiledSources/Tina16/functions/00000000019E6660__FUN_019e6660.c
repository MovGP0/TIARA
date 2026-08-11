/* Ghidra address: 019e6660 */
/* Ghidra symbol: FUN_019e6660 */


double FUN_019e6660(double param_1,double param_2,double param_3,double *param_4)

{
  if (0.0 <= param_3) {
    if (param_3 <= param_1) {
      *param_4 = param_2 / param_1;
      param_2 = param_3 * *param_4;
    }
    else {
      *param_4 = 0.0;
    }
  }
  else {
    param_2 = 0.0;
    *param_4 = 0.0;
  }
  return param_2;
}

