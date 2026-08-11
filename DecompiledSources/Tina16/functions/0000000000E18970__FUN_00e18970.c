/* Ghidra address: 00e18970 */
/* Ghidra symbol: FUN_00e18970 */


void FUN_00e18970(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e398 == (code *)0x0) {
      DAT_0202e398 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGPhase");
    }
    if (DAT_0202e398 != (code *)0x0) {
      (*DAT_0202e398)(param_1);
    }
  }
  return;
}

