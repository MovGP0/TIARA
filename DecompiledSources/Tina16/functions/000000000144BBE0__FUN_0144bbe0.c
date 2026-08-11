/* Ghidra address: 0144bbe0 */
/* Ghidra symbol: FUN_0144bbe0 */


double FUN_0144bbe0(double param_1,double param_2)

{
  double dVar1;
  
  if (param_2 == 0.0) {
    if (param_1 <= 0.0) {
      if (param_1 == 0.0) {
        dVar1 = 0.0;
      }
      else {
        dVar1 = -1.5707963267948966;
      }
    }
    else {
      dVar1 = 1.5707963267948966;
    }
  }
  else {
    dVar1 = (double)FUN_0040c660(param_1 / param_2);
  }
  if (param_2 < 0.0) {
    if (param_1 == 0.0) {
      dVar1 = 3.141592653589793;
    }
    else if (param_1 <= 0.0) {
      dVar1 = dVar1 - 3.141592653589793;
    }
    else {
      dVar1 = dVar1 + 3.141592653589793;
    }
  }
  return dVar1;
}

