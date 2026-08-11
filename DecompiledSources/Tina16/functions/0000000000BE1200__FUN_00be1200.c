/* Ghidra address: 00be1200 */
/* Ghidra symbol: FUN_00be1200 */


int FUN_00be1200(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)iVar4 * 0x10) <=
          param_2) break;
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 8) + (longlong)iVar4 * 0x10);
      *piVar1 = *piVar1 + param_3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10) + -1;
  if (-1 < iVar4) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar3 = (longlong)iVar4;
      piVar1 = (int *)(*(longlong *)(lVar2 + 8) + lVar3 * 0x14);
      if (param_2 < *piVar1) {
        FUN_00be1d70(*(longlong *)(lVar2 + 8) + lVar3 * 0x14,param_3);
      }
      else if (param_2 < piVar1[1]) {
        piVar1 = (int *)(*(longlong *)(lVar2 + 8) + 4 + lVar3 * 0x14);
        *piVar1 = *piVar1 + param_3;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  return param_3;
}

