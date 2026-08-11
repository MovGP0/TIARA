/* Ghidra address: 00e1d1a0 */
/* Ghidra symbol: FUN_00e1d1a0 */


void FUN_00e1d1a0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e868 == (code *)0x0) {
      DAT_0202e868 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRECYChannel");
    }
    if (DAT_0202e868 != (code *)0x0) {
      (*DAT_0202e868)(param_1);
    }
  }
  return;
}

