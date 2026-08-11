/* Ghidra address: 00e1b0c0 */
/* Ghidra symbol: FUN_00e1b0c0 */


void FUN_00e1b0c0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e660 == (code *)0x0) {
      DAT_0202e660 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLATrigPosition");
    }
    if (DAT_0202e660 != (code *)0x0) {
      (*DAT_0202e660)(param_1);
    }
  }
  return;
}

