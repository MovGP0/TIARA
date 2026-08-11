/* Ghidra address: 00e1d9a0 */
/* Ghidra symbol: FUN_00e1d9a0 */


void FUN_00e1d9a0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8e0 == (code *)0x0) {
      DAT_0202e8e0 = (code *)FUN_00427c10(DAT_01edc8a0,L"Enable3PhaseGen");
    }
    if (DAT_0202e8e0 != (code *)0x0) {
      (*DAT_0202e8e0)(param_1);
    }
  }
  return;
}

