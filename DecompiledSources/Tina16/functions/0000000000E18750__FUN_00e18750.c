/* Ghidra address: 00e18750 */
/* Ghidra symbol: FUN_00e18750 */


void FUN_00e18750(undefined8 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e3a8 == (code *)0x0) {
      DAT_0202e3a8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGAmpl");
    }
    if (DAT_0202e3a8 != (code *)0x0) {
      (*DAT_0202e3a8)(param_1);
    }
  }
  return;
}

