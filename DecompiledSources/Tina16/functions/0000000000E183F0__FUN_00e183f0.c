/* Ghidra address: 00e183f0 */
/* Ghidra symbol: FUN_00e183f0 */


void FUN_00e183f0(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e350 == (code *)0x0) {
      DAT_0202e350 = (code *)FUN_00427c10(DAT_01edc8a0,L"StopFG");
    }
    if (DAT_0202e350 != (code *)0x0) {
      (*DAT_0202e350)();
    }
  }
  return;
}

