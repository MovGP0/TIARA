/* Ghidra address: 00e1b040 */
/* Ghidra symbol: FUN_00e1b040 */


void FUN_00e1b040(undefined4 *param_1)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e650 == (code *)0x0) {
      DAT_0202e650 = (code *)FUN_00427c10(DAT_01edc8a0,L"CheckLATrigPosition");
    }
    if (DAT_0202e650 != (code *)0x0) {
      (*DAT_0202e650)(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}

