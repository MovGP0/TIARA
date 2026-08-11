/* Ghidra address: 00e1a490 */
/* Ghidra symbol: FUN_00e1a490 */


void FUN_00e1a490(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e590 == (code *)0x0) {
      DAT_0202e590 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAMeasWindow");
    }
    if (DAT_0202e590 != (code *)0x0) {
      (*DAT_0202e590)(param_1);
    }
  }
  return;
}

