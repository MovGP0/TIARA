/* Ghidra address: 00c1f7a0 */
/* Ghidra symbol: FUN_00c1f7a0 */


void FUN_00c1f7a0(longlong param_1,longlong param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_5 != 0) {
    iVar2 = param_5 * 2;
    param_3[*(int *)(param_1 + 0x8a8)] = param_3[*(int *)(param_1 + 0x8a8)] + iVar2;
    param_3[-*(int *)(param_1 + 0x8a8)] = param_3[-*(int *)(param_1 + 0x8a8)] + iVar2;
    param_4[*(int *)(param_1 + 8)] = param_4[*(int *)(param_1 + 8)] + iVar2;
    param_4[-*(int *)(param_1 + 8)] = param_4[-*(int *)(param_1 + 8)] + iVar2;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(param_1 + 0x8a8) * 4);
    *piVar1 = *piVar1 + param_5 * 3;
    *param_4 = *param_4 + param_5 * 3;
    param_3[-*(int *)(param_1 + 8)] = param_3[-*(int *)(param_1 + 8)] + param_5 * 4;
    param_3[*(int *)(param_1 + 8)] = param_3[*(int *)(param_1 + 8)] + param_5 * 4;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(param_1 + 8) * 4);
    *piVar1 = *piVar1 + param_5 * 5;
    *param_3 = *param_3 + param_5 * 5;
  }
  return;
}

