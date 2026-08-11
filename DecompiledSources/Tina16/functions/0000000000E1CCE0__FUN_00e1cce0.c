/* Ghidra address: 00e1cce0 */
/* Ghidra symbol: FUN_00e1cce0 */


void FUN_00e1cce0(undefined8 param_1,undefined8 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e820 == (code *)0x0) {
      DAT_0202e820 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetXYRECXYDefMeasRange");
    }
    if (DAT_0202e820 != (code *)0x0) {
      (*DAT_0202e820)(param_1,param_2);
    }
  }
  return;
}

