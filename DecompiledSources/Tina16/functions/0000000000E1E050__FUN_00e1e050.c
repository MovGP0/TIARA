/* Ghidra address: 00e1e050 */
/* Ghidra symbol: FUN_00e1e050 */


void FUN_00e1e050(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e180 == (code *)0x0) {
      DAT_0202e180 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneHW");
    }
    if (DAT_0202e180 != (code *)0x0) {
      (*DAT_0202e180)();
    }
  }
  return;
}

