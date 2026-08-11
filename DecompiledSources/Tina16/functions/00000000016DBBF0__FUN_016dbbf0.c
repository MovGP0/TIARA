/* Ghidra address: 016dbbf0 */
/* Ghidra symbol: FUN_016dbbf0 */


double FUN_016dbbf0(undefined8 param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((param_2 != '\x06') || (param_4[1] <= 0.0)) {
    param_3 = 0.0;
  }
  else {
    dVar3 = 1.0 / param_4[1];
    dVar1 = *param_4;
    if (dVar3 <= param_3) {
      dVar2 = (double)FUN_0040af10(param_3 / dVar3);
      param_3 = param_3 - dVar2 * dVar3;
    }
    if (dVar3 <= param_3) {
      param_3 = param_3 - dVar3;
    }
    if (param_3 < 0.0) {
      param_3 = param_3 + dVar3;
    }
    dVar3 = dVar3 * 0.25;
    if (dVar3 <= param_3) {
      if (dVar3 * 3.0 <= param_3) {
        param_3 = (dVar1 / dVar3) * (param_3 - dVar3 * 4.0);
      }
      else {
        param_3 = (-dVar1 / dVar3) * (param_3 - dVar3 * 2.0);
      }
    }
    else {
      param_3 = (dVar1 / dVar3) * param_3;
    }
  }
  return param_3;
}

