/* Ghidra address: 0111c190 */
/* Ghidra symbol: FUN_0111c190 */


longlong * FUN_0111c190(void)

{
  undefined **ppuVar1;
  int iVar2;
  
  if (DAT_02030168 == (longlong *)0x0) {
    DAT_02030168 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    iVar2 = 0x20;
    ppuVar1 = &PTR_DAT_01f23528;
    do {
      (**(code **)(*DAT_02030168 + 0x80))(DAT_02030168,*ppuVar1,2);
      ppuVar1 = ppuVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x41;
    ppuVar1 = &PTR_u___future___01f23628;
    do {
      (**(code **)(*DAT_02030168 + 0x80))(DAT_02030168,*ppuVar1,8);
      ppuVar1 = ppuVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return DAT_02030168;
}

