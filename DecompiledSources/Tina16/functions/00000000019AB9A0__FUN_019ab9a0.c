/* Ghidra address: 019ab9a0 */
/* Ghidra symbol: FUN_019ab9a0 */


int * FUN_019ab9a0(longlong param_1,int *param_2)

{
  FUN_00b95710(param_2,param_1 + 0xa4);
  *param_2 = *param_2 + *(int *)(param_1 + 0xb4);
  param_2[2] = param_2[2] - *(int *)(param_1 + 0xbc);
  param_2[1] = param_2[1] + *(int *)(param_1 + 0xb8);
  param_2[3] = param_2[3] - *(int *)(param_1 + 0xc0);
  return param_2;
}

