/* Ghidra address: 00d8ec80 */
/* Ghidra symbol: FUN_00d8ec80 */


void FUN_00d8ec80(void)

{
  longlong lVar1;
  
  FUN_00d7cdb0();
  FUN_00410f20(DAT_0202da28);
  FUN_00d7d470();
  FUN_00d7d580();
  lVar1 = DAT_0202da30;
  if (DAT_0202da30 != 0) {
    DAT_0202da30 = 0;
    FUN_00410f20(lVar1);
  }
  return;
}

