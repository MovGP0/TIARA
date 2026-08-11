/* Ghidra address: 00e18600 */
/* Ghidra symbol: FUN_00e18600 */


void FUN_00e18600(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e380 == (code *)0x0) {
      DAT_0202e380 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetFGFreq");
    }
    if (DAT_0202e380 != (code *)0x0) {
      (*DAT_0202e380)(param_1);
    }
  }
  return;
}

