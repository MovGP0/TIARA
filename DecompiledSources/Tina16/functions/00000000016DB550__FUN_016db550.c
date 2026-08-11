/* Ghidra address: 016db550 */
/* Ghidra symbol: FUN_016db550 */


double FUN_016db550(undefined8 param_1,char param_2,double param_3,double *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  if ((param_2 != '\x06') || (param_4[1] <= 0.0)) {
    dVar4 = 0.0;
  }
  else {
    dVar5 = 1.0 / param_4[1];
    dVar4 = *param_4;
    uVar1 = FUN_00b90650(param_4[2],dVar5 / 2.0);
    dVar2 = (double)FUN_00b90620(uVar1,0);
    if (dVar5 <= param_3) {
      dVar3 = (double)FUN_0040af10(param_3 / dVar5);
      param_3 = param_3 - dVar3 * dVar5;
    }
    if (dVar5 <= param_3) {
      param_3 = param_3 - dVar5;
    }
    if (param_3 < 0.0) {
      param_3 = param_3 + dVar5;
    }
    dVar5 = dVar5 * 0.5;
    if (dVar2 <= param_3) {
      if (dVar5 - dVar2 <= param_3) {
        if (dVar5 + dVar2 <= param_3) {
          if (dVar5 * 2.0 - dVar2 <= param_3) {
            dVar4 = (dVar4 / dVar2) * (param_3 - dVar5 * 2.0);
          }
          else {
            dVar4 = -dVar4;
          }
        }
        else {
          dVar4 = (-dVar4 / dVar2) * (param_3 - dVar5);
        }
      }
    }
    else {
      dVar4 = (dVar4 / dVar2) * param_3;
    }
  }
  return dVar4;
}

