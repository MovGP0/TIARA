/* Ghidra address: 00e1c4c0 */
/* Ghidra symbol: FUN_00e1c4c0 */


void FUN_00e1c4c0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e798 == (code *)0x0) {
      DAT_0202e798 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGPrevClockPeriodRange");
    }
    if (DAT_0202e798 != (code *)0x0) {
      (*DAT_0202e798)();
    }
  }
  return;
}

