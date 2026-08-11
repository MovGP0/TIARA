/* Ghidra address: 00635480 */
/* Ghidra symbol: FUN_00635480 */


void FUN_00635480(double param_1,double param_2,double param_3)

{
  double dVar1;
  
  if (param_3 < 0.0) {
    param_3 = param_3 + 240.0;
  }
  if (240.0 < param_3) {
    param_3 = param_3 - 240.0;
  }
  if (40.0 <= param_3) {
    dVar1 = param_2;
    if ((120.0 <= param_3) && (dVar1 = param_1, param_3 < 160.0)) {
      dVar1 = param_1 + ((param_2 - param_1) * (160.0 - param_3) + 20.0) / 40.0;
    }
  }
  else {
    dVar1 = param_1 + ((param_2 - param_1) * param_3 + 20.0) / 40.0;
  }
  FUN_0040c770(dVar1);
  return;
}

