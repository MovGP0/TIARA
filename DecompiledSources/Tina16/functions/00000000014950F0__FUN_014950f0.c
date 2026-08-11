/* Ghidra address: 014950f0 */
/* Ghidra symbol: FUN_014950f0 */


void FUN_014950f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x700);
  iVar3 = *(int *)(lVar1 + 0x4a4);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_00848460(lVar1,iVar2,
                   (longlong)(*(int *)(lVar1 + 0x98) + -0x1e) / (longlong)*(int *)(lVar1 + 0x4a4) &
                   0xffffffff);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

