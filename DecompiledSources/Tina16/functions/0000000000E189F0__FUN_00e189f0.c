/* Ghidra address: 00e189f0 */
/* Ghidra symbol: FUN_00e189f0 */


void FUN_00e189f0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e3b8 == (code *)0x0) {
      DAT_0202e3b8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGPhase");
    }
    if (DAT_0202e3b8 != (code *)0x0) {
      (*DAT_0202e3b8)(param_1);
    }
  }
  return;
}

