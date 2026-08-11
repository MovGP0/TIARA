/* Ghidra address: 00e1c540 */
/* Ghidra symbol: FUN_00e1c540 */


void FUN_00e1c540(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e788 == (code *)0x0) {
      DAT_0202e788 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGClockPeriod");
    }
    if (DAT_0202e788 != (code *)0x0) {
      (*DAT_0202e788)(param_1);
    }
  }
  return;
}

