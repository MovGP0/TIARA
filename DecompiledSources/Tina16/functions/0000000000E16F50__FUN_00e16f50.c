/* Ghidra address: 00e16f50 */
/* Ghidra symbol: FUN_00e16f50 */


void FUN_00e16f50(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e220 == (code *)0x0) {
      DAT_0202e220 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSCPMeasRange");
    }
    if (DAT_0202e220 != (code *)0x0) {
      (*DAT_0202e220)(param_1);
    }
  }
  return;
}

