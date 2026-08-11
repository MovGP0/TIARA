/* Ghidra address: 01b38b40 */
/* Ghidra symbol: FUN_01b38b40 */


void FUN_01b38b40(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_019954d0();
  iVar4 = 0;
  if (-1 < iVar3 + 2) {
    iVar3 = iVar3 + 3;
    do {
      lVar2 = *(longlong *)(*param_2 + 0x10 + (longlong)iVar4 * 0x18);
      while (lVar2 != 0) {
        lVar1 = *(longlong *)(lVar2 + 0x20);
        FUN_00418590(lVar2,&DAT_01b385b8);
        lVar2 = lVar1;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

