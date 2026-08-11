/* Ghidra address: 00e1b4e0 */
/* Ghidra symbol: FUN_00e1b4e0 */


void FUN_00e1b4e0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e6a0 == (code *)0x0) {
      DAT_0202e6a0 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLAClockPeriod");
    }
    if (DAT_0202e6a0 != (code *)0x0) {
      (*DAT_0202e6a0)(param_1);
    }
  }
  return;
}

