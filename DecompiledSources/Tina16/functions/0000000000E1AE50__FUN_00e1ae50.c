/* Ghidra address: 00e1ae50 */
/* Ghidra symbol: FUN_00e1ae50 */


void FUN_00e1ae50(undefined4 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e628 == (code *)0x0) {
      DAT_0202e628 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLATrigSource");
    }
    if (DAT_0202e628 != (code *)0x0) {
      (*DAT_0202e628)(param_1);
    }
  }
  return;
}

