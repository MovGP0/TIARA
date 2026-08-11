/* Ghidra address: 012ae690 */
/* Ghidra symbol: FUN_012ae690 */


void FUN_012ae690(undefined8 param_1,double param_2,double param_3)

{
  longlong lVar1;
  double local_20 [3];
  
  if (param_3 == 0.0) {
    local_20[0] = 0.0;
  }
  else {
    lVar1 = FUN_0040c770(param_2 / param_3);
    local_20[0] = (double)lVar1 * param_3;
  }
  FUN_010bfdb0(local_20,2);
  return;
}

