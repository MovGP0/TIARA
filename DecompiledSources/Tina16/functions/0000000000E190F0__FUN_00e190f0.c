/* Ghidra address: 00e190f0 */
/* Ghidra symbol: FUN_00e190f0 */


void FUN_00e190f0(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e450 == (code *)0x0) {
      DAT_0202e450 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGWaveform");
    }
    if (DAT_0202e450 != (code *)0x0) {
      (*DAT_0202e450)(param_1);
    }
  }
  return;
}

