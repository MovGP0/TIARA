/* Ghidra address: 00e19670 */
/* Ghidra symbol: FUN_00e19670 */


void FUN_00e19670(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4a8 == (code *)0x0) {
      DAT_0202e4a8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAMeasRanges");
    }
    if (DAT_0202e4a8 != (code *)0x0) {
      (*DAT_0202e4a8)(param_1);
    }
  }
  return;
}

