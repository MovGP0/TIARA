/* Ghidra address: 00e1ca40 */
/* Ghidra symbol: FUN_00e1ca40 */


void FUN_00e1ca40(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e7f0 == (code *)0x0) {
      DAT_0202e7f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDSGActStep");
    }
    if (DAT_0202e7f0 != (code *)0x0) {
      (*DAT_0202e7f0)(param_1);
    }
  }
  return;
}

