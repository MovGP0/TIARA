/* Ghidra address: 00e1d4c0 */
/* Ghidra symbol: FUN_00e1d4c0 */


void FUN_00e1d4c0(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e898 == (code *)0x0) {
      DAT_0202e898 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECRecordingMode");
    }
    if (DAT_0202e898 != (code *)0x0) {
      (*DAT_0202e898)(param_1);
    }
  }
  return;
}

