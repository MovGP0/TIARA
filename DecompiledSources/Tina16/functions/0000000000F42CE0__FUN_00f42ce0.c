/* Ghidra address: 00f42ce0 */
/* Ghidra symbol: FUN_00f42ce0 */


void FUN_00f42ce0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6d0);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x6b0) + 0x94) - *(int *)(lVar1 + 0x94);
  FUN_0064cc50(lVar1,iVar2 - iVar2 % (*(int *)(lVar1 + 0x4b4) + *(int *)(lVar1 + 0x4d0)));
  return;
}

