/* Ghidra address: 00e1ade0 */
/* Ghidra symbol: FUN_00e1ade0 */


void FUN_00e1ade0(undefined4 param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e630 == (code *)0x0) {
      DAT_0202e630 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetLATrigSource");
    }
    if (DAT_0202e630 != (code *)0x0) {
      (*DAT_0202e630)(param_1);
    }
  }
  return;
}

