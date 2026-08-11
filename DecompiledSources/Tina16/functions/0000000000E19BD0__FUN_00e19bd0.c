/* Ghidra address: 00e19bd0 */
/* Ghidra symbol: FUN_00e19bd0 */


void FUN_00e19bd0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e500 == (code *)0x0) {
      DAT_0202e500 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSATrigLevel");
    }
    if (DAT_0202e500 != (code *)0x0) {
      (*DAT_0202e500)(param_1);
    }
  }
  return;
}

