/* Ghidra address: 01b38ad0 */
/* Ghidra symbol: FUN_01b38ad0 */


void FUN_01b38ad0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar3);
      lVar2 = *(longlong *)(lVar2 + 0x50);
      while (lVar2 != 0) {
        lVar1 = *(longlong *)(lVar2 + 0x18);
        FUN_00418590(lVar2,&DAT_00ea9378);
        lVar2 = lVar1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

