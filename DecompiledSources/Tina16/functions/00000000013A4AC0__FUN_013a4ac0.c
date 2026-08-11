/* Ghidra address: 013a4ac0 */
/* Ghidra symbol: FUN_013a4ac0 */


undefined8 FUN_013a4ac0(void)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  
  lVar1 = *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8);
  iVar5 = *(int *)(lVar1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_00b94e60(lVar1,iVar4);
      cVar2 = FUN_013a4a80(auStack_48,uVar3);
      if (cVar2 != '\0') {
        uVar3 = FUN_00b94e60(lVar1,iVar4);
        return uVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

