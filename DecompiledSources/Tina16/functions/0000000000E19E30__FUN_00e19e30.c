/* Ghidra address: 00e19e30 */
/* Ghidra symbol: FUN_00e19e30 */


void FUN_00e19e30(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e528 == (code *)0x0) {
      DAT_0202e528 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSATrigSource");
    }
    if (DAT_0202e528 != (code *)0x0) {
      (*DAT_0202e528)(param_1);
    }
  }
  return;
}

