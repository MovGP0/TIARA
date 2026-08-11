/* Ghidra address: 00e18a60 */
/* Ghidra symbol: FUN_00e18a60 */


void FUN_00e18a60(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e3c0 == (code *)0x0) {
      DAT_0202e3c0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGAmplUnit");
    }
    if (DAT_0202e3c0 != (code *)0x0) {
      (*DAT_0202e3c0)(param_1);
    }
  }
  return;
}

