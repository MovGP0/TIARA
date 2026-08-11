/* Ghidra address: 00e4e060 */
/* Ghidra symbol: FUN_00e4e060 */


void FUN_00e4e060(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((((param_2 <= 1e+18) || (1e+25 <= param_2)) || (param_5 <= param_1)) || (param_3 == 0.0)) {
    *param_6 = param_5;
    *param_7 = 1.0;
  }
  else {
    dVar3 = (param_3 * 1.6021917e-13 * param_2) / (param_4 * param_4);
    dVar1 = (double)FUN_0040c760(((param_5 - param_1) * 2.0) / dVar3 + 1.0);
    dVar2 = ((param_5 - param_1) * 2.0) / (dVar1 + 1.0);
    dVar3 = 1.07 - (dVar2 * 0.5 * dVar2) / dVar3;
    dVar2 = (double)FUN_0040c760(dVar3 * dVar3 + 0.224);
    *param_6 = param_5 - (1.12 - (dVar3 + dVar2) * 0.5);
    *param_7 = 1.0 - (0.5 - 0.5 / dVar1) * (dVar3 / dVar2 + 1.0);
  }
  return;
}

