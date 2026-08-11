/* Ghidra address: 01674280 */
/* Ghidra symbol: FUN_01674280 */


void FUN_01674280(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
                 ,double *param_6,double *param_7,double *param_8,double param_9,double param_10)

{
  double dVar1;
  double dVar2;
  
  param_4 = param_1 - param_4;
  dVar1 = (double)FUN_00b90620(param_5,0x3f9999999999999a);
  if (-param_9 < param_4) {
    if (-param_9 / 2.0 < param_4) {
      if (0.0 < param_4) {
        param_1 = param_1 - param_2;
        dVar1 = (double)FUN_00b90620(dVar1,0x3f9999999999999a);
        if (param_1 < dVar1) {
          dVar2 = dVar1 * 2.0 - param_1;
          dVar2 = dVar2 * dVar2;
          *param_7 = (param_10 * (1.0 - (dVar1 * dVar1) / dVar2)) / 3.0;
          *param_6 = (param_10 * (1.0 - ((dVar1 - param_1) * (dVar1 - param_1)) / dVar2)) / 3.0;
          *param_8 = 0.0;
        }
        else {
          *param_6 = param_10 / 3.0;
          *param_7 = 0.0;
          *param_8 = 0.0;
        }
      }
      else {
        *param_8 = (-param_4 * param_10) / (param_9 * 2.0);
        *param_6 = (param_4 * param_10) / (param_9 * 1.5) + param_10 / 3.0;
        param_1 = param_1 - param_2;
        if (param_1 < dVar1) {
          dVar2 = dVar1 * 2.0 - param_1;
          dVar2 = dVar2 * dVar2;
          *param_7 = *param_6 * (1.0 - (dVar1 * dVar1) / dVar2);
          *param_6 = *param_6 * (1.0 - ((dVar1 - param_1) * (dVar1 - param_1)) / dVar2);
        }
        else {
          *param_7 = 0.0;
        }
      }
    }
    else {
      *param_8 = (-param_4 * param_10) / (param_9 * 2.0);
      *param_6 = 0.0;
      *param_7 = 0.0;
    }
  }
  else {
    *param_8 = param_10 / 2.0;
    *param_6 = 0.0;
    *param_7 = 0.0;
  }
  return;
}

