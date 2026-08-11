/* Ghidra address: 00dd1550 */
/* Ghidra symbol: FUN_00dd1550 */


double FUN_00dd1550(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  
  dVar1 = 1.0 / (param_3 * 2.0);
  if (param_1 <= param_2 + dVar1) {
    if (param_2 - dVar1 <= param_1) {
      dVar1 = 1.0 - (param_1 - (param_2 - dVar1)) * param_3;
      *param_4 = -param_3;
    }
    else {
      dVar1 = 1.0;
      *param_4 = 0.0;
    }
  }
  else {
    dVar1 = 0.0;
    *param_4 = 0.0;
  }
  return dVar1;
}

