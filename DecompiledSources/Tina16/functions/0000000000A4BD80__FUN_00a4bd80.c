/* Ghidra address: 00a4bd80 */
/* Ghidra symbol: FUN_00a4bd80 */


void FUN_00a4bd80(void)

{
  undefined **ppuVar1;
  int iVar2;
  
  if (DAT_02013810 == (longlong *)0x0) {
    DAT_02013810 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b6d10(DAT_02013810,1);
    iVar2 = 0xfd;
    ppuVar1 = &PTR_u_nbsp_01e736a0;
    do {
      (**(code **)(*DAT_02013810 + 0x80))(DAT_02013810,*ppuVar1,ppuVar1);
      ppuVar1 = ppuVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(*DAT_02013810 + 0x148))(DAT_02013810);
  }
  return;
}

