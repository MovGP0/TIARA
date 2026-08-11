/* Ghidra address: 01d5ee20 */
/* Ghidra symbol: FUN_01d5ee20 */


double FUN_01d5ee20(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  
  if (param_3 == 0.0) {
    dVar1 = 0.0;
  }
  else if (param_2 <= param_1) {
    if (param_1 == param_2) {
      dVar1 = 0.0;
    }
    else {
      dVar1 = (double)FUN_0040c760(param_1 * param_1 - param_2 * param_2);
      dVar1 = param_3 * dVar1;
    }
    dVar2 = (double)FUN_00c42a20(-param_4 * param_1);
    dVar1 = (double)FUN_01d5ec10(dVar1);
    dVar1 = param_3 * param_3 * param_2 * dVar2 * dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

