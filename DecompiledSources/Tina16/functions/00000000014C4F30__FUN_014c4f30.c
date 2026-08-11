/* Ghidra address: 014c4f30 */
/* Ghidra symbol: FUN_014c4f30 */


void FUN_014c4f30(void)

{
  longlong lVar1;
  
  lVar1 = DAT_0210eb88;
  DAT_0210eb98 = DAT_0210eb98 + 1;
  if (DAT_0210eb98 == 0) {
    if (DAT_0210eb88 != 0) {
      DAT_0210eb88 = 0;
      FUN_00410f20(lVar1);
    }
    FUN_004144d0(&PTR_s_0123456789ABCDEF_01f53290);
  }
  return;
}

