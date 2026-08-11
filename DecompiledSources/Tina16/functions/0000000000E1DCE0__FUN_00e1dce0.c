/* Ghidra address: 00e1dce0 */
/* Ghidra symbol: FUN_00e1dce0 */


void FUN_00e1dce0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e910 == (code *)0x0) {
      DAT_0202e910 = (code *)FUN_00427c10(DAT_01edc8a0,L"CallHWSetupDialog");
    }
    if (DAT_0202e910 != (code *)0x0) {
      (*DAT_0202e910)();
    }
  }
  return;
}

