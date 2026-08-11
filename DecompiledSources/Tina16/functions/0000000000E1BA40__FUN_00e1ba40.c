/* Ghidra address: 00e1ba40 */
/* Ghidra symbol: FUN_00e1ba40 */


void FUN_00e1ba40(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e6f8 == (code *)0x0) {
      DAT_0202e6f8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLAThresholdMode");
    }
    if (DAT_0202e6f8 != (code *)0x0) {
      (*DAT_0202e6f8)(param_1);
    }
  }
  return;
}

