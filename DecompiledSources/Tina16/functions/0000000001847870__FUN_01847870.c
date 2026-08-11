/* Ghidra address: 01847870 */
/* Ghidra symbol: FUN_01847870 */


int FUN_01847870(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_01847410();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_01847630(param_1,iVar4);
      if (*(char *)(lVar2 + 0xa0) == '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

