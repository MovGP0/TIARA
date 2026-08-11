/* Ghidra address: 00e16730 */
/* Ghidra symbol: FUN_00e16730 */


void FUN_00e16730(undefined4 param_1,undefined1 *param_2)

{
  *param_2 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e1a0 == (code *)0x0) {
      DAT_0202e1a0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetDVMMeasRanges");
    }
    if (DAT_0202e1a0 != (code *)0x0) {
      (*DAT_0202e1a0)(param_1,param_2);
    }
  }
  return;
}

