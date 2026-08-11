/* Ghidra address: 01d5f150 */
/* Ghidra symbol: FUN_01d5f150 */


double FUN_01d5f150(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if (param_2 < param_1) {
    if (param_3 == 0.0) {
      dVar1 = 0.0;
    }
    else {
      dVar2 = (double)FUN_0040c760(param_1 * param_1 - param_2 * param_2);
      dVar3 = (double)FUN_00c42a20(-param_3 * param_1);
      dVar2 = (double)FUN_01d5e7b0(param_3 * dVar2);
      dVar1 = (double)FUN_00c42a20(-param_3 * param_2);
      dVar1 = dVar3 * dVar2 - dVar1;
    }
  }
  else {
    dVar1 = 0.0;
  }
  return dVar1;
}

