/* Ghidra address: 00e1c440 */
/* Ghidra symbol: FUN_00e1c440 */


void FUN_00e1c440(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e790 == (code *)0x0) {
      DAT_0202e790 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGNextClockPeriodRange");
    }
    if (DAT_0202e790 != (code *)0x0) {
      (*DAT_0202e790)();
    }
  }
  return;
}

