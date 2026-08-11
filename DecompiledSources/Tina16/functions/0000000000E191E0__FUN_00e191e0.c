/* Ghidra address: 00e191e0 */
/* Ghidra symbol: FUN_00e191e0 */


void FUN_00e191e0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e448 == (code *)0x0) {
      DAT_0202e448 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGWaveform");
    }
    if (DAT_0202e448 != (code *)0x0) {
      (*DAT_0202e448)(param_1);
    }
  }
  return;
}

