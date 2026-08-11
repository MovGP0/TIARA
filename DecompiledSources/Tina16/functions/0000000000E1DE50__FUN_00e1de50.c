/* Ghidra address: 00e1de50 */
/* Ghidra symbol: FUN_00e1de50 */


void FUN_00e1de50(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e938 == (code *)0x0) {
      DAT_0202e938 = (code *)FUN_00427c10(DAT_01edc8a0,L"ErrGenSetSwitches");
    }
    if (DAT_0202e938 != (code *)0x0) {
      (*DAT_0202e938)(param_1);
    }
  }
  return;
}

