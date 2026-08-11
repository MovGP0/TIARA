/* Ghidra address: 01d5f070 */
/* Ghidra symbol: FUN_01d5f070 */


double FUN_01d5f070(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 != 0.0) {
    param_2 = param_2 * param_1;
    if (param_2 == 0.0) {
      param_1 = 0.0;
    }
    else {
      dVar1 = (double)FUN_01d5e9b0(param_2);
      dVar2 = (double)FUN_01d5e7b0(param_2);
      dVar3 = (double)FUN_00c42a20(-param_2);
      param_1 = (dVar1 + dVar2) * param_1 * dVar3 - param_1;
    }
  }
  return param_1;
}

