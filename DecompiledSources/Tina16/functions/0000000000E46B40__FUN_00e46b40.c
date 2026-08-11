/* Ghidra address: 00e46b40 */
/* Ghidra symbol: FUN_00e46b40 */


void FUN_00e46b40(double *param_1,double param_2,double param_3)

{
  if (param_2 != 0.0) {
    *param_1 = *param_1 + param_2;
  }
  if (param_3 != 0.0) {
    param_1[1] = param_1[1] + param_3;
  }
  return;
}

