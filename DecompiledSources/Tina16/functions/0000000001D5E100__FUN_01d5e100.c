/* Ghidra address: 01d5e100 */
/* Ghidra symbol: FUN_01d5e100 */


undefined8
FUN_01d5e100(double param_1,double param_2,double param_3,double param_4,double *param_5,
            double *param_6,double *param_7)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (param_1 == param_2) {
    *param_5 = 1.0;
    *param_6 = 0.0;
    *param_7 = 0.0;
    uVar1 = 0;
  }
  else if (param_1 == param_3) {
    *param_5 = 0.0;
    *param_6 = 1.0;
    *param_7 = 0.0;
    uVar1 = 0;
  }
  else if (param_1 == param_4) {
    *param_5 = 0.0;
    *param_6 = 0.0;
    *param_7 = 1.0;
    uVar1 = 0;
  }
  else if (((param_3 - param_2 == 0.0) || (param_4 - param_3 == 0.0)) || (param_2 - param_4 == 0.0))
  {
    uVar1 = 1;
  }
  else {
    if (param_3 - param_2 == 0.0) {
      dVar3 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar3 = ((param_1 - param_3) * (param_1 - param_4)) / (param_2 - param_3);
      dVar4 = ((param_1 - param_2) * (param_1 - param_4)) / (param_3 - param_2);
    }
    if (param_4 - param_3 == 0.0) {
      dVar4 = 0.0;
      dVar2 = 0.0;
    }
    else {
      dVar4 = dVar4 / (param_3 - param_4);
      dVar2 = ((param_1 - param_2) * (param_1 - param_3)) / (param_3 - param_4);
    }
    if (param_4 - param_2 == 0.0) {
      dVar3 = 0.0;
      dVar4 = 0.0;
    }
    else {
      dVar3 = dVar3 / (param_2 - param_4);
      dVar2 = dVar2 / (param_2 - param_4);
    }
    *param_5 = dVar3;
    *param_6 = dVar4;
    *param_7 = dVar2;
    uVar1 = 0;
  }
  return uVar1;
}

