/* Ghidra address: 01870dc0 */
/* Ghidra symbol: FUN_01870dc0 */


int FUN_01870dc0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0040c770((double)(*(int *)(param_1 + 0x54) << 4) / (double)*(int *)PTR_DAT_02001400);
  iVar2 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x84);
  if ((iVar2 < iVar1) && (0x10 < iVar1)) {
    iVar1 = iVar2;
  }
  return iVar1 - iVar1 % 2;
}

