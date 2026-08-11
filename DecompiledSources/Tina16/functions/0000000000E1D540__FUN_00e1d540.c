/* Ghidra address: 00e1d540 */
/* Ghidra symbol: FUN_00e1d540 */


void FUN_00e1d540(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8a0 == (code *)0x0) {
      DAT_0202e8a0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECRecordingMode");
    }
    if (DAT_0202e8a0 != (code *)0x0) {
      (*DAT_0202e8a0)(param_1);
    }
  }
  return;
}

