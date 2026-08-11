/* Ghidra address: 00c1f900 */
/* Ghidra symbol: FUN_00c1f900 */


void FUN_00c1f900(longlong param_1,longlong param_2,int *param_3,int *param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  
  if (param_5 != 0) {
    param_4[*(int *)(param_1 + 0x8a8)] = param_4[*(int *)(param_1 + 0x8a8)] + param_5;
    param_4[-*(int *)(param_1 + 0x8a8)] = param_4[-*(int *)(param_1 + 0x8a8)] + param_5;
    iVar2 = param_5 * 3;
    param_3[*(int *)(param_1 + 0x8a8)] = param_3[*(int *)(param_1 + 0x8a8)] + iVar2;
    param_3[-*(int *)(param_1 + 0x8a8)] = param_3[-*(int *)(param_1 + 0x8a8)] + iVar2;
    param_4[*(int *)(param_1 + 8)] = param_4[*(int *)(param_1 + 8)] + iVar2;
    param_4[-*(int *)(param_1 + 8)] = param_4[-*(int *)(param_1 + 8)] + iVar2;
    iVar2 = param_5 * 5;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(param_1 + 0x8a8) * 4);
    *piVar1 = *piVar1 + iVar2;
    param_3[-*(int *)(param_1 + 8)] = param_3[-*(int *)(param_1 + 8)] + iVar2;
    param_3[*(int *)(param_1 + 8)] = param_3[*(int *)(param_1 + 8)] + iVar2;
    *param_4 = *param_4 + iVar2;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(param_1 + 8) * 4);
    *piVar1 = *piVar1 + param_5 * 7;
    *param_3 = *param_3 + param_5 * 7;
  }
  return;
}

