/* Ghidra address: 00e1d830 */
/* Ghidra symbol: FUN_00e1d830 */


void FUN_00e1d830(undefined1 *param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e8c8 == (code *)0x0) {
      DAT_0202e8c8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetXYRecXYMode");
    }
    if (DAT_0202e8c8 != (code *)0x0) {
      (*DAT_0202e8c8)(param_1);
      return;
    }
  }
  *param_1 = 1;
  return;
}

