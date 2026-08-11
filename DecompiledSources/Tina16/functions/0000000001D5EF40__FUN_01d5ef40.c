/* Ghidra address: 01d5ef40 */
/* Ghidra symbol: FUN_01d5ef40 */


double FUN_01d5ef40(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_3 == 0.0) {
    dVar3 = 0.0;
  }
  else if (param_2 <= param_1) {
    if (param_1 == param_2) {
      dVar1 = 0.0;
    }
    else {
      dVar1 = (double)FUN_0040c760(param_1 * param_1 - param_2 * param_2);
      dVar1 = param_3 * dVar1;
    }
    dVar2 = (double)FUN_01d5ec10(dVar1);
    dVar1 = (double)FUN_01d5e7b0(dVar1);
    dVar3 = (double)FUN_00c42a20(-param_4 * param_1);
    dVar3 = (param_3 * param_1 * dVar2 - dVar1) * param_3 * dVar3;
  }
  else {
    dVar3 = 0.0;
  }
  return dVar3;
}

