/* Ghidra address: 00e1d7a0 */
/* Ghidra symbol: FUN_00e1d7a0 */


void FUN_00e1d7a0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8c0 == (code *)0x0) {
      DAT_0202e8c0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECRecordingInterval");
    }
    if (DAT_0202e8c0 != (code *)0x0) {
      (*DAT_0202e8c0)(param_1);
    }
  }
  return;
}

