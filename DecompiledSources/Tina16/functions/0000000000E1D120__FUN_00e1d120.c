/* Ghidra address: 00e1d120 */
/* Ghidra symbol: FUN_00e1d120 */


void FUN_00e1d120(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e860 == (code *)0x0) {
      DAT_0202e860 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECXChannel");
    }
    if (DAT_0202e860 != (code *)0x0) {
      (*DAT_0202e860)(param_1);
    }
  }
  return;
}

