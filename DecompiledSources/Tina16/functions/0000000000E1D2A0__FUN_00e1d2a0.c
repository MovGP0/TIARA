/* Ghidra address: 00e1d2a0 */
/* Ghidra symbol: FUN_00e1d2a0 */


void FUN_00e1d2a0(undefined8 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e878 == (code *)0x0) {
      DAT_0202e878 = (code *)FUN_00427c10(DAT_01edc8a0,L"StartXYRECMeasurement");
    }
    if (DAT_0202e878 != (code *)0x0) {
      (*DAT_0202e878)(param_1,param_2);
    }
  }
  return;
}

