/* Ghidra address: 00e1c2c0 */
/* Ghidra symbol: FUN_00e1c2c0 */


void FUN_00e1c2c0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e770 == (code *)0x0) {
      DAT_0202e770 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGClockSource");
    }
    if (DAT_0202e770 != (code *)0x0) {
      (*DAT_0202e770)(param_1);
    }
  }
  return;
}

