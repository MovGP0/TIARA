/* Ghidra address: 006d74e0 */
/* Ghidra symbol: FUN_006d74e0 */


ulonglong FUN_006d74e0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x518) == 0) {
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x528) + 0x10);
    iVar3 = 0;
    if (-1 < iVar6 + -1) {
      do {
        lVar2 = FUN_006d7610(param_1,iVar3);
        if (*(char *)(lVar2 + 0x4a0) == '\0') {
          iVar5 = iVar5 + 1;
        }
        else {
          iVar4 = iVar4 + 1;
        }
        if (iVar4 == param_2 + 1) break;
        iVar3 = iVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    lVar2 = FUN_006d7610(param_1,param_2 + iVar5);
    uVar1 = (ulonglong)*(uint *)(lVar2 + 0x490);
  }
  else {
    uVar1 = FUN_006d50d0(param_1,param_2);
  }
  return uVar1;
}

