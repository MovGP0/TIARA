/* Ghidra address: 00e1bbc0 */
/* Ghidra symbol: FUN_00e1bbc0 */


void FUN_00e1bbc0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e710 == (code *)0x0) {
      DAT_0202e710 = (code *)FUN_00427c10(DAT_01edc8a0,L"StopLA");
    }
    if (DAT_0202e710 != (code *)0x0) {
      (*DAT_0202e710)();
    }
  }
  return;
}

