/* Ghidra address: 00e1c340 */
/* Ghidra symbol: FUN_00e1c340 */


void FUN_00e1c340(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e778 == (code *)0x0) {
      DAT_0202e778 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckDSGClockPeriod");
    }
    if (DAT_0202e778 != (code *)0x0) {
      (*DAT_0202e778)(param_1);
    }
  }
  return;
}

