/* Ghidra address: 00e1bea0 */
/* Ghidra symbol: FUN_00e1bea0 */


void FUN_00e1bea0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e738 == (code *)0x0) {
      DAT_0202e738 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGSteppingMode");
    }
    if (DAT_0202e738 != (code *)0x0) {
      (*DAT_0202e738)(param_1);
    }
  }
  return;
}

