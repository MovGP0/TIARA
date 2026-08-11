/* Ghidra address: 006605f0 */
/* Ghidra symbol: FUN_006605f0 */


int FUN_006605f0(void)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  lVar1 = FUN_00660e70();
  while (lVar1 != 0) {
    lVar1 = FUN_00660e20(lVar1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

