/* Ghidra address: 00e1b460 */
/* Ghidra symbol: FUN_00e1b460 */


void FUN_00e1b460(undefined8 *param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e690 == (code *)0x0) {
      DAT_0202e690 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckLAClockPeriod");
    }
    if (DAT_0202e690 != (code *)0x0) {
      (*DAT_0202e690)(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}

