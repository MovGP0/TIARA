/* Ghidra address: 00e1d330 */
/* Ghidra symbol: FUN_00e1d330 */


void FUN_00e1d330(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e880 == (code *)0x0) {
      DAT_0202e880 = (code *)FUN_00427c10(DAT_01edc8a0,L"StopXYRECMeasurement");
    }
    if (DAT_0202e880 != (code *)0x0) {
      (*DAT_0202e880)();
    }
  }
  return;
}

