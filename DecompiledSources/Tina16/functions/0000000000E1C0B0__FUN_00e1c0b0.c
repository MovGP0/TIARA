/* Ghidra address: 00e1c0b0 */
/* Ghidra symbol: FUN_00e1c0b0 */


void FUN_00e1c0b0(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e758 == (code *)0x0) {
      DAT_0202e758 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGTrigSource");
    }
    if (DAT_0202e758 != (code *)0x0) {
      (*DAT_0202e758)(param_1);
    }
  }
  return;
}

