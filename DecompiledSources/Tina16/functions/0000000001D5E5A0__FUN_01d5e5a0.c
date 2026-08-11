/* Ghidra address: 01d5e5a0 */
/* Ghidra symbol: FUN_01d5e5a0 */


double FUN_01d5e5a0(double param_1,double param_2,double param_3,double param_4,double param_5,
                   double param_6,double param_7,double param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if (param_8 - param_7 == 0.0) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = param_2 - param_7;
    dVar2 = param_1 - param_7;
    dVar3 = param_3 - param_7;
    dVar4 = param_2 - param_4;
    dVar5 = param_1 - param_4;
    dVar1 = (param_5 * ((dVar4 * dVar4 * dVar4 - dVar5 * dVar5 * dVar5) / 3.0 -
                       (param_3 - param_4) * dVar4 * (param_2 - param_1)) +
            ((param_6 - param_5) / (param_8 - param_7)) *
            (((dVar1 * dVar1 * dVar1 * dVar1 - dVar2 * dVar2 * dVar2 * dVar2) * 0.25 -
             dVar3 * dVar3 * dVar3 * (param_2 - param_1)) / 3.0 -
            (param_4 - param_7) * (param_4 - param_7) * 0.5 *
            ((param_2 - param_3) * (param_2 - param_3) - (param_1 - param_3) * (param_1 - param_3)))
            ) * 0.5;
  }
  return dVar1;
}

