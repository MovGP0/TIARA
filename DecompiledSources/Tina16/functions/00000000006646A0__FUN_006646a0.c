/* Ghidra address: 006646a0 */
/* Ghidra symbol: FUN_006646a0 */


void FUN_006646a0(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  
  *param_3 = *param_3 + (*param_3 - *(int *)(param_2 + 0x90)) * -2;
  param_3[1] = param_3[1] + (param_3[1] - *(int *)(param_2 + 0x94)) * -2;
  param_3[2] = param_3[2] + (*(int *)(param_2 + 0x98) - (param_3[2] - *param_3)) * -2;
  iVar1 = *(int *)(param_2 + 0x9c) - (param_3[3] - param_3[1]);
  if (0 < iVar1 * 2) {
    param_3[3] = param_3[3] + iVar1 * -2;
  }
  return;
}

