/* Ghidra address: 010b33c0 */
/* Ghidra symbol: FUN_010b33c0 */


int FUN_010b33c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar4);
      cVar1 = FUN_010af9d0();
      if (cVar1 == '\0') {
        lVar2 = *(longlong *)(lVar2 + 0x30);
        iVar3 = 0;
        if (lVar2 != 0) {
          iVar3 = *(int *)(lVar2 + -4);
        }
        if ((iVar5 < iVar3) && (iVar5 = 0, lVar2 != 0)) {
          iVar5 = *(int *)(lVar2 + -4);
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return iVar5;
}

