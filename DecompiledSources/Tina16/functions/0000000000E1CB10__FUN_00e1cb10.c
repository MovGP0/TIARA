/* Ghidra address: 00e1cb10 */
/* Ghidra symbol: FUN_00e1cb10 */


void FUN_00e1cb10(undefined1 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e800 == (code *)0x0) {
      DAT_0202e800 = (code *)FUN_00427c10(DAT_01edc8a0,L"InitXYRECHW");
    }
    if (DAT_0202e800 != (code *)0x0) {
      (*DAT_0202e800)(param_1);
    }
  }
  return;
}

