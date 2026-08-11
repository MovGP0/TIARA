/* Ghidra address: 00daa950 */
/* Ghidra symbol: FUN_00daa950 */


void FUN_00daa950(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double *param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_4 + param_2) / 2.0;
  dVar3 = ((param_5 - param_3) * 2.0) / (param_4 - param_2);
  if (param_2 <= param_1) {
    if (dVar2 <= param_1) {
      if (param_4 <= param_1) {
        *param_6 = param_5;
        *param_7 = 0.0;
      }
      else {
        dVar3 = -dVar3 / (param_4 - param_2);
        dVar2 = dVar3 * -2.0 * param_4;
        *param_6 = dVar3 * param_1 * param_1 + dVar2 * param_1 +
                   ((param_5 - dVar3 * param_4 * param_4) - dVar2 * param_4);
        *param_7 = dVar3 * 2.0 * param_1 + dVar2;
      }
    }
    else {
      dVar1 = dVar3 / (param_4 - param_2);
      dVar3 = dVar3 - dVar1 * 2.0 * dVar2;
      *param_6 = dVar1 * param_1 * param_1 + dVar3 * param_1 +
                 (((param_5 + param_3) / 2.0 - dVar1 * dVar2 * dVar2) - dVar3 * dVar2);
      *param_7 = dVar1 * 2.0 * param_1 + dVar3;
    }
  }
  else {
    *param_6 = param_3;
    *param_7 = 0.0;
  }
  return;
}

