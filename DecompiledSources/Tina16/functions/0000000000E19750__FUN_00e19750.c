/* Ghidra address: 00e19750 */
/* Ghidra symbol: FUN_00e19750 */


void FUN_00e19750(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_01edc8a0 != 0) {
    if (DAT_0202e4b8 == (code *)0x0) {
      DAT_0202e4b8 = (code *)FUN_00427c10(DAT_01edc8a0,L"GetSAMeasRange");
    }
    if (DAT_0202e4b8 != (code *)0x0) {
      (*DAT_0202e4b8)(param_1,param_2,param_3,param_4);
    }
  }
  return;
}

