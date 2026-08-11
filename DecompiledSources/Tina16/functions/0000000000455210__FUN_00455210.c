/* Ghidra address: 00455210 */
/* Ghidra symbol: FUN_00455210 */


void FUN_00455210(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar4 = 0;
  if (lVar2 != 0) {
    iVar4 = *(int *)(lVar2 + -4);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 <= iVar4 / 4) {
    iVar4 = 0;
    if (lVar2 != 0) {
      iVar4 = *(int *)(lVar2 + -4);
    }
    iVar3 = iVar4 / 2;
    if (iVar4 / 2 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_00455840(param_1,iVar3);
  }
  return;
}

