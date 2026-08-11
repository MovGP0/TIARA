/* Ghidra address: 017bd400 */
/* Ghidra symbol: FUN_017bd400 */


void FUN_017bd400(longlong param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  
  bVar1 = -1 < param_2;
  if (!bVar1) {
    param_2 = -1 - param_2;
  }
  if (param_2 == 0) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_3 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xc);
    *param_4 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 0x10);
  }
  if (bVar1) {
    *param_3 = *param_3 + *(int *)(param_1 + 0xc);
    *param_4 = *param_4 + *(int *)(param_1 + 0x10);
  }
  else {
    *param_3 = *param_3 + *(int *)(param_1 + 0x14);
    *param_4 = *param_4 + *(int *)(param_1 + 0x18);
  }
  return;
}

