/* Ghidra address: 00e1b140 */
/* Ghidra symbol: FUN_00e1b140 */


void FUN_00e1b140(undefined4 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e658 == (code *)0x0) {
      DAT_0202e658 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLATrigPosition");
    }
    if (DAT_0202e658 != (code *)0x0) {
      (*DAT_0202e658)(param_1);
    }
  }
  return;
}

