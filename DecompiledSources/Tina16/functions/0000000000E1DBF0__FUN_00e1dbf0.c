/* Ghidra address: 00e1dbf0 */
/* Ghidra symbol: FUN_00e1dbf0 */


void FUN_00e1dbf0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e900 == (code *)0x0) {
      DAT_0202e900 = (code *)FUN_00427c10(DAT_01edc8a0,L"Set3PhaseGenFunction");
    }
    if (DAT_0202e900 != (code *)0x0) {
      (*DAT_0202e900)(param_1);
    }
  }
  return;
}

