/* Ghidra address: 00f09e00 */
/* Ghidra symbol: FUN_00f09e00 */


void FUN_00f09e00(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x6f0);
  iVar2 = FUN_0064d0b0(lVar1);
  FUN_00848570(lVar1,(longlong)(iVar2 + -2) / (longlong)*(int *)(lVar1 + 0x4a4) & 0xffffffff);
  return;
}

