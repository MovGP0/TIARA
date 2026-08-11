/* Ghidra address: 01c9cb10 */
/* Ghidra symbol: FUN_01c9cb10 */


void FUN_01c9cb10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_01c73930(param_1);
  lVar2 = *(longlong *)(param_1 + 0x700);
  iVar1 = *(int *)(lVar2 + 0x4e8);
  if ((*(int *)(lVar2 + 0x4a8) == *(int *)(lVar2 + 0x4a4) - iVar1) && (0 < iVar1)) {
    FUN_00848960(lVar2,iVar1 + -1);
  }
  return;
}

