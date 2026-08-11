/* Ghidra address: 00897cc0 */
/* Ghidra symbol: FUN_00897cc0 */


void FUN_00897cc0(void)

{
  DAT_02012a38 = DAT_02012a38 + 1;
  if (DAT_02012a38 == 0) {
    FUN_0088f340();
    FUN_008830b0();
    FUN_00894a00();
    DAT_01e23558 = 0;
  }
  return;
}

