/* Ghidra address: 00e1cab0 */
/* Ghidra symbol: FUN_00e1cab0 */


void FUN_00e1cab0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e7f8 == (code *)0x0) {
      DAT_0202e7f8 = (code *)FUN_00427c10(DAT_01edc8a0,L"StopDSG");
    }
    if (DAT_0202e7f8 != (code *)0x0) {
      (*DAT_0202e7f8)();
    }
  }
  return;
}

