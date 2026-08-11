/* Ghidra address: 00e1b360 */
/* Ghidra symbol: FUN_00e1b360 */


void FUN_00e1b360(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e688 == (code *)0x0) {
      DAT_0202e688 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLAClockSource");
    }
    if (DAT_0202e688 != (code *)0x0) {
      (*DAT_0202e688)(param_1);
    }
  }
  return;
}

