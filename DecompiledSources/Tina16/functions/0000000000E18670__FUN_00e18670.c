/* Ghidra address: 00e18670 */
/* Ghidra symbol: FUN_00e18670 */


void FUN_00e18670(undefined8 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e3a0 == (code *)0x0) {
      DAT_0202e3a0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGFreq");
    }
    if (DAT_0202e3a0 != (code *)0x0) {
      (*DAT_0202e3a0)(param_1);
    }
  }
  return;
}

