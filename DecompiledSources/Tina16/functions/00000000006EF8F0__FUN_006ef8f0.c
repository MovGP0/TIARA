/* Ghidra address: 006ef8f0 */
/* Ghidra symbol: FUN_006ef8f0 */


int FUN_006ef8f0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_30;
  
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x598);
  iVar4 = *(int *)(*(longlong *)(lVar1 + 0x10) + 0x10);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < 0) {
      return iVar4;
    }
    lVar3 = FUN_006ee150(lVar1,iVar4);
    local_30 = FUN_006ef710(param_1);
    cVar2 = FUN_00423210(lVar3 + 0x18,&local_30);
  } while (cVar2 == '\0');
  return iVar4;
}

