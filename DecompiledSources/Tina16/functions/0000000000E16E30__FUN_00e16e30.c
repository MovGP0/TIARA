/* Ghidra address: 00e16e30 */
/* Ghidra symbol: FUN_00e16e30 */


void FUN_00e16e30(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = 0;
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e210 == (code *)0x0) {
      DAT_0202e210 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSCPMeasRanges");
    }
    if (DAT_0202e210 != (code *)0x0) {
      (*DAT_0202e210)(param_1,param_2);
    }
  }
  return;
}

