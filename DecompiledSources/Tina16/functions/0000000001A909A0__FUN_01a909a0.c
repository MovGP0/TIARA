/* Ghidra address: 01a909a0 */
/* Ghidra symbol: FUN_01a909a0 */


undefined8 *
FUN_01a909a0(undefined8 *param_1,double param_2,double param_3,double param_4,double *param_5,
            double *param_6,undefined8 param_7)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  dVar1 = (double)FUN_0040c850(param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2));
  if ((dVar1 < 1e-10) && (param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2) < 0.0)) {
    param_4 = (double)FUN_0040c850(*param_5 - param_2);
  }
  if (0.0 <= param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2)) {
    dVar1 = (double)FUN_0040c760(param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2));
    dVar1 = (double)FUN_0040c850((dVar1 + param_3) - *param_6);
    if (1e-05 <= dVar1) {
      dVar1 = (double)FUN_0040c850(param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2));
      if (1e-05 <= dVar1) {
        param_1[1] = -(param_2 - *param_5);
        uVar2 = FUN_0040c760(param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2));
        *param_1 = uVar2;
      }
      else {
        *param_1 = 0;
        param_1[1] = -(param_2 - *param_5);
      }
    }
    else {
      dVar1 = (double)FUN_0040c850(param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2));
      if (1e-05 <= dVar1) {
        param_1[1] = param_2 - *param_5;
        uVar2 = FUN_0040c760(param_4 * param_4 - (*param_5 - param_2) * (*param_5 - param_2));
        *param_1 = uVar2;
      }
      else {
        *param_1 = 0;
        param_1[1] = param_2 - *param_5;
      }
    }
    dVar1 = (double)FUN_0040c850(*param_5);
    if ((1e-05 <= dVar1) || (dVar1 = (double)FUN_0040c850(*param_6 + 1.0), 1e-05 <= dVar1)) {
      dVar1 = (double)FUN_0040c850(param_7);
      FUN_00c445d0(param_1);
      dVar3 = (double)FUN_0040bcd0();
      *param_5 = *param_5 - dVar1 * dVar3;
      dVar1 = (double)FUN_0040c850(param_7);
      FUN_00c445d0(param_1);
      dVar3 = (double)FUN_0040bdd0();
      *param_6 = *param_6 - dVar1 * dVar3;
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    if (*param_6 <= 0.0) {
      dVar1 = (double)FUN_0040c850(param_7);
      *param_6 = *param_6 - dVar1;
    }
    else {
      dVar1 = (double)FUN_0040c850(param_7);
      *param_6 = *param_6 + dVar1;
    }
  }
  return param_1;
}

