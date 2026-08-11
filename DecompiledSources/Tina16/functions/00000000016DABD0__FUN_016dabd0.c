/* Ghidra address: 016dabd0 */
/* Ghidra symbol: FUN_016dabd0 */


double FUN_016dabd0(undefined8 param_1,char param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  
  if (param_2 == '\x06') {
    if (param_4[8] <= param_3) {
      dVar2 = param_4[2] + param_4[3] + param_4[4] + param_4[5] + param_4[6] + param_4[7];
      param_3 = param_3 - param_4[8];
      if (dVar2 <= param_3) {
        dVar1 = (double)FUN_0040af10(param_3 / dVar2);
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
        dVar2 = param_4[2] + param_4[3];
        if (dVar2 <= param_3) {
          dVar2 = dVar2 + param_4[4];
          if (dVar2 <= param_3) {
            dVar2 = dVar2 + param_4[5];
            if (dVar2 <= param_3) {
              if (dVar2 + param_4[6] <= param_3) {
                param_3 = (param_4[1] / param_4[7]) * ((dVar2 + param_4[6] + param_4[7]) - param_3);
              }
              else {
                param_3 = param_4[1];
              }
            }
            else {
              param_3 = (param_4[1] / param_4[5]) * (param_3 - (dVar2 - param_4[5]));
            }
          }
          else {
            param_3 = (*param_4 / param_4[4]) * (dVar2 - param_3);
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

