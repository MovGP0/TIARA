/* Ghidra address: 00e1b560 */
/* Ghidra symbol: FUN_00e1b560 */


void FUN_00e1b560(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e6a8 == (code *)0x0) {
      DAT_0202e6a8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLANextClockPeriodRange");
    }
    if (DAT_0202e6a8 != (code *)0x0) {
      (*DAT_0202e6a8)();
    }
  }
  return;
}

