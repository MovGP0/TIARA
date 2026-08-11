/* Ghidra address: 00b1bd20 */
/* Ghidra symbol: FUN_00b1bd20 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b1bd20(void)

{
  DAT_02014820 = DAT_02014820 + -1;
  if (DAT_02014820 == -1) {
    DAT_02014828 = thunk_FUN_040ef593(0);
    DAT_020147f4 = thunk_FUN_03e5bd07(DAT_02014828,0x5a);
    thunk_FUN_041a9b5c(0,DAT_02014828);
    if (DAT_020147f4 == 0x60) {
      DAT_020147f8 = 0x40;
      DAT_020147fc = 0x11;
      _DAT_02014800 = 7;
      _DAT_02014810 = 5;
      _DAT_02014818 = 0x3fb559b3d07c84b6;
      _DAT_02014808 = 0x3fe8000000000000;
    }
    else {
      DAT_020147f8 = 0x50;
      DAT_020147fc = 0x16;
      _DAT_02014800 = 9;
      _DAT_02014810 = 7;
      _DAT_02014818 = 0x3fb0068db8bac711;
      _DAT_02014808 = 0x3fe3333333333333;
    }
  }
  return;
}

