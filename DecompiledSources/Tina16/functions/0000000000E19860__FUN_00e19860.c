/* Ghidra address: 00e19860 */
/* Ghidra symbol: FUN_00e19860 */


void FUN_00e19860(undefined8 param_1,undefined4 param_2)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4c8 == (code *)0x0) {
      DAT_0202e4c8 = (code *)FUN_00427c10(DAT_01edc8a0,L"SetSAMeasRef");
    }
    if (DAT_0202e4c8 != (code *)0x0) {
      (*DAT_0202e4c8)(param_1,param_2);
    }
  }
  return;
}

