/* Ghidra address: 00e196e0 */
/* Ghidra symbol: FUN_00e196e0 */


void FUN_00e196e0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4b0 == (code *)0x0) {
      DAT_0202e4b0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAMeasRange");
    }
    if (DAT_0202e4b0 != (code *)0x0) {
      (*DAT_0202e4b0)(param_1);
    }
  }
  return;
}

