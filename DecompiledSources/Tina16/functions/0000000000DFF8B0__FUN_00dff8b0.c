/* Ghidra address: 00dff8b0 */
/* Ghidra symbol: FUN_00dff8b0 */


double FUN_00dff8b0(double param_1,uint param_2)

{
  double dVar1;
  
  if (param_2 == 0) {
    dVar1 = 1.0;
  }
  else if (param_1 == 0.0) {
    dVar1 = 0.0;
  }
  else if (param_1 == 1.0) {
    dVar1 = 1.0;
  }
  else {
    dVar1 = param_1;
    if (param_2 != 1) {
      if (param_2 == 2) {
        dVar1 = param_1 * param_1;
      }
      else if (param_2 == 3) {
        dVar1 = param_1 * param_1 * param_1;
      }
      else if (param_2 == 4) {
        dVar1 = param_1 * param_1 * param_1 * param_1;
      }
      else {
        FUN_0040c850(param_1);
        dVar1 = (double)FUN_0040c2f0();
        dVar1 = (double)FUN_0040af80((double)(int)param_2 * dVar1);
        if (((param_2 & 1) != 0) && (param_1 < 0.0)) {
          dVar1 = -dVar1;
        }
      }
    }
  }
  return dVar1;
}

