/* Ghidra address: 00e1cf20 */
/* Ghidra symbol: FUN_00e1cf20 */


void FUN_00e1cf20(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e840 == (code *)0x0) {
      DAT_0202e840 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECXMeasRange");
    }
    if (DAT_0202e840 != (code *)0x0) {
      (*DAT_0202e840)(param_1);
    }
  }
  return;
}

