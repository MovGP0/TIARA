/* Ghidra address: 0139d200 */
/* Ghidra symbol: FUN_0139d200 */


void FUN_0139d200(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar4);
      cVar2 = FUN_0139d180(auStack_48,uVar3);
      if (cVar2 != '\0') {
        FUN_00b94e60(lVar1,iVar4);
        return;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

