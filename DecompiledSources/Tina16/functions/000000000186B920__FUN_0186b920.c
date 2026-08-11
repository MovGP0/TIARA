/* Ghidra address: 0186b920 */
/* Ghidra symbol: FUN_0186b920 */


void FUN_0186b920(void)

{
  int iVar1;
  
  DAT_021104f4 = DAT_021104f4 + -1;
  if (DAT_021104f4 == -1) {
    iVar1 = FUN_0044f060();
    DAT_021104f8 = iVar1 == 2;
    iVar1 = FUN_0044f080();
    if (((iVar1 == 5) && (iVar1 = FUN_0044f0a0(), 0 < iVar1)) || (iVar1 = FUN_0044f080(), 5 < iVar1)
       ) {
      DAT_021104f9 = 1;
    }
    else {
      DAT_021104f9 = 0;
    }
    DAT_01fafa08 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_0186b730();
    return;
  }
  return;
}

