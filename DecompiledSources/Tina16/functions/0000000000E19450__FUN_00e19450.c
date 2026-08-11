/* Ghidra address: 00e19450 */
/* Ghidra symbol: FUN_00e19450 */


void FUN_00e19450(undefined8 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e480 == (code *)0x0) {
      DAT_0202e480 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetFGSweepStart");
    }
    if (DAT_0202e480 != (code *)0x0) {
      (*DAT_0202e480)(param_1);
    }
  }
  return;
}

