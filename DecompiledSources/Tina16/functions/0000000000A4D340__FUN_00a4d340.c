/* Ghidra address: 00a4d340 */
/* Ghidra symbol: FUN_00a4d340 */


void FUN_00a4d340(void)

{
  undefined **ppuVar1;
  int iVar2;
  
  if (DAT_02013820 == (longlong *)0x0) {
    DAT_02013820 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b6d10(DAT_02013820,1);
    iVar2 = 0x5f;
    ppuVar1 = &PTR_u_ACTION_01e74cf0;
    do {
      (**(code **)(*DAT_02013820 + 0x80))(DAT_02013820,*ppuVar1,ppuVar1);
      FUN_00a4a3d0(*(undefined1 *)(ppuVar1 + 1),*ppuVar1);
      ppuVar1 = ppuVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    (**(code **)(*DAT_02013820 + 0x148))(DAT_02013820);
  }
  return;
}

