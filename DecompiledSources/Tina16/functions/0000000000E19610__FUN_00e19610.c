/* Ghidra address: 00e19610 */
/* Ghidra symbol: FUN_00e19610 */


void FUN_00e19610(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4a0 == (code *)0x0) {
      DAT_0202e4a0 = (code *)FUN_00427c10(DAT_01edc8a0,L"DoneSA");
    }
    if (DAT_0202e4a0 != (code *)0x0) {
      (*DAT_0202e4a0)(param_1);
    }
  }
  return;
}

