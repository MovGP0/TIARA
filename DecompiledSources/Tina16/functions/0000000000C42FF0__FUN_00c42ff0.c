/* Ghidra address: 00c42ff0 */
/* Ghidra symbol: FUN_00c42ff0 */


double FUN_00c42ff0(double param_1,double param_2,double param_3,double param_4,undefined1 *param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  
  dVar2 = (double)FUN_0040c2f0(param_3 / 1.4142135623730951);
  dVar2 = param_3 * ((param_4 / param_3 - dVar2) + 7.0 + 99.0);
  dVar5 = param_1 - param_2;
  if ((param_1 <= param_4) || (dVar3 = (double)FUN_0040c850(dVar5), dVar3 <= param_3 + param_3)) {
    *param_5 = 0;
  }
  else {
    if (param_2 <= 0.0) {
      dVar2 = (double)FUN_0040c2f0(param_1 / param_3);
      param_4 = param_3 * dVar2;
    }
    else if (param_2 <= dVar2) {
      dVar2 = dVar5 / param_3 + 1.0;
      if (0.0 < dVar2) {
        dVar2 = (double)FUN_0040c2f0(dVar2);
        param_4 = param_2 + param_3 * dVar2;
      }
    }
    else {
      param_4 = dVar2;
      if (dVar2 < param_1) {
        param_3 = param_3 * 990.0;
        dVar3 = (double)FUN_0040c850(dVar5);
        if (dVar3 <= param_3) {
          param_4 = (double)FUN_00b90620(param_1,dVar2);
        }
        else {
          uVar4 = FUN_0040c850(dVar5 / param_3);
          iVar1 = FUN_00c42630(dVar5);
          dVar5 = (double)FUN_0040c760(uVar4);
          param_4 = (double)FUN_00b90620(param_2 + (double)iVar1 * param_3 * dVar5,dVar2);
        }
      }
    }
    param_1 = param_4;
    *param_5 = 1;
  }
  return param_1;
}

