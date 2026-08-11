/* Ghidra address: 00e1ce00 */
/* Ghidra symbol: FUN_00e1ce00 */


void FUN_00e1ce00(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e830 == (code *)0x0) {
      DAT_0202e830 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECXMeasRange");
    }
    if (DAT_0202e830 != (code *)0x0) {
      (*DAT_0202e830)(param_1,param_2,param_3);
    }
  }
  return;
}

