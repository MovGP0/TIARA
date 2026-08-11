/* Ghidra address: 0187ae80 */
/* Ghidra symbol: FUN_0187ae80 */


void FUN_0187ae80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_01879fc0(param_1,iVar3);
      if (*(longlong *)(lVar1 + 0xd0) == param_2) {
        uVar2 = FUN_01879fc0(param_1,iVar3);
        FUN_01879810(uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

