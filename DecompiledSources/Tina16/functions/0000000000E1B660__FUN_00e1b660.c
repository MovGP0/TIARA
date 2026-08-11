/* Ghidra address: 00e1b660 */
/* Ghidra symbol: FUN_00e1b660 */


void FUN_00e1b660(undefined8 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e698 == (code *)0x0) {
      DAT_0202e698 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLAClockPeriod");
    }
    if (DAT_0202e698 != (code *)0x0) {
      (*DAT_0202e698)(param_1);
    }
  }
  return;
}

