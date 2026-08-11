/* Ghidra address: 00e19a70 */
/* Ghidra symbol: FUN_00e19a70 */


void FUN_00e19a70(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4e8 == (code *)0x0) {
      DAT_0202e4e8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSATrigMode");
    }
    if (DAT_0202e4e8 != (code *)0x0) {
      (*DAT_0202e4e8)(param_1);
    }
  }
  return;
}

