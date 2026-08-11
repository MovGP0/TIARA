/* Ghidra address: 00c43230 */
/* Ghidra symbol: FUN_00c43230 */


double FUN_00c43230(double param_1,double param_2,undefined1 *param_3)

{
  double dVar1;
  
  *param_3 = 0;
  if (param_2 < 3.5) {
    if (param_1 <= param_2) {
      if (param_1 < -0.5) {
        param_1 = -0.5;
        *param_3 = 1;
      }
    }
    else if (4.0 < param_1) {
      param_1 = 4.0;
      *param_3 = 1;
    }
  }
  else if (param_1 <= param_2) {
    if ((param_1 < 3.5) && (param_1 < 2.0)) {
      param_1 = 2.0;
      *param_3 = 1;
    }
  }
  else {
    dVar1 = param_2 * 3.0 + 2.0;
    if (dVar1 < param_1) {
      *param_3 = 1;
      param_1 = dVar1;
    }
  }
  return param_1;
}

