/* Ghidra address: 004d97f0 */
/* Ghidra symbol: FUN_004d97f0 */


void FUN_004d97f0(void)

{
  longlong lVar1;
  
  lVar1 = DAT_02011608;
  DAT_02011610 = DAT_02011610 + 1;
  if ((DAT_02011610 == 0) && (DAT_02011608 != 0)) {
    DAT_02011608 = 0;
    FUN_00410f20(lVar1);
  }
  return;
}

