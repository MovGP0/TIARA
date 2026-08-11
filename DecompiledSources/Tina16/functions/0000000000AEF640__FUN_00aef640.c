/* Ghidra address: 00aef640 */
/* Ghidra symbol: FUN_00aef640 */


void FUN_00aef640(void)

{
  undefined **ppuVar1;
  int iVar2;
  
  if (DAT_02014760 == (longlong *)0x0) {
    DAT_02014760 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b6d10(DAT_02014760,1);
    iVar2 = 0x17;
    ppuVar1 = &PTR_u__htm_01e7ebe8;
    do {
      (**(code **)(*DAT_02014760 + 0x80))(DAT_02014760,*ppuVar1,ppuVar1);
      ppuVar1 = ppuVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(*DAT_02014760 + 0x148))(DAT_02014760);
  }
  return;
}

