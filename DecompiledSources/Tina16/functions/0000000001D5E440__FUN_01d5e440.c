/* Ghidra address: 01d5e440 */
/* Ghidra symbol: FUN_01d5e440 */


double FUN_01d5e440(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7)

{
  double dVar1;
  double dVar2;
  
  if (param_7 - param_6 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = param_2 - param_6;
    dVar2 = param_1 - param_6;
    dVar1 = (param_4 * ((param_2 - param_3) * (param_2 - param_3) -
                       (param_1 - param_3) * (param_1 - param_3)) +
            ((param_5 - param_4) / (param_7 - param_6)) *
            ((dVar1 * dVar1 * dVar1 - dVar2 * dVar2 * dVar2) / 3.0 -
            (param_3 - param_6) * (param_3 - param_6) * (param_2 - param_1))) * 0.5;
  }
  return dVar1;
}

