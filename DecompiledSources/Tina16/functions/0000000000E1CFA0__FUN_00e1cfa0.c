/* Ghidra address: 00e1cfa0 */
/* Ghidra symbol: FUN_00e1cfa0 */


void FUN_00e1cfa0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e848 == (code *)0x0) {
      DAT_0202e848 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECYMeasRange");
    }
    if (DAT_0202e848 != (code *)0x0) {
      (*DAT_0202e848)(param_1);
    }
  }
  return;
}

