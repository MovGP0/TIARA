/* Ghidra address: 00711130 */
/* Ghidra symbol: FUN_00711130 */


void FUN_00711130(void)

{
  DAT_02012454 = DAT_02012454 + 1;
  if (DAT_02012454 == 0) {
    if (DAT_02012468 != 0) {
      thunk_FUN_041c8c2f(DAT_02012468);
    }
    if (DAT_02012470 != 0) {
      thunk_FUN_041c8c2f(DAT_02012470);
    }
    FUN_00707f30();
  }
  return;
}

