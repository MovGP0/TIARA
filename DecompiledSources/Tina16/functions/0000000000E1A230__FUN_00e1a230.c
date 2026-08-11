/* Ghidra address: 00e1a230 */
/* Ghidra symbol: FUN_00e1a230 */


void FUN_00e1a230(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e568 == (code *)0x0) {
      DAT_0202e568 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSACouplingMode");
    }
    if (DAT_0202e568 != (code *)0x0) {
      (*DAT_0202e568)(param_1);
    }
  }
  return;
}

