/* Ghidra address: 010bfea0 */
/* Ghidra symbol: FUN_010bfea0 */


double FUN_010bfea0(double param_1,double param_2,double param_3,undefined4 *param_4)

{
  *param_4 = 0;
  if (param_1 <= param_2) {
    if (param_1 < param_3) {
      *param_4 = 0xffffffff;
      param_1 = param_3;
    }
  }
  else {
    *param_4 = 1;
    param_1 = param_2;
  }
  return param_1;
}

