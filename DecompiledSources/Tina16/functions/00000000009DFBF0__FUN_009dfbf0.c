/* Ghidra address: 009dfbf0 */
/* Ghidra symbol: FUN_009dfbf0 */


void FUN_009dfbf0(void)

{
  DAT_02012af0 = DAT_02012af0 + 1;
  if (DAT_02012af0 == 0) {
    FUN_009dfbc0();
    FUN_0041b800(&DAT_01e42c00);
    FUN_0041b800(&DAT_02012af8);
  }
  return;
}

