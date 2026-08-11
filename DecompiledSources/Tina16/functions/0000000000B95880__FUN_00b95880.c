/* Ghidra address: 00b95880 */
/* Ghidra symbol: FUN_00b95880 */


void FUN_00b95880(int *param_1,int param_2,int param_3)

{
  *param_1 = *param_1 - param_2;
  param_1[2] = param_1[2] + param_2;
  param_1[1] = param_1[1] - param_3;
  param_1[3] = param_1[3] + param_3;
  FUN_00b956a0(param_1,param_1 + 2);
  return;
}

