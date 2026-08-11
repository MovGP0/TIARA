/* Ghidra address: 00e19970 */
/* Ghidra symbol: FUN_00e19970 */


void FUN_00e19970(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4d8 == (code *)0x0) {
      DAT_0202e4d8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAAutoMeasRange");
    }
    if (DAT_0202e4d8 != (code *)0x0) {
      (*DAT_0202e4d8)(param_1);
    }
  }
  return;
}

