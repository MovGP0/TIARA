/* Ghidra address: 00bfcf50 */
/* Ghidra symbol: FUN_00bfcf50 */


int * FUN_00bfcf50(longlong param_1,int *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = (*(int *)(param_1 + 0x910) - *(int *)(*(longlong *)(param_1 + 0x4a0) + 0x1c)) +
          *(int *)(*(longlong *)(param_1 + 0x610) + 0x30) * -2;
  *param_2 = iVar1;
  param_2[2] = iVar1 + *(int *)(*(longlong *)(param_1 + 0x4a0) + 0x1c);
  param_2[1] = (param_3 - *(int *)(param_1 + 0x534)) * *(int *)(param_1 + 0x52c);
  param_2[1] = param_2[1] + (*(int *)(param_1 + 0x52c) - (param_2[2] - *param_2)) / 2;
  param_2[3] = param_2[1] + (param_2[2] - *param_2);
  return param_2;
}

