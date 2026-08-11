/* Ghidra address: 00e18450 */
/* Ghidra symbol: FUN_00e18450 */


void FUN_00e18450(void)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e358 == (code *)0x0) {
      DAT_0202e358 = (code *)FUN_00427c10(DAT_01edc8a0,L"StartFG");
    }
    if (DAT_0202e358 != (code *)0x0) {
      (*DAT_0202e358)();
    }
  }
  return;
}

