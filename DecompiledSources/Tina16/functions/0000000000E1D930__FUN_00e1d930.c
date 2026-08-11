/* Ghidra address: 00e1d930 */
/* Ghidra symbol: FUN_00e1d930 */


void FUN_00e1d930(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8d8 == (code *)0x0) {
      DAT_0202e8d8 = (code *)FUN_00427c10(DAT_01edc8a0,L"Done3PhaseGen");
    }
    if (DAT_0202e8d8 != (code *)0x0) {
      (*DAT_0202e8d8)(0);
    }
  }
  return;
}

