/* Ghidra address: 00e1cc60 */
/* Ghidra symbol: FUN_00e1cc60 */


void FUN_00e1cc60(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e818 == (code *)0x0) {
      DAT_0202e818 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECMeasRanges");
    }
    if (DAT_0202e818 != (code *)0x0) {
      (*DAT_0202e818)(param_1);
    }
  }
  return;
}

