/* Ghidra address: 017d2710 */
/* Ghidra symbol: FUN_017d2710 */


void FUN_017d2710(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar4 = *(int *)(lVar1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(lVar1,iVar3);
      *(undefined1 *)(lVar2 + 0x18) = 0;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

