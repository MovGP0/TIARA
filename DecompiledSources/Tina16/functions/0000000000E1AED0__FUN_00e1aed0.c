/* Ghidra address: 00e1aed0 */
/* Ghidra symbol: FUN_00e1aed0 */


void FUN_00e1aed0(undefined4 *param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e638 == (code *)0x0) {
      DAT_0202e638 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckLATrigDelay");
    }
    if (DAT_0202e638 != (code *)0x0) {
      (*DAT_0202e638)(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}

