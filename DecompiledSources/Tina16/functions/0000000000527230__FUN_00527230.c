/* Ghidra address: 00527230 */
/* Ghidra symbol: FUN_00527230 */


bool FUN_00527230(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  
  if (param_3 == 0.0) {
    dVar1 = (double)FUN_0040c850(param_1);
    dVar2 = (double)FUN_0040c850(param_2);
    if (dVar2 <= dVar1) {
      param_3 = (double)FUN_0040c850(param_2);
    }
    else {
      param_3 = (double)FUN_0040c850(param_1);
    }
    if (param_3 * 1e-12 <= 1e-12) {
      param_3 = 1e-12;
    }
    else {
      param_3 = param_3 * 1e-12;
    }
  }
  if (param_1 <= param_2) {
    param_1 = param_2 - param_1;
  }
  else {
    param_1 = param_1 - param_2;
  }
  return param_1 <= param_3;
}

