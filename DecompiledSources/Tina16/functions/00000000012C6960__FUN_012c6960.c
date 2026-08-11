/* Ghidra address: 012c6960 */
/* Ghidra symbol: FUN_012c6960 */


void FUN_012c6960(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_006decb0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x748) + 0x550),iVar3);
      if ((*(uint *)(*(longlong *)(lVar2 + 0x18) + 0x62c) & 0x20) == 0x20) {
        FUN_012c7ae0(param_1,lVar2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

