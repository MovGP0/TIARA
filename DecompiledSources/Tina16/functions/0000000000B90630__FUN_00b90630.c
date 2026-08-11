/* Ghidra address: 00b90630 */
/* Ghidra symbol: FUN_00b90630 */


double FUN_00b90630(double param_1,double param_2,double param_3)

{
  if (param_1 <= param_2) {
    param_1 = param_2;
  }
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  return param_1;
}

