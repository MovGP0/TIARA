/* Ghidra address: 00e6ac20 */
/* Ghidra symbol: FUN_00e6ac20 */


void FUN_00e6ac20(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,double param_6,int param_7,int param_8,double *param_9)

{
  if (param_8 != 1) {
    if (param_7 < 5) {
      if (param_7 != 4) {
        if (param_7 != 1) {
          if (param_7 == 2) goto LAB_00e6ad4f;
          if (param_7 != 3) {
            return;
          }
        }
LAB_00e6ad16:
        if (param_6 == 0.0) {
          *param_9 = 0.0;
          return;
        }
        *param_9 = (param_2 * param_3) / (param_1 * param_6);
        return;
      }
    }
    else {
      if (param_7 == 7) goto LAB_00e6ad16;
      if (param_7 != 8) {
        return;
      }
    }
LAB_00e6ad4f:
    if (param_6 == 0.0) {
      *param_9 = 0.0;
      return;
    }
    *param_9 = (param_2 * param_1) / (param_6 * 6.0 * param_3);
    return;
  }
  if (param_7 - 1U < 2) {
LAB_00e6ac53:
    if (param_6 == 0.0) {
      *param_9 = 0.0;
    }
    else {
      *param_9 = (param_2 * param_3) / (param_1 * param_6);
    }
  }
  else {
    if (1 < param_7 - 3U) {
      if (param_7 == 5) goto LAB_00e6ac53;
      if (param_7 != 6) {
        return;
      }
    }
    if (param_6 == 0.0) {
      *param_9 = 0.0;
    }
    else {
      *param_9 = (param_2 * param_1) / (param_6 * 6.0 * param_3);
    }
  }
  return;
}

