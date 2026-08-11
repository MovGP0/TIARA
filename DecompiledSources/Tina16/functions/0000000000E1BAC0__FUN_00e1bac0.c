/* Ghidra address: 00e1bac0 */
/* Ghidra symbol: FUN_00e1bac0 */


void FUN_00e1bac0(undefined4 *param_1)

{
  *param_1 = 0;
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e6f0 == (code *)0x0) {
      DAT_0202e6f0 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetLAThresholdMode");
    }
    if (DAT_0202e6f0 != (code *)0x0) {
      (*DAT_0202e6f0)(param_1);
    }
  }
  return;
}

