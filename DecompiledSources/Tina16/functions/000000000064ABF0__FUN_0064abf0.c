/* Ghidra address: 0064abf0 */
/* Ghidra symbol: FUN_0064abf0 */


void FUN_0064abf0(void)

{
  char cVar1;
  
  DAT_020122f8 = 0;
  if (DAT_02012348 != 0) {
    cVar1 = FUN_004113d0(DAT_02012348,&PTR_FUN_00637ca0);
    if (((cVar1 == '\0') && (cVar1 = FUN_004113d0(DAT_02012348,&PTR_FUN_00637650), cVar1 == '\0'))
       && (cVar1 = FUN_004113d0(DAT_02012348,&PTR_FUN_006383a8), cVar1 == '\0')) {
      DAT_0201232c = 0;
      return;
    }
    FUN_00410f20(DAT_02012348);
  }
  DAT_0201232c = 0;
  return;
}

