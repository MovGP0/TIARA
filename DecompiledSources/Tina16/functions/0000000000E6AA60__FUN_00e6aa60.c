/* Ghidra address: 00e6aa60 */
/* Ghidra symbol: FUN_00e6aa60 */


void FUN_00e6aa60(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                 double param_6,int param_7,int param_8,double *param_9)

{
  if (param_8 != 1) {
    if (param_7 < 5) {
      if (param_7 != 4) {
        if (param_7 != 1) {
          if (param_7 == 2) goto LAB_00e6abab;
          if (param_7 != 3) {
            return;
          }
        }
LAB_00e6ab72:
        if (param_6 == 0.0) {
          *param_9 = 0.0;
          return;
        }
        *param_9 = (param_2 * param_3) / (param_1 * param_6);
        return;
      }
    }
    else {
      if (param_7 == 7) goto LAB_00e6ab72;
      if (param_7 != 8) {
        return;
      }
    }
LAB_00e6abab:
    if ((param_6 != 0.0) && (param_3 + param_4 != 0.0)) {
      *param_9 = (param_2 * param_1) / (param_6 * 3.0 * (param_3 + param_4));
      return;
    }
    *param_9 = 0.0;
    return;
  }
  if (param_7 - 1U < 2) {
LAB_00e6aa93:
    if (param_6 == 0.0) {
      *param_9 = 0.0;
    }
    else {
      *param_9 = (param_2 * param_3) / (param_1 * param_6);
    }
  }
  else {
    if (1 < param_7 - 3U) {
      if (param_7 == 5) goto LAB_00e6aa93;
      if (param_7 != 6) {
        return;
      }
    }
    if ((param_6 == 0.0) || (param_3 + param_4 == 0.0)) {
      *param_9 = 0.0;
    }
    else {
      *param_9 = (param_2 * param_1) / (param_6 * 3.0 * (param_3 + param_4));
    }
  }
  return;
}

