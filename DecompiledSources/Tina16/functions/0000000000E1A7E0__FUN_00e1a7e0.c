/* Ghidra address: 00e1a7e0 */
/* Ghidra symbol: FUN_00e1a7e0 */


void FUN_00e1a7e0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e5c8 == (code *)0x0) {
      DAT_0202e5c8 = (code *)FUN_00427c10(DAT_01edc8a0,L"StopSAMeasurement");
    }
    if (DAT_0202e5c8 != (code *)0x0) {
      (*DAT_0202e5c8)();
    }
  }
  return;
}

