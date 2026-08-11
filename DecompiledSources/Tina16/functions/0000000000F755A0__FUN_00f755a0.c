/* Ghidra address: 00f755a0 */
/* Ghidra symbol: FUN_00f755a0 */


longlong FUN_00f755a0(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = FUN_00f751a0(param_1,param_2);
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(param_1,iVar4);
      cVar1 = FUN_00f6f8e0(lVar3);
      if (cVar1 != '\0') {
        if ((*(int *)(lVar3 + 0x138) == param_2) && (*(char *)(lVar2 + 0x30) != '\t')) {
          return lVar3;
        }
        if ((*(int *)(lVar3 + 0x140) == param_2) && (*(char *)(lVar2 + 0x30) == '\t')) {
          return lVar3;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

