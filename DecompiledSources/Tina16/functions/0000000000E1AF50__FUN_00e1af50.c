/* Ghidra address: 00e1af50 */
/* Ghidra symbol: FUN_00e1af50 */


void FUN_00e1af50(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e648 == (code *)0x0) {
      DAT_0202e648 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLATrigDelay");
    }
    if (DAT_0202e648 != (code *)0x0) {
      (*DAT_0202e648)(param_1);
    }
  }
  return;
}

