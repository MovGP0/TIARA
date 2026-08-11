/* Ghidra address: 00c20bc0 */
/* Ghidra symbol: FUN_00c20bc0 */


void FUN_00c20bc0(longlong param_1,longlong param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  if (param_4 != 0) {
    param_3[*(int *)(*(longlong *)(param_1 + 0x70) + 0x878)] =
         param_3[*(int *)(*(longlong *)(param_1 + 0x70) + 0x878)] + param_4 * 2;
    param_3[-*(int *)(*(longlong *)(param_1 + 0x70) + 0x878)] =
         param_3[-*(int *)(*(longlong *)(param_1 + 0x70) + 0x878)] + param_4 * 2;
    iVar2 = param_4 * 4;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x878) * 4);
    *piVar1 = *piVar1 + iVar2;
    param_3[-*(int *)(*(longlong *)(param_1 + 0x70) + 8)] =
         param_3[-*(int *)(*(longlong *)(param_1 + 0x70) + 8)] + iVar2;
    param_3[*(int *)(*(longlong *)(param_1 + 0x70) + 8)] =
         param_3[*(int *)(*(longlong *)(param_1 + 0x70) + 8)] + iVar2;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 8) * 4);
    *piVar1 = *piVar1 + param_4 * 8;
    *param_3 = *param_3 + param_4 * 8;
  }
  return;
}

