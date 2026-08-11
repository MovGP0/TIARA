/* Ghidra address: 00daa5f0 */
/* Ghidra symbol: FUN_00daa5f0 */


void FUN_00daa5f0(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double *param_8,double *param_9)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (((param_6 < 0.0) || (param_7 < 0.0)) || (param_6 <= param_7)) {
    bVar1 = true;
    dVar3 = param_4;
    if (param_5 < param_4) {
      param_4 = param_5;
      dVar3 = param_5;
    }
  }
  else {
    bVar1 = false;
    dVar2 = (double)FUN_0040c760(param_6 * param_7);
    dVar3 = ((dVar2 - param_6) / (param_7 - dVar2)) * param_4;
    if (param_5 < dVar3) {
      param_4 = ((param_7 - dVar2) * param_5) / (dVar2 - param_6);
      dVar3 = param_5;
      bVar1 = false;
    }
  }
  param_5 = dVar3;
  dVar3 = param_2 - param_4;
  if (dVar3 <= param_1) {
    if (param_2 + param_5 <= param_1) {
      *param_8 = param_3 + param_7 * (param_1 - param_2);
      *param_9 = param_7;
    }
    else if (bVar1) {
      FUN_00daa300(param_1,param_2,param_3,param_4,param_6,param_7,param_8,param_9);
    }
    else {
      dVar2 = (double)FUN_0040c760(param_6 / param_7);
      dVar4 = ((param_2 + param_5) - dVar2 * dVar3) / (dVar2 - 1.0);
      dVar2 = (param_6 * (dVar3 + dVar4) * (dVar3 + dVar4)) / dVar4;
      *param_8 = (dVar2 * param_1) / (param_1 + dVar4) +
                 ((param_3 - param_6 * param_4) - (dVar2 * dVar3) / (dVar3 + dVar4));
      *param_9 = (dVar2 * dVar4) / ((param_1 + dVar4) * (param_1 + dVar4));
    }
  }
  else {
    *param_8 = param_3 + param_6 * (param_1 - param_2);
    *param_9 = param_6;
  }
  return;
}

