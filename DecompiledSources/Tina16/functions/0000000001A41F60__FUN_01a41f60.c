/* Ghidra address: 01a41f60 */
/* Ghidra symbol: FUN_01a41f60 */


void FUN_01a41f60(void)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = FUN_019a4600();
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(lVar2,iVar4);
      cVar1 = FUN_0198a580(plVar3);
      if (cVar1 == '\x04') {
        (**(code **)(*plVar3 + 0xf8))(plVar3);
        FUN_01d0a340(plVar3,0);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

