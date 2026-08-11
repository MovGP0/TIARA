/* Ghidra address: 00e1c7d0 */
/* Ghidra symbol: FUN_00e1c7d0 */


void FUN_00e1c7d0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e7c0 == (code *)0x0) {
      DAT_0202e7c0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGThresholdMode");
    }
    if (DAT_0202e7c0 != (code *)0x0) {
      (*DAT_0202e7c0)(param_1);
    }
  }
  return;
}

