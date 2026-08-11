/* Ghidra address: 01c76f20 */
/* Ghidra symbol: FUN_01c76f20 */


void FUN_01c76f20(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [40];
  
  if ((*(longlong *)(param_1 + 0x2768) == 0) ||
     (((cVar1 = *(char *)(*(longlong *)(param_1 + 0x2768) + 0x70), cVar1 != '\x03' &&
       (cVar1 != '\x04')) || (*(longlong *)PTR_DAT_02005100 == 0)))) {
    lVar2 = *(longlong *)(param_1 + 0x27a8);
    iVar5 = *(int *)(lVar2 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        uVar3 = FUN_00b94e60(lVar2,iVar4);
        FUN_01c76ef0(auStack_48,uVar3);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else {
    FUN_00bfa390(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
  }
  return;
}

