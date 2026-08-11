/* Ghidra address: 00e1c240 */
/* Ghidra symbol: FUN_00e1c240 */


void FUN_00e1c240(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e768 == (code *)0x0) {
      DAT_0202e768 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetDSGClockSource");
    }
    if (DAT_0202e768 != (code *)0x0) {
      (*DAT_0202e768)(param_1);
    }
  }
  return;
}

