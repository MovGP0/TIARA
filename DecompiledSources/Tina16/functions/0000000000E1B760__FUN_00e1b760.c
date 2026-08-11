/* Ghidra address: 00e1b760 */
/* Ghidra symbol: FUN_00e1b760 */


void FUN_00e1b760(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e6c8 == (code *)0x0) {
      DAT_0202e6c8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLAMeasLength");
    }
    if (DAT_0202e6c8 != (code *)0x0) {
      (*DAT_0202e6c8)(param_1);
    }
  }
  return;
}

