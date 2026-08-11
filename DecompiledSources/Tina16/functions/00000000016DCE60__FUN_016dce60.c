/* Ghidra address: 016dce60 */
/* Ghidra symbol: FUN_016dce60 */


double FUN_016dce60(longlong param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  
  if ((param_2 == '\x06') && (param_1 != 0)) {
    if (param_4[1] <= param_3) {
      dVar2 = param_4[5];
      param_3 = param_3 - param_4[1];
      dVar1 = (double)FUN_0040af10(param_3 / dVar2);
      if (dVar2 <= param_3) {
        param_3 = param_3 - dVar1 * dVar2;
      }
      if (dVar2 <= param_3) {
        param_3 = param_3 - dVar2;
      }
      if (param_3 < 0.0) {
        param_3 = param_3 + dVar2;
      }
      if (dVar2 - 1e-18 <= param_3) {
        param_3 = 0.0;
      }
      if (param_3 < -1e-18) {
        param_3 = 0.0;
      }
      if (param_4[2] <= param_3) {
        dVar2 = param_4[2] + param_4[4];
        if (dVar2 <= param_3) {
          dVar2 = dVar2 + param_4[3];
          if (dVar2 <= param_3) {
            param_3 = 0.0;
          }
          else {
            param_3 = (*param_4 / param_4[3]) * (dVar2 - param_3);
          }
        }
        else {
          param_3 = *param_4;
        }
      }
      else {
        param_3 = (*param_4 / param_4[2]) * param_3;
      }
    }
    else {
      param_3 = 0.0;
    }
  }
  else {
    param_3 = 0.0;
  }
  return param_3;
}

