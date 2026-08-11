/* Ghidra address: 00c432f0 */
/* Ghidra symbol: FUN_00c432f0 */


double FUN_00c432f0(double param_1,double param_2,double param_3,undefined1 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = (double)FUN_0040c850((param_2 - param_3) * 2.0);
  dVar1 = dVar1 + 2.0;
  dVar2 = (double)FUN_0040c850(param_2 - param_3);
  dVar2 = dVar2 + 1.0;
  dVar4 = param_1 - param_2;
  *param_4 = 0;
  dVar3 = param_1;
  if (param_2 < param_3) {
    if (0.0 < dVar4) {
      dVar3 = param_3 + 0.5;
      if (dVar3 < param_1) {
        *param_4 = 1;
      }
      else {
        dVar3 = param_1;
        if (dVar2 < dVar4) {
          dVar3 = param_2 + dVar2;
          *param_4 = 1;
        }
      }
    }
    else if (dVar1 < -dVar4) {
      *param_4 = 1;
      dVar3 = param_2 - dVar1;
    }
  }
  else if (param_2 < param_3 + 3.5) {
    if (0.0 < dVar4) {
      if (param_3 + 4.0 < param_1) {
        *param_4 = 1;
        dVar3 = param_3 + 4.0;
      }
    }
    else if (param_1 < param_3 - 0.5) {
      *param_4 = 1;
      dVar3 = param_3 - 0.5;
    }
  }
  else if (0.0 < dVar4) {
    if (dVar1 <= dVar4) {
      *param_4 = 1;
      dVar3 = param_2 + dVar1;
    }
  }
  else if (param_1 < param_3 + 3.5) {
    if (param_1 < param_3 + 2.0) {
      *param_4 = 1;
      dVar3 = param_3 + 2.0;
    }
  }
  else if (dVar2 < -dVar4) {
    *param_4 = 1;
    dVar3 = param_2 - dVar2;
  }
  return dVar3;
}

