/* Ghidra address: 00c1fdd0 */
/* Ghidra symbol: FUN_00c1fdd0 */


void FUN_00c1fdd0(longlong param_1,longlong param_2,longlong param_3,int *param_4,longlong param_5,
                 int param_6)

{
  int *piVar1;
  int iVar2;
  
  if (param_6 != 0) {
    piVar1 = (int *)(param_5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x8dc) * 4);
    *piVar1 = *piVar1 + param_6 * 5;
    piVar1 = (int *)(param_5 + (longlong)-*(int *)(*(longlong *)(param_1 + 0x80) + 0x8dc) * 4);
    *piVar1 = *piVar1 + param_6 * 5;
    iVar2 = param_6 * 0xc;
    piVar1 = (int *)(param_3 + (longlong)-*(int *)(*(longlong *)(param_1 + 0x80) + 0x8dc) * 4);
    *piVar1 = *piVar1 + iVar2;
    param_4[-*(int *)(*(longlong *)(param_1 + 0x80) + 0x8d8)] =
         param_4[-*(int *)(*(longlong *)(param_1 + 0x80) + 0x8d8)] + iVar2;
    param_4[*(int *)(*(longlong *)(param_1 + 0x80) + 0x8d8)] =
         param_4[*(int *)(*(longlong *)(param_1 + 0x80) + 0x8d8)] + iVar2;
    piVar1 = (int *)(param_5 + (longlong)-*(int *)(*(longlong *)(param_1 + 0x80) + 8) * 4);
    *piVar1 = *piVar1 + iVar2;
    piVar1 = (int *)(param_5 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 8) * 4);
    *piVar1 = *piVar1 + iVar2;
    piVar1 = (int *)(param_3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x8dc) * 4);
    *piVar1 = *piVar1 + param_6 * 0xc0;
    piVar1 = (int *)(param_3 + (longlong)-*(int *)(*(longlong *)(param_1 + 0x80) + 8) * 4);
    *piVar1 = *piVar1 + param_6 * 0x1a;
    *param_4 = *param_4 + param_6 * 0x1a;
    piVar1 = (int *)(param_3 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 8) * 4);
    *piVar1 = *piVar1 + param_6 * 0x1e;
    piVar1 = (int *)(param_2 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x8d8) * 4);
    *piVar1 = *piVar1 + param_6 * 0x20;
  }
  return;
}

