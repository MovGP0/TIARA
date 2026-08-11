/* Ghidra address: 00e1bf20 */
/* Ghidra symbol: FUN_00e1bf20 */


void FUN_00e1bf20(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e740 == (code *)0x0) {
      DAT_0202e740 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGSteppingMode");
    }
    if (DAT_0202e740 != (code *)0x0) {
      (*DAT_0202e740)(param_1);
    }
  }
  return;
}

