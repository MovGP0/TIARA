/* Ghidra address: 00e1ce90 */
/* Ghidra symbol: FUN_00e1ce90 */


void FUN_00e1ce90(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e838 == (code *)0x0) {
      DAT_0202e838 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECYMeasRange");
    }
    if (DAT_0202e838 != (code *)0x0) {
      (*DAT_0202e838)(param_1,param_2,param_3);
    }
  }
  return;
}

