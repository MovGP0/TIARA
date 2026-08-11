/* Ghidra address: 019c3360 */
/* Ghidra symbol: FUN_019c3360 */


int * FUN_019c3360(int *param_1,int *param_2)

{
  *param_1 = *param_2 / 8;
  param_1[1] = param_2[1] / 8;
  param_1[2] = (param_2[2] + -1) / 8 + 1;
  param_1[3] = (param_2[3] + -1) / 8 + 1;
  return param_1;
}

