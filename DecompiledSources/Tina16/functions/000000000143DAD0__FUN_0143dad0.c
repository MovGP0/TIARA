/* Ghidra address: 0143dad0 */
/* Ghidra symbol: FUN_0143dad0 */


double FUN_0143dad0(double param_1,int param_2,int param_3)

{
  double dVar1;
  
  if (param_2 < 5) {
    if (param_2 != 4) {
      if (param_2 == 1) {
        if (param_3 != 2) {
          return param_1;
        }
        if (0.0 <= param_1) {
          return param_1;
        }
        dVar1 = (double)FUN_0040c850(param_1);
        return dVar1;
      }
      if (param_2 != 2) {
        if (param_2 != 3) {
          return param_1;
        }
        if ((((((param_3 != 3) || (0.0 <= param_1)) && ((param_3 != 4 || (0.0 <= param_1)))) &&
             ((param_3 != 5 || (0.0 <= param_1)))) && ((param_3 != 6 || (0.0 <= param_1)))) &&
           (((param_3 != 7 || (0.0 <= param_1)) && ((param_3 != 8 || (0.0 <= param_1)))))) {
          if (param_3 != 9) {
            return param_1;
          }
          if (0.0 <= param_1) {
            return param_1;
          }
        }
        dVar1 = (double)FUN_0040c850(param_1);
        return dVar1;
      }
      if (param_3 != 2) {
        return param_1;
      }
      if (0.0 <= param_1) {
        return param_1;
      }
      dVar1 = (double)FUN_0040c850(param_1);
      return dVar1;
    }
  }
  else {
    if (param_2 == 5) {
      if (((param_3 == 2) && (param_1 < 0.0)) ||
         ((dVar1 = param_1, param_3 == 3 && (param_1 < 0.0)))) {
        dVar1 = (double)FUN_0040c850(param_1);
      }
      if (param_3 != 2) {
        return dVar1;
      }
      if (param_1 != 0.0) {
        return dVar1;
      }
      return 1.0;
    }
    if (param_2 == 6) {
      dVar1 = param_1;
      if ((param_3 == 2) && (param_1 < 0.0)) {
        dVar1 = (double)FUN_0040c850(param_1);
      }
      if (param_3 != 2) {
        return dVar1;
      }
      if (param_1 != 0.0) {
        return dVar1;
      }
      return 1.0;
    }
    if (param_2 != 7) {
      return param_1;
    }
  }
  dVar1 = param_1;
  if ((param_3 == 2) && (param_1 < 0.0)) {
    dVar1 = (double)FUN_0040c850(param_1);
  }
  if ((param_3 == 2) && (param_1 == 0.0)) {
    dVar1 = 1.0;
  }
  return dVar1;
}

